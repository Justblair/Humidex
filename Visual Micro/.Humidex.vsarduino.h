//Board = Arduino Uno
#define ARDUINO 102
#define __AVR_ATmega328P__
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
#define __attribute__(x)
#define __inline__
#define __asm__(x)
#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __inline__
#define __asm__ 
#define __volatile__
#define __builtin_va_list
#define __builtin_va_start
#define __builtin_va_end
#define __DOXYGEN__
#define prog_void
#define PGM_VOID_P int
#define NOINLINE __attribute__((noinline))

typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {}

//already defined in arduno.h
//already defined in arduno.h
void write_to_SD(int _t ,int _h, int _humidex);
byte dec_to_bcd(byte val);
byte bcd_to_dec(byte val);
void get_date_DS1307( 	int *second, 	int *minute, 	int *hour, 	int *day_of_week, 	int *day_of_month, 	int *month, 	int *year, 	int *sqwe, 	int *bst_flag);
void setDateDs1307( 	byte second,            	byte minute,            	byte hour,              	byte day_of_week,       	byte day_of_month,      	byte month,             	byte year,              	byte bst_flag);

#include "C:\Users\Blair\Desktop\arduino-1.0.2\hardware\arduino\variants\standard\pins_arduino.h" 
#include "C:\Users\Blair\Desktop\arduino-1.0.2\hardware\arduino\cores\arduino\arduino.h"
#include "C:\Users\Blair\Documents\Arduino\Humidex\Humidex.pde"
