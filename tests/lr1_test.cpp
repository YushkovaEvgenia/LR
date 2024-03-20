#include <lib/lr1.h>
#include <gtest/gtest.h>
#include <vector>
#include <utility>

// Подробнее https://google.github.io/googletest/reference/testing.html

// Тестовый класс
class FindPairs : public ::testing::Test {
protected:
    // Здесь вы можете добавить дополнительные настройки для тестов
    // в функции SetUp()
    void SetUp() override {
        // Например, инициализация данных
    }

    // Здесь вы можете освободить ресурсы, если это необходимо
    // в функции TearDown()
    void TearDown() override {
        // Например, очистка данных
    }

    // Объявляем переменные, которые будут использоваться в тестах
    test testdata;
};
/*
TEST_F(FindPairs, CTest1) {
    // Вызываем функцию с тестовыми данными
    testdata = readFromFile("..//Test1.txt");
    testdata.realResult = findPairs(testdata.array);
    testdata.testname = "Test1";
    writeInFile(testdata);

    // Проверяем ожидаемые результаты
    EXPECT_EQ(testdata.realResult.numMas, testdata.waitingResult.numMas);
    EXPECT_EQ(testdata.realResult.errMas, testdata.waitingResult.errMas);
}

*/
/*
TEST_F(FindPairs, CTest2) {
    // Вызываем функцию с тестовыми данными
    testdata = readFromFile("..//Test2.txt");
    testdata.realResult = findPairs(testdata.array);
    testdata.testname = "Test2";
    writeInFile(testdata);

    // Проверяем ожидаемые результаты
    EXPECT_EQ(testdata.realResult.numMas, testdata.waitingResult.numMas);
    EXPECT_EQ(testdata.realResult.errMas, testdata.waitingResult.errMas);
}

TEST_F(FindPairs, CTest3) {
    // Вызываем функцию с тестовыми данными
    testdata = readFromFile("..//Test3.txt");
    testdata.realResult = findPairs(testdata.array);
    testdata.testname = "Test3";
    writeInFile(testdata);

    // Проверяем ожидаемые результаты
    EXPECT_EQ(testdata.realResult.numMas, testdata.waitingResult.numMas);
    EXPECT_EQ(testdata.realResult.errMas, testdata.waitingResult.errMas);
}

TEST_F(FindPairs, CTest4) {
    // Вызываем функцию с тестовыми данными
    testdata = readFromFile("..//Test4.txt");
    testdata.realResult = findPairs(testdata.array);
    testdata.testname = "Test4";
    writeInFile(testdata);

    // Проверяем ожидаемые результаты
    EXPECT_EQ(testdata.realResult.numMas, testdata.waitingResult.numMas);
    EXPECT_EQ(testdata.realResult.errMas, testdata.waitingResult.errMas);
}

TEST_F(FindPairs, CTest5) {
    // Вызываем функцию с тестовыми данными
    testdata = readFromFile("..//Test5.txt");
    testdata.realResult = findPairs(testdata.array);
    testdata.testname = "Test5";
    writeInFile(testdata);

    // Проверяем ожидаемые результаты
    EXPECT_EQ(testdata.realResult.numMas, testdata.waitingResult.numMas);
    EXPECT_EQ(testdata.realResult.errMas, testdata.waitingResult.errMas);
}

TEST_F(FindPairs, CTest6) {
    // Вызываем функцию с тестовыми данными
    testdata = readFromFile("..//Test6.txt");
    testdata.realResult = findPairs(testdata.array);
    testdata.testname = "Test6";
    writeInFile(testdata);

    // Проверяем ожидаемые результаты
    EXPECT_EQ(testdata.realResult.numMas, testdata.waitingResult.numMas);
    EXPECT_EQ(testdata.realResult.errMas, testdata.waitingResult.errMas);
}

TEST_F(FindPairs, CTest7) {
    // Вызываем функцию с тестовыми данными
    testdata = readFromFile("..//Test7.txt");
    testdata.realResult = findPairs(testdata.array);
    testdata.testname = "Test7";
    writeInFile(testdata);

    // Проверяем ожидаемые результаты
    EXPECT_EQ(testdata.realResult.numMas, testdata.waitingResult.numMas);
    EXPECT_EQ(testdata.realResult.errMas, testdata.waitingResult.errMas);
   
}

*/