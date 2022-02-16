#include <stdio.h>
#include <stdlib.h>
#include "string2modbus.h"

int main(){
	char test[] = "50050000ff00";
	
	toCheckAndSend(test);
	return 0;
}