#include "TCPPacketFactory.h"
#include "TCPPacket.h"

ProtocolPacket* TCPPacketFactory::createPacket(int no) {
	return new TCPPacket(no);
}
