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
	Q1();
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
