#pragma once
#include "main.h"
#include"bus.h"

class Manger {
public:
	Bus find_bus_with_min_price(Bus* buses, int size) {
		Bus min = buses[0];

		for (int i = 1; i < size; i++)
		{
			if (min.price / min.pasengers > buses[i].price / buses[i].pasengers) {
				min = buses[i];
			}
}

			return min;
	}
};