

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <list>
#include <climits>

class RPN
{
private:
	std::stack<int, std::list<int> > nums;
	long long	calc(int x, int y, char op);
public:
	RPN();
	RPN(const RPN& other);
    RPN &operator=(const RPN& other);
	~RPN();

	void	processInput(const std::string& av);
};

#endif