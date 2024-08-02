// P2P_Delivery.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "delivery_service.h"
#include "customer.h"
#include "driver.h"

using namespace std;

int main()
{
    std::cout << "P2P Delivery System\n";

    DeliveryService deliveryService;
    Customer* akhil = new Customer("akhil", "akhil@gmail.com", "89769876", "London");
    deliveryService.addCustomer(akhil);
    Customer* bidhuri = new Customer("bidhuri", "bidhuri@gmail.com", "12121", "Jaunpur");
    deliveryService.addCustomer(bidhuri);
    Customer* don = new Customer("don", "don@gmail.com", "343452", "Baliya");
    deliveryService.addCustomer(don);
    Customer* vitto = new Customer("vitto", "vitto@gmail.com", "324523", "Meerut");
    deliveryService.addCustomer(vitto);
    Customer* jhon = new Customer("jhon", "jhon@gmail.com", "12314", "Kormangala");
    deliveryService.addCustomer(jhon);
    Customer* shakal = new Customer("shakal", "shakal@gmail.com", "78965757", "HSR Layout");
    deliveryService.addCustomer(shakal);

    deliveryService.addDriver(new Driver("Nattu"));
    deliveryService.addDriver(new Driver("Bagha"));

    deliveryService.placeOrder(akhil, bidhuri, "2");
    deliveryService.placeOrder(vitto, jhon, "2");
    deliveryService.placeOrder(shakal, don, "2");

}
