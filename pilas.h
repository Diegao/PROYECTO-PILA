/*
 * pilas.h
 *
 *  Created on: 10/06/2016
 *      Author: DIEGO
 */

#ifndef PILAS_H_
#define PILAS_H_
#include <iostream>
using namespace std;


struct ListaPila{
	struct NodoP{
		char* letra;
		NodoP *siguiente;
	};

	NodoP *top=NULL;
	NodoP *fin=NULL;
	NodoP *aux=NULL;

	void PushP(char* x){

		if(top==NULL){
			top = new(NodoP);
			top->letra=x;
			fin=top;
		}else{

			aux= new(NodoP);
			aux->letra=x;
			aux->siguiente = top;
			top= aux;
		}
		fin->siguiente=NULL;
	}


	void PopP(){

		if(top==NULL){
			cout<<"La pila no tiene datos"<<endl;
		}else{
		aux = top;
		top = top->siguiente;
		delete (aux);
	}
}
	void TopP(){

		if(top==NULL){
			cout<<"La pila no tiene datos "<<endl;
		}else{
		cout<<"SU TOPE DE PILA ES:"<<endl;
		cout<<top->letra<<endl;
	}
	}
	void mostrarP(){
		if(top==NULL){

			cout<<"La pila no tiene datos "<<endl;
		}else{

			aux = top;
			cout<<"Los datos de su pila son: "<<endl;

			while (aux != NULL){
				cout<<aux->letra<<endl;
				aux= aux->siguiente;
			}
		}
	}

	void totallistaP(){
		aux = top;
		int x;
		x = 0;
		while (aux!= NULL){

			aux = aux->siguiente;
			x = x+1;
		}
		cout<<"El total de datos de su pila es:  "<<x <<endl;
	}

};




#endif /* PILAS_H_ */
