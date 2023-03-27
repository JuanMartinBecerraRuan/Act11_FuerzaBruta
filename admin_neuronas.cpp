#include "admin_neuronas.h"

Admin_Neuronas::Admin_Neuronas(){
}

void Admin_Neuronas::agregar_inicio(Neurona *nuevo){
    lista.push_front(*nuevo);
}

void Admin_Neuronas::agregar_final(Neurona *nuevo){
    lista.push_back(*nuevo);
}

void Admin_Neuronas::mostrar(){
    list<Neurona>::iterator aux = lista.begin();
    while(aux!=lista.end()){
        cout<<"ID: "<<aux->getId()<<endl;
        cout<<"VOLTAJE: "<<aux->getVoltaje()<<endl;
        cout<<"POS X: "<<aux->getPosX()<<endl;
        cout<<"POS Y: "<<aux->getPosY()<<endl;
        cout<<"RED: "<<aux->getRed()<<endl;
        cout<<"GREEN: "<<aux->getGreen()<<endl;
        cout<<"BLUE: "<<aux->getBlue()<<endl<<endl;
        aux++;
    }
}

list<Neurona> Admin_Neuronas::get_lista(){
    return lista;
}
