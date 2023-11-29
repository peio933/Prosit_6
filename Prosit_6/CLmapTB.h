#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapTB
	{
	private:
		System::String^ sSql;
		System::String^ Id;
		System::String^ nom;
		System::String^ prenom;
		System::String^ adresse;
		System::String^ ville;
		System::String^ codepostal;

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(System::String^);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setAdresse(System::String^);
		void setVille(System::String^);
		void setCodePostal(System::String^);
		System::String^ getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getAdresse(void);
		System::String^ getVille(void);
		System::String^ getCodePostal(void);
	};
}

