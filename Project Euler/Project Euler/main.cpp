#include <iostream>
#include <fstream>

void Q1();
void Q2();
void Q3();
void Q4();
void Q5();
void Q6();
void Q7();
void Q8();
void Q9();
void Q10();
void Q11();
void Q12();
void Q13();
void Q14();
void Q15();
void Q16();
void Q17();
void Q18();
void Q19();
void Q20();
void Q21();
void Q22();
void Q23();
void Q24();
void Q25();
void Q26();
void Q27();
void Q28();
void Q29();


int main()
{
//	Q1();
//	Q2();
//	Q3();
	Q4();
	system("pause");
	return 0;
}

void Q1()
{
	int finalSum = 0;
	for (int i = 1; i < 1000; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			finalSum += i;
		}
	}
	std::cout << finalSum;
}

void Q2()
{
	//fib sequence
	int userInput = 0, next = 0, sumOfEven = 0;
	int lastTwoNumbers[2] = { 0,1 };
	std::cin >> userInput;
	std::cout << lastTwoNumbers[0] << "\n";
	std::cout << lastTwoNumbers[1] << "\n";
	for (int i = 0; i < userInput; ++i)
	{
		if (next <= 4000000)
		{

			next = lastTwoNumbers[0] + lastTwoNumbers[1];
			std::cout << next << "\n";
			lastTwoNumbers[0] = lastTwoNumbers[1];
			lastTwoNumbers[1] = next;
			if (i % 2 == 0)
				sumOfEven += next;
		}
		else
			break;
	}
	std::cout << "Sum of the even terms: " << sumOfEven;
}

void Q3()
{
	//prime factors
	/*int num = 12;
	if (num % 2 == 0)
	{
		num = num / 2;
	}
	std::cout << num;*/

	long long max = 600851475143;
	long long i = 2;
	for (i; i <= max; ++i)
	{
		while (max % i == 0)
		{
			max /= i;
			std::cout << i << ", ";
		}
	}
	std::cout << "\nMax primed factor is: " << i - 1;
}

void Q4()
{

}