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
	private: System::Windows::Forms::PictureBox^ picend;
	private: System::Windows::Forms::PictureBox^ picagain;
	private: System::Windows::Forms::PictureBox^ piclose;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

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
			this->picend = (gcnew System::Windows::Forms::PictureBox());
			this->picagain = (gcnew System::Windows::Forms::PictureBox());
			this->piclose = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->platform))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picend))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picagain))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piclose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
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
			// picend
			// 
			this->picend->BackColor = System::Drawing::Color::Transparent;
			this->picend->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picend->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picend.Image")));
			this->picend->Location = System::Drawing::Point(246, 339);
			this->picend->Name = L"picend";
			this->picend->Size = System::Drawing::Size(199, 85);
			this->picend->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picend->TabIndex = 4;
			this->picend->TabStop = false;
			this->picend->Visible = false;
			this->picend->Click += gcnew System::EventHandler(this, &Game::picend_Click);
			// 
			// picagain
			// 
			this->picagain->BackColor = System::Drawing::Color::Transparent;
			this->picagain->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picagain->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picagain.Image")));
			this->picagain->Location = System::Drawing::Point(41, 338);
			this->picagain->Name = L"picagain";
			this->picagain->Size = System::Drawing::Size(199, 86);
			this->picagain->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picagain->TabIndex = 5;
			this->picagain->TabStop = false;
			this->picagain->Visible = false;
			this->picagain->Click += gcnew System::EventHandler(this, &Game::picagain_Click);
			// 
			// piclose
			// 
			this->piclose->BackColor = System::Drawing::Color::Transparent;
			this->piclose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"piclose.Image")));
			this->piclose->Location = System::Drawing::Point(451, 302);
			this->piclose->Name = L"piclose";
			this->piclose->Size = System::Drawing::Size(251, 200);
			this->piclose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->piclose->TabIndex = 6;
			this->piclose->TabStop = false;
			this->piclose->Visible = false;
			this->piclose->Click += gcnew System::EventHandler(this, &Game::piclose_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"blok_czerwony.png");
			this->imageList1->Images->SetKeyName(1, L"blok_metal.png");
			this->imageList1->Images->SetKeyName(2, L"blok_metal_rozbity.png");
			this->imageList1->Images->SetKeyName(3, L"blok_niebieski.png");
			this->imageList1->Images->SetKeyName(4, L"blok_zielony.png");
			this->imageList1->Images->SetKeyName(5, L"blok_zolty.png");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(246, 206);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 36);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Tag = L"C";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(246, 124);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(76, 36);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Tag = L"C";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(246, 248);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(76, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Tag = L"C";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(246, 82);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(76, 36);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Tag = L"D";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(246, 166);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(76, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Tag = L"C";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(699, 501);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->piclose);
			this->Controls->Add(this->picagain);
			this->Controls->Add(this->picend);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picend))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picagain))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piclose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
		// move ball
		int moveX = 0;
		int moveY = 0;  // best 5

		char Direction; // direction platform

		int lives = 3; // yr lives in game
		int points = 0; // yr point in game ;P

		int bricks = 0; // how many destroy brick

		bool block = false;


#pragma endregion

	private: void destroy_Brick(System::Windows::Forms::Control^ brick) {
		if ((ball->Top + ball->Height > brick ->Top)&&
			(ball->Top < brick->Top + brick -> Height)&&
			(ball ->Left + ball ->Width > brick->Left)&&
			(ball->Left < brick->Left + brick->Width)&&
			(brick->Visible == true)){
				
				moveY = -moveY;
				
				if (brick->Tag != "D") {
					brick->Visible = false;
					points += 5;
					
					bricks += 1;
				}
				else {
					PictureBox^ destroyed_Brick = (PictureBox^)brick;
					destroyed_Brick -> Image = imageList1->Images[2];
					brick->Tag = "CD";
					points += 10;
				}
			    
		}
		lblPoint->Text = "" + points;

		if (bricks == 5) {
			timer->Enabled = false;
			
			picend->Visible = true;
			picagain->Visible = true;
			bricks = 0;
			Game::BackgroundImage = Image::FromFile("../grafiki/tlo_koniec.png");
		}
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		
		for each (Control^ element in this->Controls) {
			if (element->Tag == "C" || element->Tag == "D" || element->Tag == "CD") {
				destroy_Brick(element);
			}
		}


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

			points -= 100;
			lives -= 1;

			lblPoint->Text = "" + points;

			if (lives > 0) {
				MessageBox::Show("U lose your balls ;)) ? ", "Try if u can", MessageBoxButtons::OK);
				ball->Top = platform->Top - ball->Height - 2;
				ball->Left = platform->Left + platform->Width / 2;
				moveX = 0; moveY = 0;
				timer->Enabled = true;
				ball->Enabled = true;
				lbllives->Text = "" + lives;
				block = false;
			}
			else {
				lbllives->Text = ";(";
				piclose->Visible = true;
				picagain->Visible = true;
				picend->Visible = true;
			}
			
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
private: System::Void picend_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void piclose_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void picagain_Click(System::Object^ sender, System::EventArgs^ e) {
	
	lives = 3;
	points = 0;

	lbllives->Text = "" + lives;
	lblPoint->Text = "" + points;

	piclose->Visible = false;
	picagain->Visible = false;
	picend->Visible = false;

	ball->Top = platform->Top - ball->Height - 2;
	ball->Left = platform->Left + platform->Width / 2;

	ball->Visible = true;
	timer->Enabled = true;
	
	moveX = 0; moveY = 0;

	block = false;
	Game::BackgroundImage = Image::FromFile("../grafiki/tlo_gra_01.png");

	for each (Control ^ elements in this->Controls) {
		if (elements->Tag == "C" || elements->Tag == "D" || elements->Tag == "CD") {
			elements->Visible = true;
			if (elements->Tag == "CD") {
				elements->Tag = "D";
				PictureBox^ image = (PictureBox^)elements;
				image->Image = imageList1->Images[1];
			}
		}
	}
}
};
}
