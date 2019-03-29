
#define <iostream>
#define <stdexcept>
#define <string.h>
 using namespace std;
 
Class Socio
{
	private:
		string ci;
		string nombre;
		DtFecha fechaingreso;
		
	
	public:
		void setci(string *);
		void setnombre(string *);
		void fechaingreso(DtFecha *);
		string getci();
		string getnombre();
		DtFecha fechaingreso();
	
}
