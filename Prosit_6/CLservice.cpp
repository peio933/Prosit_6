#include "pch.h"
#include "CLservice.h"

NS_Comp_Svc::CLservice::CLservice(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}

System::Data::DataSet^ NS_Comp_Svc::CLservice::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservice::ajouterUnePersonne(System::String^ nom, System::String^ prenom, System::String^adresse, System::String^ ville, System::String^ codePostal)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setVille(ville);
	this->oMappTB->setCodePostal(codePostal);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservice::modifierUnePersonne(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ ville, System::String^ codePostal, System::String^ Id)
{
System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setVille(ville);
	this->oMappTB->setCodePostal(codePostal);
	this->oMappTB->setId(Id);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);

}

void NS_Comp_Svc::CLservice::supprimerUnePersonne(System::String^ Id)
{
	System::String^ sql;

	this->oMappTB->setId(Id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}
