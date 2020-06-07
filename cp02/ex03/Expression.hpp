
#ifndef EXPRESSION_HPP
# define EXPRESSION_HPP

# include <iostream>
# include <sstream>
# include <string>
# include "Fixed.hpp"

class Expression
{
private:
	Fixed acc;
	std::string str;
	std::string expr;

	static bool isOperand(char c);
	void simplify(void);
	Fixed &operand(Fixed &acc, char op, std::string const &str);
	Fixed &execute(Fixed &acc, char op, Fixed const &value);
	Fixed &accumulate(Fixed &acc, char operand, std::stringstream &ss);
public:
	Expression();
	Expression(std::string const &str);
	Expression(Expression const &other);
	virtual ~Expression();

	Expression &operator=(Expression const &other);

	Fixed calculate(void);

	std::string &getExpression(void);
	void setExpression(std::string const &expr);
};

#endif