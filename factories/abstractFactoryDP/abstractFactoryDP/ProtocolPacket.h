#pragma once
#include<string>

class ProtocolPacket {
public:
	virtual void read(std::string streamDummy) = 0;
	virtual void flush() = 0;
	virtual void write(std::string dummyProtocolBuffer) = 0;
	virtual int getpacketNum() = 0;

	virtual ~ProtocolPacket() {}
};