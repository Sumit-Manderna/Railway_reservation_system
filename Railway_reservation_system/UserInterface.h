#pragma once
#include"BookOrCancel.h"

namespace Railwayreservationsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for UserInterface
	/// </summary>
	public ref class UserInterface : public System::Windows::Forms::Form
	{
	public:
		UserInterface(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		UserInterface(String^data)
		{
			InitializeComponent();
			groupBox1->Text += data;
			labeldata->Text = data;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserInterface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panelEnquiry;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ ResultGroupbox;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ labeldata;
	private: System::Windows::Forms::Panel^ panelcancel;
	private: System::Windows::Forms::GroupBox^ groupBoxticket;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::GroupBox^ groupBoxticketinfo;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ labelcancel;
	private: System::Windows::Forms::Button^ button10;












	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelEnquiry = (gcnew System::Windows::Forms::Panel());
			this->labeldata = (gcnew System::Windows::Forms::Label());
			this->ResultGroupbox = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panelcancel = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->groupBoxticketinfo = (gcnew System::Windows::Forms::GroupBox());
			this->labelcancel = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBoxticket = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->panelEnquiry->SuspendLayout();
			this->ResultGroupbox->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panelcancel->SuspendLayout();
			this->groupBoxticketinfo->SuspendLayout();
			this->groupBoxticket->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 13.77391F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(120, 37);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(359, 287);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Welcome , ";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &UserInterface::groupBox1_Enter);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Highlight;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Info;
			this->button3->Location = System::Drawing::Point(89, 120);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(177, 45);
			this->button3->TabIndex = 9;
			this->button3->Text = L" Ticket Enquiry";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &UserInterface::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Highlight;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Info;
			this->button2->Location = System::Drawing::Point(89, 205);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(177, 45);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Book Tickets";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &UserInterface::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Info;
			this->button1->Location = System::Drawing::Point(89, 47);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 45);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Train Enquiry";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserInterface::button1_Click);
			// 
			// panelEnquiry
			// 
			this->panelEnquiry->Controls->Add(this->labeldata);
			this->panelEnquiry->Controls->Add(this->ResultGroupbox);
			this->panelEnquiry->Controls->Add(this->groupBox2);
			this->panelEnquiry->Controls->Add(this->button6);
			this->panelEnquiry->Location = System::Drawing::Point(0, 12);
			this->panelEnquiry->Name = L"panelEnquiry";
			this->panelEnquiry->Size = System::Drawing::Size(582, 441);
			this->panelEnquiry->TabIndex = 8;
			this->panelEnquiry->Visible = false;
			// 
			// labeldata
			// 
			this->labeldata->AutoSize = true;
			this->labeldata->Location = System::Drawing::Point(386, 397);
			this->labeldata->Name = L"labeldata";
			this->labeldata->Size = System::Drawing::Size(81, 23);
			this->labeldata->TabIndex = 10;
			this->labeldata->Text = L"label12";
			this->labeldata->Visible = false;
			// 
			// ResultGroupbox
			// 
			this->ResultGroupbox->Controls->Add(this->label11);
			this->ResultGroupbox->Controls->Add(this->label10);
			this->ResultGroupbox->Controls->Add(this->label9);
			this->ResultGroupbox->Controls->Add(this->label8);
			this->ResultGroupbox->Controls->Add(this->label7);
			this->ResultGroupbox->Controls->Add(this->label6);
			this->ResultGroupbox->Controls->Add(this->label5);
			this->ResultGroupbox->Controls->Add(this->label4);
			this->ResultGroupbox->Controls->Add(this->label3);
			this->ResultGroupbox->Controls->Add(this->label2);
			this->ResultGroupbox->Location = System::Drawing::Point(95, 154);
			this->ResultGroupbox->Name = L"ResultGroupbox";
			this->ResultGroupbox->Size = System::Drawing::Size(372, 228);
			this->ResultGroupbox->TabIndex = 9;
			this->ResultGroupbox->TabStop = false;
			this->ResultGroupbox->Text = L"Train Info";
			this->ResultGroupbox->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(184, 183);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(81, 23);
			this->label11->TabIndex = 16;
			this->label11->Text = L"label11";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(184, 145);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 23);
			this->label10->TabIndex = 15;
			this->label10->Text = L"label10";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(184, 110);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 23);
			this->label9->TabIndex = 14;
			this->label9->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(184, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 23);
			this->label8->TabIndex = 13;
			this->label8->Text = L"label8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(184, 41);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 23);
			this->label7->TabIndex = 12;
			this->label7->Text = L"label7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 183);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 23);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Status:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 145);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 23);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Fare:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 23);
			this->label4->TabIndex = 9;
			this->label4->Text = L"To:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 23);
			this->label3->TabIndex = 8;
			this->label3->Text = L"From:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 23);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Train Name:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(95, 7);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(372, 141);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Train Enquiry";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox1->Location = System::Drawing::Point(167, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 30);
			this->textBox1->TabIndex = 8;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Highlight;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Info;
			this->button5->Location = System::Drawing::Point(127, 91);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(111, 45);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Search";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &UserInterface::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Train No";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Highlight;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::Info;
			this->button6->Location = System::Drawing::Point(222, 386);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(111, 45);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Go Back";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &UserInterface::button6_Click);
			// 
			// panelcancel
			// 
			this->panelcancel->Controls->Add(this->groupBoxticketinfo);
			this->panelcancel->Controls->Add(this->groupBoxticket);
			this->panelcancel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelcancel->Location = System::Drawing::Point(0, 0);
			this->panelcancel->Name = L"panelcancel";
			this->panelcancel->Size = System::Drawing::Size(582, 455);
			this->panelcancel->TabIndex = 11;
			this->panelcancel->Visible = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::Highlight;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::Info;
			this->button10->Location = System::Drawing::Point(96, 91);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(115, 39);
			this->button10->TabIndex = 18;
			this->button10->Text = L"Go Back";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &UserInterface::button10_Click);
			// 
			// groupBoxticketinfo
			// 
			this->groupBoxticketinfo->Controls->Add(this->labelcancel);
			this->groupBoxticketinfo->Controls->Add(this->label32);
			this->groupBoxticketinfo->Controls->Add(this->label31);
			this->groupBoxticketinfo->Controls->Add(this->label30);
			this->groupBoxticketinfo->Controls->Add(this->label29);
			this->groupBoxticketinfo->Controls->Add(this->label28);
			this->groupBoxticketinfo->Controls->Add(this->label27);
			this->groupBoxticketinfo->Controls->Add(this->label26);
			this->groupBoxticketinfo->Controls->Add(this->label25);
			this->groupBoxticketinfo->Controls->Add(this->label24);
			this->groupBoxticketinfo->Controls->Add(this->label23);
			this->groupBoxticketinfo->Controls->Add(this->label22);
			this->groupBoxticketinfo->Controls->Add(this->label21);
			this->groupBoxticketinfo->Controls->Add(this->label20);
			this->groupBoxticketinfo->Controls->Add(this->label19);
			this->groupBoxticketinfo->Controls->Add(this->label18);
			this->groupBoxticketinfo->Controls->Add(this->label17);
			this->groupBoxticketinfo->Controls->Add(this->label16);
			this->groupBoxticketinfo->Controls->Add(this->label15);
			this->groupBoxticketinfo->Controls->Add(this->label14);
			this->groupBoxticketinfo->Controls->Add(this->label13);
			this->groupBoxticketinfo->Controls->Add(this->button9);
			this->groupBoxticketinfo->Controls->Add(this->button8);
			this->groupBoxticketinfo->Location = System::Drawing::Point(38, 15);
			this->groupBoxticketinfo->Name = L"groupBoxticketinfo";
			this->groupBoxticketinfo->Size = System::Drawing::Size(510, 409);
			this->groupBoxticketinfo->TabIndex = 1;
			this->groupBoxticketinfo->TabStop = false;
			this->groupBoxticketinfo->Text = L"Ticket Info";
			this->groupBoxticketinfo->Visible = false;
			// 
			// labelcancel
			// 
			this->labelcancel->AutoSize = true;
			this->labelcancel->Location = System::Drawing::Point(394, 338);
			this->labelcancel->Name = L"labelcancel";
			this->labelcancel->Size = System::Drawing::Size(110, 23);
			this->labelcancel->TabIndex = 39;
			this->labelcancel->Text = L"Cancelled";
			this->labelcancel->Visible = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label32->Location = System::Drawing::Point(163, 315);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(81, 23);
			this->label32->TabIndex = 38;
			this->label32->Text = L"label32";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(299, 266);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(81, 23);
			this->label31->TabIndex = 37;
			this->label31->Text = L"label31";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(299, 217);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(81, 23);
			this->label30->TabIndex = 36;
			this->label30->Text = L"label30";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(402, 173);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(81, 23);
			this->label29->TabIndex = 35;
			this->label29->Text = L"label29";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(166, 173);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(81, 23);
			this->label28->TabIndex = 34;
			this->label28->Text = L"label28";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(394, 117);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(81, 23);
			this->label27->TabIndex = 33;
			this->label27->Text = L"label27";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(163, 123);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(81, 23);
			this->label26->TabIndex = 32;
			this->label26->Text = L"label26";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(167, 77);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(81, 23);
			this->label25->TabIndex = 31;
			this->label25->Text = L"label25";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(402, 32);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(81, 23);
			this->label24->TabIndex = 30;
			this->label24->Text = L"label24";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(163, 32);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(81, 23);
			this->label23->TabIndex = 29;
			this->label23->Text = L"label23";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(21, 315);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(79, 23);
			this->label22->TabIndex = 28;
			this->label22->Text = L"Status:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(287, 173);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(93, 23);
			this->label21->TabIndex = 27;
			this->label21->Text = L"Amount:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(21, 266);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(239, 23);
			this->label20->TabIndex = 26;
			this->label20->Text = L"No Of Traveller(Child):";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(21, 217);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(239, 23);
			this->label19->TabIndex = 25;
			this->label19->Text = L"No Of Traveller(Adult):";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(21, 173);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(123, 23);
			this->label18->TabIndex = 24;
			this->label18->Text = L"Booked By:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(287, 122);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 23);
			this->label17->TabIndex = 23;
			this->label17->Text = L"To:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(21, 123);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(69, 23);
			this->label16->TabIndex = 22;
			this->label16->Text = L"From:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(21, 77);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(133, 23);
			this->label15->TabIndex = 21;
			this->label15->Text = L"Train Name:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(287, 32);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(104, 23);
			this->label14->TabIndex = 20;
			this->label14->Text = L"Train No:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(21, 32);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(93, 23);
			this->label13->TabIndex = 19;
			this->label13->Text = L"PNR No:";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Highlight;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::Info;
			this->button9->Location = System::Drawing::Point(250, 364);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(179, 39);
			this->button9->TabIndex = 18;
			this->button9->Text = L"Cancel Ticket";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &UserInterface::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Highlight;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::Info;
			this->button8->Location = System::Drawing::Point(69, 364);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(175, 39);
			this->button8->TabIndex = 17;
			this->button8->Text = L"Go Back";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &UserInterface::button8_Click_1);
			// 
			// groupBoxticket
			// 
			this->groupBoxticket->Controls->Add(this->button10);
			this->groupBoxticket->Controls->Add(this->button7);
			this->groupBoxticket->Controls->Add(this->textBox2);
			this->groupBoxticket->Controls->Add(this->label12);
			this->groupBoxticket->Location = System::Drawing::Point(74, 70);
			this->groupBoxticket->Name = L"groupBoxticket";
			this->groupBoxticket->Size = System::Drawing::Size(431, 141);
			this->groupBoxticket->TabIndex = 0;
			this->groupBoxticket->TabStop = false;
			this->groupBoxticket->Text = L"Enter Ticket Info";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Highlight;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::Info;
			this->button7->Location = System::Drawing::Point(217, 91);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(115, 39);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Search";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &UserInterface::button7_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox2->Location = System::Drawing::Point(217, 35);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 30);
			this->textBox2->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(42, 42);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(93, 23);
			this->label12->TabIndex = 0;
			this->label12->Text = L"PNR No:";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Highlight;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::Info;
			this->button4->Location = System::Drawing::Point(238, 339);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 45);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Exit()";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &UserInterface::button4_Click);
			// 
			// UserInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(582, 455);
			this->Controls->Add(this->panelcancel);
			this->Controls->Add(this->panelEnquiry);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"UserInterface";
			this->Text = L"UserInterface";
			this->groupBox1->ResumeLayout(false);
			this->panelEnquiry->ResumeLayout(false);
			this->panelEnquiry->PerformLayout();
			this->ResultGroupbox->ResumeLayout(false);
			this->ResultGroupbox->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panelcancel->ResumeLayout(false);
			this->groupBoxticketinfo->ResumeLayout(false);
			this->groupBoxticketinfo->PerformLayout();
			this->groupBoxticket->ResumeLayout(false);
			this->groupBoxticket->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	panelEnquiry->Hide();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	panelEnquiry->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from databaserailway.traininfo2 where TrainNO='"+ textBox1->Text +"';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read()) {
			String^ tname = myReader->GetString("TrainName");
			String^ tfrom = myReader->GetString("StartFrom");
			String^ tto = myReader->GetString("GoTo");
			String^ tfare = myReader->GetInt32("FareValue").ToString();
			String^ tstatus = myReader->GetString("Status");
			label7->Text = tname;
			label8->Text = tfrom;
			label9->Text = tto;
			label10->Text = tfare;
			label11->Text = tstatus;

		}
		
		
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	ResultGroupbox->Show();
}





