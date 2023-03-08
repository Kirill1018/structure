#pragma once
#include <windows.h>
#include <iostream>
#include <iomanip>
using namespace std;
enum ConsoleColor { Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White };
void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void GotoXY(int X, int Y)
{
	HANDLE hConsole;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
#include <stdio.h>
/*0 � ������
1 � �����
2 � �������
3 � �������
4 � �������
5 � �������
6 � ������
7 � �����
8 � �����
9 � ����� - �����
A � ������ - �������
B � ������ - �������
� � ������ - �������
E � ������ - ������
F � ���� - �����
system("color F0");*/  // ��������� ������ ���� � ������� ������
class HryvnPrice
{
public:
		double hryvn_cost_for_milk_lit = 33.50, hryvn_cost_for_lit_of_orange_juice = 31.50, hryvn_cost_for_tea_lit = 97.50, hryvn_cost_for_kilogram_of_nuts = 465.50, hryvn_cost_for_fish_kilogram = 101.50, hryvn_cost_for_cheese_kilogram = 99.50, hryvn_cost_for_an_orange_thing = 18.50, hryvn_cost_for_the_bread_thing = 12.50, hryvn_cost_for_the_crepe_thing = 14.50;
};