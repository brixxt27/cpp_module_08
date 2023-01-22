#ifndef SPAN_H
#define SPAN_H

#include <vector>

class Span
{
public:
	Span(unsigned int N);
	Span(const Span& other);
	Span&	operator=(const Span& rhs);
	virtual ~Span();

	//addNumber()
	//shortestSpan()
	//longestSpan()
private:
	std::vector<int>	mVector;
	unsigned int		mSize;

	Span();
};

#endif
