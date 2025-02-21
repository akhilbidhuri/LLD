#include "TCP.h"
#include<stdlib.h>
#include<iostream>
#include<string>

TCP::TCP() {
	this->port = 0;
}

bool TCP::attachPort(int port) {
	if (this->port)
	{
		std::cout << "Port " << this->port << " is already assigned, can't overwrite port!\n";
		return false;
	}
	// check if port is free, demo random true false
	int randomNum = rand() % 100;
	bool attach = randomNum % 2 == 0;
	if (attach)
	{
		this->port = port;
		std::cout << "Attached " << port << " to TCP server\n";
	}
	else
	{
		std::cout << "Port " << port << " couldn't be attached, it might be in use!\n";
	}
	return attach;
}

bool TCP::sendPacket(ProtocolPacket* pkt) {
	std::cout << "Sent TCP packet " << pkt->getpacketNum() << " on port " << this->port << std::endl;
	pkt->write(std::to_string(this->port));
	return true;
}