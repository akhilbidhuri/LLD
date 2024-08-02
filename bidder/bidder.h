#pragma once
#ifndef BIDDER_H
#define BIDDER_H
#include <string>
#include "auction.h"
using namespace std;
class Bidder {
private:
	string name;
	int amount;
public:
	Bidder(string name) : name(name), amount(0) {}
	int getAmount();
	void setAmount(int amount);
	void placeBid(Auction &auction, int amount);
	~Bidder() = default;
};
#endif // !BIDDER_H
