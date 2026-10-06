/*
 * Vector_test.cpp
 *
 *  Created on: 28 sept 2026
 *      Author: rodri
 */


#include "Vector.h"
#include <gtest/gtest.h>

TEST(Vector,const1) {  //El nombre del test siempre tiene el nombre de la clase a testear // const1 = Construye1
	Vector obj;
	ASSERT_FALSE(obj.set(0,1)); //Palabra reservada para comprobar un elemento y saber su "estado" en este caso si es falso
								//Ponme el elemento 0 a 0 y el set a 0

}

TEST(Vector,const2){
	Vector obj(2); 					//Como estoy usando argumento, detecta que uso el constructor que tiene argumento.
	ASSERT_TRUE(obj.set(0,1));  	//Al usar el segundo constructor si que va a poder escribir por lo que debemos poner TRUE
	int val;
	ASSERT_TRUE(obj.get(0,val));   	//En el uso de val ya no hace falta usar & porque ya se ha declarado así.
									//Como compruebo el valor de val?
	ASSERT_EQ(val,1);
	ASSERT_TRUE(obj.get(1,val));
	ASSERT_EQ(val,0); //Si lo cambio a 0 el test dará correcto porque inicialicé a 0, estaba en 1
}


