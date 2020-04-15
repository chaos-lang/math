#include "Chaos.h"

char *hello_params_name[] = {};
unsigned hello_params_type[] = {};
unsigned short hello_params_length = 0;
int KAOS_EXPORT Kaos_hello()
{
    fprintf(stdout, "Hello from the template!\n");
    fflush(stdout);
    return 0;
}

int KAOS_EXPORT KaosRegister(struct Kaos _kaos)
{
    kaos = _kaos;
    kaos.defineFunction("hello", K_VOID, hello_params_name, hello_params_type, hello_params_length);

    return 0;
}
