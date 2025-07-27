#include <iostream>
#include <iostream>

class Test
{
	char c;

	public:
		Test(char _c)
		{
			c = _c;
			std::cout << "Called constructor " << c << std::endl;
		}
		~Test() { std::cout << "Called destructor " << c << std::endl; }
};

void simple_function() { Test b('b'); }

int main(void)
{
	Test a('a');
	simple_function();
	return (0);
}