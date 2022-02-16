#ifndef STRING_TO_MODBUS_H
#define STRING_TO_MODBUS_H

void toCheckAndSend(char _a[]);
void toClearData(void);
char toHex(char _a, char _b);
void toCRC_16HL(unsigned char*, int);
void toSend(void);

#endif /*STRING_TO_MODBUS_H*/