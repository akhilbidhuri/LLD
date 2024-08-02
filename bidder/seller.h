#pragma once
#ifndef SELLER_H
#define SELLER_H
#include <string>
#include <vector>
using namespace std;
class Seller {
private:
	int id;
	string name;
	vector<string> items;
	int amount;
public:
	void createAuction();
	void checkAmount();
	string getAuctionStatus();
};
#endif // !SELLER_H
