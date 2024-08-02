#pragma once
#ifndef ITEM_LIST_H
#define ITEM_LIST_H
#include <unordered_map>
#include "item.h"
using namespace std;
class ItemList {
private:
	unordered_map<string, Item*> items;
public:
	void addItem(string, Item*);
	void removeItem(string);
	Item* getItem(string);
};
#endif // !ITEM_LIST_H
