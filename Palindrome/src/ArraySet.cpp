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
	bool addSuccessful=false;

	if( !contains(element) ){
		vectorSet.push_back(element);
		addSuccessful=true;
	}
	return addSuccessful;
}

template <class E>
bool ArraySet<E>::contains(E element){
	bool hasElement=false;
	if( find(vectorSet.begin(), vectorSet.end(), element) != vectorSet.end() ){
		hasElement=true;
	}
	return hasElement;
}

template <class E>
vector<E> ArraySet<E>::toVector(){
	return vectorSet;
}

template <class E>
string ArraySet<E>::toString(){
	string vectorString;
	vectorString = new string();

	for(int x=0; x<vectorSet.size(); x++){
//assumes that the elements within vectorSet can be appended to a string
		vectorString+=vectorSet[x];
	}

	return vectorString;
}
