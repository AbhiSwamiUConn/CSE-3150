#include <iostream>
#include "CheckUtils.h"
#include "MathExtras.h"

int main(){
	int a = 5;
	int b = 6;
	if (CheckUtils::is_even(a)){
		std::cout << a << "is even" << std::endl;
	}else{
		std::cout << a << "is odd" << std::endl;
	}
	std::cout << "Factorial of " << a << "is " << MathExtras::factorial(a) << std::endl;
        return 0;	
}
