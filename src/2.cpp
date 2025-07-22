#include <iostream>

// int main(void)
// {
// 	int a = 3;
// 	int& another_a = a;

// 	another_a = 5;
// 	std::cout << "a: " << a << std::endl;
// 	std::cout << "another_a: " << another_a << std::endl;

// 	return (0);
// }


// int main(void)
// {
// 	int a = 10;
// 	int& another_a = a;

// 	int b = 3;
// 	another_a = b;
// 	std::cout << "a: " << a << std::endl;
// 	std::cout << "another_a: " << another_a << std::endl;
// 	std::cout << "b: " << b << std::endl;

// 	return (0);
// }


// int change_val(int &p)
// {
// 	p = 3;
// 	return (0);
// }

// int  main(void)
// {
// 	int number = 5;

// 	std::cout << number << std::endl;
// 	change_val(number);
// 	std::cout << number << std::endl;
// }


// int main(void)
// {
// 	int x;
// 	int& y = x;
// 	int& z = y;

// 	x = 1;
// 	std::cout << "x: " << x << ", y: " << y << ", z: " << z <<std::endl;

// 	y = 2;
// 	std::cout << "x: " << x << ", y: " << y << ", z: " << z <<std::endl;

// 	z = 3;
// 	std::cout << "x: " << x << ", y: " << y << ", z: " << z <<std::endl;
// }


// int main(void)
// {
// 	const int& ref = 4;
// 	int a = ref;

// 	std::cout << "ref: " << ref << std::endl;
// 	std::cout << "a: " << a << std::endl;
// }


// int main(void)
// {
// 	int arr[3] = {1, 2, 3};
// 	int(&ref)[3] = arr;

// 	ref[0] = 2;
// 	ref[1] = 3;
// 	ref[2] = 1;

// 	std::cout << arr[0] << arr[1] << arr[2] << std::endl;
// 	return (0);
// }
