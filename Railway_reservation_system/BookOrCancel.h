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
	/// Summary for BookOrCancel
	/// </summary>
	public ref class BookOrCancel : public System::Windows::Forms::Form
	{
	public:
		BookOrCancel(void)
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}
		BookOrCancel(String^data)
		{
			InitializeComponent();
			label23->Text = data;
			FillFrom();

			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BookOrCancel()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::GroupBox^ groupBoxEnd;

	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ comboBoxfrom;

	private: System::Windows::Forms::GroupBox^ groupBoxstart;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ paneltrain;
	private: System::Windows::Forms::GroupBox^ trainchoosebox;
	private: System::Windows::Forms::ComboBox^ comboBox2;



	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panelTICKET;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBoxchild;
	private: System::Windows::Forms::TextBox^ textBoxadult;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label5;


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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBoxEnd = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBoxfrom = (gcnew System::Windows::Forms::ComboBox());
			this->groupBoxstart = (gcnew System::Windows::Forms::GroupBox());
			this->paneltrain = (gcnew System::Windows::Forms::Panel());
			this->panelTICKET = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
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
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->trainchoosebox = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxchild = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxadult = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBoxEnd->SuspendLayout();
			this->groupBoxstart->SuspendLayout();
			this->paneltrain->SuspendLayout();
			this->panelTICKET->SuspendLayout();
			this->trainchoosebox->SuspendLayout();
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Highlight;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::Info;
			this->button7->Location = System::Drawing::Point(182, 92);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(111, 45);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Search";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &BookOrCancel::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Highlight;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::Info;
			this->button8->Location = System::Drawing::Point(205, 389);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(111, 45);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Exit()";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &BookOrCancel::button8_Click);
			// 
			// groupBoxEnd
			// 
			this->groupBoxEnd->Controls->Add(this->comboBox3);
			this->groupBoxEnd->Controls->Add(this->button7);
			this->groupBoxEnd->Controls->Add(this->label1);
			this->groupBoxEnd->Location = System::Drawing::Point(23, 193);
			this->groupBoxEnd->Name = L"groupBoxEnd";
			this->groupBoxEnd->Size = System::Drawing::Size(518, 143);
			this->groupBoxEnd->TabIndex = 3;
			this->groupBoxEnd->TabStop = false;
			this->groupBoxEnd->Text = L"Journey Ends";
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::Menu;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(280, 46);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(182, 31);
			this->comboBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"To";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(38, 44);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(64, 23);
			this->label12->TabIndex = 0;
			this->label12->Text = L"From";
			// 
			// comboBoxfrom
			// 
			this->comboBoxfrom->BackColor = System::Drawing::SystemColors::Menu;
			this->comboBoxfrom->FormattingEnabled = true;
			this->comboBoxfrom->Location = System::Drawing::Point(280, 41);
			this->comboBoxfrom->Name = L"comboBoxfrom";
			this->comboBoxfrom->Size = System::Drawing::Size(182, 31);
			this->comboBoxfrom->TabIndex = 1;
			// 
			// groupBoxstart
			// 
			this->groupBoxstart->Controls->Add(this->button1);
			this->groupBoxstart->Controls->Add(this->comboBoxfrom);
			this->groupBoxstart->Controls->Add(this->label12);
			this->groupBoxstart->Location = System::Drawing::Point(23, 12);
			this->groupBoxstart->Name = L"groupBoxstart";
			this->groupBoxstart->Size = System::Drawing::Size(518, 143);
			this->groupBoxstart->TabIndex = 0;
			this->groupBoxstart->TabStop = false;
			this->groupBoxstart->Text = L"Journey Started";
			// 
			// paneltrain
			// 
			this->paneltrain->Controls->Add(this->panelTICKET);
			this->paneltrain->Controls->Add(this->button3);
			this->paneltrain->Controls->Add(this->trainchoosebox);
			this->paneltrain->Controls->Add(this->button2);
			this->paneltrain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->paneltrain->Location = System::Drawing::Point(0, 0);
			this->paneltrain->Name = L"paneltrain";
			this->paneltrain->Size = System::Drawing::Size(582, 455);
			this->paneltrain->TabIndex = 9;
			this->paneltrain->Visible = false;
			// 
			// panelTICKET
			// 
			this->panelTICKET->Controls->Add(this->label23);
			this->panelTICKET->Controls->Add(this->label5);
			this->panelTICKET->Controls->Add(this->button6);
			this->panelTICKET->Controls->Add(this->label22);
			this->panelTICKET->Controls->Add(this->label21);
			this->panelTICKET->Controls->Add(this->label20);
			this->panelTICKET->Controls->Add(this->label19);
			this->panelTICKET->Controls->Add(this->label18);
			this->panelTICKET->Controls->Add(this->label17);
			this->panelTICKET->Controls->Add(this->label16);
			this->panelTICKET->Controls->Add(this->label15);
			this->panelTICKET->Controls->Add(this->label14);
			this->panelTICKET->Controls->Add(this->label13);
			this->panelTICKET->Controls->Add(this->label11);
			this->panelTICKET->Controls->Add(this->label10);
			this->panelTICKET->Controls->Add(this->label9);
			this->panelTICKET->Controls->Add(this->label8);
			this->panelTICKET->Controls->Add(this->label7);
			this->panelTICKET->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelTICKET->Location = System::Drawing::Point(0, 0);
			this->panelTICKET->Name = L"panelTICKET";
			this->panelTICKET->Size = System::Drawing::Size(582, 455);
			this->panelTICKET->TabIndex = 12;
			this->panelTICKET->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label23->Location = System::Drawing::Point(254, 38);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(81, 23);
			this->label23->TabIndex = 17;
			this->label23->Text = L"lable23";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label5->Location = System::Drawing::Point(29, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 23);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Username:";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Highlight;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::Info;
			this->button6->Location = System::Drawing::Point(215, 378);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 45);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Confirm";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &BookOrCancel::button6_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 16.27826F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(171, 344);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(215, 31);
			this->label22->TabIndex = 14;
			this->label22->Text = L"Ticket  Booked";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(254, 310);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(81, 23);
			this->label21->TabIndex = 13;
			this->label21->Text = L"label21";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(254, 262);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(81, 23);
			this->label20->TabIndex = 12;
			this->label20->Text = L"label20";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(254, 219);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(81, 23);
			this->label19->TabIndex = 11;
			this->label19->Text = L"label19";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(367, 177);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(81, 23);
			this->label18->TabIndex = 10;
			this->label18->Text = L"label18";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(130, 177);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(81, 23);
			this->label17->TabIndex = 9;
			this->label17->Text = L"label17";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(254, 133);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(81, 23);
			this->label16->TabIndex = 8;
			this->label16->Text = L"label16";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(254, 85);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(81, 23);
			this->label15->TabIndex = 7;
			this->label15->Text = L"label15";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label14->Location = System::Drawing::Point(35, 310);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(98, 23);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Amount :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label13->Location = System::Drawing::Point(35, 262);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(104, 23);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Children:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label11->Location = System::Drawing::Point(29, 219);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(179, 23);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Adult Travellers:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label10->Location = System::Drawing::Point(275, 178);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 23);
			this->label10->TabIndex = 3;
			this->label10->Text = L"To:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label9->Location = System::Drawing::Point(28, 178);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 23);
			this->label9->TabIndex = 2;
			this->label9->Text = L"From:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label8->Location = System::Drawing::Point(28, 134);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(133, 23);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Train Name:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label7->Location = System::Drawing::Point(29, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 23);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Train NO:";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Highlight;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Info;
			this->button3->Location = System::Drawing::Point(65, 379);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 45);
			this->button3->TabIndex = 11;
			this->button3->Text = L"GO Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BookOrCancel::button3_Click);
			// 
			// trainchoosebox
			// 
			this->trainchoosebox->Controls->Add(this->textBoxchild);
			this->trainchoosebox->Controls->Add(this->label3);
			this->trainchoosebox->Controls->Add(this->label6);
			this->trainchoosebox->Controls->Add(this->textBoxadult);
			this->trainchoosebox->Controls->Add(this->comboBox2);
			this->trainchoosebox->Controls->Add(this->label2);
			this->trainchoosebox->Controls->Add(this->label4);
			this->trainchoosebox->Location = System::Drawing::Point(103, 27);
			this->trainchoosebox->Name = L"trainchoosebox";
			this->trainchoosebox->Size = System::Drawing::Size(393, 287);
			this->trainchoosebox->TabIndex = 0;
			this->trainchoosebox->TabStop = false;
			this->trainchoosebox->Text = L"Choose Train";
			// 
			// textBoxchild
			// 
			this->textBoxchild->Location = System::Drawing::Point(312, 161);
			this->textBoxchild->Name = L"textBoxchild";
			this->textBoxchild->Size = System::Drawing::Size(66, 30);
			this->textBoxchild->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 23);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Train Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(27, 168);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(274, 23);
			this->label6->TabIndex = 11;
			this->label6->Text = L"No Of Travellers(children)";
			// 
			// textBoxadult
			// 
			this->textBoxadult->Location = System::Drawing::Point(312, 104);
			this->textBoxadult->Name = L"textBoxadult";
			this->textBoxadult->Size = System::Drawing::Size(66, 30);
			this->textBoxadult->TabIndex = 12;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(211, 51);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(176, 31);
			this->comboBox2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 23);
			this->label2->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(244, 23);
			this->label4->TabIndex = 9;
			this->label4->Text = L"No Of Travellers(Adult)";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Highlight;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Info;
			this->button2->Location = System::Drawing::Point(333, 379);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 45);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Book Ticket";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &BookOrCancel::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Info;
			this->button1->Location = System::Drawing::Point(182, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 45);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BookOrCancel::button1_Click);
			// 
			// BookOrCancel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(582, 455);
			this->Controls->Add(this->paneltrain);
			this->Controls->Add(this->groupBoxEnd);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->groupBoxstart);
			this->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.89565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"BookOrCancel";
			this->Text = L"Booking";
			this->groupBoxEnd->ResumeLayout(false);
			this->groupBoxEnd->PerformLayout();
			this->groupBoxstart->ResumeLayout(false);
			this->groupBoxstart->PerformLayout();
			this->paneltrain->ResumeLayout(false);
			this->panelTICKET->ResumeLayout(false);
			this->panelTICKET->PerformLayout();
			this->trainchoosebox->ResumeLayout(false);
			this->trainchoosebox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from databaserailway.traininfo2  ;", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read()) {

			String^ tfrom = myReader->GetString("GoTo");
			comboBox3->Items->Add(tfrom);

		}

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	groupBoxEnd->Show();
}
	   
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from databaserailway.traininfo2 where StartFrom='" + comboBoxfrom->Text + "' and GoTo='" + comboBox3->Text + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read()) {

			String^ tName = myReader->GetString("TrainName");
			comboBox2->Items->Add(tName);
			String^ tfare = myReader->GetString("TrainName");
			

		}

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	
	paneltrain->Show();
}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//database//
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from databaserailway.traininfo2 where TrainName='" + comboBox2->Text + "' and StartFrom='" + comboBoxfrom->Text + "' and GoTo='" + comboBox3->Text + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	int fareint;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read()) {

			String^ tNo = myReader->GetString("TrainNO");
			label15->Text = tNo;
			String^ tfare = myReader->GetString("FareValue");
			 fareint = System::Convert::ToInt32(tfare);


		}

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}


	//string//
	String^ tname = comboBox2->Text;
	label16->Text = tname;

	String^ tfrom = comboBoxfrom->Text;
	label17->Text = tfrom;

	String^ tTo = comboBox3->Text;
	label18->Text = tTo;

	String^ adult = textBoxadult->Text;
	int adultint = System::Convert::ToInt32(adult);
	label19->Text = textBoxadult->Text;

	String^ child = textBoxadult->Text;
	int childint = System::Convert::ToInt32(child);
	label20->Text = textBoxchild->Text;

	int childfare = fareint / 2;
	
	int amount = adultint * fareint + childint*childfare;
	String^ amountstring = System::Convert::ToString(amount);
	label21->Text = amountstring;
	panelTICKET->Show();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	paneltrain->Hide();
}





private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into databaserailway.ticketinfo ( UserName, TrainNO, TrainName, StartFrom, GoTo, AdultNo, ChildNo, AmountPaid) values('" + label23->Text + "','" + label15->Text + "','" + label16->Text + "','" + label17->Text + "','" + label18->Text + "','" + label19->Text + "','" + label20->Text + "','" + label21->Text + "');", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("::Ticked Booked::");
		
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	Application::Exit();
}
private: void FillFrom(void) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from databaserailway.traininfo2 ;", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read()) {

			String^ tfrom = myReader->GetString("StartFrom");
			comboBoxfrom->Items->Add(tfrom);

		}

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}



};
}
