#pragma once
#include "CLmapTB.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservice
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLservice(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void ajouterUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^);
		void modifierUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnePersonne(System::String^);
	};
}


