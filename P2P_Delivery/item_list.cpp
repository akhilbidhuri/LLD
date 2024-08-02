#include "item_list.h"
#include "item.h"

void ItemList::addItem(string name, Item* item) {
	items.insert({ name, item });
}
void ItemList::removeItem(string name) {
	auto item_it = items.find(name);
	if (item_it != items.end()) {
		items.erase(name);
	}
}
Item* ItemList::getItem(string name) {
	auto itemIT = items.find(name);
	if (itemIT != items.end()) {
		return itemIT->second;
	}
	return nullptr;
}