#pragma once

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//

			cmbCurrency->Text=("Choose Item");    
			cmbCurrency->Items->Add("Nigeria");
			cmbCurrency->Items->Add("South Africa");
			cmbCurrency->Items->Add("USA");
			cmbCurrency->Items->Add("India");
			cmbCurrency->Items->Add("Canada");
			cmbCurrency->Items->Add("Kenya");
			cmbCurrency->Items->Add("Brazil");


			cmbDrinks->Items->Add("Choose item");
			cmbDrinks->Items->Add("Coke");
			cmbDrinks->Items->Add("Sprite");
			cmbDrinks->Items->Add("Fanta Orange");
			cmbDrinks->Items->Add("Fanta Pine");
			cmbDrinks->Items->Add("Fanta Grape");
			cmbDrinks->Items->Add("Lemon twist");
			cmbDrinks->Items->Add("Water");
			cmbDrinks->Items->Add("Cofee");
			cmbDrinks->Items->Add("Tea");

			timer1->Start();

		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  newToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  openToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  saveToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  printToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^  cutToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  copyToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  pasteToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  helpToolStripButton;
	private: System::Windows::Forms::RichTextBox^  rtbReceipt;
	private: System::Windows::Forms::Button^  btnCl;

	private: System::Windows::Forms::Button^  btnEquals;
	private: System::Windows::Forms::Button^  btnDevide;



	private: System::Windows::Forms::Button^  btnZero;

	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnmultiply;



	private: System::Windows::Forms::Button^  btn1;

	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  buttonMinus;





	private: System::Windows::Forms::Button^  btn4;


	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnPlus;



	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::TextBox^  txtDisplay;
	private: System::Windows::Forms::TextBox^  txtDrinkSold;
	private: System::Windows::Forms::TextBox^  txtCostOfMeal;
	private: System::Windows::Forms::TextBox^  txtCostOfDelivery;
	private: System::Windows::Forms::Label^  lblDelivery;










private: System::Windows::Forms::Label^  lblDrink;

private: System::Windows::Forms::CheckBox^  chckChickenMeal;

private: System::Windows::Forms::CheckBox^  chckCheese;

private: System::Windows::Forms::CheckBox^  chckBeef;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Button^  btnCurrencyClick;

	private: System::Windows::Forms::NumericUpDown^  nmDrink;

	private: System::Windows::Forms::ComboBox^  cmbDrinks;
	private: System::Windows::Forms::TextBox^  txtTotalAmount;



private: System::Windows::Forms::TextBox^  txtTax;

private: System::Windows::Forms::TextBox^  txtSubTotal;
private: System::Windows::Forms::Label^  lblTotalAmount;
private: System::Windows::Forms::Label^  lblTax;



private: System::Windows::Forms::Label^  lblSubtotal;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::TextBox^  txtBeefBurger;
private: System::Windows::Forms::TextBox^  txtCheeseBurger;
private: System::Windows::Forms::TextBox^  txtChickBurger;
private: System::Windows::Forms::Label^  lblTotalCostDelivery;




private: System::Windows::Forms::Label^  lblTotalCostMeal;

private: System::Windows::Forms::Label^  lblDrinkSold;

	private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Button^  btnExitClick;

private: System::Windows::Forms::Button^  btnResetClick;

private: System::Windows::Forms::Button^  btnCostOFMeal;

private: System::Windows::Forms::ComboBox^  cmbCurrency;

private: System::Windows::Forms::Button^  btnClose;

