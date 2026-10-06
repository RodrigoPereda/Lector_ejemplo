/*
 * Vector.h
 *
 *  Created on: 28 sept 2026
 *      Author: rodri
 */

#ifndef VECTOR_H_
#define VECTOR_H_

class Vector { 				//Un .h solo puede tener una clase y un .cpp por clase y un test por clase
public:
	Vector();				//Array vacio
	Vector(int nelem);		//Array con N elementos
	~Vector();
	bool set(int pos, int val);   // Mediante el valor de retorno voy a saber si ha funcionado o no, si es un 1 funciono si es un 0 no
	bool get(int pos, int &val);   // & Significa que lo hemos pasado por referencia, es decir, por donde se encuentra posicionado
private:
		int n; 				//Número de elementos
		int *dat;			//Puntero  al array de valores
};

#endif /* VECTOR_H_ */
