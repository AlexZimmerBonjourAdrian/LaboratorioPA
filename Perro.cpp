#define <iostream>
#define <stdexcept>
#define <string.h>
 using namespace std;

Class Perro
{
private:
 RazaPerro Raza;
 bool VacunaCachorro;
 enum RazaPerro {labrador,ovejero,bulldog,pitbull,collie,penkies,otro};
 public:
  void setRaza(RazaPerro *);
  void setVacunaCachorro(bool *);
  RazaPerro getRaza();
  bool getVacunaCacharro(); 
  
  
}
