#include "MyForm.h"
#include "FormSearch.h"
#include <string>
#include <fstream>
#include <iostream>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;

const std::string PATH_P = "P.txt";
const std::string PATH_UOS = "UOS.txt";
int n1 = 0, n2 = 0;

struct Factory {
    int id;
    std::string name;
    std::string description;
    std::string staff_numbers;
    std::string reputation;
    std::string address;
    std::string email;
};

struct Good {
    Factory* factory;
    std::string name;
    double price;
    int amount;
    double weight;
};
Factory* F1 = new Factory, * F2 = new Factory;
Good* goods1;
Good* goods2;

Good* loadFromFile(Factory* f) {
    std::ifstream file;
    std::string nc, s;
    //// Файл должен быть CRLF

    if (f->id == 0) {
        file.open(PATH_P);
        if (!file.is_open()) {
            std::ofstream ofile(PATH_P);
            ofile << 0;
            file.open(PATH_P);
        }
        getline(file, nc);
        n1 = stoi(nc);
    }
    else {
        file.open(PATH_UOS);   
        if (!file.is_open()) {
            std::ofstream ofile(PATH_UOS);
            ofile << 0;
            file.open(PATH_UOS);
        }
        getline(file, nc);
        n2 = stoi(nc);
    }

    Good* g = new Good[stoi(nc)];
    for (int i = 0; i < stoi(nc); ++i) {
        g[i].factory = f;
        getline(file, g[i].name);
        getline(file, s );
        g[i].price = atof(s.c_str());
        getline(file, s);
        g[i].amount = std::stod(s);
        getline(file, s);
        g[i].weight = std::stod(s);
    }
    file.close();
    return g;
}

void save_data_into_file(Good *g,int n, std::string path) {
    std::ofstream file(path);
    file << n <<"\n";
    for (int i = 0; i < n; i++)
        file << g[i].name << "\n" << g[i].price << "\n" << g[i].amount << "\n" << g[i].weight << "\n";
}


void push_back(Good*& g, int &n, Good el) {
    Good* newGoods = new Good[n + 1];
    for (int i = 0; i < n; i++)
        newGoods[i] = g[i];
    newGoods[n++] = el;
    delete[] g;
    g = newGoods;
}

void delete_item(Good*& g, int& n, int id) {
    Good* newGoods = new Good[n - 1];
    for (int i = 0; i < n; i++)
        if (i < id)
            newGoods[i] = g[i];
        else if(i > id)
            newGoods[i-1] = g[i];
    delete[] g;
    g = newGoods;
    n--;
}

int summary_amount_of_items(Good* g, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += g[i].amount;
    return sum;
}

Good* search_item(std::string name, int &id,bool &f) {
    Good *foundGood;
    for (int i = 0; i < n1; ++i) {
        if (name == goods1[i].name) {
            foundGood = &goods1[i];
            id = i;
            f = true;
        }
    }
    for (int i = 0; i < n2; ++i) {
        if (name == goods2[i].name) {
            foundGood = &goods2[i];
            id = i;
            f = true;
        }
    }
    return foundGood;
}

Good* the_cheapest_item(int &id) {
    double min = goods1[0].price;
    Good* theCheapestItem = &goods1[0];
    for (int i = 0; i < n1; i++)
        if (min > goods1[i].price) {
            min = goods1[i].price;
            theCheapestItem = &goods1[i];
            id = i;
        }
    for (int i = 0; i < n2; i++)
        if (min > goods2[i].price) {
            min = goods2[i].price;
            theCheapestItem = &goods2[i];
            id = i;
        }

    return theCheapestItem;
}

Good* the_highest_price_per_kg_item(Good *g, int n, double &max, int &id) {
    Good * foundGood;
    for (int i = 0; i < n; i++)
        if (max < g[i].price / g[i].weight) {
            max = g[i].price / g[i].weight;
            foundGood = &goods1[i];
            id = i;
        }
    return foundGood;
}

