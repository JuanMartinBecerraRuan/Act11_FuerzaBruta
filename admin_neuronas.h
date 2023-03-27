#ifndef ADMIN_NEURONAS_H
#define ADMIN_NEURONAS_H
#include <iostream>
#include <neurona.h>
#include <list>

using namespace std;

class Admin_Neuronas{
    private:
        list<Neurona> lista;
    public:
        Admin_Neuronas();
        void agregar_inicio(Neurona *);
        void agregar_final(Neurona *);
        void mostrar();
        list<Neurona> get_lista();
};

#endif // ADMIN_NEURONA_H

