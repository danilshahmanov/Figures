#pragma once
#include "Circle.h"
#include "Figure.h"
#include "Square.h"
#include "ComplexFigure.h"
#include <string>
#include <iostream>
#include <list>

list <Figure*> figures;

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Figure* GetFigureByIndex(int index) {
		std::list<Figure*>::iterator it = figures.begin();
		std::advance(it, index);
		return *it;
	}

	void ClearFigures() {
		for (std::list<Figure*>::iterator it = figures.begin(); it != figures.end(); it++)
			delete* it;
	}
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			canvas = panel->ClientRectangle;
			graphics = panel->CreateGraphics();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			ClearFigures();
		}
	private: System::Windows::Forms::Button^ drawButton;
	private: System::Windows::Forms::Button^ moveBtn;
	private: System::Windows::Forms::Button^ deleteBtn;
	protected:

	protected:







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::GroupBox^ figureTypeGroupBox;
	private: System::Windows::Forms::RadioButton^ circleType;
	private: System::Windows::Forms::RadioButton^ complexFigureType;
	private: System::Windows::Forms::RadioButton^ squareType;
	private: System::Windows::Forms::NumericUpDown^ xCoordinate;
	private: System::Windows::Forms::NumericUpDown^ circleRadius;
	private: System::Windows::Forms::NumericUpDown^ squareHalfDiagonal;
	private: System::Windows::Forms::NumericUpDown^ yCoordinate;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Label^ figuresCount;
	private: System::Windows::Forms::NumericUpDown^ figureIndex;
	private: System::Windows::Forms::Label^ label5;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->drawButton = (gcnew System::Windows::Forms::Button());
			this->moveBtn = (gcnew System::Windows::Forms::Button());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->circleRadius = (gcnew System::Windows::Forms::NumericUpDown());
			this->squareHalfDiagonal = (gcnew System::Windows::Forms::NumericUpDown());
			this->yCoordinate = (gcnew System::Windows::Forms::NumericUpDown());
			this->xCoordinate = (gcnew System::Windows::Forms::NumericUpDown());
			this->figureTypeGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->complexFigureType = (gcnew System::Windows::Forms::RadioButton());
			this->squareType = (gcnew System::Windows::Forms::RadioButton());
			this->circleType = (gcnew System::Windows::Forms::RadioButton());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->figureIndex = (gcnew System::Windows::Forms::NumericUpDown());
			this->figuresCount = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circleRadius))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->squareHalfDiagonal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yCoordinate))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xCoordinate))->BeginInit();
			this->figureTypeGroupBox->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->figureIndex))->BeginInit();
			this->SuspendLayout();
			// 
			// drawButton
			// 
			this->drawButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->drawButton->Location = System::Drawing::Point(4, 27);
			this->drawButton->Margin = System::Windows::Forms::Padding(4);
			this->drawButton->Name = L"drawButton";
			this->drawButton->Size = System::Drawing::Size(102, 48);
			this->drawButton->TabIndex = 0;
			this->drawButton->Text = L"нарисовать";
			this->drawButton->UseVisualStyleBackColor = true;
			this->drawButton->Click += gcnew System::EventHandler(this, &Form1::Draw_Button_Click);
			// 
			// moveBtn
			// 
			this->moveBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->moveBtn->Location = System::Drawing::Point(114, 27);
			this->moveBtn->Margin = System::Windows::Forms::Padding(4);
			this->moveBtn->Name = L"moveBtn";
			this->moveBtn->Size = System::Drawing::Size(127, 48);
			this->moveBtn->TabIndex = 1;
			this->moveBtn->Text = L"переместить";
			this->moveBtn->UseVisualStyleBackColor = true;
			this->moveBtn->Click += gcnew System::EventHandler(this, &Form1::Move_Button_Click);
			// 
			// deleteBtn
			// 
			this->deleteBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->deleteBtn->Location = System::Drawing::Point(249, 27);
			this->deleteBtn->Margin = System::Windows::Forms::Padding(4);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(125, 48);
			this->deleteBtn->TabIndex = 2;
			this->deleteBtn->Text = L"удалить";
			this->deleteBtn->UseVisualStyleBackColor = true;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &Form1::Clear_Button_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(262, 16);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"a";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(260, 64);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"R";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 16);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"X";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 64);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Y";
			// 
			// panel
			// 
			this->panel->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel->Location = System::Drawing::Point(3, 112);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(1249, 871);
			this->panel->TabIndex = 12;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->panel, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.05477F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 88.94524F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1255, 986);
			this->tableLayoutPanel1->TabIndex = 13;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 6;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.37313F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.62687F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				230)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				249)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				391)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 5, 0);
			this->tableLayoutPanel2->Controls->Add(this->drawButton, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->deleteBtn, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->moveBtn, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->figureTypeGroupBox, 4, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel4, 3, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1249, 103);
			this->tableLayoutPanel2->TabIndex = 13;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 4;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				154)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				74)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				105)));
			this->tableLayoutPanel3->Controls->Add(this->circleRadius, 3, 1);
			this->tableLayoutPanel3->Controls->Add(this->squareHalfDiagonal, 3, 0);
			this->tableLayoutPanel3->Controls->Add(this->yCoordinate, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->label4, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->label1, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->label2, 2, 1);
			this->tableLayoutPanel3->Controls->Add(this->xCoordinate, 1, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(860, 3);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(386, 97);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// circleRadius
			// 
			this->circleRadius->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->circleRadius->Location = System::Drawing::Point(284, 61);
			this->circleRadius->Name = L"circleRadius";
			this->circleRadius->Size = System::Drawing::Size(99, 22);
			this->circleRadius->TabIndex = 15;
			// 
			// squareHalfDiagonal
			// 
			this->squareHalfDiagonal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->squareHalfDiagonal->Location = System::Drawing::Point(284, 13);
			this->squareHalfDiagonal->Name = L"squareHalfDiagonal";
			this->squareHalfDiagonal->Size = System::Drawing::Size(99, 22);
			this->squareHalfDiagonal->TabIndex = 14;
			// 
			// yCoordinate
			// 
			this->yCoordinate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->yCoordinate->Location = System::Drawing::Point(56, 61);
			this->yCoordinate->Name = L"yCoordinate";
			this->yCoordinate->Size = System::Drawing::Size(148, 22);
			this->yCoordinate->TabIndex = 13;
			// 
			// xCoordinate
			// 
			this->xCoordinate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->xCoordinate->Location = System::Drawing::Point(56, 13);
			this->xCoordinate->Name = L"xCoordinate";
			this->xCoordinate->Size = System::Drawing::Size(148, 22);
			this->xCoordinate->TabIndex = 12;
			// 
			// figureTypeGroupBox
			// 
			this->figureTypeGroupBox->Controls->Add(this->complexFigureType);
			this->figureTypeGroupBox->Controls->Add(this->squareType);
			this->figureTypeGroupBox->Controls->Add(this->circleType);
			this->figureTypeGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->figureTypeGroupBox->Location = System::Drawing::Point(611, 3);
			this->figureTypeGroupBox->Name = L"figureTypeGroupBox";
			this->figureTypeGroupBox->Size = System::Drawing::Size(243, 97);
			this->figureTypeGroupBox->TabIndex = 4;
			this->figureTypeGroupBox->TabStop = false;
			this->figureTypeGroupBox->Text = L"тип фигуры";
			// 
			// complexFigureType
			// 
			this->complexFigureType->AutoSize = true;
			this->complexFigureType->Location = System::Drawing::Point(6, 63);
			this->complexFigureType->Name = L"complexFigureType";
			this->complexFigureType->Size = System::Drawing::Size(165, 20);
			this->complexFigureType->TabIndex = 2;
			this->complexFigureType->Text = L"комплексная фигура";
			this->complexFigureType->UseVisualStyleBackColor = true;
			// 
			// squareType
			// 
			this->squareType->AutoSize = true;
			this->squareType->Location = System::Drawing::Point(6, 41);
			this->squareType->Name = L"squareType";
			this->squareType->Size = System::Drawing::Size(82, 20);
			this->squareType->TabIndex = 1;
			this->squareType->Text = L"квадрат";
			this->squareType->UseVisualStyleBackColor = true;
			// 
			// circleType
			// 
			this->circleType->AutoSize = true;
			this->circleType->Checked = true;
			this->circleType->Location = System::Drawing::Point(6, 21);
			this->circleType->Name = L"circleType";
			this->circleType->Size = System::Drawing::Size(57, 20);
			this->circleType->TabIndex = 0;
			this->circleType->TabStop = true;
			this->circleType->Text = L"круг";
			this->circleType->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->figureIndex, 0, 2);
			this->tableLayoutPanel4->Controls->Add(this->figuresCount, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->label5, 0, 1);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(381, 3);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 3;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(224, 97);
			this->tableLayoutPanel4->TabIndex = 5;
			// 
			// figureIndex
			// 
			this->figureIndex->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->figureIndex->Location = System::Drawing::Point(3, 66);
			this->figureIndex->Name = L"figureIndex";
			this->figureIndex->Size = System::Drawing::Size(218, 22);
			this->figureIndex->TabIndex = 13;
			// 
			// figuresCount
			// 
			this->figuresCount->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->figuresCount->AutoSize = true;
			this->figuresCount->Location = System::Drawing::Point(79, 11);
			this->figuresCount->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->figuresCount->Name = L"figuresCount";
			this->figuresCount->Size = System::Drawing::Size(141, 16);
			this->figuresCount->TabIndex = 11;
			this->figuresCount->Text = L"количество фигур: 0";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(111, 40);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"индекс фигуры:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1255, 986);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Figures";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->circleRadius))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->squareHalfDiagonal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yCoordinate))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xCoordinate))->EndInit();
			this->figureTypeGroupBox->ResumeLayout(false);
			this->figureTypeGroupBox->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->figureIndex))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: Rectangle canvas;
	private: Graphics^ graphics;
	private: System::Void Draw_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		int x = Convert::ToInt32(xCoordinate->Value);
		int y = Convert::ToInt32(yCoordinate->Value);
		if (circleType->Checked) {
			Circle* circle = new Circle(canvas, x, y, Convert::ToInt32(circleRadius->Value));
			figures.push_back(circle);
			circle->Draw(graphics);
		}
		if (squareType->Checked) {
			Square* square = new Square(canvas, x, y, Convert::ToInt32(squareHalfDiagonal->Value));
			figures.push_back(square);
			square->Draw(graphics);
		}
		if (complexFigureType->Checked) {
			Circle* circle = new Circle(canvas, x, y, Convert::ToInt32(circleRadius->Value));
			Square* square = new Square(canvas, x, y, Convert::ToInt32(squareHalfDiagonal->Value));
			ComplexFigure* complexFigure = new ComplexFigure(canvas, square, circle);
			figures.push_back(complexFigure);
			complexFigure->Draw(graphics);
		}
		UpdateCountDisplay();
	}

	private: System::Void Move_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		int x = Convert::ToInt32(xCoordinate->Value);
		int y = Convert::ToInt32(yCoordinate->Value);
		int index = Convert::ToInt32(figureIndex->Value);
		GetFigureByIndex(index)->
			Move(graphics, canvas, x, y);
	}

	private: System::Void Clear_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = Convert::ToInt32(figureIndex->Value);
		GetFigureByIndex(index)->
			Delete(graphics);
		UpdateCountDisplay();
	}

	private: System::Void UpdateCountDisplay() {
		figuresCount->Text = Convert::ToString("количество фигур: ") + Convert::ToString(figures.size());
	}
	};
}