void fill_dataGridView(DataGridView^ dataGridView, Good* g, int n) {
    dataGridView->Rows->Clear();
    for (int i = 0; i < n; i++)
        dataGridView->Rows->Add(i, gcnew System::String(g[i].name.c_str()), g[i].amount, g[i].price, g[i].weight);
}
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	kurs::MyForm form;
	Application::Run(% form);
}

inline System::Void kurs::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    F1->id = 0;
    F1->name = "Магазин 1";
    F1->description = "продуктовый магазин";
    F1->address = "город уфа";
    F1->email = "magazin1@mail.ru";
    F1->reputation = "10";
    F1->staff_numbers = "10";
   
    F2->id = 1;
    F2->name = "Магазин 2";
    F2->description = "Тоже продуктовый магазин.";
    F2->address = "С. Красная горка";
    F2->email = "magazine2@mail.ru";
    F2->reputation = "11";
    F2->staff_numbers = "3430";

}

System::Void kurs::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show(
        "Вы уверены, что хотите выйти?",
        "Подтверждение", MessageBoxButtons::YesNo,
        MessageBoxIcon::Question) == ::DialogResult::No)
        return;
    Application::Exit();
}

System::Void kurs::MyForm::менюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    goods1 = loadFromFile(F1);
    goods2 = loadFromFile(F2);
    fill_dataGridView(dataGridView_p, goods1, n1);
    fill_dataGridView(dataGridView_uos, goods2, n2);
    label5->Visible =  true;
    pictureBox1->Visible = true;
    MessageBox::Show("Данные загружены!", "Успешно!", MessageBoxButtons::OK, MessageBoxIcon::Information);
    return System::Void();
}

