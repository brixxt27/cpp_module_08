#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator					iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator			reverse_iterator;
	typedef typename std::stack<T>::container_type::const_iterator				const_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator		const_reverse_iterator;

	MutantStack();
	MutantStack(const MutantStack& other);
	MutantStack<T>&	operator=(const MutantStack& rhs);
	virtual ~MutantStack();

	iterator				begin();
	iterator				end();
	reverse_iterator		rbegin();
	reverse_iterator		rend();

	const_iterator			begin() const;
	const_iterator			end() const;
	const_reverse_iterator	rbegin() const;
	const_reverse_iterator	rend() const;
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

	/**
	 * 아래 세 개 모두 복사가 가능하다.
	 * 원본의 내용을 전부 지운 뒤 복사한다.
	 */

	//this->c = rhs.c;
	MutantStack<T>::c = rhs.c;
	//MutantStack<T>::c.assign(rhs.begin(), rhs.end());
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

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return MutantStack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end() const
{
	return MutantStack<T>::c.end();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin() const
{
	return MutantStack<T>::c.rbegin();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend() const
{
	return MutantStack<T>::c.rend();
}

#endif
