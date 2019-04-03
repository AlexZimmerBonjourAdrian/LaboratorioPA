#ifndef DTFECHA_H
#define DTFECHA_H

class DTFecha {
    public:
    DTFecha(int dia, int mes,int anio);

    int getDia() const;
    int getMes() const;
    int getAnio() const;

    virtual ~DTFecha();

    private:
    int dia;
    int mes;
    int anio;
    bool isValid();
};

#endif 