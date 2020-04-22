#include <math.h>

#include "Chaos.h"

char *pow_params_name[] = {
    "x",
    "y"
};
unsigned pow_params_type[] = {
    K_NUMBER,
    K_NUMBER
};
unsigned short pow_params_length = (unsigned short) sizeof(pow_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_pow()
{
    long double x = kaos.getVariableFloat(pow_params_name[0]);
    long double y = kaos.getVariableFloat(pow_params_name[1]);
    long double z = pow(x ,y);
    kaos.returnVariableFloat(z);
    return 0;
}

char *ceil_params_name[] = {
    "x"
};
unsigned ceil_params_type[] = {
    K_NUMBER
};
unsigned short ceil_params_length = (unsigned short) sizeof(ceil_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_ceil()
{
    long double x = kaos.getVariableFloat(pow_params_name[0]);
    x = ceil(x);
    kaos.returnVariableFloat(x);
    return 0;
}

char *floor_params_name[] = {
    "x"
};
unsigned floor_params_type[] = {
    K_NUMBER
};
unsigned short floor_params_length = (unsigned short) sizeof(floor_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_floor()
{
    long double x = kaos.getVariableFloat(pow_params_name[0]);
    x = floor(x);
    kaos.returnVariableFloat(x);
    return 0;
}

char *sqrt_params_name[] = {
    "x"
};
unsigned sqrt_params_type[] = {
    K_NUMBER
};
unsigned short sqrt_params_length = (unsigned short) sizeof(sqrt_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_sqrt()
{
    long double x = kaos.getVariableFloat(pow_params_name[0]);
    x = sqrt(x);
    kaos.returnVariableFloat(x);
    return 0;
}

char *exp_params_name[] = {
    "x"
};
unsigned exp_params_type[] = {
    K_NUMBER
};
unsigned short exp_params_length = (unsigned short) sizeof(exp_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_exp()
{
    long double x = kaos.getVariableFloat(pow_params_name[0]);
    x = exp(x);
    kaos.returnVariableFloat(x);
    return 0;
}

char *abs_params_name[] = {
    "x"
};
unsigned abs_params_type[] = {
    K_NUMBER
};
unsigned short abs_params_length = (unsigned short) sizeof(abs_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_abs()
{
    long double x = kaos.getVariableFloat(pow_params_name[0]);
    x = fabs(x);
    kaos.returnVariableFloat(x);
    return 0;
}

int KAOS_EXPORT KaosRegister(struct Kaos _kaos)
{
    kaos = _kaos;
    kaos.defineFunction("pow", K_NUMBER, pow_params_name, pow_params_type, pow_params_length);
    kaos.defineFunction("ceil", K_NUMBER, ceil_params_name, ceil_params_type, ceil_params_length);
    kaos.defineFunction("floor", K_NUMBER, floor_params_name, floor_params_type, floor_params_length);
    kaos.defineFunction("sqrt", K_NUMBER, sqrt_params_name, sqrt_params_type, sqrt_params_length);
    kaos.defineFunction("exp", K_NUMBER, exp_params_name, exp_params_type, exp_params_length);
    kaos.defineFunction("abs", K_NUMBER, abs_params_name, abs_params_type, abs_params_length);

    return 0;
}
