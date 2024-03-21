#include <iostream>
#include <vector>

#include <lib/lr1.h>
#include <fstream>

int main() {
	
	//1 Пустой массив
	std::vector<int> arr = {};
	result waitingResult = findPairs2(arr);
	//writeInFile("../../Test1.txt", arr, waitingResult);
	//writeInFile("././Test1.txt", arr, waitingResult);
	writeInFile("../Test1.txt", arr, waitingResult);
	//writeInFile("./Test1.txt", arr, waitingResult);
	//writeInFile("ЛР1/Test1.txt", arr, waitingResult);
	
	/*

	//2 Массив из 1025 элементов
	arr = generate(1025);
	waitingResult = findPairs2(arr);
	writeInFile("../Test2.txt", arr, waitingResult);

	//3 Массив из 1 элемента
	arr = {1};
	waitingResult = findPairs2(arr);
	writeInFile("../Test3.txt", arr, waitingResult);

	//4 Массив без 0 
	arr = {1, 2, 3, 4, 5};
	waitingResult = findPairs2(arr);
	writeInFile("../Test4.txt", arr, waitingResult);

	//5 Массив, в котором после нулей нечетные числа 
	arr = { 1, 0, 3, 0, 5 };
	waitingResult = findPairs2(arr);
	writeInFile("../Test5.txt", arr, waitingResult);

	//6 Массив, в котором после нуля идет ноль
	arr = { 1, 0, 0, 5 };
	waitingResult = findPairs2(arr);
	writeInFile("../Test6.txt", arr, waitingResult);

	//7 Массив, в котором после нуля идут четные числа
	arr = { 1, 0, 2, 5 };
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.1.txt", arr, waitingResult);

	//7.2
	arr = generate(53);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.2.txt", arr, waitingResult);

	//7.3
	arr = generate(157);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.3.txt", arr, waitingResult);

	//7.4
	arr = generate(209);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.4.txt", arr, waitingResult);

	//7.5
	arr = generate(261);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.5.txt", arr, waitingResult);

	//7.6
	arr = generate(313);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.6.txt", arr, waitingResult);

	//7.7
	arr = generate(365);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.7.txt", arr, waitingResult);

	//7.8
	arr = generate(417);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.8.txt", arr, waitingResult);

	//7.9
	arr = generate(469);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.9.txt", arr, waitingResult);

	//7.10
	arr = generate(521);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.10.txt", arr, waitingResult);

	//7.11
	arr = generate(573);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.11.txt", arr, waitingResult);
	
	//7.12
	arr = generate(625);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.12.txt", arr, waitingResult);

	//7.13
	arr = generate(677);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.13.txt", arr, waitingResult);

	//7.14
	arr = generate(729);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.14.txt", arr, waitingResult);

	//7.15
	arr = generate(781);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.15.txt", arr, waitingResult);

	//7.16
	arr = generate(833);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.16.txt", arr, waitingResult);

	//7.17
	arr = generate(885);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.17.txt", arr, waitingResult);

	//7.18
	arr = generate(937);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.18.txt", arr, waitingResult);

	//7.19
	arr = generate(989);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.19.txt", arr, waitingResult);

	//7.20
	arr = generate(1024);
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.20.txt", arr, waitingResult);
	*/

	return 0;
}