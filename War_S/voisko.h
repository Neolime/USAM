#pragma once
#include <iostream>
#include <vector>
#include "structt.h"
#include <random>
#include <ctime>
using namespace std;
class Voisko
{
private:
	vector <Soldier> army;
public:
	Voisko(int size);
	void sort(bool por);
	void print();
	void sumMass();


};

