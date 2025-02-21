#include "TCPPacket.h"
#include<iostream>

TCPPacket::TCPPacket(int no) {
	this->no = no;
}

void TCPPacket::read(std::string streamDummy)
{
	std::cout << "Reading packet: " << this->no << "to stream: " << streamDummy << "\n";
}

void TCPPacket::write(std::string streamDummy)
{
	std::cout << "Writing packet: " << this->no << "to stream: " << streamDummy << "\n";
}

void TCPPacket::flush()
{
	std::cout << "Flushing packet: " << this->no << "\n";
}

int TCPPacket::getpacketNum() {
	return this->no;
}