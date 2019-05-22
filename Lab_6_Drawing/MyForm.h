#pragma once

namespace Lab6Drawing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			Draw();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  PictureBox;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->PictureBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// PictureBox
			// 
			this->PictureBox->BackColor = System::Drawing::Color::White;
			this->PictureBox->Location = System::Drawing::Point(9, 9);
			this->PictureBox->Name = L"PictureBox";
			this->PictureBox->Size = System::Drawing::Size(454, 335);
			this->PictureBox->TabIndex = 0;
			this->PictureBox->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 351);
			this->Controls->Add(this->PictureBox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox))->EndInit();
			this->ResumeLayout(false);

		}
		void Draw()
		{
			PictureBox->BackgroundImage = gcnew Bitmap(PictureBox->Width, PictureBox->Height);
			Graphics^ buffGraphics = Graphics::FromImage(PictureBox->BackgroundImage);
			buffGraphics->FillRectangle(Brushes::Black, PictureBox->Height / 8, PictureBox->Height / 8, 3 * PictureBox->Height / 8, 3 * PictureBox->Height / 8);
			Point point1 = Point(PictureBox->Height / 3, 3*PictureBox->Height / 4);
			Point point2 = Point((PictureBox->Height / 3)+70, (3*PictureBox->Height / 4)+70);
			Point point3 = Point((PictureBox->Height / 3)+70, (3*PictureBox->Height / 4)-70);
			Point point4 = Point((PictureBox->Height / 3)+141, (3*PictureBox->Height / 4));
			array<Point>^ RedPoints = { point1, point2, point4, point3 };
			System::Drawing::Drawing2D::GraphicsPath^ RedSquare = gcnew System::Drawing::Drawing2D::GraphicsPath();
			RedSquare->AddLines(RedPoints);
			buffGraphics->FillPath(Brushes::Red, RedSquare);
			PictureBox->Invalidate();
		}
#pragma endregion
	};
}
