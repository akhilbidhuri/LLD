#include "bidder.h"

int Bidder::getAmount() {
	return amount;
}

void Bidder::setAmount(int amount) {
	this->amount = amount;
}

void Bidder::placeBid(Auction& auction, int amount) {
}