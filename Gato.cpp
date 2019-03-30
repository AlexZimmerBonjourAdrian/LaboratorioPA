
#include <iostream>
#include <stdexcept>
#include <string.h>
using namespace std;
 
class Gato
{
	private:
		string ci;
		string nombre;
		//Fecha * fechaingreso=new Fecha();
		
	
	public:
		void setci(string *);
		void setnombre(string *);
		//void fechaingreso(DtFecha *);
		string getci();
		string getnombre();
		//DtFecha fechaingreso();
	
};
