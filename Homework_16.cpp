// Homework_16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include <iomanip>
#include <ctime>
#include <Windows.h>


int GetDay()
{
    time_t t;

    time(&t);

    return localtime(&t)->tm_mday;
}



int main()
{
    const int size = 5;
    int G = 0;
    int F = GetDay() % size;
    int array[size][size];
    int Line;
    
    for (int i = 0; i < size; i++)
    {
        std::cout << "Line_" << i << ":";
        
        for (int j = 0; j < size; j++)
        {
           
            array[i][j] = i + j;
            std::cout << array[i][j] << "";
            if (F == i)
            {
                Line = i;
                G += array[i][j];
            }
        }
        std::cout << "\n";
    }
    std::cout << "--------\n" << "\nDay: " << GetDay() << "\nCurrent Line: " << Line << "\nG: " << G;
}

