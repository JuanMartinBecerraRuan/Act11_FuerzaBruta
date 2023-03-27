#include "neurona.h"

Neurona::Neurona(int id, double voltaje, int posicion_x, int posicion_y, int red, int green, int blue){
    this->id=id;
    this->voltaje=voltaje;
    this->posicion_x=posicion_x;
    this->posicion_y=posicion_y;
    this->red=red;
    this->green=green;
    this->blue=blue;
}

int Neurona::getId(){
    return id;
}

double Neurona::getVoltaje(){
    return voltaje;
}

int Neurona::getPosX(){
    return posicion_x;
}

int Neurona::getPosY(){
    return posicion_y;
}

int Neurona::getRed(){
    return red;
}

int Neurona::getGreen(){
    return green;
}

int Neurona::getBlue(){
    return blue;
}
