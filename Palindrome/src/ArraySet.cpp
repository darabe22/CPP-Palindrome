/*
 * ArraySet.cpp
 *
 *  Created on: Apr 15, 2015
 *      Author: Durelle
 */

#include "ArraySet.h"
using namespace std;

template <class E>
bool ArraySet<E>::add(E element){
	return false;
}

template <class E>
bool ArraySet<E>::contains(E element){
	return false;
}

template <class E>
vector<E> ArraySet<E>::toVector(){
	return arraySet;
}

template <class E>
string ArraySet<E>::toString(){
	return new string();
}
