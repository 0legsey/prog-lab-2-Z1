// Z1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Segment.h"
#include "Point.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"

int static_variables() {
    Point point;
    Segment segment;
    Circle circle;
    Square square;
    Triangle triangle;
    int answer;
    printf("\n\nВыберите фигуру, параметры которой необходимо посчитать:\n");
    printf("1) Точка\n2) Отрезок\n3) Круг\n4) Квадрат\n5) Треугольник\n6) Возврат в меню выбора режима работы\n");
    do {
        printf("Ответ: ");
        scanf("%d", &answer);
    } while (answer < 1 || answer > 6);
    switch (answer) {
    case 1: {
        point.input();
        point.output();
        break;
    }
    case 2: {
        segment.input();
        segment.output();
        break;
    }
    case 3: {
        circle.input();
        circle.output();
        break;
    }
    case 4: {
        square.input();
        square.output();
        break;
    }
    case 5: {
        triangle.input();
        triangle.output();
        break;
    }
    case 6: {
        return 0;
    }
    }
    static_variables();
}

int dynamic_variables() {
    Point* point = (Point*)malloc(sizeof(Point));
    Segment* segment = (Segment*)malloc(sizeof(Segment));
    Circle* circle = (Circle*)malloc(sizeof(Circle));
    Square* square = (Square*)malloc(sizeof(Square));
    Triangle* triangle = (Triangle*)malloc(sizeof(Triangle));
    int answer;
    printf("\n\nВыберите фигуру, параметры которой необходимо посчитать:\n");
    printf("1) Точка\n2) Отрезок\n3) Круг\n4) Квадрат\n5) Треугольник\n6) Возврат в меню выбора режима работы\n");
    do {
        printf("Ответ: ");
        scanf("%d", &answer);
    } while (answer < 1 || answer > 6);
    switch (answer) {
    case 1: {
        point->input();
        point->output();
        break;
    }
    case 2: {
        segment->input();
        segment->output();
        break;
    }
    case 3: {
        circle->input();
        circle->output();
        break;
    }
    case 4: {
        square->input();
        square->output();
        break;
    }
    case 5: {
        triangle->input();
        triangle->output();
        break;
    }
    case 6: {
        return 0;
    }
    }
    dynamic_variables();
}

int menu() {
    int answer;
    printf("\nВыберите режим работы программы:\n");
    printf("1) Работа со статическими переменными\n2) Работа с динамическими переменными\n3) Выход из программы\n");
    do {
        printf("Ответ: ");
        scanf("%d", &answer);
    } while (answer < 1 || answer > 3);
    switch (answer) {
    case 1: static_variables(); break;
    case 2: dynamic_variables(); break;
    case 3: return 0;
    }
    menu();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    menu();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
