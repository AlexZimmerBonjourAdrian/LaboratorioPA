#define <iostream>
#define <stdexcept>
#define <string.h>
 using namespace std;
 
 class RazaPerro(){
 	  
	   
	   private: 
 	 enum Razas{labrador,ovejero,bulldog,pitbull,collie.pekines,otro};
 	 public:
 	 	RazaPerro();
 	 	RazaPerro(const String&);
 	 	~RazaPerro();
 	 	void setRazaPerro(Razas *);
 	 	Razas getRazaPerro();
 	 	
 }
