#include "mutantstack.hpp"

int main2(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "top: " << mstack.top() << std::endl;

	std::cout << "---" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);
	mstack.push(4242);
	mstack.push(24);
	mstack.push(2424);
	mstack.push(0);

	{
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		std::cout << "mstack content (bottom to top): " << std::endl;
		while (it != ite)
		{
			std::cout << *it;
			if (++it == ite)
				std::cout << std::endl;
			else
				std::cout << ", ";
		}
	}

	{
		MutantStack<int>::const_iterator it = mstack.begin();
		MutantStack<int>::const_iterator ite = mstack.end();

		++it;
		--it;

		std::cout << "mstack content (bottom to top): " << std::endl;
		while (it != ite)
		{
			std::cout << *it;
			if (++it == ite)
				std::cout << std::endl;
			else
				std::cout << ", ";
		}
	}

	{
		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite = mstack.rend();

		++it;
		--it;

		std::cout << "mstack content (top to bottom): " << std::endl;
		while (it != ite)
		{
			std::cout << *it;
			if (++it == ite)
				std::cout << std::endl;
			else
				std::cout << ", ";
		}
	}

	{
		MutantStack<int>::const_reverse_iterator it = mstack.rbegin();
		MutantStack<int>::const_reverse_iterator ite = mstack.rend();

		++it;
		--it;

		std::cout << "mstack content (top to bottom): " << std::endl;
		while (it != ite)
		{
			std::cout << *it;
			if (++it == ite)
				std::cout << std::endl;
			else
				std::cout << ", ";
		}
	}

	std::cout << "---" << std::endl;

	{
		std::stack<int> s(mstack);
		MutantStack<int> st = mstack;

		std::cout << "size: " << st.size() << " (" << mstack.size() << ")" << std::endl;
		std::cout << "top: " << st.top() << " (" << mstack.top() << ")" << std::endl;
		st.pop();
		std::cout << "size: " << st.size() << " (" << mstack.size() << ")" << std::endl;
		std::cout << "top: " << st.top() << " (" << mstack.top() << ")" << std::endl;
	}



	return (0);
}


int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "1st element : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size after pop : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	std::cout << "regular test test " << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl;
	MutantStack<int>::const_iterator itc = mstack.begin();
	MutantStack<int>::const_iterator itec = mstack.end();

	++itc;
	--itc;

	std::cout << "const test " << std::endl;
	while (itc != itec) {
		std::cout << *itc << std::endl;
		++itc;
	}

	std::cout << std::endl;
	MutantStack<int>::reverse_iterator itr = mstack.rbegin();
	MutantStack<int>::reverse_iterator iter = mstack.rend();

	++itr;
	--itr;

	std::cout << "reverse test " << std::endl;
	while (itr != iter) {
		std::cout << *itr << std::endl;
		++itr;
	}

	std::cout << std::endl;
	MutantStack<int>::const_reverse_iterator itrc = mstack.rbegin();
	MutantStack<int>::const_reverse_iterator iterc = mstack.rend();

	++itrc;
	--itrc;

	std::cout << "const reverse test " << std::endl;
	while (itrc != iterc) {
		std::cout << *itrc << std::endl;
		++itrc;
	}



	return (main2());
}