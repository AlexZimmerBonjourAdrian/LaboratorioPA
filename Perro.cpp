#include <iostream>
#include <stdexcept>
#include <string.h>
 using namespace std;

class Perro
{
private:

 bool VacunaCachorro;
 enum RazaPerro {labrador,ovejero,bulldog,pitbull,collie,penkies,otro};
  RazaPerro Raza;
 public:
  void setRaza(RazaPerro *);
  void setVacunaCachorro(bool *);
  RazaPerro getRaza();
  bool getVacunaCacharro(); 
  
  
  
};
