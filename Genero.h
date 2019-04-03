#pragma once

#ifndef  GENERO_H
#define GENERO_H

#include <string>

using namespace std;

class Genero
{

	public:
		Genero();
		Genero(enumg);
		EnumGenero getGenero()const;
		virtual Genero();
	private:
		enum EnumGenero{macho, hembra};
};


std::ostream& operator<<(std::ostream &o, const Direccion& d);
#endif // ! GENERO_H

