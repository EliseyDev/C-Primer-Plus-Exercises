/* rand0.c -- produces random numbers            */
/*               uses ANSI C portable algorithm  */

static unsigned long int next = 1;

int rand0(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}
