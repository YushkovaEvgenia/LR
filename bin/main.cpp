#include <iostream>
#include <vector>

#include <lib/lr1.h>
#include <fstream>

int main() {
	
	//1 ������ ������
	std::vector<int> arr = {};
	result waitingResult = findPairs2(arr);
	//writeInFile("../../Test1.txt", arr, waitingResult);
	//writeInFile("././Test1.txt", arr, waitingResult);
	//writeInFile("../Test1.txt", arr, waitingResult);
	//writeInFile("./Test1.txt", arr, waitingResult);
	writeInFile("��1/Test1.txt", arr, waitingResult);
	
	/*

	//2 ������ �� 1025 ���������
	arr = generate(1025);
	waitingResult = findPairs2(arr);
	writeInFile("../Test2.txt", arr, waitingResult);
	//writeInFile("Test2.txt", arr, waitingResult);

	//3 ������ �� 1 ��������
	arr = {1};
	waitingResult = findPairs2(arr);
	writeInFile("../Test3.txt", arr, waitingResult);
	//writeInFile("Test3.txt", arr, waitingResult);

	//4 ������ ��� 0 
	arr = {1, 2, 3, 4, 5};
	waitingResult = findPairs2(arr);
	writeInFile("../Test4.txt", arr, waitingResult);
	//writeInFile("Test4.txt", arr, waitingResult);

	//5 ������, � ������� ����� ����� �������� ����� 
	arr = { 1, 0, 3, 0, 5 };
	waitingResult = findPairs2(arr);
	writeInFile("../Test5.txt", arr, waitingResult);
	//writeInFile("Test5.txt", arr, waitingResult);

	//6 ������, � ������� ����� ���� ���� ����
	arr = { 1, 0, 0, 5 };
	waitingResult = findPairs2(arr);
	writeInFile("../Test6.txt", arr, waitingResult);
	//writeInFile("Test6.txt", arr, waitingResult);

	//7 ������, � ������� ����� ���� ���� ������ �����
	arr = { 1, 0, 2, 5 };
	waitingResult = findPairs2(arr);
	writeInFile("../Test7.1.txt", arr, waitingResult);
	//writeInFile("Test7.txt", arr, waitingResult);

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

	*/

	return 0;
}