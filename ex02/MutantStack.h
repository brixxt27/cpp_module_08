#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator			iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;

	MutantStack();
	MutantStack(const MutantStack& other);
	MutantStack<T>&	operator=(const MutantStack& rhs);
	virtual ~MutantStack();

	iterator	begin();
	iterator	end();
	reverse_iterator	rbegin();
	reverse_iterator	rend();
};

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other)
	: std::stack<T>(other)
{
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& rhs)
{
	if (this == &rhs)
		return *this;
		
	this->c = rhs.c;
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return this->c.end();
}
template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin()
{
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend()
{
	return this->c.rend();
}

#endif
