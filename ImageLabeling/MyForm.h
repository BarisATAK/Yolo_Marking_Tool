///////----------\\\\\\\
Created By : BARIÞ ATAK
////////////////////////

#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <time.h>

std::vector<int> boundingBoxPoints;
std::vector<int> boundingBoxClasses;
std::vector<int> colorsOfClasses;

namespace ImageLabeling {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			bmpImage = nullptr;
			class_count = 0;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
				boundingBoxClasses.clear();
				boundingBoxPoints.clear();
				colorsOfClasses.clear();
			}
		}
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	protected:
	private: System::Windows::Forms::Button^  loadImage;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListBox^  boundingBoxListBox;

	private:
		/// <summary>
		Bitmap^ bmpImage;
		bool isMouseDown;
		bool isClassSelected;
		int class_count;
		int x1, y1, x2, y2;
		bool isThereTxt;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ImageList^  ýmageList1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::TextBox^  textBox1;


	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::Button^  colorButton;


	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  imagePanel;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  nextImage;

	private: System::Windows::Forms::ListBox^  classListBox;
	private: System::Windows::Forms::ListBox^  imagePathListBox;
	private: System::Windows::Forms::Button^  deleteAll;
	private: System::Windows::Forms::Button^  deleteButton;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  addClassButon;
	private: System::Windows::Forms::Button^  newClassName;
	private: System::Windows::Forms::TextBox^  renameTextBox;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label11;
















	private: System::ComponentModel::IContainer^  components;

			 /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
				 this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->loadImage = (gcnew System::Windows::Forms::Button());
				 this->ýmageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->boundingBoxListBox = (gcnew System::Windows::Forms::ListBox());
				 this->panel1 = (gcnew System::Windows::Forms::Panel());
				 this->deleteAll = (gcnew System::Windows::Forms::Button());
				 this->button3 = (gcnew System::Windows::Forms::Button());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->nextImage = (gcnew System::Windows::Forms::Button());
				 this->panel2 = (gcnew System::Windows::Forms::Panel());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->panel3 = (gcnew System::Windows::Forms::Panel());
				 this->addClassButon = (gcnew System::Windows::Forms::Button());
				 this->label10 = (gcnew System::Windows::Forms::Label());
				 this->newClassName = (gcnew System::Windows::Forms::Button());
				 this->renameTextBox = (gcnew System::Windows::Forms::TextBox());
				 this->panel6 = (gcnew System::Windows::Forms::Panel());
				 this->label9 = (gcnew System::Windows::Forms::Label());
				 this->classListBox = (gcnew System::Windows::Forms::ListBox());
				 this->panel5 = (gcnew System::Windows::Forms::Panel());
				 this->label8 = (gcnew System::Windows::Forms::Label());
				 this->imagePathListBox = (gcnew System::Windows::Forms::ListBox());
				 this->panel4 = (gcnew System::Windows::Forms::Panel());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->deleteButton = (gcnew System::Windows::Forms::Button());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->colorButton = (gcnew System::Windows::Forms::Button());
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
				 this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->imagePanel = (gcnew System::Windows::Forms::Panel());
				 this->panel7 = (gcnew System::Windows::Forms::Panel());
				 this->label11 = (gcnew System::Windows::Forms::Label());
				 this->panel8 = (gcnew System::Windows::Forms::Panel());
				 this->panel1->SuspendLayout();
				 this->panel2->SuspendLayout();
				 this->panel3->SuspendLayout();
				 this->panel6->SuspendLayout();
				 this->panel5->SuspendLayout();
				 this->panel4->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 this->imagePanel->SuspendLayout();
				 this->panel7->SuspendLayout();
				 this->panel8->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // openFileDialog1
				 // 
				 this->openFileDialog1->FileName = L"openFileDialog1";
				 // 
				 // loadImage
				 // 
				 this->loadImage->BackColor = System::Drawing::Color::Silver;
				 this->loadImage->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->loadImage->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				 this->loadImage->ImageKey = L"icons8-pictures-folder-50.png";
				 this->loadImage->ImageList = this->ýmageList1;
				 this->loadImage->Location = System::Drawing::Point(-2, -2);
				 this->loadImage->Name = L"loadImage";
				 this->loadImage->Size = System::Drawing::Size(112, 74);
				 this->loadImage->TabIndex = 0;
				 this->loadImage->UseVisualStyleBackColor = false;
				 this->loadImage->Click += gcnew System::EventHandler(this, &MyForm::loadImage_Click);
				 // 
				 // ýmageList1
				 // 
				 this->ýmageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ýmageList1.ImageStream")));
				 this->ýmageList1->TransparentColor = System::Drawing::Color::Transparent;
				 this->ýmageList1->Images->SetKeyName(0, L"icons8-save-as-50.png");
				 this->ýmageList1->Images->SetKeyName(1, L"icons8-pictures-folder-50.png");
				 this->ýmageList1->Images->SetKeyName(2, L"leftArrow.png");
				 this->ýmageList1->Images->SetKeyName(3, L"rightArrow.png");
				 this->ýmageList1->Images->SetKeyName(4, L"deleteSelected.png");
				 this->ýmageList1->Images->SetKeyName(5, L"deleteAll.png");
				 this->ýmageList1->Images->SetKeyName(6, L"add.png");
				 this->ýmageList1->Images->SetKeyName(7, L"rename.png");
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->label1->ForeColor = System::Drawing::Color::White;
				 this->label1->Location = System::Drawing::Point(692, 0);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(20, 18);
				 this->label1->TabIndex = 1;
				 this->label1->Text = L"--";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->label2->ForeColor = System::Drawing::SystemColors::Control;
				 this->label2->Location = System::Drawing::Point(811, 0);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(20, 18);
				 this->label2->TabIndex = 2;
				 this->label2->Text = L"--";
				 // 
				 // boundingBoxListBox
				 // 
				 this->boundingBoxListBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				 this->boundingBoxListBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->boundingBoxListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
				 this->boundingBoxListBox->FormattingEnabled = true;
				 this->boundingBoxListBox->ItemHeight = 16;
				 this->boundingBoxListBox->Location = System::Drawing::Point(-2, 565);
				 this->boundingBoxListBox->Name = L"boundingBoxListBox";
				 this->boundingBoxListBox->Size = System::Drawing::Size(359, 306);
				 this->boundingBoxListBox->TabIndex = 3;
				 this->boundingBoxListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::boundingBoxListBox_SelectedIndexChanged);
				 // 
				 // panel1
				 // 
				 this->panel1->BackColor = System::Drawing::Color::Gray;
				 this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->panel1->Controls->Add(this->deleteAll);
				 this->panel1->Controls->Add(this->button3);
				 this->panel1->Controls->Add(this->button1);
				 this->panel1->Controls->Add(this->nextImage);
				 this->panel1->Controls->Add(this->loadImage);
				 this->panel1->Location = System::Drawing::Point(0, 29);
				 this->panel1->Name = L"panel1";
				 this->panel1->Size = System::Drawing::Size(112, 875);
				 this->panel1->TabIndex = 3;
				 // 
				 // deleteAll
				 // 
				 this->deleteAll->BackColor = System::Drawing::Color::Silver;
				 this->deleteAll->Enabled = false;
				 this->deleteAll->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->deleteAll->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				 this->deleteAll->ImageKey = L"deleteAll.png";
				 this->deleteAll->ImageList = this->ýmageList1;
				 this->deleteAll->Location = System::Drawing::Point(-2, 318);
				 this->deleteAll->Name = L"deleteAll";
				 this->deleteAll->Size = System::Drawing::Size(112, 74);
				 this->deleteAll->TabIndex = 4;
				 this->deleteAll->UseVisualStyleBackColor = false;
				 this->deleteAll->Click += gcnew System::EventHandler(this, &MyForm::deleteAll_Click);
				 // 
				 // button3
				 // 
				 this->button3->BackColor = System::Drawing::Color::Silver;
				 this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				 this->button3->ImageKey = L"leftArrow.png";
				 this->button3->ImageList = this->ýmageList1;
				 this->button3->Location = System::Drawing::Point(-2, 238);
				 this->button3->Name = L"button3";
				 this->button3->Size = System::Drawing::Size(112, 74);
				 this->button3->TabIndex = 3;
				 this->button3->UseVisualStyleBackColor = false;
				 // 
				 // button1
				 // 
				 this->button1->BackColor = System::Drawing::Color::Silver;
				 this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				 this->button1->ImageKey = L"icons8-save-as-50.png";
				 this->button1->ImageList = this->ýmageList1;
				 this->button1->Location = System::Drawing::Point(-2, 78);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(112, 74);
				 this->button1->TabIndex = 1;
				 this->button1->UseVisualStyleBackColor = false;
				 this->button1->Click += gcnew System::EventHandler(this, &MyForm::savePoints_Click);
				 // 
				 // nextImage
				 // 
				 this->nextImage->BackColor = System::Drawing::Color::Silver;
				 this->nextImage->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->nextImage->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				 this->nextImage->ImageKey = L"rightArrow.png";
				 this->nextImage->ImageList = this->ýmageList1;
				 this->nextImage->Location = System::Drawing::Point(-2, 158);
				 this->nextImage->Name = L"nextImage";
				 this->nextImage->Size = System::Drawing::Size(112, 74);
				 this->nextImage->TabIndex = 2;
				 this->nextImage->UseVisualStyleBackColor = false;
				 // 
				 // panel2
				 // 
				 this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->panel2->Controls->Add(this->label1);
				 this->panel2->Controls->Add(this->label4);
				 this->panel2->Controls->Add(this->label2);
				 this->panel2->Controls->Add(this->label3);
				 this->panel2->Location = System::Drawing::Point(0, 0);
				 this->panel2->Name = L"panel2";
				 this->panel2->Size = System::Drawing::Size(1855, 27);
				 this->panel2->TabIndex = 5;
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->label4->ForeColor = System::Drawing::Color::White;
				 this->label4->Location = System::Drawing::Point(777, 0);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(28, 18);
				 this->label4->TabIndex = 3;
				 this->label4->Text = L"Y: ";
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->label3->ForeColor = System::Drawing::Color::White;
				 this->label3->Location = System::Drawing::Point(662, 0);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(24, 18);
				 this->label3->TabIndex = 1;
				 this->label3->Text = L"X:";
				 // 
				 // panel3
				 // 
				 this->panel3->BackColor = System::Drawing::Color::Gray;
				 this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->panel3->Controls->Add(this->addClassButon);
				 this->panel3->Controls->Add(this->label10);
				 this->panel3->Controls->Add(this->newClassName);
				 this->panel3->Controls->Add(this->renameTextBox);
				 this->panel3->Controls->Add(this->panel6);
				 this->panel3->Controls->Add(this->classListBox);
				 this->panel3->Controls->Add(this->panel5);
				 this->panel3->Controls->Add(this->imagePathListBox);
				 this->panel3->Controls->Add(this->panel4);
				 this->panel3->Controls->Add(this->deleteButton);
				 this->panel3->Controls->Add(this->boundingBoxListBox);
				 this->panel3->Location = System::Drawing::Point(1437, 29);
				 this->panel3->Name = L"panel3";
				 this->panel3->Size = System::Drawing::Size(418, 875);
				 this->panel3->TabIndex = 6;
				 // 
				 // addClassButon
				 // 
				 this->addClassButon->BackColor = System::Drawing::Color::Silver;
				 this->addClassButon->Enabled = false;
				 this->addClassButon->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->addClassButon->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				 this->addClassButon->ImageKey = L"add.png";
				 this->addClassButon->ImageList = this->ýmageList1;
				 this->addClassButon->Location = System::Drawing::Point(356, 35);
				 this->addClassButon->Name = L"addClassButon";
				 this->addClassButon->Size = System::Drawing::Size(60, 70);
				 this->addClassButon->TabIndex = 6;
				 this->addClassButon->UseVisualStyleBackColor = false;
				 this->addClassButon->Click += gcnew System::EventHandler(this, &MyForm::addClassButon_Click);
				 // 
				 // label10
				 // 
				 this->label10->AutoSize = true;
				 this->label10->BackColor = System::Drawing::Color::White;
				 this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->label10->ForeColor = System::Drawing::Color::Black;
				 this->label10->Location = System::Drawing::Point(262, 465);
				 this->label10->Name = L"label10";
				 this->label10->Size = System::Drawing::Size(70, 18);
				 this->label10->TabIndex = 14;
				 this->label10->Text = L"Rename";
				 this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 this->label10->Visible = false;
				 // 
				 // newClassName
				 // 
				 this->newClassName->BackColor = System::Drawing::Color::Silver;
				 this->newClassName->Enabled = false;
				 this->newClassName->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->newClassName->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				 this->newClassName->ImageKey = L"rename.png";
				 this->newClassName->ImageList = this->ýmageList1;
				 this->newClassName->Location = System::Drawing::Point(356, 369);
				 this->newClassName->Name = L"newClassName";
				 this->newClassName->Size = System::Drawing::Size(60, 146);
				 this->newClassName->TabIndex = 13;
				 this->newClassName->UseVisualStyleBackColor = false;
				 this->newClassName->Click += gcnew System::EventHandler(this, &MyForm::newClassName_Click);
				 // 
				 // renameTextBox
				 // 
				 this->renameTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->renameTextBox->Location = System::Drawing::Point(250, 486);
				 this->renameTextBox->Name = L"renameTextBox";
				 this->renameTextBox->Size = System::Drawing::Size(100, 22);
				 this->renameTextBox->TabIndex = 1;
				 this->renameTextBox->Visible = false;
				 this->renameTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::renameTextBox_KeyDown);
				 // 
				 // panel6
				 // 
				 this->panel6->BackColor = System::Drawing::Color::LightGray;
				 this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->panel6->Controls->Add(this->label9);
				 this->panel6->Location = System::Drawing::Point(-2, 122);
				 this->panel6->Name = L"panel6";
				 this->panel6->Size = System::Drawing::Size(418, 39);
				 this->panel6->TabIndex = 12;
				 this->panel6->Tag = L"";
				 // 
				 // label9
				 // 
				 this->label9->AutoSize = true;
				 this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->label9->Location = System::Drawing::Point(160, 10);
				 this->label9->Name = L"label9";
				 this->label9->Size = System::Drawing::Size(101, 18);
				 this->label9->TabIndex = 0;
				 this->label9->Text = L"Image Paths";
				 // 
				 // classListBox
				 // 
				 this->classListBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->classListBox->Enabled = false;
				 this->classListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->classListBox->FormattingEnabled = true;
				 this->classListBox->ItemHeight = 16;
				 this->classListBox->Location = System::Drawing::Point(-2, 369);
				 this->classListBox->Name = L"classListBox";
				 this->classListBox->Size = System::Drawing::Size(359, 146);
				 this->classListBox->TabIndex = 1;
				 this->classListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::classListBox_SelectedIndexChanged_1);
				 // 
				 // panel5
				 // 
				 this->panel5->BackColor = System::Drawing::Color::LightGray;
				 this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->panel5->Controls->Add(this->label8);
				 this->panel5->Location = System::Drawing::Point(-2, 335);
				 this->panel5->Name = L"panel5";
				 this->panel5->Size = System::Drawing::Size(418, 37);
				 this->panel5->TabIndex = 11;
				 this->panel5->Tag = L"";
				 // 
				 // label8
				 // 
				 this->label8->AutoSize = true;
				 this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->label8->Location = System::Drawing::Point(174, 8);
				 this->label8->Name = L"label8";
				 this->label8->Size = System::Drawing::Size(69, 18);
				 this->label8->TabIndex = 0;
				 this->label8->Text = L"Classes";
				 // 
				 // imagePathListBox
				 // 
				 this->imagePathListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->imagePathListBox->FormattingEnabled = true;
				 this->imagePathListBox->HorizontalScrollbar = true;
				 this->imagePathListBox->ItemHeight = 16;
				 this->imagePathListBox->Location = System::Drawing::Point(-2, 158);
				 this->imagePathListBox->Name = L"imagePathListBox";
				 this->imagePathListBox->Size = System::Drawing::Size(418, 164);
				 this->imagePathListBox->TabIndex = 1;
				 // 
				 // panel4
				 // 
				 this->panel4->BackColor = System::Drawing::Color::LightGray;
				 this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->panel4->Controls->Add(this->label7);
				 this->panel4->Location = System::Drawing::Point(-2, 531);
				 this->panel4->Name = L"panel4";
				 this->panel4->Size = System::Drawing::Size(418, 37);
				 this->panel4->TabIndex = 10;
				 this->panel4->Tag = L"";
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->label7->Location = System::Drawing::Point(145, 9);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(130, 18);
				 this->label7->TabIndex = 0;
				 this->label7->Text = L"Bounding Boxes";
				 // 
				 // deleteButton
				 // 
				 this->deleteButton->BackColor = System::Drawing::Color::Silver;
				 this->deleteButton->Enabled = false;
				 this->deleteButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->deleteButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				 this->deleteButton->ImageKey = L"deleteSelected.png";
				 this->deleteButton->ImageList = this->ýmageList1;
				 this->deleteButton->Location = System::Drawing::Point(356, 565);
				 this->deleteButton->Name = L"deleteButton";
				 this->deleteButton->Size = System::Drawing::Size(60, 306);
				 this->deleteButton->TabIndex = 5;
				 this->deleteButton->UseVisualStyleBackColor = false;
				 this->deleteButton->Click += gcnew System::EventHandler(this, &MyForm::deleteButton_Click);
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->label5->ForeColor = System::Drawing::Color::Black;
				 this->label5->Location = System::Drawing::Point(4, 24);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(115, 18);
				 this->label5->TabIndex = 8;
				 this->label5->Text = L"Class Name : ";
				 // 
				 // colorButton
				 // 
				 this->colorButton->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
				 this->colorButton->Enabled = false;
				 this->colorButton->Location = System::Drawing::Point(302, 15);
				 this->colorButton->Name = L"colorButton";
				 this->colorButton->Size = System::Drawing::Size(40, 41);
				 this->colorButton->TabIndex = 7;
				 this->colorButton->UseVisualStyleBackColor = false;
				 this->colorButton->Click += gcnew System::EventHandler(this, &MyForm::colorButton_Click);
				 // 
				 // textBox1
				 // 
				 this->textBox1->Location = System::Drawing::Point(135, 23);
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(151, 22);
				 this->textBox1->TabIndex = 5;
				 this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Cross;
				 this->pictureBox1->Enabled = false;
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(100, 50);
				 this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
				 this->pictureBox1->TabIndex = 0;
				 this->pictureBox1->TabStop = false;
				 this->pictureBox1->Visible = false;
				 this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
				 this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
				 this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
				 this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
				 // 
				 // imagePanel
				 // 
				 this->imagePanel->AutoScroll = true;
				 this->imagePanel->BackColor = System::Drawing::Color::Silver;
				 this->imagePanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->imagePanel->Controls->Add(this->pictureBox1);
				 this->imagePanel->Location = System::Drawing::Point(118, 29);
				 this->imagePanel->Name = L"imagePanel";
				 this->imagePanel->Size = System::Drawing::Size(1313, 875);
				 this->imagePanel->TabIndex = 7;
				 // 
				 // panel7
				 // 
				 this->panel7->BackColor = System::Drawing::Color::LightGray;
				 this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->panel7->Controls->Add(this->label11);
				 this->panel7->Location = System::Drawing::Point(1437, 29);
				 this->panel7->Name = L"panel7";
				 this->panel7->Size = System::Drawing::Size(418, 37);
				 this->panel7->TabIndex = 15;
				 this->panel7->Tag = L"";
				 // 
				 // label11
				 // 
				 this->label11->AutoSize = true;
				 this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->label11->Location = System::Drawing::Point(174, 14);
				 this->label11->Name = L"label11";
				 this->label11->Size = System::Drawing::Size(84, 18);
				 this->label11->TabIndex = 0;
				 this->label11->Text = L"Add Class";
				 // 
				 // panel8
				 // 
				 this->panel8->BackColor = System::Drawing::Color::White;
				 this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->panel8->Controls->Add(this->textBox1);
				 this->panel8->Controls->Add(this->label5);
				 this->panel8->Controls->Add(this->colorButton);
				 this->panel8->ForeColor = System::Drawing::Color::White;
				 this->panel8->Location = System::Drawing::Point(1437, 66);
				 this->panel8->Name = L"panel8";
				 this->panel8->Size = System::Drawing::Size(359, 70);
				 this->panel8->TabIndex = 15;
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::SystemColors::Control;
				 this->ClientSize = System::Drawing::Size(1853, 906);
				 this->Controls->Add(this->panel8);
				 this->Controls->Add(this->panel7);
				 this->Controls->Add(this->imagePanel);
				 this->Controls->Add(this->panel3);
				 this->Controls->Add(this->panel2);
				 this->Controls->Add(this->panel1);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
				 this->MaximumSize = System::Drawing::Size(1875, 957);
				 this->MinimumSize = System::Drawing::Size(1875, 957);
				 this->Name = L"MyForm";
				 this->Text = L"Yolo Marking Tool";
				 this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
				 this->panel1->ResumeLayout(false);
				 this->panel2->ResumeLayout(false);
				 this->panel2->PerformLayout();
				 this->panel3->ResumeLayout(false);
				 this->panel3->PerformLayout();
				 this->panel6->ResumeLayout(false);
				 this->panel6->PerformLayout();
				 this->panel5->ResumeLayout(false);
				 this->panel5->PerformLayout();
				 this->panel4->ResumeLayout(false);
				 this->panel4->PerformLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 this->imagePanel->ResumeLayout(false);
				 this->imagePanel->PerformLayout();
				 this->panel7->ResumeLayout(false);
				 this->panel7->PerformLayout();
				 this->panel8->ResumeLayout(false);
				 this->panel8->PerformLayout();
				 this->ResumeLayout(false);

			 }
