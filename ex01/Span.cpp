#include <algorithm>
#include "Span.h"

Span::Span(unsigned int N)
	: mSize(N)
	, mIsSorted(false)
{
	mVector.reserve(42);
}

Span::Span(const Span& other)
	: mVector(other.mVector)
	, mSize(other.mSize)
	, mIsSorted(false)
{
}

Span&	Span::operator=(const Span& rhs)
{
	if (this == &rhs)
		return *this;

	mVector = rhs.mVector;
	mSize = rhs.mSize;
	mIsSorted = rhs.mIsSorted;

	return *this;
}

void	Span::addNumber(unsigned int num)
{
	if (mVector.size() >= mSize)
		throw std::out_of_range("**** Span is full! ****");

	mVector.push_back(num);
}

void	Span::addNumber(unsigned int smallest_num, unsigned int bigest_num)
{
	unsigned int	span = bigest_num - smallest_num;

	if (mVector.size() + span > mSize)
		throw std::out_of_range("**** Span is full! ****");
	if (span < 1)
		throw std::range_error("**** You need 2 or more elements ****");

	mVector.reserve(10000);

	for (unsigned int i = smallest_num; i <= bigest_num; i++) {
		if (mVector.size() >= mSize)
			throw std::out_of_range("**** Span is full! ****");
		mVector.push_back(i);
	}
}

unsigned int	Span::shortestSpan()
{
	int	shortest_span;

	if (mVector.size() < 2)
		throw std::range_error("**** You need 2 or more elements ****");

	if (mIsSorted == false) {
		std::sort(mVector.begin(), mVector.end());
		mIsSorted = true;
	}
	shortest_span = mVector[1] - mVector[0];

	for (std::vector<int>::iterator iter = mVector.begin() + 1; iter < mVector.end() - 1; iter++) {
		if (*(iter + 1) - *iter < shortest_span)
			shortest_span = *(iter + 1) - *iter;
	}
	return shortest_span;
}

unsigned int	Span::longestSpan()
{
	if (mVector.size() < 2)
		throw std::range_error("**** You need 2 or more elements ****");
	
	if (mIsSorted == false) {
		std::sort(mVector.begin(), mVector.end());
		mIsSorted = true;
	}
	return (*(mVector.end() - 1) - *mVector.begin());
}


Span::~Span()
{
}

Span::Span()
{
}
