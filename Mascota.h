#ifndef MASCOTA_H

#define MASCOTA_H

#include "Genero.h"

using namespace std;

class Mascota{

	public:
		Mascota();
	Mascota(string , const Genero&, float, const RazaPerro&);
	//Mascota();
	string getNombre() const;
	void setNombre(string nombre);
	void setPeso(float peso);
	void setGenero (Genero& genero);
	void setRazaPerro(RazaPerro& Raza);
	void agregarmascotaaclinica(Mascota*, int);
	void setMascotaEnClinica(Mascota**,int);
	void AltaMascota(Mascota*,Fecha)
	Genero getGenero() const;
	float getPeso() const;
	Mascota ** getMascotaEnClinica() const;
	int getCantidadDeMascotas() const;
	virtual ~Mascota();
	
	private:
		string nombre;
		Genero genero;
		float peso;
		
		Mascota** MascotasEnClinica;
		int cantidadDeMascota;
		static const int MAX_CANTIDAD_MASCOTAS = 10;
};

//std::ostream& operator<<(std::ostream &o, const Direccion& d);
#endif /* MASCOTA_H*/