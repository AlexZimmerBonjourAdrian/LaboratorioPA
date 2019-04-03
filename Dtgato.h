#define DTGATO.H
#include "Dtgato.h"

class  DtGato
{
private:
    string ci;
    string nombre;
public:
    DtGato();
    DtGato(string, string);
    string getCi() const;
    string getNombre(); const;
virtual ~Dtgato();
};
std::ostream& operator<<(std::ostream &o, const Dtgato& de);
#endif /* DTGATO_H */ 