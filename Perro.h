#ifdef PERRO_H
#define PERRO_H

#include <string>
#include "RazaPerro.h"

using namespace std;

class Perro
{
	
	public:
		Perro();
		Perro(const  ,  bool *);
		RazaPerro getRaza() const;
		getVacunaCachorro() const; 	
	virtual ~Perro();
	private:
		enum RazaPerro{labrador,ovejero,bulldog,pitbull,collie.penkies,otro};
		RazaPerro Raza;
		bool VacunaPerro;	
    
};
#endif
