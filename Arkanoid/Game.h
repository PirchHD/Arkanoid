#pragma once

namespace Arkanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ ball;
	protected:

	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::PictureBox^ platform;
	private: System::Windows::Forms::Label^ lblPoint;
	private: System::Windows::Forms::Label^ lbllives;

	protected:

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->ball = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->platform = (gcnew System::Windows::Forms::PictureBox());
			this->lblPoint = (gcnew System::Windows::Forms::Label());
			this->lbllives = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->platform))->BeginInit();
			this->SuspendLayout();
			// 
			// ball
			// 
			this->ball->BackColor = System::Drawing::Color::Transparent;
			this->ball->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ball.Image")));
			this->ball->Location = System::Drawing::Point(337, 430);
			this->ball->Name = L"ball";
			this->ball->Size = System::Drawing::Size(25, 25);
			this->ball->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->ball->TabIndex = 0;
			this->ball->TabStop = false;
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Interval = 20;
			this->timer->Tick += gcnew System::EventHandler(this, &Game::timer1_Tick);
			// 
			// platform
			// 
			this->platform->BackColor = System::Drawing::Color::Transparent;
			this->platform->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"platform.Image")));
			this->platform->Location = System::Drawing::Point(281, 461);
			this->platform->Name = L"platform";
			this->platform->Size = System::Drawing::Size(133, 28);
			this->platform->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->platform->TabIndex = 1;
			this->platform->TabStop = false;
			this->platform->Click += gcnew System::EventHandler(this, &Game::platform_Click);
			// 
			// lblPoint
			// 
			this->lblPoint->AutoSize = true;
			this->lblPoint->BackColor = System::Drawing::Color::Transparent;
			this->lblPoint->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPoint->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lblPoint->Location = System::Drawing::Point(526, 24);
			this->lblPoint->Name = L"lblPoint";
			this->lblPoint->Size = System::Drawing::Size(43, 22);
			this->lblPoint->TabIndex = 2;
			this->lblPoint->Text = L"000";
			// 
			// lbllives
			// 
			this->lbllives->AutoSize = true;
			this->lbllives->BackColor = System::Drawing::Color::Transparent;
			this->lbllives->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbllives->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbllives->Location = System::Drawing::Point(660, 23);
			this->lbllives->Name = L"lbllives";
			this->lbllives->Size = System::Drawing::Size(21, 22);
			this->lbllives->TabIndex = 3;
			this->lbllives->Text = L"3";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(699, 501);
			this->Controls->Add(this->lbllives);
			this->Controls->Add(this->lblPoint);
			this->Controls->Add(this->platform);
			this->Controls->Add(this->ball);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Game";
			this->Text = L"Game - Arkanoid";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::movePlat);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::Game_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->platform))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		// move ball
		int moveX = 0;
		int moveY = 0;  // best 5

		char Direction; // direction platform

		int lives = 3; // lives
		int points = 0;

		bool block = false;


#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		// move ball
		ball->Left += moveX;
		ball->Top += moveY;
		
		//bouncing the ball
		if (ball->Left >= Game::Width - ball->Width - 10) moveX = -moveX;

		if (ball->Top >= Game::Height - ball->Height) moveY = -moveY;

		if (ball->Top <= 75) moveY = -moveY;

		if (ball->Left <= 5) moveX = -moveX;

		//platform
		if ((Direction == 'R') && (platform->Left < Game::Width - platform->Width - 21) ) {
			platform->Left += 20;
			if(moveX==0 && moveY == 0)ball->Left += 20;
		}
		if ((Direction == 'L') && (platform->Left > 2)) {
			platform->Left -= 20;
			if (moveX == 0 && moveY == 0)ball->Left -= 20;
		}

		// bouncing platform
		if ((ball->Left > platform->Left) && (ball->Left < platform->Left + platform->Width) && (ball->Top + ball->Height > platform->Top)) {
			moveY = -moveY;
		}
		// if u lose yr ball(s) ;)
		else if (ball->Top >= platform -> Top + 5) {
			timer->Enabled = false;
			ball->Enabled = false;
			MessageBox::Show("U lose your balls ;)) ? ","Try if u can", MessageBoxButtons::OK);
			ball->Top = platform->Top - ball->Height - 2;
			ball -> Left = platform->Left + platform->Width/2;
			moveX = 0; moveY = 0;
			timer->Enabled = true;
			ball->Enabled = true;
			points -= 100;
			lives -= 1;
			lblPoint->Text = "" + points;
			lbllives->Text = "" + lives;

			block = false;
			
		}
	}

		  
	private: System::Void movePlat(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		
		if (e->KeyCode == Keys::Left) Direction = 'L';

		if (e->KeyCode == Keys::Right) Direction = 'R';

		if ((e->KeyCode == Keys::Space) && (block == false)) {

			moveX = -5;
			moveY = -5;
			block = true;
		}
	}
private: System::Void platform_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Game_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	Direction = 'S';
}
};
}