private: System::Windows::Forms::Button^  btnConvert;
private: System::Windows::Forms::TextBox^  txtCurrency;
private: System::Windows::Forms::Label^  lblCurrency;
private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::NumericUpDown^  numDelivery;
private: System::Windows::Forms::Label^  lbltime;
private: System::Windows::Forms::Label^  lblDate;
private: System::Windows::Forms::Timer^  timer1;
private: System::Windows::Forms::Timer^  timer2;
private: System::ComponentModel::IContainer^  components;
















	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->numDelivery = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtBeefBurger = (gcnew System::Windows::Forms::TextBox());
			this->cmbDrinks = (gcnew System::Windows::Forms::ComboBox());
			this->txtCheeseBurger = (gcnew System::Windows::Forms::TextBox());
			this->nmDrink = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtChickBurger = (gcnew System::Windows::Forms::TextBox());
			this->lblDelivery = (gcnew System::Windows::Forms::Label());
			this->lblDrink = (gcnew System::Windows::Forms::Label());
			this->chckChickenMeal = (gcnew System::Windows::Forms::CheckBox());
			this->chckCheese = (gcnew System::Windows::Forms::CheckBox());
			this->chckBeef = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnCurrencyClick = (gcnew System::Windows::Forms::Button());
			this->cmbCurrency = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblCurrency = (gcnew System::Windows::Forms::Label());
			this->txtCurrency = (gcnew System::Windows::Forms::TextBox());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->txtTotalAmount = (gcnew System::Windows::Forms::TextBox());
			this->txtTax = (gcnew System::Windows::Forms::TextBox());
			this->txtSubTotal = (gcnew System::Windows::Forms::TextBox());
			this->lblTotalAmount = (gcnew System::Windows::Forms::Label());
			this->lblTax = (gcnew System::Windows::Forms::Label());
			this->lblSubtotal = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->txtCostOfMeal = (gcnew System::Windows::Forms::TextBox());
			this->txtDrinkSold = (gcnew System::Windows::Forms::TextBox());
			this->lblTotalCostDelivery = (gcnew System::Windows::Forms::Label());
			this->txtCostOfDelivery = (gcnew System::Windows::Forms::TextBox());
			this->lblTotalCostMeal = (gcnew System::Windows::Forms::Label());
			this->lblDrinkSold = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnExitClick = (gcnew System::Windows::Forms::Button());
			this->btnResetClick = (gcnew System::Windows::Forms::Button());
			this->btnCostOFMeal = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnCl = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->btnDevide = (gcnew System::Windows::Forms::Button());
			this->btnZero = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnmultiply = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->rtbReceipt = (gcnew System::Windows::Forms::RichTextBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->newToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->openToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->printToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->copyToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->pasteToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->helpToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->lbltime = (gcnew System::Windows::Forms::Label());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDelivery))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nmDrink))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(-9, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1365, 100);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Restaurant Management System";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel1->Controls->Add(this->numDelivery);
			this->panel1->Controls->Add(this->txtBeefBurger);
			this->panel1->Controls->Add(this->cmbDrinks);
			this->panel1->Controls->Add(this->txtCheeseBurger);
			this->panel1->Controls->Add(this->nmDrink);
			this->panel1->Controls->Add(this->txtChickBurger);
			this->panel1->Controls->Add(this->lblDelivery);
			this->panel1->Controls->Add(this->lblDrink);
			this->panel1->Controls->Add(this->chckChickenMeal);
			this->panel1->Controls->Add(this->chckCheese);
			this->panel1->Controls->Add(this->chckBeef);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(0, 103);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(411, 223);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// numDelivery
			// 
			this->numDelivery->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numDelivery->Location = System::Drawing::Point(206, 196);
			this->numDelivery->Name = L"numDelivery";
			this->numDelivery->Size = System::Drawing::Size(60, 20);
			this->numDelivery->TabIndex = 21;
			// 
			// txtBeefBurger
			// 
			this->txtBeefBurger->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBeefBurger->Location = System::Drawing::Point(206, 54);
			this->txtBeefBurger->Name = L"txtBeefBurger";
			this->txtBeefBurger->Size = System::Drawing::Size(159, 22);
			this->txtBeefBurger->TabIndex = 20;
			this->txtBeefBurger->Text = L"0";
			this->txtBeefBurger->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// cmbDrinks
			// 
			this->cmbDrinks->FormattingEnabled = true;
			this->cmbDrinks->Location = System::Drawing::Point(206, 162);
			this->cmbDrinks->Name = L"cmbDrinks";
			this->cmbDrinks->Size = System::Drawing::Size(96, 21);
			this->cmbDrinks->TabIndex = 14;
			this->cmbDrinks->Text = L"Choose Item";
			// 
			// txtCheeseBurger
			// 
			this->txtCheeseBurger->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCheeseBurger->Location = System::Drawing::Point(206, 94);
			this->txtCheeseBurger->Name = L"txtCheeseBurger";
			this->txtCheeseBurger->Size = System::Drawing::Size(159, 22);
			this->txtCheeseBurger->TabIndex = 19;
			this->txtCheeseBurger->Text = L"0";
			this->txtCheeseBurger->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// nmDrink
			// 
			this->nmDrink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nmDrink->Location = System::Drawing::Point(305, 163);
			this->nmDrink->Name = L"nmDrink";
			this->nmDrink->Size = System::Drawing::Size(60, 20);
			this->nmDrink->TabIndex = 13;
			this->nmDrink->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// txtChickBurger
			// 
			this->txtChickBurger->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtChickBurger->Location = System::Drawing::Point(206, 135);
			this->txtChickBurger->Name = L"txtChickBurger";
			this->txtChickBurger->Size = System::Drawing::Size(159, 22);
			this->txtChickBurger->TabIndex = 15;
			this->txtChickBurger->Text = L"0";
			this->txtChickBurger->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lblDelivery
			// 
			this->lblDelivery->AutoSize = true;
			this->lblDelivery->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDelivery->ForeColor = System::Drawing::SystemColors::Control;
			this->lblDelivery->Location = System::Drawing::Point(20, 196);
			this->lblDelivery->Name = L"lblDelivery";
			this->lblDelivery->Size = System::Drawing::Size(111, 16);
			this->lblDelivery->TabIndex = 7;
			this->lblDelivery->Text = L"Home Delivery";
			// 
			// lblDrink
			// 
			this->lblDrink->AutoSize = true;
			this->lblDrink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDrink->ForeColor = System::Drawing::SystemColors::Control;
			this->lblDrink->Location = System::Drawing::Point(20, 167);
			this->lblDrink->Name = L"lblDrink";
			this->lblDrink->Size = System::Drawing::Size(52, 16);
			this->lblDrink->TabIndex = 6;
			this->lblDrink->Text = L"Drinks";
			// 
			// chckChickenMeal
			// 
			this->chckChickenMeal->AutoSize = true;
			this->chckChickenMeal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chckChickenMeal->ForeColor = System::Drawing::SystemColors::Control;
			this->chckChickenMeal->Location = System::Drawing::Point(23, 135);
			this->chckChickenMeal->Name = L"chckChickenMeal";
			this->chckChickenMeal->Size = System::Drawing::Size(170, 20);
			this->chckChickenMeal->TabIndex = 5;
			this->chckChickenMeal->Text = L"Chicken Burger Meal";
			this->chckChickenMeal->UseVisualStyleBackColor = true;
			// 
			// chckCheese
			// 
			this->chckCheese->AutoSize = true;
			this->chckCheese->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chckCheese->ForeColor = System::Drawing::SystemColors::Control;
			this->chckCheese->Location = System::Drawing::Point(23, 96);
			this->chckCheese->Name = L"chckCheese";
			this->chckCheese->Size = System::Drawing::Size(130, 20);
			this->chckCheese->TabIndex = 4;
			this->chckCheese->Text = L"Cheese Burger";
			this->chckCheese->UseVisualStyleBackColor = true;
			// 
			// chckBeef
			// 
			this->chckBeef->AutoSize = true;
			this->chckBeef->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chckBeef->ForeColor = System::Drawing::SystemColors::Control;
			this->chckBeef->Location = System::Drawing::Point(23, 54);
			this->chckBeef->Name = L"chckBeef";
			this->chckBeef->Size = System::Drawing::Size(109, 20);
			this->chckBeef->TabIndex = 3;
			this->chckBeef->Text = L"Beef Burger";
			this->chckBeef->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(405, 36);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Select Meal";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnCurrencyClick
			// 
			this->btnCurrencyClick->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCurrencyClick->Location = System::Drawing::Point(6, 42);
			this->btnCurrencyClick->Name = L"btnCurrencyClick";
			this->btnCurrencyClick->Size = System::Drawing::Size(405, 177);
			this->btnCurrencyClick->TabIndex = 0;
			this->btnCurrencyClick->Text = L"Currency Converter";
			this->btnCurrencyClick->UseVisualStyleBackColor = true;
			this->btnCurrencyClick->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// cmbCurrency
			// 
			this->cmbCurrency->FormattingEnabled = true;
			this->cmbCurrency->Location = System::Drawing::Point(108, 55);
			this->cmbCurrency->Name = L"cmbCurrency";
			this->cmbCurrency->Size = System::Drawing::Size(169, 21);
			this->cmbCurrency->TabIndex = 21;
			this->cmbCurrency->Text = L"Choose One";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel2->Controls->Add(this->lblCurrency);
			this->panel2->Controls->Add(this->btnCurrencyClick);
			this->panel2->Controls->Add(this->txtCurrency);
			this->panel2->Controls->Add(this->btnClose);
			this->panel2->Controls->Add(this->btnConvert);
			this->panel2->Controls->Add(this->cmbCurrency);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(417, 103);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(411, 223);
			this->panel2->TabIndex = 2;
			// 
			// lblCurrency
			// 
			this->lblCurrency->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lblCurrency->Location = System::Drawing::Point(105, 115);
			this->lblCurrency->Name = L"lblCurrency";
			this->lblCurrency->Size = System::Drawing::Size(172, 20);
			this->lblCurrency->TabIndex = 25;
			// 
			// txtCurrency
			// 
			this->txtCurrency->Location = System::Drawing::Point(108, 83);
			this->txtCurrency->Name = L"txtCurrency";
			this->txtCurrency->Size = System::Drawing::Size(169, 20);
			this->txtCurrency->TabIndex = 24;
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->Location = System::Drawing::Point(277, 150);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(81, 42);
			this->btnClose->TabIndex = 23;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Form1::btnClose_Click);
			// 
			// btnConvert
			// 
			this->btnConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConvert->Location = System::Drawing::Point(15, 150);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(96, 42);
			this->btnConvert->TabIndex = 22;
			this->btnConvert->Text = L"Convert";
			this->btnConvert->UseVisualStyleBackColor = true;
			this->btnConvert->Click += gcnew System::EventHandler(this, &Form1::btnConvert_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label2->Location = System::Drawing::Point(3, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(405, 36);
			this->label2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel3->Controls->Add(this->txtTotalAmount);
			this->panel3->Controls->Add(this->txtTax);
			this->panel3->Controls->Add(this->txtSubTotal);
			this->panel3->Controls->Add(this->lblTotalAmount);
			this->panel3->Controls->Add(this->lblTax);
			this->panel3->Controls->Add(this->lblSubtotal);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Location = System::Drawing::Point(417, 332);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(411, 260);
			this->panel3->TabIndex = 4;
			// 
			// txtTotalAmount
			// 
			this->txtTotalAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTotalAmount->Location = System::Drawing::Point(194, 194);
			this->txtTotalAmount->Name = L"txtTotalAmount";
			this->txtTotalAmount->Size = System::Drawing::Size(159, 22);
			this->txtTotalAmount->TabIndex = 22;
			this->txtTotalAmount->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtTax
			// 
			this->txtTax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTax->Location = System::Drawing::Point(194, 135);
			this->txtTax->Name = L"txtTax";
			this->txtTax->Size = System::Drawing::Size(159, 22);
			this->txtTax->TabIndex = 23;
			this->txtTax->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtSubTotal
			// 
			this->txtSubTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSubTotal->Location = System::Drawing::Point(194, 77);
			this->txtSubTotal->Name = L"txtSubTotal";
			this->txtSubTotal->Size = System::Drawing::Size(159, 22);
			this->txtSubTotal->TabIndex = 24;
			this->txtSubTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lblTotalAmount
			// 
			this->lblTotalAmount->AutoSize = true;
			this->lblTotalAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalAmount->ForeColor = System::Drawing::SystemColors::Control;
			this->lblTotalAmount->Location = System::Drawing::Point(12, 200);
			this->lblTotalAmount->Name = L"lblTotalAmount";
			this->lblTotalAmount->Size = System::Drawing::Size(99, 16);
			this->lblTotalAmount->TabIndex = 19;
			this->lblTotalAmount->Text = L"Total Amount";
			// 
			// lblTax
			// 
			this->lblTax->AutoSize = true;
			this->lblTax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTax->ForeColor = System::Drawing::SystemColors::Control;
			this->lblTax->Location = System::Drawing::Point(12, 138);
			this->lblTax->Name = L"lblTax";
			this->lblTax->Size = System::Drawing::Size(34, 16);
			this->lblTax->TabIndex = 19;
			this->lblTax->Text = L"Tax";
			// 
			// lblSubtotal
			// 
			this->lblSubtotal->AutoSize = true;
			this->lblSubtotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSubtotal->ForeColor = System::Drawing::SystemColors::Control;
			this->lblSubtotal->Location = System::Drawing::Point(12, 77);
			this->lblSubtotal->Name = L"lblSubtotal";
			this->lblSubtotal->Size = System::Drawing::Size(75, 16);
			this->lblSubtotal->TabIndex = 15;
			this->lblSubtotal->Text = L"Sub Total";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(405, 36);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Total Cost";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(0, -3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(411, 39);
			this->label7->TabIndex = 3;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel4->Controls->Add(this->txtCostOfMeal);
			this->panel4->Controls->Add(this->txtDrinkSold);
			this->panel4->Controls->Add(this->lblTotalCostDelivery);
			this->panel4->Controls->Add(this->txtCostOfDelivery);
			this->panel4->Controls->Add(this->lblTotalCostMeal);
			this->panel4->Controls->Add(this->lblDrinkSold);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Location = System::Drawing::Point(0, 332);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(411, 260);
			this->panel4->TabIndex = 3;
			// 
			// txtCostOfMeal
			// 
			this->txtCostOfMeal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCostOfMeal->Location = System::Drawing::Point(206, 132);
			this->txtCostOfMeal->Name = L"txtCostOfMeal";
			this->txtCostOfMeal->Size = System::Drawing::Size(159, 22);
			this->txtCostOfMeal->TabIndex = 9;
			this->txtCostOfMeal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtDrinkSold
			// 
			this->txtDrinkSold->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDrinkSold->Location = System::Drawing::Point(206, 71);
			this->txtDrinkSold->Name = L"txtDrinkSold";
			this->txtDrinkSold->Size = System::Drawing::Size(159, 22);
			this->txtDrinkSold->TabIndex = 10;
			this->txtDrinkSold->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lblTotalCostDelivery
			// 
			this->lblTotalCostDelivery->AutoSize = true;
			this->lblTotalCostDelivery->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTotalCostDelivery->ForeColor = System::Drawing::SystemColors::Control;
			this->lblTotalCostDelivery->Location = System::Drawing::Point(20, 200);
			this->lblTotalCostDelivery->Name = L"lblTotalCostDelivery";
			this->lblTotalCostDelivery->Size = System::Drawing::Size(158, 16);
			this->lblTotalCostDelivery->TabIndex = 16;
			this->lblTotalCostDelivery->Text = L"Total Cost of Delivery";
			// 
			// txtCostOfDelivery
			// 
			this->txtCostOfDelivery->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCostOfDelivery->Location = System::Drawing::Point(206, 200);
			this->txtCostOfDelivery->Name = L"txtCostOfDelivery";
			this->txtCostOfDelivery->Size = System::Drawing::Size(159, 22);
			this->txtCostOfDelivery->TabIndex = 8;
			this->txtCostOfDelivery->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lblTotalCostMeal
			// 
			this->lblTotalCostMeal->AutoSize = true;
			this->lblTotalCostMeal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalCostMeal->ForeColor = System::Drawing::SystemColors::Control;
			this->lblTotalCostMeal->Location = System::Drawing::Point(20, 138);
			this->lblTotalCostMeal->Name = L"lblTotalCostMeal";
			this->lblTotalCostMeal->Size = System::Drawing::Size(134, 16);
			this->lblTotalCostMeal->TabIndex = 17;
			this->lblTotalCostMeal->Text = L"Total Cost of Meal";
			// 
			// lblDrinkSold
			// 
			this->lblDrinkSold->AutoSize = true;
			this->lblDrinkSold->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDrinkSold->ForeColor = System::Drawing::SystemColors::Control;
			this->lblDrinkSold->Location = System::Drawing::Point(20, 77);
			this->lblDrinkSold->Name = L"lblDrinkSold";
			this->lblDrinkSold->Size = System::Drawing::Size(88, 16);
			this->lblDrinkSold->TabIndex = 18;
			this->lblDrinkSold->Text = L"Drinks Sold";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(0, -3);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(411, 39);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Cost of Service";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel5->Controls->Add(this->btnExitClick);
			this->panel5->Controls->Add(this->btnResetClick);
			this->panel5->Controls->Add(this->btnCostOFMeal);
			this->panel5->Location = System::Drawing::Point(-14, 598);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1168, 89);
			this->panel5->TabIndex = 5;
			// 
			// btnExitClick
			// 
			this->btnExitClick->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnExitClick->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExitClick->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnExitClick->Location = System::Drawing::Point(852, 18);
			this->btnExitClick->Name = L"btnExitClick";
			this->btnExitClick->Size = System::Drawing::Size(216, 52);
			this->btnExitClick->TabIndex = 2;
			this->btnExitClick->Text = L"Exit";
			this->btnExitClick->UseVisualStyleBackColor = false;
			this->btnExitClick->Click += gcnew System::EventHandler(this, &Form1::btnExitClick_Click);
			// 
			// btnResetClick
			// 
			this->btnResetClick->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnResetClick->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResetClick->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnResetClick->Location = System::Drawing::Point(476, 18);
			this->btnResetClick->Name = L"btnResetClick";
			this->btnResetClick->Size = System::Drawing::Size(216, 52);
			this->btnResetClick->TabIndex = 1;
			this->btnResetClick->Text = L"Reset";
			this->btnResetClick->UseVisualStyleBackColor = false;
			this->btnResetClick->Click += gcnew System::EventHandler(this, &Form1::btnResetClick_Click);
			// 
			// btnCostOFMeal
			// 
			this->btnCostOFMeal->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnCostOFMeal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCostOFMeal->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCostOFMeal->Location = System::Drawing::Point(100, 15);
			this->btnCostOFMeal->Name = L"btnCostOFMeal";
			this->btnCostOFMeal->Size = System::Drawing::Size(216, 52);
			this->btnCostOFMeal->TabIndex = 0;
			this->btnCostOFMeal->Text = L"Cost of Meal";
			this->btnCostOFMeal->UseVisualStyleBackColor = false;
			this->btnCostOFMeal->Click += gcnew System::EventHandler(this, &Form1::btnCostOFMeal_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(834, 103);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(338, 489);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Silver;
			this->tabPage1->Controls->Add(this->btnCl);
			this->tabPage1->Controls->Add(this->btnEquals);
			this->tabPage1->Controls->Add(this->btnDevide);
			this->tabPage1->Controls->Add(this->btnZero);
			this->tabPage1->Controls->Add(this->btn2);
			this->tabPage1->Controls->Add(this->btn3);
			this->tabPage1->Controls->Add(this->btnmultiply);
			this->tabPage1->Controls->Add(this->btn1);
			this->tabPage1->Controls->Add(this->btn5);
			this->tabPage1->Controls->Add(this->btn6);
			this->tabPage1->Controls->Add(this->buttonMinus);
			this->tabPage1->Controls->Add(this->btn4);
			this->tabPage1->Controls->Add(this->btn8);
			this->tabPage1->Controls->Add(this->btn9);
			this->tabPage1->Controls->Add(this->btnPlus);
			this->tabPage1->Controls->Add(this->btn7);
			this->tabPage1->Controls->Add(this->txtDisplay);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(330, 463);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Calculator";
			// 
			// btnCl
			// 
			this->btnCl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCl->Location = System::Drawing::Point(91, 345);
			this->btnCl->Name = L"btnCl";
			this->btnCl->Size = System::Drawing::Size(71, 65);
			this->btnCl->TabIndex = 16;
			this->btnCl->Text = L"C";
			this->btnCl->UseVisualStyleBackColor = true;
			this->btnCl->Click += gcnew System::EventHandler(this, &Form1::btnCl_Click);
			// 
			// btnEquals
			// 
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEquals->Location = System::Drawing::Point(168, 345);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(71, 65);
			this->btnEquals->TabIndex = 15;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = true;
			this->btnEquals->Click += gcnew System::EventHandler(this, &Form1::btnEquals_Click);
			// 
			// btnDevide
			// 
			this->btnDevide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDevide->Location = System::Drawing::Point(245, 345);
			this->btnDevide->Name = L"btnDevide";
			this->btnDevide->Size = System::Drawing::Size(71, 65);
			this->btnDevide->TabIndex = 14;
			this->btnDevide->Text = L"/";
			this->btnDevide->UseVisualStyleBackColor = true;
			this->btnDevide->Click += gcnew System::EventHandler(this, &Form1::Arithmatic);
			// 
			// btnZero
			// 
			this->btnZero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnZero->Location = System::Drawing::Point(16, 345);
			this->btnZero->Name = L"btnZero";
			this->btnZero->Size = System::Drawing::Size(71, 65);
			this->btnZero->TabIndex = 13;
			this->btnZero->Text = L"0";
			this->btnZero->UseVisualStyleBackColor = true;
			this->btnZero->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(91, 274);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(71, 65);
			this->btn2->TabIndex = 12;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(168, 274);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(71, 65);
			this->btn3->TabIndex = 11;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// btnmultiply
			// 
			this->btnmultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmultiply->Location = System::Drawing::Point(245, 274);
			this->btnmultiply->Name = L"btnmultiply";
			this->btnmultiply->Size = System::Drawing::Size(71, 65);
			this->btnmultiply->TabIndex = 10;
			this->btnmultiply->Text = L"*";
			this->btnmultiply->UseVisualStyleBackColor = true;
			this->btnmultiply->Click += gcnew System::EventHandler(this, &Form1::Arithmatic);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(16, 274);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(71, 65);
			this->btn1->TabIndex = 9;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(91, 203);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(71, 65);
			this->btn5->TabIndex = 8;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(168, 203);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(71, 65);
			this->btn6->TabIndex = 7;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMinus->Location = System::Drawing::Point(245, 203);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(71, 65);
			this->buttonMinus->TabIndex = 6;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &Form1::Arithmatic);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(16, 203);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(71, 65);
			this->btn4->TabIndex = 5;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(91, 132);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(71, 65);
			this->btn8->TabIndex = 4;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(168, 132);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(71, 65);
			this->btn9->TabIndex = 3;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(245, 132);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(71, 65);
			this->btnPlus->TabIndex = 2;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &Form1::Arithmatic);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(16, 132);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(71, 65);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(16, 43);
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(300, 38);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->rtbReceipt);
			this->tabPage2->Controls->Add(this->toolStrip1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(330, 463);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Receipt";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// rtbReceipt
			// 
			this->rtbReceipt->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->rtbReceipt->Location = System::Drawing::Point(6, 31);
			this->rtbReceipt->Name = L"rtbReceipt";
			this->rtbReceipt->Size = System::Drawing::Size(310, 426);
			this->rtbReceipt->TabIndex = 1;
			this->rtbReceipt->Text = L"";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->newToolStripButton,
					this->openToolStripButton, this->saveToolStripButton, this->printToolStripButton, this->toolStripSeparator, this->cutToolStripButton,
					this->copyToolStripButton, this->pasteToolStripButton, this->toolStripSeparator1, this->helpToolStripButton
			});
			this->toolStrip1->Location = System::Drawing::Point(3, 3);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(324, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// newToolStripButton
			// 
			this->newToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->newToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newToolStripButton.Image")));
			this->newToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->newToolStripButton->Name = L"newToolStripButton";
			this->newToolStripButton->Size = System::Drawing::Size(23, 22);
			this->newToolStripButton->Text = L"&New";
			this->newToolStripButton->Click += gcnew System::EventHandler(this, &Form1::newToolStripButton_Click);
			// 
			// openToolStripButton
			// 
			this->openToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->openToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripButton.Image")));
			this->openToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openToolStripButton->Name = L"openToolStripButton";
			this->openToolStripButton->Size = System::Drawing::Size(23, 22);
			this->openToolStripButton->Text = L"&Open";
			this->openToolStripButton->Click += gcnew System::EventHandler(this, &Form1::openToolStripButton_Click);
			// 
			// saveToolStripButton
			// 
			this->saveToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->saveToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripButton.Image")));
			this->saveToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveToolStripButton->Name = L"saveToolStripButton";
			this->saveToolStripButton->Size = System::Drawing::Size(23, 22);
			this->saveToolStripButton->Text = L"&Save";
			this->saveToolStripButton->Click += gcnew System::EventHandler(this, &Form1::saveToolStripButton_Click);
			// 
			// printToolStripButton
			// 
			this->printToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->printToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"printToolStripButton.Image")));
			this->printToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->printToolStripButton->Name = L"printToolStripButton";
			this->printToolStripButton->Size = System::Drawing::Size(23, 22);
			this->printToolStripButton->Text = L"&Print";
			this->printToolStripButton->Click += gcnew System::EventHandler(this, &Form1::printToolStripButton_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// cutToolStripButton
			// 
			this->cutToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->cutToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cutToolStripButton.Image")));
			this->cutToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->cutToolStripButton->Name = L"cutToolStripButton";
			this->cutToolStripButton->Size = System::Drawing::Size(23, 22);
			this->cutToolStripButton->Text = L"C&ut";
			this->cutToolStripButton->Click += gcnew System::EventHandler(this, &Form1::cutToolStripButton_Click);
			// 
			// copyToolStripButton
			// 
			this->copyToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->copyToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyToolStripButton.Image")));
			this->copyToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->copyToolStripButton->Name = L"copyToolStripButton";
			this->copyToolStripButton->Size = System::Drawing::Size(23, 22);
			this->copyToolStripButton->Text = L"&Copy";
			this->copyToolStripButton->Click += gcnew System::EventHandler(this, &Form1::copyToolStripButton_Click);
			// 
			// pasteToolStripButton
			// 
			this->pasteToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->pasteToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pasteToolStripButton.Image")));
			this->pasteToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->pasteToolStripButton->Name = L"pasteToolStripButton";
			this->pasteToolStripButton->Size = System::Drawing::Size(23, 22);
			this->pasteToolStripButton->Text = L"&Paste";
			this->pasteToolStripButton->Click += gcnew System::EventHandler(this, &Form1::pasteToolStripButton_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// helpToolStripButton
			// 
			this->helpToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->helpToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"helpToolStripButton.Image")));
			this->helpToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->helpToolStripButton->Name = L"helpToolStripButton";
			this->helpToolStripButton->Size = System::Drawing::Size(23, 22);
			this->helpToolStripButton->Text = L"He&lp";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Form1::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// lbltime
			// 
			this->lbltime->AutoSize = true;
			this->lbltime->Location = System::Drawing::Point(4, 77);
			this->lbltime->Name = L"lbltime";
			this->lbltime->Size = System::Drawing::Size(49, 13);
			this->lbltime->TabIndex = 17;
			this->lbltime->Text = L"13:56:34";
			// 
			// lblDate
			// 
			this->lblDate->AutoSize = true;
			this->lblDate->Location = System::Drawing::Point(1150, 87);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(65, 13);
			this->lblDate->TabIndex = 18;
			this->lblDate->Text = L"08/08/2021";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1352, 691);
			this->Controls->Add(this->lblDate);
			this->Controls->Add(this->lbltime);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDelivery))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nmDrink))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double Nigerian_Naira;
		double SouthAfrican_Rand;
		double US_Dollar;
		double Kenyan_shilling;
		double Indian_Rupee;
		double Canadian_Dollar;
		double Brazilian_Real;
		double Euro;

		double iFirstnum;
		double iSecondnum;
		double iResult;
		String^ iOperator;
		bool enter_value;



	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void vScrollBar2_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}







