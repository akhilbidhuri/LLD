// abstractFactoryDP.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This propgram is an example implementation of Abstract Factory Design pattern
// Author: Akhil Bidhuri
//

#include <iostream>
#include "AbstractNetworkFactory.h"
#include "TCPNetworkFactory.h"

int main()
{
    std::cout << "Abstract Factory\n";

    AbstractNetworkFactory* tcpFactory = new TCPNetworkFactory();

    // create objects of TCP type using TCP Factory
    Protocol* tcpProtocol = tcpFactory->getProtocol();
    int port = 1024, pktNo = 0;
    while (!tcpProtocol->attachPort(port)) port++;
    ProtocolPacket* tcpPacket = tcpFactory->createPacket(pktNo++);
    tcpPacket->write("stream x09709");
    tcpProtocol->sendPacket(tcpPacket);
    tcpPacket->flush();

    delete tcpPacket;
    tcpPacket = tcpFactory->createPacket(pktNo++);
    tcpPacket->read("istream x0675");
    tcpPacket->flush();

    delete tcpPacket;
    delete tcpProtocol;
    delete tcpFactory;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
