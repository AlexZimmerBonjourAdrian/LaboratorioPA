#include <iostream>
#include <stdexcept>
#include <string.h>
 using namespace std;
 
 class Genero
{
 		private:
 			enum Enumgenero{macho,hembra};
 		public:
 			void setGenero(Enumgenero *);
 			Enumgenero getGenero();
};
