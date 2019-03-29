#define <iostream>
#define <stdexcept>
#define <string.h>
 using namespace std;
 
 class Genero:
{
 		private:
 			enum genero (macho, hembra);
 		public:
 			void setGenero(genero *);
 			genero getGenero();
}
