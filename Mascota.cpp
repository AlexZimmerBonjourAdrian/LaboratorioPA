#include "../Laboratorio PA/Mascota.h"
#include "../Laboratorio PA/Genero.h"
#include "Dtgato.h"
#include <ostream>
 using namespace std;
Mascota::Mascota(){
}
Mascota::Mascota(string nombre, const Genero& Genero,float peso){
	this->nombre=nombre;
	this->peso = peso;
	
	}

string Mascota::getNombre()const {
	return this->nombre;
}

float Mascota::peso()const {
	return this->peso;
}

Genero Mascota::getGenero() const {
	return this->Genero;
}



Mascota::~Mascota() {

}

/*Mascota ** Mascota::ObtenerListMascota(Mascota& ListaDeMascotas)
{
	Mascota** mascota =new Mascota* [this->cantidadDeMascota;

	for(int i = 0; i < this->CantidadDeMascotas; i++)
	{
		if (cantidadDeMascotas[i]->getFechaEgreso()==NULL) {
			empresas[CantdadDeDeMascotas] = this->MascotasEnclinica[i]->
			
		}
		
	}
	
}*/
void Mascota::agregarMascotas(RelacionLaboral* r1){
		if (this->CantidadDeMascota == Max_RELACIONES_LABORALES) {

			/* code */
		}

		this->CantidadDeMascota[this->CantidadDeMascotas] = r1;
		this->cantidadDeMascotas++;
		
	 }
// std::ostream& operator<<(std::ostream &o, const Mascota& m) {
	// o << m.getNombre() << " " << m.getPeso() << m.getGenero();
// 	return 0;
//  }
