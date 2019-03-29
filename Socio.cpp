#define <iostream>
#define <stdexcept>
#define <string.h>
 using namespace std;
 
 class socio
 {
 	private:
 		string ci;
 		string nombre;
 		DtFecha fechaIngreso;
 		
	public:
	  void setci(string *);
	  void setnombre(string *);
	  void setfechaIngreso(DtFecha *);
	  string getnombre();
	  string getci();
	  DtFecha getfechaIngreso();
	  socio();
	  socio(const socio&);
	  ~socio();
 		
 }