System::Void kurs::MyForm::button_add_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!goods1 || !goods2) {
        MessageBox::Show("Сначала загрузите данные!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }
    Good newGood;
    if (tabControl->SelectedTab->Name == "tabPage_p") {
        if (textBox_name_p->Text == "" || numericUpDown_price_p->Text == "" || numericUpDown_amount_p->Text == "" || numericUpDown_weight_p->Text == "") {
            MessageBox::Show("Заполните все поля!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }
        newGood.factory = F1;
        newGood.name = msclr::interop::marshal_as<std::string>(textBox_name_p->Text);
        newGood.price = Convert::ToDouble(numericUpDown_price_p->Text);
        newGood.amount = Convert::ToInt32(numericUpDown_amount_p->Text);
        newGood.weight = Convert::ToDouble(numericUpDown_weight_p->Text);
        push_back(goods1, n1, newGood);
        fill_dataGridView(dataGridView_p, goods1, n1);
    }
    else if (tabControl->SelectedTab->Name == "tabPage_uos") {
        if (textBox_name_uos->Text == "" || numericUpDown_price_uos->Text == "" || numericUpDown_amount_uos->Text == "" || numericUpDown_weight_uos->Text == "") {
            MessageBox::Show("Заполните все поля!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }
        newGood.factory = F2;
        newGood.name = msclr::interop::marshal_as<std::string>(textBox_name_uos->Text);
        newGood.price = Convert::ToDouble(numericUpDown_price_uos->Text);
        newGood.amount = Convert::ToInt32(numericUpDown_amount_uos->Text);
        newGood.weight = Convert::ToDouble(numericUpDown_weight_uos->Text);
        push_back(goods2, n2, newGood);
        fill_dataGridView(dataGridView_uos, goods2, n2);
    }

}

System::Void kurs::MyForm::button_save_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (tabControl->SelectedTab->Name == "tabPage_p") {
        save_data_into_file(goods1, n1, PATH_P);
        MessageBox::Show("Список товаров для магазина 1 сохранён!", "Успешно!", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    else if (tabControl->SelectedTab->Name == "tabPage_uos") {
        save_data_into_file(goods2, n2, PATH_UOS);
        MessageBox::Show("Список товаров для магаизна 2 сохранён!", "Успешно!", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
}

inline System::Void kurs::MyForm::editMenuItem_Click(Object^ s, System::EventArgs^ e)
{
    if (tabControl->SelectedTab->Name == "tabPage_p") {
        dataGridView_p->Enabled = false;
        button_save_edit_p->Visible = true;
        button_add_p->Visible = false;


        int el_number = Convert::ToInt32(dataGridView_p->CurrentRow->Cells[0]->Value);
        textBox_name_p->Text = gcnew System::String(goods1[el_number].name.c_str());
        numericUpDown_price_p->Text = goods1[el_number].price.ToString();
        numericUpDown_amount_p->Text = goods1[el_number].amount.ToString();
        numericUpDown_weight_p->Text = goods1[el_number].weight.ToString();
    }
    else if (tabControl->SelectedTab->Name == "tabPage_uos") {
        dataGridView_uos->Enabled = false;
        button_save_edit_uos->Visible = true;
        button_add_uos->Visible = false;


        int el_number = Convert::ToInt32(dataGridView_uos->CurrentRow->Cells[0]->Value);
        textBox_name_uos->Text = gcnew System::String(goods2[el_number].name.c_str());
        numericUpDown_price_uos->Text = goods2[el_number].price.ToString();
        numericUpDown_amount_uos->Text = goods2[el_number].amount.ToString();
        numericUpDown_weight_uos->Text = goods2[el_number].weight.ToString();
    }
   
}

inline System::Void kurs::MyForm::deleteMenuItem_Click(Object^ s, System::EventArgs^ e)
{
    if (MessageBox::Show(
        "Вы уверены, что хотите удалить этот элемент?",
        "Подтверждение", MessageBoxButtons::YesNo,
        MessageBoxIcon::Question) == ::DialogResult::No)
        return;

    if (tabControl->SelectedTab->Name == "tabPage_p") {
        delete_item(goods1, n1, Convert::ToInt32(dataGridView_p->CurrentRow->Cells[0]->Value));
        fill_dataGridView(dataGridView_p, goods1, n1);
        dataGridView_p->ClearSelection();
    }
    else if (tabControl->SelectedTab->Name == "tabPage_uos") {
        delete_item(goods2, n2, Convert::ToInt32(dataGridView_uos->CurrentRow->Cells[0]->Value));
        fill_dataGridView(dataGridView_uos, goods2, n2);
        dataGridView_uos->ClearSelection();
    }
}

System::Void kurs::MyForm::infoMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (tabControl->SelectedTab->Name == "tabPage_p") {
        std::string info = F1->description + "\nКоличество работников: " + F1->staff_numbers + "\nРейтинг: " + F1->reputation + "\nEmail: " + F1->email + "\nАдрес: " + F1->address;
        MessageBox::Show(gcnew System::String(info.c_str()), "магазин 1", MessageBoxButtons::OK);
    }
    else if (tabControl->SelectedTab->Name == "tabPage_uos") {
        std::string info = F2->description + "\nКоличество работников: " + F2->staff_numbers + "\nРейтинг: " + F2->reputation + "\nEmail: " + F2->email + "\nАдрес: " + F2->address;
        MessageBox::Show(gcnew System::String(info.c_str()), "магазин 2", MessageBoxButtons::OK);
    }
}

inline System::Void kurs::MyForm::dataGridView_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    if (e->Button != System::Windows::Forms::MouseButtons::Right)
        return;
    System::Windows::Forms::ContextMenu^ m = gcnew System::Windows::Forms::ContextMenu;
    System::Windows::Forms::MenuItem^ editMenuItem = gcnew MenuItem("Изменить");
    System::Windows::Forms::MenuItem^ deleteMenuItem = gcnew MenuItem("Удалить");
    System::Windows::Forms::MenuItem^ infoMenuItem = gcnew MenuItem("Информацция о магазине");
    m->MenuItems->Add(editMenuItem);
    m->MenuItems->Add(deleteMenuItem);
    m->MenuItems->Add(infoMenuItem);

    if (tabControl->SelectedTab->Name == "tabPage_p") {
        dataGridView_p->ClearSelection();
        int currentMouseOverRow = dataGridView_p->HitTest(e->X, e->Y)->RowIndex;
        if (currentMouseOverRow < 0)
            return;
        dataGridView_p->Rows[currentMouseOverRow]->Selected = true;
        
        editMenuItem->Click += gcnew System::EventHandler(this, &MyForm::editMenuItem_Click);
        deleteMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteMenuItem_Click);
        infoMenuItem->Click += gcnew System::EventHandler(this, &MyForm::infoMenuItem_Click);

        m->Show(dataGridView_p, System::Drawing::Point(e->X, e->Y));
    }
    else if (tabControl->SelectedTab->Name == "tabPage_uos") {
        dataGridView_uos->ClearSelection();
        int currentMouseOverRow = dataGridView_uos->HitTest(e->X, e->Y)->RowIndex;
        if (currentMouseOverRow < 0)
            return;
        dataGridView_uos->Rows[currentMouseOverRow]->Selected = true;

        editMenuItem->Click += gcnew System::EventHandler(this, &MyForm::editMenuItem_Click);
        deleteMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteMenuItem_Click);
        infoMenuItem->Click += gcnew System::EventHandler(this, &MyForm::infoMenuItem_Click);

        m->Show(dataGridView_uos, System::Drawing::Point(e->X, e->Y));
    }
}

System::Void kurs::MyForm::button_save_edit_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (tabControl->SelectedTab->Name == "tabPage_p") {
        int el_number = Convert::ToInt32(dataGridView_p->CurrentRow->Cells[0]->Value);
        goods1[el_number].name = msclr::interop::marshal_as<std::string>(textBox_name_p->Text);
        goods1[el_number].price = Convert::ToDouble(numericUpDown_price_p->Text);
        goods1[el_number].amount = Convert::ToInt32(numericUpDown_amount_p->Text);
        goods1[el_number].weight = Convert::ToDouble(numericUpDown_price_p->Text);
        fill_dataGridView(dataGridView_p, goods1, n1);
        button_add_p->Visible = true;
        button_save_edit_p->Visible = false;
        dataGridView_p->Enabled = true;
    }
    else if (tabControl->SelectedTab->Name == "tabPage_uos") {
        int el_number = Convert::ToInt32(dataGridView_uos->CurrentRow->Cells[0]->Value);
        goods2[el_number].name = msclr::interop::marshal_as<std::string>(textBox_name_uos->Text);
        goods2[el_number].price = Convert::ToDouble(numericUpDown_price_uos->Text);
        goods2[el_number].amount = Convert::ToInt32(numericUpDown_amount_uos->Text);
        goods2[el_number].weight = Convert::ToDouble(numericUpDown_price_uos->Text);
        fill_dataGridView(dataGridView_uos, goods2, n2);
        button_add_uos->Visible = true;
        button_save_edit_uos->Visible = false;
        dataGridView_uos->Enabled = true;
    }
}

System::Void kurs::MyForm::поискToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!goods1 || !goods2) {
        MessageBox::Show("Сначала загрузите данные!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }
    
    FormSearch^ form = gcnew FormSearch(this);
    form->ShowDialog();

}

System::Void kurs::FormSearch::button_search_Click(System::Object^ sender, System::EventArgs^ e) {
    bool f = false;
    int index = 0;
    Good* foundGood = search_item(msclr::interop::marshal_as<std::string>(textBox_search->Text), index, f);
    
    if (!f) {
        MessageBox::Show(
            "Товар не найден!",
            "Внимание", MessageBoxButtons::OK,
            MessageBoxIcon::Warning);
    }
    else {
        if (foundGood->factory == F1){
            this->parentForm->dataGridView_p->ClearSelection();
            this->parentForm->dataGridView_p->Rows[index]->Selected = true;
            this->parentForm->dataGridView_p->FirstDisplayedScrollingRowIndex = index;
            this->parentForm->tabControl->SelectTab("tabPage_p");
        }
        else {
            this->parentForm->dataGridView_uos->ClearSelection();
            this->parentForm->dataGridView_uos->Rows[index]->Selected = true;
            this->parentForm->dataGridView_uos->FirstDisplayedScrollingRowIndex = index;
            this->parentForm->tabControl->SelectTab("tabPage_uos");
        }
        this->Visible = false;
    }
}

System::Void kurs::MyForm::самыйДешевыйТоварToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!goods1 || !goods2) {
        MessageBox::Show("Сначала загрузите данные!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }
    if (!n1 || !n2) {
        MessageBox::Show("Нет товаров на заводах!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }
    
    int index = 0;
    Good* theCheapestItem = the_cheapest_item(index);

    if (theCheapestItem->factory == F1) {
        dataGridView_p->ClearSelection();
        dataGridView_p->Rows[index]->Selected = true;
        dataGridView_p->FirstDisplayedScrollingRowIndex = index;
        tabControl->SelectTab("tabPage_p");
    }
    else {
        dataGridView_uos->ClearSelection();
        dataGridView_uos->Rows[index]->Selected = true;
        dataGridView_uos->FirstDisplayedScrollingRowIndex = index;
        tabControl->SelectTab("tabPage_uos");
    }
}

System::Void kurs::MyForm::заводмагазин1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!goods1 || !goods2) {
        MessageBox::Show("Сначала загрузите данные!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }
    MessageBox::Show("Общее количество товаров в магазине 1»: " + gcnew System::String(summary_amount_of_items(goods1, n1).ToString()), "Результат", MessageBoxButtons::OK);
}

System::Void kurs::MyForm::заводУфаоргсинтезToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!goods1 || !goods2) {
        MessageBox::Show("Сначала загрузите данные!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }
    MessageBox::Show("Общее количество товаров в магазине 2: " + gcnew System::String(summary_amount_of_items(goods2, n2).ToString()), "Результат", MessageBoxButtons::OK);
}

System::Void kurs::MyForm::заводПолиэфToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!goods1 || !goods2) {
        MessageBox::Show("Сначала загрузите данные!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }
    if (!n1) {
        MessageBox::Show("Нет товаров в магазине!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }
    double max = 0;
    int index;
    Good* theHighestPricePerKgItem = the_highest_price_per_kg_item(goods1, n1, max, index);

    dataGridView_p->ClearSelection();
    dataGridView_p->Rows[index]->Selected = true;
    dataGridView_p->FirstDisplayedScrollingRowIndex = index;
    tabControl->SelectTab("tabPage_p");
    MessageBox::Show("Стоимость самого дорогого товара за 1 кг составляет: " + gcnew System::String(std::to_string(max).c_str()) + " р.", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);

}

System::Void kurs::MyForm::заводУфаоргсинтезToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!goods1 || !goods2) {
        MessageBox::Show("Сначала загрузите данные!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }
    if (!n2) {
        MessageBox::Show("Нет товаров в магазине!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }
    double max = 0;
    int index;
    Good* theHighestPricePerKgItem = the_highest_price_per_kg_item(goods2, n2, max, index);

    dataGridView_uos->ClearSelection();
    dataGridView_uos->Rows[index]->Selected = true;
    dataGridView_uos->FirstDisplayedScrollingRowIndex = index;
    tabControl->SelectTab("tabPage_uos");
    MessageBox::Show("Стоимость самого дорогого товара за 1 кг составляет: " + gcnew System::String(std::to_string(max).c_str()) + " р.", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
