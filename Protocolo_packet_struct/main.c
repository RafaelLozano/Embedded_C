#include <stdio.h>
#include <stdint.h>
typedef struct
{
    uint8_t crc;
    uint8_t status;
    uint16_t payload;
    uint8_t bat;
    uint8_t sensor;
    uint8_t longAddr;
    uint8_t shortAddr;
    uint8_t addrMode;
}PACKET_t;

void printPacket(PACKET_t *p_packet);

int main(int argc, char const *argv[])
{
    uint32_t packetValue=0xEDCEABBC;//1110 1101 1100 1110 1010 1011 1011 1100
    PACKET_t packet;                //1 11 01101110 011 101 010101110111 1 00
    packet.crc=(uint8_t) packetValue & 0b11;//00
    packet.status = (uint8_t) (packetValue >> 2) & 0b1;
    packet.payload = (uint16_t) (packetValue >> 3)& 0xFFF;
    packet.bat = (uint8_t) (packetValue>>15)& 0b111;
    packet.sensor = (uint8_t)(packetValue >> 18) & 0x7;
    packet.longAddr = (uint8_t)(packetValue >> 21) & 0x6F;
    packet.shortAddr = (uint8_t)(packetValue >> 29) & 0x3;
    packet.addrMode = (uint8_t)(packetValue >> 31) & 0x1;

    printPacket(&packet);
    return 0;
}

void printPacket(PACKET_t *p_packet)
{
    printf("Crc: %x \n", p_packet->crc);
    printf("Status: %x \n", p_packet->status);
    printf("Payload: %x \n", p_packet->payload);
    printf("Bat: %x \n", p_packet->bat);
    printf("Sensor: %x \n", p_packet->sensor);
    printf("LongAddr: %x \n", p_packet->longAddr);
    printf("ShortAddr: %x \n", p_packet->shortAddr);
    printf("AddrMode: %x \n", p_packet->addrMode);
}
