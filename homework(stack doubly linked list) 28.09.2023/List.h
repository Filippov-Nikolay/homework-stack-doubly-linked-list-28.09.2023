#pragma once
#include <iostream>
#include "Element.h"

class List {
	Element *Head, *Tail;
	int count;
	int top; // Указатель на вершину
	enum { EMPTY = 0, FULL = 5 };
public:
	List();
	~List();

	void Push(int d); // Добавлвение элемента
	void Clear(); // Очистка стека
	void Pop(); // Удаление элемента

	bool IsEmpty(); // Проверка существования элементов в стеке
	bool IsFull(); // Проверка на переполнение стека
	int GetCount(); // Получить количество

	void Print(); // Вывод всех элементов
	void PrintLastElement(); // Вывести последний элемент

	void DelAll(); // Удалить весь стек
};

