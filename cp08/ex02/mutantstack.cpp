#include "mutantstack.hpp"

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &tocopy) {
	this->c = tocopy.c;
	return (*this);
}