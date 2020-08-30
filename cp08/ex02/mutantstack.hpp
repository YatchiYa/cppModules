#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <deque>
# include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {};
	MutantStack(MutantStack<T> const &tocopy) : std::stack<T>(tocopy) {};
	MutantStack<T> &operator=(MutantStack<T> const &tocopy);
	virtual ~MutantStack() {};

	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;
	typedef typename std::deque<T>::reverse_iterator reverse_iterator;
	typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;
	/*Par défaut, la classe stack utilise une deque, on aurait pu donc faire :
	typedef typename std::stack<T>::container_type::iterator iterator; */

	/*La classe stack contient un attribut "c", le conteneur*/
	iterator begin(void) { return (this->c.begin()); }
	const_iterator begin(void) const { return (this->c.begin()); }
	reverse_iterator rbegin(void) { return (this->c.rbegin()); }
	const_reverse_iterator rbegin(void) const { return (this->c.rbegin()); }
	iterator end(void) { return (this->c.end()); }
	const_iterator end(void) const { return (this->c.end()); }
	reverse_iterator rend(void) { return (this->c.rend()); }
	const_reverse_iterator rend(void) const { return (this->c.rend()); }

	/*To iterate backwards use rbegin() and rend()
	as the iterators for the end of the collection, and the start of the collection respectively.*/

};

#endif