#pragma once

namespace BackUpProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for SchedMaker
	/// </summary>
	public ref class SchedMaker : public System::Windows::Forms::Form
	{
	public:
		SchedMaker(void)
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
		~SchedMaker()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ tblSchedule;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbThu;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbTue;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbFri;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbWed;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbMon;
	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbCourseTime;


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
			this->tblSchedule = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbThu = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbTue = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbFri = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbWed = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbMon = (gcnew System::Windows::Forms::TextBox());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbCourseTime = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblSchedule))->BeginInit();
			this->SuspendLayout();
			// 
			// tblSchedule
			// 
			this->tblSchedule->AllowUserToAddRows = false;
			this->tblSchedule->AllowUserToDeleteRows = false;
			this->tblSchedule->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tblSchedule->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->tblSchedule->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblSchedule->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->tblSchedule->Location = System::Drawing::Point(333, 36);
			this->tblSchedule->Name = L"tblSchedule";
			this->tblSchedule->ReadOnly = true;
			this->tblSchedule->Size = System::Drawing::Size(639, 255);
			this->tblSchedule->TabIndex = 39;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(179, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 13);
			this->label5->TabIndex = 38;
			this->label5->Text = L"Thursday";
			// 
			// tbThu
			// 
			this->tbThu->Location = System::Drawing::Point(155, 133);
			this->tbThu->Name = L"tbThu";
			this->tbThu->Size = System::Drawing::Size(100, 20);
			this->tbThu->TabIndex = 37;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(179, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Tuesday";
			// 
			// tbTue
			// 
			this->tbTue->Location = System::Drawing::Point(155, 64);
			this->tbTue->Name = L"tbTue";
			this->tbTue->Size = System::Drawing::Size(100, 20);
			this->tbTue->TabIndex = 35;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Friday";
			// 
			// tbFri
			// 
			this->tbFri->Location = System::Drawing::Point(27, 198);
			this->tbFri->Name = L"tbFri";
			this->tbFri->Size = System::Drawing::Size(100, 20);
			this->tbFri->TabIndex = 33;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Wednesday";
			// 
			// tbWed
			// 
			this->tbWed->Location = System::Drawing::Point(27, 133);
			this->tbWed->Name = L"tbWed";
			this->tbWed->Size = System::Drawing::Size(100, 20);
			this->tbWed->TabIndex = 31;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Monday";
			// 
			// tbMon
			// 
			this->tbMon->Location = System::Drawing::Point(27, 64);
			this->tbMon->Name = L"tbMon";
			this->tbMon->Size = System::Drawing::Size(100, 20);
			this->tbMon->TabIndex = 29;
			// 
			// btnSubmit
			// 
			this->btnSubmit->Location = System::Drawing::Point(106, 268);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(75, 23);
			this->btnSubmit->TabIndex = 28;
			this->btnSubmit->Text = L"submit";
			this->btnSubmit->UseVisualStyleBackColor = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &SchedMaker::btnSubmit_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(179, 170);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 13);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Course Time";
			// 
			// tbCourseTime
			// 
			this->tbCourseTime->Location = System::Drawing::Point(155, 198);
			this->tbCourseTime->Name = L"tbCourseTime";
			this->tbCourseTime->Size = System::Drawing::Size(100, 20);
			this->tbCourseTime->TabIndex = 40;
			// 
			// SchedMaker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1003, 349);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbCourseTime);
			this->Controls->Add(this->tblSchedule);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbThu);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbTue);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbFri);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbWed);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbMon);
			this->Controls->Add(this->btnSubmit);
			this->Name = L"SchedMaker";
			this->Text = L"SchedMaker";
			this->Load += gcnew System::EventHandler(this, &SchedMaker::SchedMaker_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblSchedule))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ connString = "Server=localhost;port=3306;database=schedMakerb;uid=root;password=root";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);

	private: System::Void SchedMaker_Load(System::Object^ sender, System::EventArgs^ e) {

		

		try {
			conn->Open();
			MessageBox::Show("Connection Succeeded");
			conn->Close();
		}
		catch (Exception^ e) {

			MessageBox::Show("Connection Failed");

		}

	}
private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ courseTime = tbCourseTime->Text;
	String^ monday = tbMon->Text;
	String^ tuesday = tbTue->Text;
	String^ wednesday = tbWed->Text;
	String^ thursday = tbThu->Text;
	String^ friday = tbFri->Text;

	bool isValid = true;

	if (monday->Length == 200) {

		MessageBox::Show("Too much");
		isValid = false;

	}

	if (isValid) {

		conn->Open();

		String^ cmdString = "INSERT INTO tblscheduleMaker (courseTime,monday,tuesday,wednesday,thursday,friday) VALUES (@courseTime,@monday,@tuesday,@wednesday,@thursday,@friday)";

		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

		cmd->Parameters->AddWithValue("@courseTime", courseTime);
		cmd->Parameters->AddWithValue("@monday", monday);
		cmd->Parameters->AddWithValue("@tuesday", tuesday);
		cmd->Parameters->AddWithValue("@wednesday", wednesday);
		cmd->Parameters->AddWithValue("@thursday", thursday);
		cmd->Parameters->AddWithValue("@friday", friday);
		

		try {
			cmd->ExecuteNonQuery();
			MessageBox::Show(courseTime + " Inserted Successfully");
			conn->Close();
		}
		catch (Exception^ e) {

			MessageBox::Show("Failed to insert data");
			
		}

		try {
			conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM tblscheduleMaker", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			tblSchedule->DataSource = dt;
			conn->Close();

		}
		catch (Exception^ e) {
			MessageBox::Show("Failed To Read Data.");
		}

	}
	

}
};
}
