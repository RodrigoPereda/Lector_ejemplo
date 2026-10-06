/*
 * Vector.cpp
 *
 *  Created on: 28 sept 2026
 *      Author: rodri
 */

#include "Vector.h"
#include <iostream>

Vector::Vector() {
	n=0;
	dat = nullptr;
	std::cout <<" Estoy en el constructor 1 Vector() " << std::endl;
}

// Constructor con tamaño array

Vector::Vector(int nelem){
	n=nelem;
	dat=new int[n]{0};   //Si no pongo el {0} saltara error porque se llena de basura al inicializar
	std::cout <<" Estoy en el constructor Vector(int nelem) " << std::endl;
}

Vector::~Vector() {
	//El destructor se encarga de liberar la memoria, para eso tendrá que comprobar si está ocupada
	if(n>0) {
		delete [] dat;			//Borra el array dat , se usa el DELETE para borrar lo creado por NEW
	}
	n=0;						//Esto se hace para dejarlo anulado, no hace falta pero es por si se sigue haciendo referencia a un objeto muerto
	dat=nullptr;
	std::cout <<" Estoy en el destructor ~Vector() " << std::endl;
}

//set
bool Vector::set(int pos, int val){		//Se pone el bool porque es un booleano lo que recibe

	if(pos >= 0 && pos < n){
		dat[pos]=val;
		return true;
	}
	std::cout <<" Error en método set " << std::endl;
	return false;

}

//get
bool Vector::get(int pos, int &val){

	if(pos >= 0 && pos < n){
		val=dat[pos];
		return true;
	}
	std::cout <<" Error en método get " << std::endl;
	return false;
}

