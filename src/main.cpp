#include <iostream>
#include "../include/Token.hpp"

int main()
{
	char id[30] = "97499899347416048962";
	Token token = Token();
	char idId[10] = {};
	char keyKey[10] = {};
	char amountAmount[10] = {};
	char deviceIdDevice[10] = {};
	char orderOrder[10] = {};

	token.parse(id, idId, amountAmount, orderOrder, keyKey, deviceIdDevice);

	std::cout << std::endl
			  << "Amount = " << amountAmount;

	std::cout << std::endl
			  << "Id = " << idId;

	std::cout << std::endl
			  << "Key = " << keyKey;

	std::cout << std::endl
			  << "Order = " << orderOrder;

	std::cout << std::endl
			  << "Device = " << deviceIdDevice << std::endl;
}