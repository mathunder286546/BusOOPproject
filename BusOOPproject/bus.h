#pragma once
#include <iostream>

using namespace std;

class Bus {
public:
	string numberplate;
	string brand;
	int price;
	int pasengers;

	Bus() {
		brand = "not spified";
		numberplate = "xxxxPM7";
		price = 0;
		pasengers = 0;
	}

	Bus(string brnd,string num,int prc,int pass) {
		brand = brnd;
		numberplate = num;
		price = prc;
		pasengers = pass;
	}


};