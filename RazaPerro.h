#include "DtRazaPerro.h"

 using namespace std;
 
 class RazaPerro(){
 	  
	private: 
 	 enum Razas{labrador,ovejero,bulldog,pitbull,collie,pekines,otro};
 	 public:
 	 	DtRazaPerro();
 	 	virtual ~RazaPerro() const;
 	 	Razas getRazaPerro();
 	 	
 };
