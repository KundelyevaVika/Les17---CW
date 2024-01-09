#pragma once

#include<iostream>
#include<string>
using namespace std;

class Computer
{
	string name;
	float frequency;
	int OZU;
	bool DVD;
	float cost;
public:
	Computer(string name_, float frequency_, int OZU_, bool DVD_, float cost_);
	int getOZU()const;
	void show()const;
};

