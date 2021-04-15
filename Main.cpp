#include "Queue.h"
#include <locale>

#define PATH_FOR_FILE_INT "C:\\outINT.txt"

int main()
{
	setlocale(LC_ALL, "RUS");

	Queue<int> q1;
	int countElements = 8;
	srand(time(NULL));
	for (int i = 0; i < countElements; i++)
	{
		int num = -5 + rand() % 30;
		q1.push(num);
		std::cout << num << " ";
	}
	std::cout << std::endl;

	q1.print();

	std::cout << "\nMin: " << q1.FindMin();
	std::cout << "\nMax: " << q1.FindMax() << std::endl;

	q1.OutputFile(PATH_FOR_FILE_INT);

	Queue<int> q2;
	q2.FromFile(PATH_FOR_FILE_INT);
	std::cout << "После прочтения из файла: ";
	q2.print();
	std::cout << std::endl << std::endl;

	//Tests
	std::cout << std::endl;
	Queue<int> q_t1;
	std::cout << "Empty из пустой очереди: " << q_t1.empty() << std::endl;	// 1 - pustoi, 0 - ectb element

	q_t1.push(1);
	q_t1.push(10);
	q_t1.push(100);
	std::cout << std::endl;
	std::cout << "Очередь: ";
	q_t1.print();
	std::cout << "\nTop: " << q_t1.front() << " Back: " << q_t1.back() << std::endl;
	q_t1.pop();
	std::cout << "Top: " << q_t1.front() << " Back: " << q_t1.back() << std::endl;
	q_t1.pop();
	std::cout << "Top: " << q_t1.front() << " Back: " << q_t1.back() << std::endl;
	q_t1.pop();

	std::cout << std::endl;
	std::cout << "Pop из пустой очереди: ";
	try
	{
		q_t1.pop();
	}
	catch (std::logic_error err)
	{
		std::cout << err.what();
	}
	std::cout << std::endl;

	std::cout << "Front из пустой очереди: ";
	try
	{
		q_t1.front();
	}
	catch (std::logic_error err)
	{
		std::cout << err.what();
	}
	std::cout << std::endl;

	std::cout << "Back из пустой очереди: ";
	try
	{
		q_t1.back();
	}
	catch (std::logic_error err)
	{
		std::cout << err.what();
	}
	std::cout << std::endl;

	std::cout << "FindMax из пустой очереди: ";
	try
	{
		q_t1.FindMax();
	}
	catch (std::logic_error err)
	{
		std::cout << err.what();
	}
	std::cout << std::endl;

	std::cout << "FindMin из пустой очереди: ";
	try
	{
		q_t1.FindMin();
	}
	catch (std::logic_error err)
	{
		std::cout << err.what();
	}
	std::cout << std::endl;

	std::cout << "OutputFile из пустой очереди: ";
	try
	{
		q_t1.OutputFile(PATH_FOR_FILE_INT);
	}
	catch (std::logic_error err)
	{
		std::cout << err.what();
	}
	std::cout << std::endl;

	std::cout << "Print из пустой очереди: ";
	try
	{
		q_t1.print();
	}
	catch (std::logic_error err)
	{
		std::cout << err.what();
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}