#pragma endregion
			 //<--- Functions --->//
				private: inline void drawYellowCross(int x, int y) {
					Pen^ pen = gcnew Pen(Color::Yellow, 3);
					Graphics^ g = pictureBox1->CreateGraphics();
					g->DrawLine(pen, 0, y, pictureBox1->Width, y);
					g->DrawLine(pen, x, 0, x, pictureBox1->Height);
				}
				private: void pushPointsToBoundingBox(int x, int y) {
					boundingBoxPoints.push_back(x);
					boundingBoxPoints.push_back(y);
				}
				private: void pushColorOfClass(int R, int G, int B) {
					colorsOfClasses.push_back(R);
					colorsOfClasses.push_back(G);
					colorsOfClasses.push_back(B);
				}
				private: inline Color getColor(int selectedIndex) {
					int index = 3 * (selectedIndex);
					return Color::FromArgb(colorsOfClasses[index],
						colorsOfClasses[index + 1],
						colorsOfClasses[index + 2]);
				}
				private: void clearAll() {
					boundingBoxClasses.clear();
					boundingBoxPoints.clear();
					colorsOfClasses.clear();

					boundingBoxListBox->Items->Clear();
					classListBox->Items->Clear();

					class_count = 0;
					isClassSelected = false;
				}
				private: inline Rectangle getRectangle(){
					return   Rectangle(
						Math::Min(x1, x2),
						Math::Min(y1, y2),
						Math::Abs(x1 - x2),
						Math::Abs(y1 - y2));
				}
			
				private: void readTxtFile(char* txtPath, int bmpImageWidth, int bmpImageHeight) {

					std::ifstream filePtr(txtPath);
					std::string line;
					int ID;
					double X, Y, W, H;

					int max = 0;

					while (std::getline(filePtr, line)) { 

						std::stringstream linestream(line);
						linestream >> ID >> X >> Y >> W >> H;

						if (ID > max) {
							max = ID;
						}

						W *= bmpImageWidth;
						H *= bmpImageHeight;
						X *= bmpImageWidth;
						Y *= bmpImageHeight;
						W = (int)W;
						H = (int)H;
						X = (int)X;
						Y = (int)Y;

						boundingBoxListBox->Items->Add("ID= " + ID + "     X= " + X +
							"     Y= " + Y + "     W= " + W + "     H= " + H);

						//mouseDown
						pushPointsToBoundingBox(X - (W / 2), Y - (H / 2));
						//mouseUp
						pushPointsToBoundingBox(X + (W / 2), Y + (H / 2));

						boundingBoxClasses.push_back(ID);
					}
					filePtr.close();

					class_count = max + 1;
					srand(time(NULL));
					int r[3];
					for (int i = 0; i < class_count; i++) {
						classListBox->Items->Add("(" + i + ") Enter a class name.");

						r[0] = rand() % 255;
						r[1] = rand() % 255;
						r[2] = rand() % 255;

						pushColorOfClass(r[0], r[1], r[2]);
					}

					pictureBox1->Refresh();
				}
				private: void setImageLocation() {
					Point a_s_p = imagePanel->AutoScrollPosition;

					int new_pnl_x, new_pnl_y;
					if (imagePanel->Width > bmpImage->Width && imagePanel->Height > bmpImage->Height) {
						new_pnl_x = ((imagePanel->Width) - bmpImage->Width)   / 2 + a_s_p.X;
						new_pnl_y = ((imagePanel->Height) - bmpImage->Height) / 2 + a_s_p.Y;
						pictureBox1->Location = System::Drawing::Point(new_pnl_x, new_pnl_y);
					}
					else {
						pictureBox1->Location = System::Drawing::Point(3, 3);
					}
				}
			///////////////////////////


	//<--- Left Panel --->//
	private: System::Void loadImage_Click(System::Object^  sender, System::EventArgs^  e) {

		openFileDialog1->Filter = "Image Files(*.BMP;*.JPG;*.PNG;*.TIFF)|*.BMP;*.JPG;*.PNG;*.TIFF";
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			System::String^ imageFileName = openFileDialog1->FileName;

			imagePathListBox->Items->Add(imageFileName);

			if (!boundingBoxPoints.empty()) {
				clearAll();
				x1 = 0; x2 = 0; y1 = 0; y2 = 0;
			}

			System::String^ txtFileName = System::IO::Path::ChangeExtension(imageFileName, ".txt");
			bmpImage = gcnew Bitmap(imageFileName); //For All Images.
			pictureBox1->Visible = true;

			isThereTxt = false;
			setImageLocation();

			char txtPath[250];
			sprintf(txtPath, "%s", txtFileName);

			struct stat info;
			if (stat(txtPath, &info) == 0) {//Ayný klasörde ayný isimde txt varsa
				readTxtFile(txtPath, bmpImage->Width, bmpImage->Height);
				x1 = 0; x2 = 0; y1 = 0; y2 = 0;
				isThereTxt = true;
			}

			if (bmpImage != nullptr) {
				pictureBox1->Enabled = true;
				pictureBox1->Image = bmpImage;
				classListBox->Enabled = true;
				deleteAll->Enabled = true;
			}
			else {
				MessageBox::Show("Image is not loaded!");
			}
		}
	}
	private: System::Void savePoints_Click(System::Object^  sender, System::EventArgs^  e) {

		//Normalize edilmiþ merkez x,y noktalarý ve w,h kaydedilecek.
		if (!boundingBoxClasses.empty()) {
			saveFileDialog1->Filter = "Text Document | .txt";

			char cStr[250]; //Dosya ismi 250 karakterle sýnýrlý.
			if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
				String^ clrString = saveFileDialog1->FileName;

				if (clrString->Length < sizeof(cStr))
					sprintf(cStr, "%s", clrString);

				double x1, y1, w1, h1;
				if (saveFileDialog1->FileName != "") {
					FILE* output_file;
					output_file = fopen(cStr, "w");

					double x, y, w, h;
					for (int i = 0; i < boundingBoxClasses.size(); i++) {
						x = boundingBoxPoints[4 * i];
						y = boundingBoxPoints[4 * i + 1];
						w = boundingBoxPoints[4 * i + 2] - x;
						h = boundingBoxPoints[4 * i + 3] - y;

						x = (x + (w / 2.0f)) / pictureBox1->Width;
						y = (y + (h / 2.0f)) / pictureBox1->Height;
						w /= pictureBox1->Width;
						h /= pictureBox1->Height;
						fprintf(output_file, "%d %.15f %.15f %.15f %.15f\n", boundingBoxClasses[i], x, y, w, h);
					}
					fclose(output_file);
				}
			}
		}
		else {
			MessageBox::Show("At least 1 labeling process is required to save!");
		}
	}
	private: System::Void deleteAll_Click(System::Object^  sender, System::EventArgs^  e) {
		if (classListBox->Items->Count != 0) {
			classListBox->Items->Clear();
			boundingBoxListBox->Items->Clear();
			clearAll();
			pictureBox1->Refresh();
			newClassName->Enabled = false;
		}
	}
	/////////////////////////

	//<--- Mouse Events --->//
	private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (isClassSelected) {
			x1 = e->X;
			y1 = e->Y;
			pushPointsToBoundingBox(x1, y1);
			isMouseDown = true;
		}
	}
	private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		if (!isMouseDown) {
			pictureBox1->Refresh();
			drawYellowCross(e->X, e->Y);
		}
		else {
			x2 = e->X;
			y2 = e->Y;
			pictureBox1->Refresh();
		}
		label1->Refresh();
		label2->Refresh();

		label1->Text = e->X.ToString() + "px";
		label2->Text = e->Y.ToString() + "px";
	}
	private: System::Void pictureBox1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (isMouseDown) {
			isMouseDown = false;

			x2 = e->X;
			y2 = e->Y;
			
			pushPointsToBoundingBox(x2, y2);
			boundingBoxClasses.push_back(classListBox->SelectedIndex);

			boundingBoxListBox->Items->Add("ID= " + (classListBox->SelectedIndex) + "    X= " + x1 +
				"    Y= " + y1 + "    W= " + abs(x2 - x1) + "    H= " + abs(y2 - y1));

			pictureBox1->Refresh();
		}
	}
	/////////////////////////

	//<--- Right Panel -->//
	private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Enter) {
			if (textBox1->Text != "") {
				colorButton->Enabled = true;
			}
			else {
				MessageBox::Show("You should enter a class name.");
			}
		} 
	}
	private: System::Void colorButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			colorButton->BackColor = colorDialog1->Color;
			addClassButon->Enabled = true;
		}
	}
	private: System::Void addClassButon_Click(System::Object^  sender, System::EventArgs^  e) {
		colorButton->Enabled = false;
		addClassButon->Enabled = false;
		classListBox->Items->Add("(" + (class_count++) + ")" + " " + textBox1->Text);
		textBox1->Clear();
		pushColorOfClass(colorDialog1->Color.R, colorDialog1->Color.G, colorDialog1->Color.B);
	}
	private: System::Void classListBox_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
		if (classListBox->SelectedIndex >= 0) {
			colorButton->BackColor = getColor(classListBox->SelectedIndex);
			isClassSelected = true;
			newClassName->Enabled = true;
		}
	}
	private: System::Void newClassName_Click(System::Object^  sender, System::EventArgs^  e) {
		renameTextBox->Visible = true;
		label10->Visible = true;
		newClassName->Enabled = false;
	}
	private: System::Void renameTextBox_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Enter) {
			if (renameTextBox->Text != "") {
				int sel_ind = classListBox->SelectedIndex;
				classListBox->Items->RemoveAt(sel_ind);
				classListBox->Items->Insert(sel_ind, "(" + (sel_ind)+")" + " " + renameTextBox->Text);
			}
			else {
				MessageBox::Show("You should enter a class name.");
			}
			renameTextBox->Visible = false;
			label10->Visible = false;
		}
	}
	private: System::Void boundingBoxListBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		deleteButton->Enabled = true;
	}
	private: System::Void deleteButton_Click(System::Object^  sender, System::EventArgs^  e) {
		int selectedIndex = boundingBoxListBox->SelectedIndex;
		if (selectedIndex >= 0) {
			boundingBoxListBox->Items->RemoveAt(selectedIndex);
			int p_i_start = 4 * selectedIndex;
			x1 = 0; y1 = 0; x2 = 0; y2 = 0; //Son kutu silindiðinde global olduðu için ekranda kalmasýn diye.
			boundingBoxClasses.erase(boundingBoxClasses.begin() + selectedIndex);
			boundingBoxPoints.erase(boundingBoxPoints.begin() + p_i_start, boundingBoxPoints.begin() + p_i_start + 4);

			pictureBox1->Refresh();
			deleteButton->Enabled = false;
		}
		else {
			MessageBox::Show("You must select the box to be deleted!");
		}
	}

	/////////////////////////

	//<-- Paint -->//
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		if (isClassSelected || isThereTxt) {
			if (isClassSelected) {
				e->Graphics->DrawRectangle(gcnew Pen(getColor(classListBox->SelectedIndex), 3), getRectangle());
			}

			int x, y, w, h;
			for (int i = 0; i < boundingBoxClasses.size(); i++) {
				if (boundingBoxPoints[4 * i] > boundingBoxPoints[4 * i + 2]) {
					std::swap(boundingBoxPoints[4 * i], boundingBoxPoints[4 * i + 2]);
					std::swap(boundingBoxPoints[4 * i + 1], boundingBoxPoints[4 * i + 3]);
				}
				x = boundingBoxPoints[4 * i];
				y = boundingBoxPoints[4 * i + 1];
				w = boundingBoxPoints[4 * i + 2] - x;
				h = boundingBoxPoints[4 * i + 3] - y;
				e->Graphics->DrawRectangle(gcnew Pen(getColor(boundingBoxClasses[i]), 3), x, y, w, h);
			}
		}
		
	}
	/////////////////
};
}
