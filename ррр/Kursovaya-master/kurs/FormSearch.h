#include "MyForm.h"
#pragma once

namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormSearch
	/// </summary>
	public ref class FormSearch : public System::Windows::Forms::Form
	{
	public:
		FormSearch(MyForm^ parent)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			parentForm = parent;

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormSearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MyForm^ parentForm;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_search;
	private: System::Windows::Forms::Button^ button_search;
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormSearch::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_search = (gcnew System::Windows::Forms::TextBox());
			this->button_search = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Название товара:";
			// 
			// textBox_search
			// 
			this->textBox_search->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_search->Location = System::Drawing::Point(163, 6);
			this->textBox_search->Name = L"textBox_search";
			this->textBox_search->Size = System::Drawing::Size(273, 26);
			this->textBox_search->TabIndex = 1;
			this->textBox_search->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormSearch::textBox_search_KeyDown);
			// 
			// button_search
			// 
			this->button_search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_search->Location = System::Drawing::Point(9, 50);
			this->button_search->Name = L"button_search";
			this->button_search->Size = System::Drawing::Size(430, 32);
			this->button_search->TabIndex = 2;
			this->button_search->Text = L"Поиск";
			this->button_search->UseVisualStyleBackColor = true;
			this->button_search->Click += gcnew System::EventHandler(this, &FormSearch::button_search_Click);
			// 
			// FormSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(448, 94);
			this->Controls->Add(this->button_search);
			this->Controls->Add(this->textBox_search);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormSearch";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поиск";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_search_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_search_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if(e->KeyCode == Keys::Enter)
			button_search_Click(sender, e);
	}
};
}
