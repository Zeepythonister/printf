#ifndef PRINT_F
#define PRINT_F

#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"
#include "unistd.h"

/**
 * struct print - structs for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 *Description: struct print is a struct that
 * stores pointers to a printer functions.
 **/

typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _putchar(int c);
int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
int print_bnr(va_list arguments, char *buf, unsigned int ibuf);
int print_uint(va_list arguments, char *buf, unsigned int ibuf);
int print_octa(va_list arguments, char *buf, unsigned int ibuf);
int print_hexa(va_list arguments, char *buf, unsigned int ibuf);
int print_upx(va_list arguments, char *buf, unsigned int ibuf);
int print_usr(va_list arguments, char *buf, unsigned int ibuf);
int print_add(va_list arguments, char *buf, unsigned int ibuf);
int print_rev(va_list arguments, char *buf, unsigned int ibuf);
int print_rot(va_list arguments, char *buf, unsigned int ibuf);
int printLongInt(va_list arguments, char *buf, unsigned int ibuf);
int printLongUnt(va_list arguments, char *buf, unsigned int ibuf);
int printLongOct(va_list arguments, char *buf, unsigned int ibuf);
int printLongHexa(va_list arguments, char *buf, unsigned int ibuf);
int printLongUint(va_list arguments, char *buf, unsigned int ibuf);
int printLongUpx(va_list arguments, char *buf, unsigned int ibuf);
int prinhint(va_list arguments, char *buf, unsigned int ibuf);
int prinhunt(va_list arguments, char *buf, unsigned int ibuf);
int prinhoct(va_list arguments, char *buf, unsigned int ibuf);
int prinhhex(va_list arguments, char *buf, unsigned int ibuf);
int prinhupx(va_list arguments, char *buf, unsigned int ibuf);
int prinpint(va_list arguments, char *buf, unsigned int ibuf);
int prinnoct(va_list arguments, char *buf, unsigned int ibuf);
int prinnhex(va_list arguments, char *buf, unsigned int ibuf);
int prinnupx(va_list arguments, char *buf, unsigned int ibuf);
int prinsint(va_list arguments, char *buf, unsigned int ibuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_array(char *bnr, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit) /*char *fill_hex_array returns char to the stdout*/
#endif
