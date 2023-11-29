#include "pch.h"
#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT * FROM Prosit_6;";	
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO Prosit_6 (Nom, Prenom, Adresse, Ville, CodePostal) VALUES('" + this->nom + "','" + this->prenom + "','" + this->adresse + "','" + this->ville + "','" + this->codepostal + "');";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "DELETE FROM Prosit_6 WHERE id = " + this->Id + ";";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "UPDATE Prosit_6 SET Nom = '" + this->nom + "', Prenom = '" + this->prenom + "', Adresse = '" + this->adresse + "', Ville = '" + this->ville + "', CodePostal = '" + this->codepostal + "' WHERE id = " + this->Id + ";";
}
void NS_Comp_Mappage::CLmapTB::setId(System::String^ Id)
{
	this->Id = Id;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}

void NS_Comp_Mappage::CLmapTB::setAdresse(System::String^ adresse)
{
	this->adresse = adresse;
}

void NS_Comp_Mappage::CLmapTB::setVille(System::String^ville)
{
	this->ville = ville;
}

void NS_Comp_Mappage::CLmapTB::setCodePostal(System::String^ codepostal)
{
	this->codepostal = codepostal;
}
System::String^ NS_Comp_Mappage::CLmapTB::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->prenom; }
System::String^ NS_Comp_Mappage::CLmapTB::getAdresse(void){return this->adresse;}
System::String^ NS_Comp_Mappage::CLmapTB::getVille(void) { return this->ville; }
System::String^ NS_Comp_Mappage::CLmapTB::getCodePostal(void) { return this->codepostal; }



