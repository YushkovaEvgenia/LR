#include "lr1.h"

std::vector<std::string> masseges = { "Пустой массив", "Количество элементов в массиве превышает 1024" };

result findPairs(const std::vector<int>&  array) {
    result res;                                                                 //1
    int n = array.size();                                                       //1
    int i = 0;                                                                  //1
    if (n == 0) {                                                               //2
        res.errMas.push_back(0);                                                //3
    }                                                                           //4
    else if (n > 1024)                                                          //5
    {
        res.errMas.push_back(1);                                                //6
    }                                                                           //4
    else while (i < n - 1) {                                                    //7
        if (array[i] == 0) {                                                    //8
            if (array[i + 1] % 2 == 0) {                                        //9    
                if (array[i + 1] != 0) {                                        //10
                    res.numMas.push_back(std::make_pair(i, array[i]));          //11
                    res.numMas.push_back(std::make_pair(i + 1, array[i + 1]));  //11
                }                                                               //12
            }                                                                   //12
        }                                                                       //12
        i++;                                                                    //13       
    }                                                                           //14        
    return res;                                                                 //15
}

bool check(result waitingResult, result realResult)
{
    int n1, n2;
    n1 = waitingResult.numMas.size();
    n2 = waitingResult.numMas.size();
    if (n1 != n2) return false;
    for (int i = 0; i < n1; i++)
        if (waitingResult.numMas[i] != realResult.numMas[i])
            return false;
    n1 = waitingResult.errMas.size();
    n2 = waitingResult.errMas.size();
    for (int i = 0; i < n1; i++)
        if (waitingResult.errMas[i] != realResult.errMas[i])
            return false;
    return true;
}

std::vector<std::string> split(std::string line, char c)
{
    std::vector<std::string> res;
    std::string t;
    int n = line.size();
    for (int i = 0; i < n; i++)
    {
        if (line[i] != c)
        {
            t += line[i];
        }
        else
        {
            res.push_back(t);
            t = "";
        }
    }
    if(t!="")
        res.push_back(t);
    return res;
}

void writeInFile(std::string file, std::vector<int> input, result waitingResult) 
{
    std::ofstream fout(file);
    int n = input.size();
    //fout << n << std::endl;
    for (int i = 0; i < n; i++)
    {
        fout << input[i] << " ";
    }
    fout << std::endl;
    n = waitingResult.numMas.size();
    for (int i = 0; i < n; i++)
    {
        fout << waitingResult.numMas[i].first << " " << waitingResult.numMas[i].second << " ";
    }
    fout << std::endl;
    n = waitingResult.errMas.size();
    for (int i = 0; i < n; i++)
    {
        fout << waitingResult.errMas[i]<< " ";
    }
    fout << std::endl;
    fout.close();
}

void writeInFile(test testdata)
{
    std::ofstream f("TestResults.txt", std::ios::ate | std::ios::out | std::ios::app);
    f << testdata.testname << std::endl;
    int n = testdata.array.size();
    for (int i = 0; i < n; i++)
    {
        f << testdata.array[i] << " ";
    }
    f << std::endl;
    n = testdata.waitingResult.numMas.size();
    for (int i = 0; i < n; i++)
    {
        f << testdata.waitingResult.numMas[i].first << " " << testdata.waitingResult.numMas[i].second << " ";
    }
    f << std::endl;
    n = testdata.waitingResult.errMas.size();
    for (int i = 0; i < n; i++)
    {
        f << testdata.waitingResult.errMas[i] << " - " << masseges[testdata.waitingResult.errMas[i]] << " ";
    }
    f << std::endl;
    n = testdata.realResult.numMas.size();
    for (int i = 0; i < n; i++)
    {
        f << testdata.realResult.numMas[i].first << " " << testdata.realResult.numMas[i].second << " ";
    }
    f << std::endl;
    n = testdata.realResult.errMas.size();
    for (int i = 0; i < n; i++)
    {
        f << testdata.realResult.errMas[i] << " - " << masseges[testdata.waitingResult.errMas[i]] << " ";
    }
    f << std::endl;
    if (check(testdata.waitingResult, testdata.realResult))
        f << "Passed!" << std::endl;
    else
        f << "Not passed!" << std::endl;
    f.close();
}



test readFromFile(std::string file)
{
    test testdata;
    std::string line;
    std::ifstream fin(file);
    std::getline(fin, line);
    std::vector<std::string> array = split(line, ' ');
    int n = array.size();
    for (int i = 0; i < n; i++)
    {
        testdata.array.push_back(stoi(array[i]));
    }
    std::getline(fin, line);
    std::vector<std::string> numMas = split(line, ' ');
    n = numMas.size();
    for (int i = 0; i < n / 2; i++)
    {
        testdata.waitingResult.numMas.push_back(std::make_pair(stoi(numMas[2 * i]), stoi(numMas[2 * i + 1])));
    }
    std::getline(fin, line);
    std::vector<std::string> errMas = split(line, ' ');
    n = errMas.size();
    for (int i = 0; i < n; i++)
    {
        testdata.waitingResult.errMas.push_back(stoi(errMas[i]));
    }
    fin.close();
    return testdata;
}

result findPairs2(const std::vector<int>& array) 
{
    result res;
    int n = array.size();
    if (n == 0)
    {
        res.errMas.push_back(0);               
    }                                                                           
    else if (n > 1024) 
    {                                                         
        res.errMas.push_back(1); 
    }
    else for (int i = 0; i < n - 1; i++)
    {
        if (array[i] == 0 && array[i + 1] > 0 && array[i + 1] % 2 == 0) {
            res.numMas.push_back(std::make_pair(i, array[i]));
            res.numMas.push_back(std::make_pair(i + 1, array[i + 1]));
        }
    }
    return res;
}

std::vector<int> generate(int n)
{
    srand(time(0));
    std::vector<int> arr;
    //int start = -2147483648;
    //int end = 2147483647;
    for (int i = 0; i < n; i++)
    {
        //int x = rand() % (end  + 1)  + 0;
        int x = rand();
        arr.push_back(x);
    }
    return arr;
}





