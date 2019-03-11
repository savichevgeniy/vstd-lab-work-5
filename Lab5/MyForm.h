#pragma once

#include <iostream>

namespace Lab5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::MainMenu^  mainMenu1;
	private: System::Windows::Forms::MenuItem^  menuItem1;
	private: System::Windows::Forms::MenuItem^  menuItem2;
	private: System::Windows::Forms::MenuItem^  menuItem3;
	private: System::Windows::Forms::MenuItem^  menuItem4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::MenuItem^  menuItem5;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label20;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->mainMenu1 = (gcnew System::Windows::Forms::MainMenu(this->components));
			this->menuItem1 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem2 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem3 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem5 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem4 = (gcnew System::Windows::Forms::MenuItem());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(12, 9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(401, 147);
			this->panel1->TabIndex = 0;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(20, 112);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(244, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Выберите параметр";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(255, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 8;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(255, 93);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(67, 17);
			this->radioButton3->TabIndex = 7;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Сторона";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(255, 72);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(81, 17);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Диагональ";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(255, 51);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(72, 17);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Площадь";
			this->radioButton1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ответ:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(141, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Задание №1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(20, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите периметр квадрата:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(312, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выполнить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(12, 6);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(401, 147);
			this->panel2->TabIndex = 1;
			this->panel2->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 112);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 10;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(255, 104);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 8;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(20, 83);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Название дня недели";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(141, 11);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(70, 13);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Задание №2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(20, 50);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(151, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(17, 34);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(130, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Введите цифру от 1 до 7";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(312, 112);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 30);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Выполнить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->Controls->Add(this->label20);
			this->panel3->Controls->Add(this->label19);
			this->panel3->Controls->Add(this->label18);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Location = System::Drawing::Point(9, 6);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(401, 147);
			this->panel3->TabIndex = 11;
			this->panel3->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(20, 91);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 13);
			this->label20->TabIndex = 15;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(218, 91);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 13);
			this->label19->TabIndex = 14;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(218, 74);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(127, 13);
			this->label18->TabIndex = 13;
			this->label18->Text = L"Радиус 2ой окружности";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(220, 50);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(151, 20);
			this->textBox4->TabIndex = 12;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(217, 35);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(136, 13);
			this->label17->TabIndex = 11;
			this->label17->Text = L"Введите 2ой окружности:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(20, 112);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 10;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(255, 104);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 13);
			this->label13->TabIndex = 8;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(20, 72);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(127, 13);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Радиус 1ой окружности";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(141, 11);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(70, 13);
			this->label15->TabIndex = 3;
			this->label15->Text = L"Задание №3";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(20, 50);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(151, 20);
			this->textBox3->TabIndex = 2;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(17, 34);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(136, 13);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Введите 1ой окружности:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(154, 107);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 30);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Выполнить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// mainMenu1
			// 
			this->mainMenu1->MenuItems->AddRange(gcnew cli::array< System::Windows::Forms::MenuItem^  >(2) { this->menuItem1, this->menuItem4 });
			// 
			// menuItem1
			// 
			this->menuItem1->Index = 0;
			this->menuItem1->MenuItems->AddRange(gcnew cli::array< System::Windows::Forms::MenuItem^  >(3) {
				this->menuItem2, this->menuItem3,
					this->menuItem5
			});
			this->menuItem1->Text = L"№1";
			// 
			// menuItem2
			// 
			this->menuItem2->Index = 0;
			this->menuItem2->Text = L"Задание №1";
			this->menuItem2->Click += gcnew System::EventHandler(this, &MyForm::menuItem2_Click);
			// 
			// menuItem3
			// 
			this->menuItem3->Index = 1;
			this->menuItem3->Text = L"Задание №2";
			this->menuItem3->Click += gcnew System::EventHandler(this, &MyForm::menuItem3_Click);
			// 
			// menuItem5
			// 
			this->menuItem5->Index = 2;
			this->menuItem5->Text = L"Задание №3";
			this->menuItem5->Click += gcnew System::EventHandler(this, &MyForm::menuItem5_Click);
			// 
			// menuItem4
			// 
			this->menuItem4->Index = 1;
			this->menuItem4->Text = L"Выход";
			this->menuItem4->Click += gcnew System::EventHandler(this, &MyForm::menuItem4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(433, 178);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Menu = this->mainMenu1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторные работы ";
			this->TransparencyKey = System::Drawing::Color::Red;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int P = 0, S = 0, a = 0, d = 0;
		P = Convert::ToInt32(textBox1->Text);
		a = P / 4;
		S = pow(a, 2);
		d = sqrt(2) * a;
		if (radioButton1->Checked)
			label6->Text = Convert::ToString(S);
		else if (radioButton2->Checked)
			label6->Text = Convert::ToString(d);
		else if (radioButton3->Checked)
			label6->Text = Convert::ToString(a);
		else
			label6->Text = "Выбериет параметр";
	}
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		int day;
		day = Convert::ToInt32(textBox2->Text);
		switch (day)
		{
		case 1:
			label7->Text = "Понедельник";
			break;
		case 2:
			label7->Text = "Вторник";
			break;
		case 3:
			label7->Text = "Среда";
			break;
		case 4:
			label7->Text = "Четверг";
			break;
		case 5:
			label7->Text = "Пятница";
			break;
		case 6:
			label7->Text = "Суббота";
			break;
		case 7:
			label7->Text = "Воскресенье";
			break;
		default:
			label7->Text = "Такого дня недели нет";
			break;
		}
	}
	private: System::Void menuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
		panel2->Visible = true;
		panel1->Visible = false;
		panel3->Visible = false;
	}
	private: System::Void menuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		panel1->Visible = true;
		panel2->Visible = false;
		panel3->Visible = false;
	}
	private: System::Void menuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
		exit(0);
	}
private: System::Void menuItem5_Click(System::Object^  sender, System::EventArgs^  e) {
	panel3->Visible = true;
	panel1->Visible = false;
	panel2->Visible = false;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	double r1, r2, C1, C2;
	if (textBox3->Text == "")
		textBox3->Text = "Введите значение";
	else if (textBox4->Text == "")
		textBox4->Text = "Введите значение";
	else 
	{ 
	C1 = Convert::ToInt32(textBox3->Text);
	C2 = Convert::ToInt32(textBox4->Text);
	r1 = C1 / (2 * 3.14);
	r2 = C2 / (2 * 3.14);
	label20->Text = Convert::ToString(r1);
	label19->Text = Convert::ToString(r2);
	}
}
};
}