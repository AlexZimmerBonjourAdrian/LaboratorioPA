
#include <iostream>
#include <stdexcept>
#include <string.h>
using namespace std;

class Fecha
{
	private:
	int DD;
	int MM;
	int YY;

	public:
	
		void setDD(int);
		void setMM(int);
		void setYY(int);
		int getDD();
		int getMM();
		int getYY();
		Fecha();
		Fecha(int,int,int);
		Fecha getFecha();
		~Fecha();
		
		
		Fecha(int a,int b,int c){
			this->DD = a;
			this->MM = b;
			this->YY = c;
		}
		
		
		
		
};
