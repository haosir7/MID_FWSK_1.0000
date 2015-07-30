#ifndef SERIAL_H
#define SERIAL_H

#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>

#ifdef __cplusplus
extern "C" {
#endif

int openPort(char* path, int baudrate);
void closePort();
int sendBytes(unsigned char* sendData, int sendLen);
int readBytes(unsigned char* revData, int revLen);
void cleanSerial();
#ifdef __cplusplus
}
#endif

#endif