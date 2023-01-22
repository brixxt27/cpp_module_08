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

	void			addNumber(unsigned int num);
	void			addNumber(unsigned int smallest_num, unsigned int bigest_num);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

private:
	std::vector<int>	mVector;
	unsigned int		mSize;
	bool				mIsSorted;

	Span();
};

#endif
