#include <iostream>
#include <stdexcept>
#include <string.h>
 using namespace std;

class Mascota{
private:	
 	string nombre;
 	enum genero {macho,hembra
	 };
 	float peso;
public:
		Mascota();
 		void setnombre(string);
 		void setGenero(genero *);
 		void setpeso(float );
 		string getnombre();
 		genero getGenero();
 		float getpeso();
	
	
};

Mascota::setnombre(string n)
{
	nombre = n;
}

Mascota::setpeso(float n)
{
	peso=n;
}

//Mascota::setGenero(genero g)
//{
//	
//}

Mascota::getnombre()
{
	return nombre;
}
Mascota::getpeso()
{
	return peso;
}
int main()
{
	Mascota * m1= new Mascota();
	
}
