#pragma once

namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàãğóçèòüÄàííûåÈçÔàéëàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÇàãğóçèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîèñêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñàìûéÄåøåâûéÒîâàğToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îáùååÊîëâîÒîâàğîâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñàìûéÄîğîãîéÒîâàğÇà1ÊãToolStripMenuItem;
	private: System::Windows::Forms::TabPage^ tabPage_uos;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	public: System::Windows::Forms::DataGridView^ dataGridView_uos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::Button^ button_add_uos;
	private: System::Windows::Forms::Button^ button_save_uos;
	private: System::Windows::Forms::Button^ button_save_edit_uos;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_amount_uos;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_weight_uos;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_price_uos;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_name_uos;
	private: System::Windows::Forms::TabPage^ tabPage_p;
	private: System::Windows::Forms::SplitContainer^ splitContainer_p;
	public: System::Windows::Forms::DataGridView^ dataGridView_p;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ amount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ weight;
	private: System::Windows::Forms::Button^ button_save_edit_p;
	private: System::Windows::Forms::Button^ button_save_p;
	private: System::Windows::Forms::Button^ button_add_p;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_amount_p;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_weight_p;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_price_p;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox_name_p;
	public: System::Windows::Forms::TabControl^ tabControl;
	private: System::Windows::Forms::ToolStripMenuItem^ çàâîäÏîëèıôToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàâîäÓôàîğãñèíòåçToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàâîäÏîëèıôToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ çàâîäÓôàîğãñèíòåçToolStripMenuItem1;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::IContainer^ components;
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->çàãğóçèòüÄàííûåÈçÔàéëàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÇàãğóçèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîèñêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñàìûéÄåøåâûéÒîâàğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáùååÊîëâîÒîâàğîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàâîäÏîëèıôToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàâîäÓôàîğãñèíòåçToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñàìûéÄîğîãîéÒîâàğÇà1ÊãToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàâîäÏîëèıôToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàâîäÓôàîğãñèíòåçToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage_uos = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridView_uos = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button_add_uos = (gcnew System::Windows::Forms::Button());
			this->button_save_uos = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->numericUpDown_amount_uos = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_weight_uos = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_price_uos = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_name_uos = (gcnew System::Windows::Forms::TextBox());
			this->button_save_edit_uos = (gcnew System::Windows::Forms::Button());
			this->tabPage_p = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer_p = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridView_p = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->amount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->weight = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button_save_edit_p = (gcnew System::Windows::Forms::Button());
			this->button_add_p = (gcnew System::Windows::Forms::Button());
			this->button_save_p = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->numericUpDown_amount_p = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_weight_p = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_price_p = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox_name_p = (gcnew System::Windows::Forms::TextBox());
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			this->tabPage_uos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_uos))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_amount_uos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_weight_uos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_price_uos))->BeginInit();
			this->tabPage_p->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer_p))->BeginInit();
			this->splitContainer_p->Panel1->SuspendLayout();
			this->splitContainer_p->Panel2->SuspendLayout();
			this->splitContainer_p->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_p))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_amount_p))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_weight_p))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_price_p))->BeginInit();
			this->tabControl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->çàãğóçèòüÄàííûåÈçÔàéëàToolStripMenuItem,
					this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1026, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// çàãğóçèòüÄàííûåÈçÔàéëàToolStripMenuItem
			// 
			this->çàãğóçèòüÄàííûåÈçÔàéëàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ÇàãğóçèòüToolStripMenuItem,
					this->ïîèñêToolStripMenuItem, this->ñàìûéÄåøåâûéÒîâàğToolStripMenuItem, this->îáùååÊîëâîÒîâàğîâToolStripMenuItem, this->ñàìûéÄîğîãîéÒîâàğÇà1ÊãToolStripMenuItem
			});
			this->çàãğóçèòüÄàííûåÈçÔàéëàToolStripMenuItem->Name = L"çàãğóçèòüÄàííûåÈçÔàéëàToolStripMenuItem";
			this->çàãğóçèòüÄàííûåÈçÔàéëàToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->çàãğóçèòüÄàííûåÈçÔàéëàToolStripMenuItem->Text = L"Ìåíş";
			// 
			// ÇàãğóçèòüToolStripMenuItem
			// 
			this->ÇàãğóçèòüToolStripMenuItem->Name = L"ÇàãğóçèòüToolStripMenuItem";
			this->ÇàãğóçèòüToolStripMenuItem->Size = System::Drawing::Size(233, 22);
			this->ÇàãğóçèòüToolStripMenuItem->Text = L"Çàãğóçèòü äàííûå èç ôàéëà";
			this->ÇàãğóçèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ìåíşToolStripMenuItem_Click);
			// 
			// ïîèñêToolStripMenuItem
			// 
			this->ïîèñêToolStripMenuItem->Name = L"ïîèñêToolStripMenuItem";
			this->ïîèñêToolStripMenuItem->Size = System::Drawing::Size(233, 22);
			this->ïîèñêToolStripMenuItem->Text = L"Ïîèñê";
			this->ïîèñêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîèñêToolStripMenuItem_Click);
			// 
			// ñàìûéÄåøåâûéÒîâàğToolStripMenuItem
			// 
			this->ñàìûéÄåøåâûéÒîâàğToolStripMenuItem->Name = L"ñàìûéÄåøåâûéÒîâàğToolStripMenuItem";
			this->ñàìûéÄåøåâûéÒîâàğToolStripMenuItem->Size = System::Drawing::Size(233, 22);
			this->ñàìûéÄåøåâûéÒîâàğToolStripMenuItem->Text = L"Ñàìûé äåøåâûé òîâàğ";
			this->ñàìûéÄåøåâûéÒîâàğToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñàìûéÄåøåâûéÒîâàğToolStripMenuItem_Click);
			// 
			// îáùååÊîëâîÒîâàğîâToolStripMenuItem
			// 
			this->îáùååÊîëâîÒîâàğîâToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->çàâîäÏîëèıôToolStripMenuItem,
					this->çàâîäÓôàîğãñèíòåçToolStripMenuItem
			});
			this->îáùååÊîëâîÒîâàğîâToolStripMenuItem->Name = L"îáùååÊîëâîÒîâàğîâToolStripMenuItem";
			this->îáùååÊîëâîÒîâàğîâToolStripMenuItem->Size = System::Drawing::Size(233, 22);
			this->îáùååÊîëâîÒîâàğîâToolStripMenuItem->Text = L"Îáùåå êîë-âî òîâàğîâ";
			// 
			// çàâîäÏîëèıôToolStripMenuItem
			// 
			this->çàâîäÏîëèıôToolStripMenuItem->Name = L"çàâîäÏîëèıôToolStripMenuItem";
			this->çàâîäÏîëèıôToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->çàâîäÏîëèıôToolStripMenuItem->Text = L"ìàãàçèí 1";
			this->çàâîäÏîëèıôToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çàâîäìàãàçèí1ToolStripMenuItem_Click);
			// 
			// çàâîäÓôàîğãñèíòåçToolStripMenuItem
			// 
			this->çàâîäÓôàîğãñèíòåçToolStripMenuItem->Name = L"çàâîäÓôàîğãñèíòåçToolStripMenuItem";
			this->çàâîäÓôàîğãñèíòåçToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->çàâîäÓôàîğãñèíòåçToolStripMenuItem->Text = L"ìàãàçèí 2";
			this->çàâîäÓôàîğãñèíòåçToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çàâîäÓôàîğãñèíòåçToolStripMenuItem_Click);
			// 
			// ñàìûéÄîğîãîéÒîâàğÇà1ÊãToolStripMenuItem
			// 
			this->ñàìûéÄîğîãîéÒîâàğÇà1ÊãToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->çàâîäÏîëèıôToolStripMenuItem1,
					this->çàâîäÓôàîğãñèíòåçToolStripMenuItem1
			});
			this->ñàìûéÄîğîãîéÒîâàğÇà1ÊãToolStripMenuItem->Name = L"ñàìûéÄîğîãîéÒîâàğÇà1ÊãToolStripMenuItem";
			this->ñàìûéÄîğîãîéÒîâàğÇà1ÊãToolStripMenuItem->Size = System::Drawing::Size(233, 22);
			this->ñàìûéÄîğîãîéÒîâàğÇà1ÊãToolStripMenuItem->Text = L"Ñàìûé äîğîãîé òîâàğ çà 1 êã";
			// 
			// çàâîäÏîëèıôToolStripMenuItem1
			// 
			this->çàâîäÏîëèıôToolStripMenuItem1->Name = L"çàâîäÏîëèıôToolStripMenuItem1";
			this->çàâîäÏîëèıôToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->çàâîäÏîëèıôToolStripMenuItem1->Text = L"ìàãàçèí 1";
			this->çàâîäÏîëèıôToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::çàâîäÏîëèıôToolStripMenuItem1_Click);
			// 
			// çàâîäÓôàîğãñèíòåçToolStripMenuItem1
			// 
			this->çàâîäÓôàîğãñèíòåçToolStripMenuItem1->Name = L"çàâîäÓôàîğãñèíòåçToolStripMenuItem1";
			this->çàâîäÓôàîğãñèíòåçToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->çàâîäÓôàîğãñèíòåçToolStripMenuItem1->Text = L"ìàãàçèí 2";
			this->çàâîäÓôàîğãñèíòåçToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::çàâîäÓôàîğãñèíòåçToolStripMenuItem1_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// tabPage_uos
			// 
			this->tabPage_uos->Controls->Add(this->splitContainer1);
			this->tabPage_uos->Location = System::Drawing::Point(4, 22);
			this->tabPage_uos->Name = L"tabPage_uos";
			this->tabPage_uos->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_uos->Size = System::Drawing::Size(1018, 472);
			this->tabPage_uos->TabIndex = 3;
			this->tabPage_uos->Text = L"Ñïèñîê òîâàğîâ \"Ìàãàçèí 1\"";
			this->tabPage_uos->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 3);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->dataGridView_uos);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->button_add_uos);
			this->splitContainer1->Panel2->Controls->Add(this->button_save_uos);
			this->splitContainer1->Panel2->Controls->Add(this->tableLayoutPanel1);
			this->splitContainer1->Panel2->Controls->Add(this->button_save_edit_uos);
			this->splitContainer1->Size = System::Drawing::Size(1012, 466);
			this->splitContainer1->SplitterDistance = 633;
			this->splitContainer1->TabIndex = 2;
			// 
			// dataGridView_uos
			// 
			this->dataGridView_uos->AllowUserToAddRows = false;
			this->dataGridView_uos->AllowUserToDeleteRows = false;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridView_uos->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView_uos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_uos->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView_uos->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridView_uos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView_uos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dataGridView_uos->Location = System::Drawing::Point(4, 3);
			this->dataGridView_uos->MultiSelect = false;
			this->dataGridView_uos->Name = L"dataGridView_uos";
			this->dataGridView_uos->ReadOnly = true;
			this->dataGridView_uos->RowHeadersVisible = false;
			this->dataGridView_uos->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView_uos->Size = System::Drawing::Size(626, 459);
			this->dataGridView_uos->TabIndex = 0;
			this->dataGridView_uos->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::dataGridView_uos_KeyDown);
			this->dataGridView_uos->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::dataGridView_MouseClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn1->HeaderText = L"id";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 40;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Íàçâàíèå òîâàğà";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 120;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Êîëè÷åñòâî";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Öåíà";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Ìàññà, êã";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// button_add_uos
			// 
			this->button_add_uos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add_uos->Location = System::Drawing::Point(51, 137);
			this->button_add_uos->Name = L"button_add_uos";
			this->button_add_uos->Size = System::Drawing::Size(288, 36);
			this->button_add_uos->TabIndex = 7;
			this->button_add_uos->Text = L"Äîáàâèòü";
			this->button_add_uos->UseVisualStyleBackColor = true;
			this->button_add_uos->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// button_save_uos
			// 
			this->button_save_uos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_save_uos->Location = System::Drawing::Point(138, 425);
			this->button_save_uos->Name = L"button_save_uos";
			this->button_save_uos->Size = System::Drawing::Size(234, 36);
			this->button_save_uos->TabIndex = 6;
			this->button_save_uos->Text = L"Ñîõğàíèòü â ôàéë";
			this->button_save_uos->UseVisualStyleBackColor = true;
			this->button_save_uos->Click += gcnew System::EventHandler(this, &MyForm::button_save_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown_amount_uos, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown_weight_uos, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown_price_uos, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox_name_uos, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(369, 128);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// numericUpDown_amount_uos
			// 
			this->numericUpDown_amount_uos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_amount_uos->Location = System::Drawing::Point(150, 67);
			this->numericUpDown_amount_uos->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown_amount_uos->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_amount_uos->Name = L"numericUpDown_amount_uos";
			this->numericUpDown_amount_uos->Size = System::Drawing::Size(159, 26);
			this->numericUpDown_amount_uos->TabIndex = 3;
			this->numericUpDown_amount_uos->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown_weight_uos
			// 
			this->numericUpDown_weight_uos->DecimalPlaces = 2;
			this->numericUpDown_weight_uos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_weight_uos->Location = System::Drawing::Point(150, 99);
			this->numericUpDown_weight_uos->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->numericUpDown_weight_uos->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown_weight_uos->Name = L"numericUpDown_weight_uos";
			this->numericUpDown_weight_uos->Size = System::Drawing::Size(159, 26);
			this->numericUpDown_weight_uos->TabIndex = 4;
			this->numericUpDown_weight_uos->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			// 
			// numericUpDown_price_uos
			// 
			this->numericUpDown_price_uos->DecimalPlaces = 2;
			this->numericUpDown_price_uos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_price_uos->Location = System::Drawing::Point(150, 35);
			this->numericUpDown_price_uos->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->numericUpDown_price_uos->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown_price_uos->Name = L"numericUpDown_price_uos";
			this->numericUpDown_price_uos->Size = System::Drawing::Size(159, 26);
			this->numericUpDown_price_uos->TabIndex = 2;
			this->numericUpDown_price_uos->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Right;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(65, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ìàññà, êã";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Right;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Íàçâàíèå òîâàğà";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Right;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(44, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 32);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Êîëè÷åñòâî";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Right;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(96, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 32);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Öåíà";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox_name_uos
			// 
			this->textBox_name_uos->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_name_uos->Dock = System::Windows::Forms::DockStyle::Left;
			this->textBox_name_uos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_name_uos->Location = System::Drawing::Point(150, 3);
			this->textBox_name_uos->Name = L"textBox_name_uos";
			this->textBox_name_uos->Size = System::Drawing::Size(216, 26);
			this->textBox_name_uos->TabIndex = 1;
			// 
			// button_save_edit_uos
			// 
			this->button_save_edit_uos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_save_edit_uos->Location = System::Drawing::Point(51, 137);
			this->button_save_edit_uos->Name = L"button_save_edit_uos";
			this->button_save_edit_uos->Size = System::Drawing::Size(288, 36);
			this->button_save_edit_uos->TabIndex = 5;
			this->button_save_edit_uos->Text = L"Ñîõğàíèòü èçìåíåíèÿ";
			this->button_save_edit_uos->UseVisualStyleBackColor = true;
			this->button_save_edit_uos->Visible = false;
			this->button_save_edit_uos->Click += gcnew System::EventHandler(this, &MyForm::button_save_edit_Click);
			// 
			// tabPage_p
			// 
			this->tabPage_p->Controls->Add(this->splitContainer_p);
			this->tabPage_p->Location = System::Drawing::Point(4, 22);
			this->tabPage_p->Name = L"tabPage_p";
			this->tabPage_p->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_p->Size = System::Drawing::Size(1018, 472);
			this->tabPage_p->TabIndex = 1;
			this->tabPage_p->Text = L"Ñïèñîê òîâàğîâ \"Ìàãàçèí 2\"";
			this->tabPage_p->UseVisualStyleBackColor = true;
			// 
			// splitContainer_p
			// 
			this->splitContainer_p->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer_p->Location = System::Drawing::Point(3, 3);
			this->splitContainer_p->Name = L"splitContainer_p";
			// 
			// splitContainer_p.Panel1
			// 
			this->splitContainer_p->Panel1->Controls->Add(this->dataGridView_p);
			// 
			// splitContainer_p.Panel2
			// 
			this->splitContainer_p->Panel2->Controls->Add(this->button_save_edit_p);
			this->splitContainer_p->Panel2->Controls->Add(this->button_add_p);
			this->splitContainer_p->Panel2->Controls->Add(this->button_save_p);
			this->splitContainer_p->Panel2->Controls->Add(this->tableLayoutPanel2);
			this->splitContainer_p->Size = System::Drawing::Size(1012, 466);
			this->splitContainer_p->SplitterDistance = 633;
			this->splitContainer_p->TabIndex = 2;
			// 
			// dataGridView_p
			// 
			this->dataGridView_p->AllowUserToAddRows = false;
			this->dataGridView_p->AllowUserToDeleteRows = false;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridView_p->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView_p->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_p->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView_p->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridView_p->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView_p->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->id, this->name,
					this->amount, this->price, this->weight
			});
			this->dataGridView_p->Location = System::Drawing::Point(4, 3);
			this->dataGridView_p->MultiSelect = false;
			this->dataGridView_p->Name = L"dataGridView_p";
			this->dataGridView_p->ReadOnly = true;
			this->dataGridView_p->RowHeadersVisible = false;
			this->dataGridView_p->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView_p->Size = System::Drawing::Size(626, 459);
			this->dataGridView_p->TabIndex = 0;
			this->dataGridView_p->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView_p_CellContentClick);
			this->dataGridView_p->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::dataGridView_p_KeyDown);
			this->dataGridView_p->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::dataGridView_MouseClick);
			// 
			// id
			// 
			this->id->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->id->HeaderText = L"id";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Width = 40;
			// 
			// name
			// 
			this->name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->name->HeaderText = L"Íàçâàíèå òîâàğà";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Width = 120;
			// 
			// amount
			// 
			this->amount->HeaderText = L"Êîëè÷åñòâî";
			this->amount->Name = L"amount";
			this->amount->ReadOnly = true;
			// 
			// price
			// 
			this->price->HeaderText = L"Öåíà";
			this->price->Name = L"price";
			this->price->ReadOnly = true;
			// 
			// weight
			// 
			this->weight->HeaderText = L"Ìàññà, êã";
			this->weight->Name = L"weight";
			this->weight->ReadOnly = true;
			// 
			// button_save_edit_p
			// 
			this->button_save_edit_p->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_save_edit_p->Location = System::Drawing::Point(51, 137);
			this->button_save_edit_p->Name = L"button_save_edit_p";
			this->button_save_edit_p->Size = System::Drawing::Size(288, 36);
			this->button_save_edit_p->TabIndex = 7;
			this->button_save_edit_p->Text = L"Ñîõğàíèòü èçìåíåíèÿ";
			this->button_save_edit_p->UseVisualStyleBackColor = true;
			this->button_save_edit_p->Visible = false;
			this->button_save_edit_p->Click += gcnew System::EventHandler(this, &MyForm::button_save_edit_Click);
			// 
			// button_add_p
			// 
			this->button_add_p->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add_p->Location = System::Drawing::Point(51, 137);
			this->button_add_p->Name = L"button_add_p";
			this->button_add_p->Size = System::Drawing::Size(288, 36);
			this->button_add_p->TabIndex = 5;
			this->button_add_p->Text = L"Äîáàâèòü";
			this->button_add_p->UseVisualStyleBackColor = true;
			this->button_add_p->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// button_save_p
			// 
			this->button_save_p->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_save_p->Location = System::Drawing::Point(138, 425);
			this->button_save_p->Name = L"button_save_p";
			this->button_save_p->Size = System::Drawing::Size(234, 36);
			this->button_save_p->TabIndex = 6;
			this->button_save_p->Text = L"Ñîõğàíèòü â ôàéë";
			this->button_save_p->UseVisualStyleBackColor = true;
			this->button_save_p->Click += gcnew System::EventHandler(this, &MyForm::button_save_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoSize = true;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->numericUpDown_amount_p, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->numericUpDown_weight_p, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->numericUpDown_price_p, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->label7, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->label8, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label9, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label10, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBox_name_p, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 4;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(369, 128);
			this->tableLayoutPanel2->TabIndex = 3;
			// 
			// numericUpDown_amount_p
			// 
			this->numericUpDown_amount_p->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_amount_p->Location = System::Drawing::Point(150, 67);
			this->numericUpDown_amount_p->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown_amount_p->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_amount_p->Name = L"numericUpDown_amount_p";
			this->numericUpDown_amount_p->Size = System::Drawing::Size(159, 26);
			this->numericUpDown_amount_p->TabIndex = 3;
			this->numericUpDown_amount_p->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown_weight_p
			// 
			this->numericUpDown_weight_p->DecimalPlaces = 2;
			this->numericUpDown_weight_p->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_weight_p->Location = System::Drawing::Point(150, 99);
			this->numericUpDown_weight_p->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->numericUpDown_weight_p->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown_weight_p->Name = L"numericUpDown_weight_p";
			this->numericUpDown_weight_p->Size = System::Drawing::Size(159, 26);
			this->numericUpDown_weight_p->TabIndex = 4;
			this->numericUpDown_weight_p->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			// 
			// numericUpDown_price_p
			// 
			this->numericUpDown_price_p->DecimalPlaces = 2;
			this->numericUpDown_price_p->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_price_p->Location = System::Drawing::Point(150, 35);
			this->numericUpDown_price_p->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->numericUpDown_price_p->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown_price_p->Name = L"numericUpDown_price_p";
			this->numericUpDown_price_p->Size = System::Drawing::Size(159, 26);
			this->numericUpDown_price_p->TabIndex = 2;
			this->numericUpDown_price_p->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Right;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(65, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 32);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Ìàññà, êã";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Dock = System::Windows::Forms::DockStyle::Right;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(3, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(141, 32);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Íàçâàíèå òîâàğà";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Right;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(44, 64);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 32);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Êîëè÷åñòâî";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Dock = System::Windows::Forms::DockStyle::Right;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(96, 32);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 32);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Öåíà";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox_name_p
			// 
			this->textBox_name_p->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_name_p->Dock = System::Windows::Forms::DockStyle::Left;
			this->textBox_name_p->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_name_p->Location = System::Drawing::Point(150, 3);
			this->textBox_name_p->Name = L"textBox_name_p";
			this->textBox_name_p->Size = System::Drawing::Size(216, 26);
			this->textBox_name_p->TabIndex = 1;
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->tabPage_p);
			this->tabControl->Controls->Add(this->tabPage_uos);
			this->tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl->Location = System::Drawing::Point(0, 24);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(1026, 498);
			this->tabControl->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(892, 5);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Äàííûå çàãğóæåíû!";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1010, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(15, 15);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1026, 522);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tabControl);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ìàãàçèíû";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage_uos->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_uos))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_amount_uos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_weight_uos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_price_uos))->EndInit();
			this->tabPage_p->ResumeLayout(false);
			this->splitContainer_p->Panel1->ResumeLayout(false);
			this->splitContainer_p->Panel2->ResumeLayout(false);
			this->splitContainer_p->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer_p))->EndInit();
			this->splitContainer_p->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_p))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_amount_p))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_weight_p))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_price_p))->EndInit();
			this->tabControl->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e){}
	private: System::Void tabPage_item_Click(System::Object^ sender, System::EventArgs^ e){}
	private: System::Void dataGridView_p_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {}
	private: System::Void ìåíşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_save_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void editMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void deleteMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void infoMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dataGridView_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void button_save_edit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïîèñêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ñàìûéÄåøåâûéÒîâàğToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void çàâîäìàãàçèí1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void çàâîäÓôàîğãñèíòåçToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dataGridView_p_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Delete)
			deleteMenuItem_Click(sender, e);
	}
	private: System::Void dataGridView_uos_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Delete)
			deleteMenuItem_Click(sender, e);
	}
	private: System::Void çàâîäÏîëèıôToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void çàâîäÓôàîğãñèíòåçToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