private: System::Void btnExitClick_Click(System::Object^  sender, System::EventArgs^  e) {

	Application::Exit();
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	

}
private: System::Void btnResetClick_Click(System::Object^  sender, System::EventArgs^  e) {

	//reset button
	txtBeefBurger->Text = "0";
	txtCheeseBurger->Text = "0";
	txtChickBurger->Text = "0";
	cmbDrinks->Items->Clear();
	nmDrink->Value = 0;
	txtDrinkSold->Text = "0";
	txtCostOfMeal->Text = "0";
	txtCostOfDelivery->Text = "0";
	txtSubTotal->Text = "0";
	txtTax->Text = "0";
	txtTotalAmount->Text = "0";

	cmbDrinks->Text = ("Choose Item");




	cmbCurrency->Text = ("Choose One");
	txtCurrency->Text = " ";
	lblCurrency->Text = " ";
	

	     
}

private: System::Void btnCurrencyClick_Click(System::Object^  sender, System::EventArgs^  e) {

	btnCurrencyClick->Visible = false;
}


private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {

	txtCurrency->Text = " ";
	btnCurrencyClick->Visible = true;
	lblCurrency->Text = " ";
	cmbCurrency->Text= "Choose One";

}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	
	DateTime myDate = DateTime::Now;
	lblDate->Text = myDate.ToLongDateString();

}
private: System::Void btnConvert_Click(System::Object^  sender, System::EventArgs^  e) {
	Nigerian_Naira = 291.19;
	SouthAfrican_Rand = 14.86;
	US_Dollar = 1.46;
	Kenyan_shilling = 147.33;
	Indian_Rupee = 98.02;
	Canadian_Dollar = 1.90;
	Brazilian_Real  = 5.28;
	Euro = 1.32;

	double SouthAfrican_Rand = Double::Parse(txtCurrency->Text);

	if (cmbCurrency->Text == "Nigeria")
	{
		lblCurrency->Text = "N" + System::Convert::ToString(SouthAfrican_Rand * Nigerian_Naira);
	}


	if (cmbCurrency->Text == "Brazil")
	{
		lblCurrency->Text = "BRA" + System::Convert::ToString(SouthAfrican_Rand * Brazilian_Real);
	}

	if (cmbCurrency->Text == "South Africa")
	{
		lblCurrency->Text = "RSA" + System::Convert::ToString(SouthAfrican_Rand);
	}

	if (cmbCurrency->Text == "Canada")
	{
		lblCurrency->Text = "C$" + System::Convert::ToString(SouthAfrican_Rand * Canadian_Dollar);
	}

	if (cmbCurrency->Text == "India")
	{
		lblCurrency->Text = "Rupee" + System::Convert::ToString(SouthAfrican_Rand * Indian_Rupee);
	}

	if (cmbCurrency->Text == "Kenya")
	{
		lblCurrency->Text = "KEN" + System::Convert::ToString(SouthAfrican_Rand * Kenyan_shilling);
	}

	if (cmbCurrency->Text == "Euro")
	{
		lblCurrency->Text = "E" + System::Convert::ToString(SouthAfrican_Rand * Euro);
	}

	if (cmbCurrency->Text == "USA")
	{
		lblCurrency->Text = "$" + System::Convert::ToString(SouthAfrican_Rand * US_Dollar);
	}

} 
private: System::Void button_click(System::Object^  sender, System::EventArgs^  e) {

	Button ^ Numbers = safe_cast<Button^>(sender);

	if (txtDisplay->Text== "0")
	{
		txtDisplay->Text = Numbers->Text;

	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;


	}
}
private: System::Void btnCl_Click(System::Object^  sender, System::EventArgs^  e) {

	txtDisplay->Text = "0";
}
private: System::Void Arithmatic(System::Object^  sender, System::EventArgs^  e) {

	Button ^ op = safe_cast<Button^>(sender);
	iFirstnum = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	iOperator = op->Text;

}
private: System::Void btnEquals_Click(System::Object^  sender, System::EventArgs^  e) {

	iSecondnum = Double::Parse(txtDisplay->Text);

	if (iOperator == "+")
	{
		iResult = iFirstnum + iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "-") {
		iResult = iFirstnum - iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "*") {
		iResult = iFirstnum * iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "/") {
		iResult = iFirstnum / iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
}
private: System::Void newToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {

	rtbReceipt->Clear();

}
private: System::Void openToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	//This code will open text files
	OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();

	openFileDialog1->Filter = "Text Files (*.txt)|*.txt|All files(*.*)|*.*";


	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		rtbReceipt->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);
}
private: System::Void saveToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	
	
	//This code will save text file 
	SaveFileDialog ^ saveFileDialog1 = gcnew  SaveFileDialog();

	saveFileDialog1->FileName = "Notepad Text";
	saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All files(*.*)|*.*";

	if (saveFileDialog1->ShowDialog()== System::Windows::Forms::DialogResult::OK)
	{
		System::IO::StreamWriter ^ sw = 
		gcnew System::IO::StreamWriter(saveFileDialog1->OpenFile());
		sw->WriteLine(rtbReceipt->Text);  
	}

}
private: System::Void printToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {

	printPreviewDialog1->Document = printDocument1;
	printPreviewDialog1->ShowDialog();

}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {

	String ^ drawString = rtbReceipt->Text;
	System::Drawing::Font ^ drawFont = gcnew System::Drawing::Font("Arial", 20);
	SolidBrush ^ drawBrush = gcnew SolidBrush(Color::Black);
	PointF drawPoint = PointF(150.0F, 150.0F);
	e->Graphics->DrawString(drawString, drawFont, drawBrush, drawPoint);

}
private: System::Void cutToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {

	rtbReceipt->Cut();
}
private: System::Void copyToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {

	rtbReceipt->Copy();
}
private: System::Void pasteToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	
	rtbReceipt->Paste();
}
private: System::Void btnCostOFMeal_Click(System::Object^  sender, System::EventArgs^  e) {

	const  double beef_PRICE = 8.99;
	const  double cheese_PRICE = 5.5;
	const  double chickenMeal_PRICE = 7;
	const  double oDelivery_PRICE = 2;
	const  double mDrinks_PRICE = 1;
	const  double mcTax_RATE = 0.18;

	Double BeefCost;
	Double chickenMealCost;
	Double CheeseCost;
	Double itemBeef;
	Double itemcheese;
	Double itemChicken;
	Double MealCostChe;
	Double MealCostB;
	Double MealCostC;
	Double itemcheese;
	Double cTax;
	Double mcSubtotal;

	//chickenMealCost = chickenMeal_PRICE;
	//BeefCost = beef_PRICE;
	//CheeseCost = cheese_PRICE;

	if (chckBeef->Checked)
	{
		BeefCost = beef_PRICE;
		itemBeef = Double::Parse(txtBeefBurger->Text);
		MealCostB = BeefCost * itemBeef;

	}
	
	if (chckCheese->Checked)
	{
		CheeseCost = cheese_PRICE;
		itemcheese = Double::Parse(txtCheeseBurger->Text);
		MealCostChe = CheeseCost * itemcheese;

	}
	

		if (chckChickenMeal->Checked)
		{
			chickenMealCost = chickenMeal_PRICE;
			itemChicken = Double::Parse(txtChickBurger->Text);
			MealCostC = chickenMealCost * itemChicken;

		}

//Delivery cost

		lblDelivery->Text = System::Convert::ToString(numDelivery->Value);
		double delivery = Double::Parse(lblDelivery->Text);
		delivery = oDelivery_PRICE * delivery;
		lblTotalCostDelivery->Text = String::Format("(R)", delivery);


//Add drinks

		double numDrink = short(nmDrink->Value);
		lblDrinkSold->Text = System::Convert::ToString(mDrinks_PRICE* numDrink);



//SUBTOTAL = (TOtAL = tax + Subtotal + Delivery + drink )


		mcSubtotal = MealCostB + MealCostC + MealCostChe + delivery + (mDrinks_PRICE* numDrink);
		lblSubtotal->Text = String::Format(" (R)", mcSubtotal);
		lblTotalCostMeal->Text = String::Format(" (R)", mcSubtotal);
		cTax = (mcSubtotal * cTax) / 100;
		lblTax->Text = String::Format(" (R)", cTax);
		lblTotalAmount->Text = String::Format(" (R)", mcSubtotal + cTax + delivery);

		lblDrinkSold->Text = String::Format(" (R)", mDrinks_PRICE * numDrink);





		rtbReceipt->Clear();

		rtbReceipt->AppendText(Environment::NewLine);
		rtbReceipt->AppendText("------------------------------" + Environment::NewLine);
		rtbReceipt->AppendText("\t"+ "Gift's Retaurant" + Environment::NewLine);
		rtbReceipt->AppendText("------------------------------" + Environment::NewLine);

		rtbReceipt->AppendText("Time:"+ "\t\t\t\t" + lbltime->Text + Environment::NewLine);
		rtbReceipt->AppendText("Date:" +"\t\t\t\t" + lblDate->Text + Environment::NewLine);
		rtbReceipt->AppendText("Chicken Burger:" + "\t\t\t\t" + txtChickBurger->Text + Environment::NewLine);
		rtbReceipt->AppendText("Beef Burger:" + "\t\t\t\t" + txtBeefBurger->Text  + Environment::NewLine);
		rtbReceipt->AppendText("Cheese Burger:" + "\t\t\t\t" + txtCheeseBurger + Environment::NewLine);
		rtbReceipt->AppendText("Drinks:" + "\t\t\t\t" + nmDrink->Text + Environment::NewLine);
		rtbReceipt->AppendText("Home Delivery:" + "\t\t\t\t" + numDelivery->Text + Environment::NewLine);
		rtbReceipt->AppendText("Sub Total:" + "\t\t\t\t" + lblSubtotal->Text +Environment::NewLine);

		rtbReceipt->AppendText("Tax:" + "\t\t\t\t\t" + lblTax->Text + Environment::NewLine);


		rtbReceipt->AppendText("Total:" + "\t\t\t\t\t" + lblTotalAmount->Text + Environment::NewLine);
		rtbReceipt->AppendText("------------------------------" + Environment::NewLine);
		rtbReceipt->AppendText("\t\t\t THANK YOU" + Environment::NewLine);
		rtbReceipt->AppendText("------------------------------" + Environment::NewLine);

}

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

	DateTime localTime = DateTime::Now;
	lbltime->Text = localTime.ToLongTimeString();
}
};

}


