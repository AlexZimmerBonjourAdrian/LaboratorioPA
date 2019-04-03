#include "DtFecha.h"

#include <stdexcept>

DTFecha::DTFecha(int dia, int mes,int anio)
{
    this->dia = dia;
    this-> mes = mes;
    this-> anio = anio;

    if(!isValid())
     {
         //throw std::isvalid_argument("Fecha_invalida");
    }
}
    
    int DTFecha::getDia() const {
        return dia;
        }

    int DTFecha::getMes() const  {
        return mes;
        }
    int DTFecha::getAnio() const {
        return anio;
        }

    bool DTFecha::isValid() {
        return this->dia >= 1 && this->dia <=31 &&
        this->mes >= 1 && this->mes <= 12 &&
        this->anio >= 1900;
    }
    DTFecha::~DTFecha(){
        }