private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	BookOrCancel^ book = gcnew BookOrCancel(labeldata->Text);
	this->Hide();
	book->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panelcancel->Show();
	
}


private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from databaserailway.ticketinfo where PnrNo='" + textBox2->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read()) {
			String^ tstatus = myReader->GetString("TicketStatus");
			if (tstatus == "Confirm") {
				String^ pnr = myReader->GetInt32("PnrNo").ToString();
				label23->Text = pnr;
				String^ tno = myReader->GetInt32("TrainNo").ToString();
				label24->Text = tno;
				
				String^ tname = myReader->GetString("TrainName");
				label25->Text = tname;

				String^ tfrom = myReader->GetString("StartFrom");
				label26->Text = tfrom;
				String^ tto = myReader->GetString("GoTo");
				label27->Text = tto;
				String^ byname = myReader->GetString("username");
				label28->Text = byname;
				String^ amount = myReader->GetInt32("AmountPaid").ToString();
				label29->Text = amount;

				String^ adultno = myReader->GetInt32("AdultNo").ToString();
				label30->Text = adultno;
				String^ childno = myReader->GetInt32("ChildNo").ToString();
				label31->Text = childno;


				
				label32->Text = tstatus;

				groupBoxticketinfo->Show();

			}
			else {
				MessageBox::Show("Error occured: Ticked has already been canceled ");
			}
		}


	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	

}
private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
	groupBoxticketinfo->Hide();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update databaserailway.ticketinfo set TicketStatus='"+ labelcancel->Text+"' where( PnrNO='" + textBox2->Text + "');", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read()) {
			
			MessageBox::Show(":: Your ticket has been cancelled ::");
		}


	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}

private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	panelcancel->Hide();
}
};
}
