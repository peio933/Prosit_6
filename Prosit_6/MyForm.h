#pragma once
#include "CLservice.h"

namespace Prosit6 {

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
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	protected:

	private: System::Windows::Forms::Button^ btn_load;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::TextBox^ txt_nom;




	private: NS_Comp_Svc::CLservice^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::TextBox^ txt_codepostal;

	private: System::Windows::Forms::TextBox^ txt_ville;

	private: System::Windows::Forms::TextBox^ txt_adresse;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_codepostal = (gcnew System::Windows::Forms::TextBox());
			this->txt_ville = (gcnew System::Windows::Forms::TextBox());
			this->txt_adresse = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(12, 12);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(618, 175);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgv_enr_CellContentClick);
			// 
			// btn_load
			// 
			this->btn_load->AccessibleName = L"Enregistrer";
			this->btn_load->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btn_load->FlatAppearance->BorderColor = System::Drawing::SystemColors::ScrollBar;
			this->btn_load->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_load->Location = System::Drawing::Point(12, 202);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(91, 146);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Enregistrer";
			this->btn_load->UseVisualStyleBackColor = false;
			this->btn_load->Click += gcnew System::EventHandler(this, &MyForm::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btn_insert->FlatAppearance->BorderColor = System::Drawing::SystemColors::ScrollBar;
			this->btn_insert->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_insert->Location = System::Drawing::Point(122, 202);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(105, 43);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Nouveau";
			this->btn_insert->UseVisualStyleBackColor = false;
			this->btn_insert->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->AccessibleName = L"Supprimer";
			this->btn_delete->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btn_delete->FlatAppearance->BorderColor = System::Drawing::SystemColors::ScrollBar;
			this->btn_delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_delete->Location = System::Drawing::Point(122, 307);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(105, 41);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"Supprimer";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->AccessibleName = L"Mise à jour";
			this->btn_update->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btn_update->FlatAppearance->BorderColor = System::Drawing::SystemColors::ScrollBar;
			this->btn_update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_update->Location = System::Drawing::Point(122, 253);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(105, 44);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"Mise à jour";
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &MyForm::btn_update_Click);
			// 
			// txt_id
			// 
			this->txt_id->AccessibleName = L"ID";
			this->txt_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_id->Location = System::Drawing::Point(313, 203);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(317, 20);
			this->txt_id->TabIndex = 5;
			this->txt_id->Tag = L"";
			this->txt_id->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_id_TextChanged);
			// 
			// txt_nom
			// 
			this->txt_nom->AccessibleName = L"Nom";
			this->txt_nom->Location = System::Drawing::Point(313, 229);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(317, 20);
			this->txt_nom->TabIndex = 6;
			this->txt_nom->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_nom_TextChanged);
			// 
			// txt_prenom
			// 
			this->txt_prenom->AccessibleName = L"Prénom";
			this->txt_prenom->Location = System::Drawing::Point(313, 255);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(317, 20);
			this->txt_prenom->TabIndex = 7;
			this->txt_prenom->Tag = L"";
			// 
			// txt_codepostal
			// 
			this->txt_codepostal->AccessibleName = L"Code_Postal";
			this->txt_codepostal->Location = System::Drawing::Point(313, 333);
			this->txt_codepostal->Name = L"txt_codepostal";
			this->txt_codepostal->Size = System::Drawing::Size(317, 20);
			this->txt_codepostal->TabIndex = 10;
			this->txt_codepostal->Tag = L"";
			// 
			// txt_ville
			// 
			this->txt_ville->AccessibleName = L"Ville";
			this->txt_ville->Location = System::Drawing::Point(313, 307);
			this->txt_ville->Name = L"txt_ville";
			this->txt_ville->Size = System::Drawing::Size(317, 20);
			this->txt_ville->TabIndex = 9;
			this->txt_ville->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// txt_adresse
			// 
			this->txt_adresse->AccessibleName = L"Adresse";
			this->txt_adresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_adresse->Location = System::Drawing::Point(313, 281);
			this->txt_adresse->Name = L"txt_adresse";
			this->txt_adresse->Size = System::Drawing::Size(317, 20);
			this->txt_adresse->TabIndex = 8;
			this->txt_adresse->Tag = L"";
			this->txt_adresse->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label1
			// 
			this->label1->AccessibleName = L"ID";
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(266, 206);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"ID";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AccessibleName = L"Nom";
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(258, 232);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Nom";
			// 
			// label3
			// 
			this->label3->AccessibleName = L"Prénom";
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(253, 258);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Prénom";
			// 
			// label4
			// 
			this->label4->AccessibleName = L"Adresse";
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(253, 284);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Adresse";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AccessibleName = L"Ville";
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(261, 310);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Ville";
			// 
			// label6
			// 
			this->label6->AccessibleName = L"Code postal";
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(244, 336);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Code postal";
			// 
			// MyForm
			// 
			this->AccessibleName = L"Prosit 6";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(642, 360);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_codepostal);
			this->Controls->Add(this->txt_ville);
			this->Controls->Add(this->txt_adresse);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->dgv_enr);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Prosit 6";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Rsl";
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->oSvc = gcnew NS_Comp_Svc::CLservice();
}
private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->oSvc->ajouterUnePersonne(this->txt_nom->Text, this->txt_prenom->Text,this->txt_adresse->Text, this->txt_ville->Text, this->txt_codepostal->Text);
}
private: System::Void txt_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgv_enr_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void txt_nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->modifierUnePersonne(this->txt_nom->Text, this->txt_prenom->Text, this->txt_adresse->Text, this->txt_ville->Text, this->txt_codepostal->Text, this->txt_id->Text);
}
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->supprimerUnePersonne(this->txt_id->Text);
}
};
}
