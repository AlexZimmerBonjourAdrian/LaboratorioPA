
 #define DTRAZAPERRO.H
 #include "DtRazaPerro.h"

 
 using namespace std;
 
 class RazaPerro(){
 	  
	   
	   private: 
 	 enum Razas{labrador,ovejero,bulldog,pitbull,collie.pekines,otro};
 	 public:

 	 	RazaPerro();
 	 	RazaPerro(const String&);
 	 	 Razas getRazaPerro();
	
	virtual ~RazaPerro(); 	
 };
 #endif 