#include <iostream>

// int main(void)
// {
// 	for(int i = 0; i < 10; i++)
// 		std::cout << i << std::endl;
// 	return (0);
// }

// int main(void)
// {
// 	int sum = 0;

// 	for(int i = 1; i <= 10; i++)
// 		sum += i;
	
// 	std::cout << "total: " << sum << std::endl;
// 	return (0);
// }

// int main(void)
// {
// 	int i = 1, sum = 0;

// 	while (i <= 10)
// 	{
// 		sum += i;
// 		i++;
// 	}

// 	std::cout << "total: " << sum << std::endl;
// 	return (0);
// }

// int main(void)
// {
// 	int lucky_num = 3;
// 	std::cout << "guess my lucky number~" << std::endl;

// 	int user_input;

// 	while (1)
// 	{
// 		std::cout << "input: ";
// 		std::cin >> user_input;
// 		if (lucky_num == user_input)
// 		{
// 			std::cout << "corect~" << std::endl;
// 			break ;
// 		}
// 		else
// 			std::cout << "guess again~" << std::endl;
// 	}
// 	return (0);
// }

using std::cout;
using std::endl;
using std::cin;

int main(void)
{
	int user_input;
	cout << "My information" << endl;
	cout << "1. Name" << endl;
	cout << "2. Age" << endl;
	cout << "3. Genger" << endl;
	cin >> user_input;

	switch(user_input)
	{
		case 1:
			cout << "Halin" << endl;
			break ;
		case 2:
			cout << "25" << endl;
			break ;
		case 3:
			cout << "Woman" << endl;
			break ;
		default:
			cout << "No Question~" << endl;
			break ;
	}
	return (0);
}
