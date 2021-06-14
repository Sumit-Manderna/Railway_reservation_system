#pragma once


namespace Railwayreservationsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AdminInterface
	/// </summary>
	public ref class AdminInterface : public System::Windows::Forms::Form
	{
	public:
		AdminInterface(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminInterface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Panel^ paneluserinfo;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ paneltraininfo;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::GroupBox^ groupBox3;





	private: System::Windows::Forms::TextBox^ textFare;

	private: System::Windows::Forms::TextBox^ textTo;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textstart;

	private: System::Windows::Forms::TextBox^ textName;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textNO;

	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ panelupdateuser;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::GroupBox^ groupBoxupdateuser;
	private: System::Windows::Forms::TextBox^ textBoxage;
	private: System::Windows::Forms::TextBox^ textBoxpassword;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBoxusername;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBoxcurrent;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panelupdatetrain;
	private: System::Windows::Forms::GroupBox^ groupboxnewinfo;
	private: System::Windows::Forms::TextBox^ textBoxnewfare;


	private: System::Windows::Forms::TextBox^ textBoxnewto;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBoxnewfrom;

	private: System::Windows::Forms::TextBox^ textBoxnewname;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBoxnewno;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::GroupBox^ groupBox5;
private: System::Windows::Forms::TextBox^ textBoxoldtno;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::TextBox^ textBoxnewstatus;
private: System::Windows::Forms::Label^ label14;
	protected:

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
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->paneluserinfo = (gcnew System::Windows::Forms::Panel());
			this->paneltraininfo = (gcnew System::Windows::Forms::Panel());
			this->panelupdateuser = (gcnew System::Windows::Forms::Panel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBoxcurrent = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBoxupdateuser = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBoxage = (gcnew System::Windows::Forms::TextBox());
			this->textBoxpassword = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxusername = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textFare = (gcnew System::Windows::Forms::TextBox());
			this->textTo = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textstart = (gcnew System::Windows::Forms::TextBox());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textNO = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelupdatetrain = (gcnew System::Windows::Forms::Panel());
			this->groupboxnewinfo = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxnewstatus = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBoxnewfare = (gcnew System::Windows::Forms::TextBox());
			this->textBoxnewto = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBoxnewfrom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxnewname = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBoxnewno = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBoxoldtno = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->paneluserinfo->SuspendLayout();
			this->paneltraininfo->SuspendLayout();
			this->panelupdateuser->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBoxupdateuser->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panelupdatetrain->SuspendLayout();
			this->groupboxnewinfo->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 13.77391F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(98, 75);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(382, 314);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Welcome Admin";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Highlight;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::Info;
			this->button9->Location = System::Drawing::Point(88, 118);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(198, 45);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Update Train info";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &AdminInterface::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Highlight;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::Info;
			this->button8->Location = System::Drawing::Point(88, 247);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(198, 45);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Update User Info";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &AdminInterface::button8_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Highlight;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Info;
			this->button2->Location = System::Drawing::Point(88, 182);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(198, 45);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Add  User Info";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AdminInterface::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Info;
			this->button1->Location = System::Drawing::Point(88, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 45);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Edit Train Info";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminInterface::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Highlight;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Info;
			this->button3->Location = System::Drawing::Point(226, 392);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 45);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Exit()";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AdminInterface::button3_Click);
			// 
			// paneluserinfo
			// 
			this->paneluserinfo->Controls->Add(this->button4);
			this->paneluserinfo->Controls->Add(this->button5);
			this->paneluserinfo->Controls->Add(this->groupBox2);
			this->paneluserinfo->Location = System::Drawing::Point(2, 56);
			this->paneluserinfo->Name = L"paneluserinfo";
			this->paneluserinfo->Size = System::Drawing::Size(582, 455);
			this->paneluserinfo->TabIndex = 10;
			this->paneluserinfo->Visible = false;
			// 
			// paneltraininfo
			// 
			this->paneltraininfo->Controls->Add(this->button6);
			this->paneltraininfo->Controls->Add(this->button7);
			this->paneltraininfo->Controls->Add(this->groupBox3);
			this->paneltraininfo->Location = System::Drawing::Point(-1, 26);
			this->paneltraininfo->Name = L"paneltraininfo";
			this->paneltraininfo->Size = System::Drawing::Size(582, 455);
			this->paneltraininfo->TabIndex = 11;
			this->paneltraininfo->Visible = false;
			// 
			// panelupdateuser
			// 
			this->panelupdateuser->Controls->Add(this->groupBox4);
			this->panelupdateuser->Controls->Add(this->groupBoxupdateuser);
			this->panelupdateuser->Location = System::Drawing::Point(-1, 12);
			this->panelupdateuser->Name = L"panelupdateuser";
			this->panelupdateuser->Size = System::Drawing::Size(582, 455);
			this->panelupdateuser->TabIndex = 11;
			this->panelupdateuser->Visible = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button12);
			this->groupBox4->Controls->Add(this->textBoxcurrent);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Location = System::Drawing::Point(88, 12);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(392, 141);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Enter Current Username";
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::Highlight;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::Info;
			this->button12->Location = System::Drawing::Point(123, 100);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(95, 35);
			this->button12->TabIndex = 10;
			this->button12->Text = L"Next";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &AdminInterface::button12_Click);
			// 
			// textBoxcurrent
			// 
			this->textBoxcurrent->BackColor = System::Drawing::SystemColors::Menu;
			this->textBoxcurrent->Location = System::Drawing::Point(206, 46);
			this->textBoxcurrent->Name = L"textBoxcurrent";
			this->textBoxcurrent->Size = System::Drawing::Size(152, 30);
			this->textBoxcurrent->TabIndex = 2;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(26, 49);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(111, 23);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Username";
			// 
			// groupBoxupdateuser
			// 
			this->groupBoxupdateuser->BackColor = System::Drawing::SystemColors::Info;
			this->groupBoxupdateuser->Controls->Add(this->button10);
			this->groupBoxupdateuser->Controls->Add(this->button11);
			this->groupBoxupdateuser->Controls->Add(this->textBoxage);
			this->groupBoxupdateuser->Controls->Add(this->textBoxpassword);
			this->groupBoxupdateuser->Controls->Add(this->label10);
			this->groupBoxupdateuser->Controls->Add(this->label11);
			this->groupBoxupdateuser->Controls->Add(this->textBoxusername);
			this->groupBoxupdateuser->Controls->Add(this->label12);
			this->groupBoxupdateuser->ForeColor = System::Drawing::SystemColors::InfoText;
			this->groupBoxupdateuser->Location = System::Drawing::Point(60, 175);
			this->groupBoxupdateuser->Name = L"groupBoxupdateuser";
			this->groupBoxupdateuser->Size = System::Drawing::Size(463, 251);
			this->groupBoxupdateuser->TabIndex = 1;
			this->groupBoxupdateuser->TabStop = false;
			this->groupBoxupdateuser->Text = L"Enter  Existing User  New Info";
			this->groupBoxupdateuser->Visible = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::Highlight;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::Info;
			this->button10->Location = System::Drawing::Point(239, 200);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(111, 45);
			this->button10->TabIndex = 8;
			this->button10->Text = L"Submit";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &AdminInterface::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::Highlight;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::Info;
			this->button11->Location = System::Drawing::Point(122, 200);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(111, 45);
			this->button11->TabIndex = 9;
			this->button11->Text = L"Back";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &AdminInterface::button11_Click);
			// 
			// textBoxage
			// 
			this->textBoxage->BackColor = System::Drawing::SystemColors::Menu;
			this->textBoxage->Location = System::Drawing::Point(206, 152);
			this->textBoxage->Name = L"textBoxage";
			this->textBoxage->Size = System::Drawing::Size(152, 30);
			this->textBoxage->TabIndex = 5;
			// 
			// textBoxpassword
			// 
			this->textBoxpassword->BackColor = System::Drawing::SystemColors::Menu;
			this->textBoxpassword->Location = System::Drawing::Point(206, 100);
			this->textBoxpassword->Name = L"textBoxpassword";
			this->textBoxpassword->Size = System::Drawing::Size(152, 30);
			this->textBoxpassword->TabIndex = 4;
			this->textBoxpassword->UseSystemPasswordChar = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(16, 159);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 23);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Age";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(16, 107);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(108, 23);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Password";
			// 
			// textBoxusername
			// 
			this->textBoxusername->BackColor = System::Drawing::SystemColors::Menu;
			this->textBoxusername->Location = System::Drawing::Point(206, 47);
			this->textBoxusername->Name = L"textBoxusername";
			this->textBoxusername->Size = System::Drawing::Size(152, 30);
			this->textBoxusername->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(16, 54);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(111, 23);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Username";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Highlight;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::Info;
			this->button6->Location = System::Drawing::Point(166, 371);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(111, 45);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Back";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &AdminInterface::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Highlight;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::Info;
			this->button7->Location = System::Drawing::Point(283, 370);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(111, 45);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Add";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &AdminInterface::button7_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox3->Controls->Add(this->textFare);
			this->groupBox3->Controls->Add(this->textTo);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->textstart);
			this->groupBox3->Controls->Add(this->textName);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->textNO);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->ForeColor = System::Drawing::SystemColors::InfoText;
			this->groupBox3->Location = System::Drawing::Point(51, 33);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(481, 332);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Enter  New Train Info";
			// 
			// textFare
			// 
			this->textFare->BackColor = System::Drawing::SystemColors::Menu;
			this->textFare->Location = System::Drawing::Point(206, 267);
			this->textFare->Name = L"textFare";
			this->textFare->Size = System::Drawing::Size(152, 30);
			this->textFare->TabIndex = 9;
			// 
			// textTo
			// 
			this->textTo->BackColor = System::Drawing::SystemColors::Menu;
			this->textTo->Location = System::Drawing::Point(206, 207);
			this->textTo->Name = L"textTo";
			this->textTo->Size = System::Drawing::Size(152, 30);
			this->textTo->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 274);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 23);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Fare";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 214);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 23);
			this->label7->TabIndex = 6;
			this->label7->Text = L"To";
			// 
			// textstart
			// 
			this->textstart->BackColor = System::Drawing::SystemColors::Menu;
			this->textstart->Location = System::Drawing::Point(206, 152);
			this->textstart->Name = L"textstart";
			this->textstart->Size = System::Drawing::Size(152, 30);
			this->textstart->TabIndex = 5;
			// 
			// textName
			// 
			this->textName->BackColor = System::Drawing::SystemColors::Menu;
			this->textName->Location = System::Drawing::Point(206, 100);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(152, 30);
			this->textName->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 159);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 23);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Form";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(128, 23);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Train Name";
			// 
			// textNO
			// 
			this->textNO->BackColor = System::Drawing::SystemColors::Menu;
			this->textNO->Location = System::Drawing::Point(206, 47);
			this->textNO->Name = L"textNO";
			this->textNO->Size = System::Drawing::Size(152, 30);
			this->textNO->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 23);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Trian NO";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Highlight;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::Info;
			this->button4->Location = System::Drawing::Point(166, 305);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 45);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AdminInterface::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Highlight;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Info;
			this->button5->Location = System::Drawing::Point(283, 305);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(111, 45);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Add";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &AdminInterface::button5_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::InfoText;
			this->groupBox2->Location = System::Drawing::Point(94, 79);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(392, 218);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Enter  New User Info";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox3->Location = System::Drawing::Point(206, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(152, 30);
			this->textBox3->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox2->Location = System::Drawing::Point(206, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(152, 30);
			this->textBox2->TabIndex = 4;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 23);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Age";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1->Location = System::Drawing::Point(206, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 30);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			// 
			// panelupdatetrain
			// 
			this->panelupdatetrain->Controls->Add(this->groupboxnewinfo);
			this->panelupdatetrain->Controls->Add(this->groupBox5);
			this->panelupdatetrain->Location = System::Drawing::Point(2, 0);
			this->panelupdatetrain->Name = L"panelupdatetrain";
			this->panelupdatetrain->Size = System::Drawing::Size(582, 455);
			this->panelupdatetrain->TabIndex = 11;
			this->panelupdatetrain->Visible = false;
			// 
			// groupboxnewinfo
			// 
			this->groupboxnewinfo->BackColor = System::Drawing::SystemColors::Info;
			this->groupboxnewinfo->Controls->Add(this->textBoxnewstatus);
			this->groupboxnewinfo->Controls->Add(this->label14);
			this->groupboxnewinfo->Controls->Add(this->button16);
			this->groupboxnewinfo->Controls->Add(this->button15);
			this->groupboxnewinfo->Controls->Add(this->textBoxnewfare);
			this->groupboxnewinfo->Controls->Add(this->textBoxnewto);
			this->groupboxnewinfo->Controls->Add(this->label15);
			this->groupboxnewinfo->Controls->Add(this->label16);
			this->groupboxnewinfo->Controls->Add(this->textBoxnewfrom);
			this->groupboxnewinfo->Controls->Add(this->textBoxnewname);
			this->groupboxnewinfo->Controls->Add(this->label17);
			this->groupboxnewinfo->Controls->Add(this->label18);
			this->groupboxnewinfo->Controls->Add(this->textBoxnewno);
			this->groupboxnewinfo->Controls->Add(this->label19);
			this->groupboxnewinfo->ForeColor = System::Drawing::SystemColors::InfoText;
			this->groupboxnewinfo->Location = System::Drawing::Point(57, 41);
			this->groupboxnewinfo->Name = L"groupboxnewinfo";
			this->groupboxnewinfo->Size = System::Drawing::Size(481, 370);
			this->groupboxnewinfo->TabIndex = 1;
			this->groupboxnewinfo->TabStop = false;
			this->groupboxnewinfo->Text = L"Enter  New Train Info";
			this->groupboxnewinfo->Visible = false;
			// 
			// textBoxnewstatus
			// 
			this->textBoxnewstatus->BackColor = System::Drawing::SystemColors::Menu;
			this->textBoxnewstatus->Location = System::Drawing::Point(279, 257);
			this->textBoxnewstatus->Name = L"textBoxnewstatus";
			this->textBoxnewstatus->Size = System::Drawing::Size(152, 30);
			this->textBoxnewstatus->TabIndex = 13;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(34, 260);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(79, 23);
			this->label14->TabIndex = 12;
			this->label14->Text = L"Status:";
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::Highlight;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::Info;
			this->button16->Location = System::Drawing::Point(130, 311);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(94, 39);
			this->button16->TabIndex = 11;
			this->button16->Text = L"Back";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &AdminInterface::button16_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::Highlight;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::Info;
			this->button15->Location = System::Drawing::Point(230, 311);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(94, 39);
			this->button15->TabIndex = 10;
			this->button15->Text = L"Submit";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &AdminInterface::button15_Click);
			// 
			// textBoxnewfare
			// 
			this->textBoxnewfare->BackColor = System::Drawing::SystemColors::Menu;
			this->textBoxnewfare->Location = System::Drawing::Point(279, 201);
			this->textBoxnewfare->Name = L"textBoxnewfare";
			this->textBoxnewfare->Size = System::Drawing::Size(152, 30);
			this->textBoxnewfare->TabIndex = 9;
			// 
			// textBoxnewto
			// 
			this->textBoxnewto->BackColor = System::Drawing::SystemColors::Menu;
			this->textBoxnewto->Location = System::Drawing::Point(308, 143);
			this->textBoxnewto->Name = L"textBoxnewto";
			this->textBoxnewto->Size = System::Drawing::Size(152, 30);
			this->textBoxnewto->TabIndex = 8;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(34, 204);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(62, 23);
			this->label15->TabIndex = 7;
			this->label15->Text = L"Fare:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(251, 148);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 23);
			this->label16->TabIndex = 6;
			this->label16->Text = L"To:";
			// 
			// textBoxnewfrom
			// 
			this->textBoxnewfrom->BackColor = System::Drawing::SystemColors::Menu;
			this->textBoxnewfrom->Location = System::Drawing::Point(85, 145);
			this->textBoxnewfrom->Name = L"textBoxnewfrom";
			this->textBoxnewfrom->Size = System::Drawing::Size(139, 30);
			this->textBoxnewfrom->TabIndex = 5;
			// 
			// textBoxnewname
			// 
			this->textBoxnewname->BackColor = System::Drawing::SystemColors::Menu;
			this->textBoxnewname->Location = System::Drawing::Point(279, 89);
			this->textBoxnewname->Name = L"textBoxnewname";
			this->textBoxnewname->Size = System::Drawing::Size(152, 30);
			this->textBoxnewname->TabIndex = 4;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 146);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(69, 23);
			this->label17->TabIndex = 3;
			this->label17->Text = L"Form:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(34, 80);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(133, 23);
			this->label18->TabIndex = 2;
			this->label18->Text = L"Train Name:";
			// 
			// textBoxnewno
			// 
			this->textBoxnewno->BackColor = System::Drawing::SystemColors::Menu;
			this->textBoxnewno->Location = System::Drawing::Point(279, 35);
			this->textBoxnewno->Name = L"textBoxnewno";
			this->textBoxnewno->Size = System::Drawing::Size(152, 30);
			this->textBoxnewno->TabIndex = 1;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(34, 35);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(108, 23);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Trian NO:";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button14);
			this->groupBox5->Controls->Add(this->button13);
			this->groupBox5->Controls->Add(this->textBoxoldtno);
			this->groupBox5->Controls->Add(this->label20);
			this->groupBox5->Location = System::Drawing::Point(92, 103);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(376, 114);
			this->groupBox5->TabIndex = 0;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Enter Existing Train info";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::Highlight;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::Info;
			this->button14->Location = System::Drawing::Point(93, 73);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(88, 36);
			this->button14->TabIndex = 7;
			this->button14->Text = L"Back";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &AdminInterface::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::Highlight;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::Info;
			this->button13->Location = System::Drawing::Point(187, 71);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(88, 36);
			this->button13->TabIndex = 6;
			this->button13->Text = L"Next";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &AdminInterface::button13_Click);
			// 
			// textBoxoldtno
			// 
			this->textBoxoldtno->BackColor = System::Drawing::SystemColors::Menu;
			this->textBoxoldtno->Location = System::Drawing::Point(181, 32);
			this->textBoxoldtno->Name = L"textBoxoldtno";
			this->textBoxoldtno->Size = System::Drawing::Size(152, 30);
			this->textBoxoldtno->TabIndex = 2;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(21, 35);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(103, 23);
			this->label20->TabIndex = 1;
			this->label20->Text = L"Trian NO";
			// 
			// AdminInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(582, 455);
			this->Controls->Add(this->panelupdatetrain);
			this->Controls->Add(this->panelupdateuser);
			this->Controls->Add(this->paneltraininfo);
			this->Controls->Add(this->paneluserinfo);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"AdminInterface";
			this->Text = L"AdminInterface";
			this->groupBox1->ResumeLayout(false);
			this->paneluserinfo->ResumeLayout(false);
			this->paneltraininfo->ResumeLayout(false);
			this->panelupdateuser->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBoxupdateuser->ResumeLayout(false);
			this->groupBoxupdateuser->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panelupdatetrain->ResumeLayout(false);
			this->groupboxnewinfo->ResumeLayout(false);
			this->groupboxnewinfo->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	paneluserinfo->Show();
		
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into databaserailway.userinfo (username,password,age) values('" + textBox1->Text +"','" + textBox2->Text + "','" + textBox3->Text + "');", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Data successfullly Added");
		paneluserinfo->Hide();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	paneluserinfo->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	paneltraininfo->Show();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	paneltraininfo->Hide();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into databaserailway.traininfo2 (TrainNO, TrainName, StartFrom, GoTo, FareValue) values('" + textNO->Text + "','" + textName->Text + "','" + textstart->Text + "','" + textTo->Text + "','" + textFare->Text + "');", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Data successfullly Added");
		paneltraininfo->Hide();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	panelupdatetrain->Show();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	panelupdateuser->Show();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	panelupdateuser->Hide();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update databaserailway.userinfo set username='" + textBoxusername->Text + "', password='" + textBoxpassword->Text + "',age='" + textBoxage->Text + "' where(username='" + textBoxcurrent->Text + "') ;", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Data successfullly updated");
		panelupdateuser->Hide();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBoxupdateuser->Show();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	groupboxnewinfo->Show();
}

private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	groupboxnewinfo->Hide();
}

private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update databaserailway.traininfo2 set TrainNO='" + textBoxnewno->Text + "', TrainName='" + textBoxnewname->Text + "', StartFrom='" + textBoxnewfrom->Text + "', GoTo='" + textBoxnewto->Text + "', fareValue='" + textBoxnewfare->Text + "', Status='" + textBoxnewstatus->Text + "' where(TrainNO='" + textBoxoldtno->Text + "') ;", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Data successfullly Updated");
		panelupdatetrain->Hide();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	panelupdatetrain->Hide();
}
};
}
