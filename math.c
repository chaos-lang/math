#include <math.h>

#include "Chaos.h"


// Mathematical constants

const long double pi = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214;
const long double e = 2.71828182845904523536028747135266249775724709369995957496696762772407663035354759457138217852516642742746;

char *pi_params_name[] = {};
unsigned pi_params_type[] = {};
unsigned short pi_params_length = 0;
int KAOS_EXPORT Kaos_pi()
{
    kaos.returnVariableFloat(pi);
    return 0;
}

char *e_params_name[] = {};
unsigned e_params_type[] = {};
unsigned short e_params_length = 0;
int KAOS_EXPORT Kaos_e()
{
    kaos.returnVariableFloat(e);
    return 0;
}

char *inf_params_name[] = {};
unsigned inf_params_type[] = {};
unsigned short inf_params_length = 0;
int KAOS_EXPORT Kaos_inf()
{
    long double inf = INFINITY;
    kaos.returnVariableFloat(inf);
    return 0;
}

char *nan_params_name[] = {};
unsigned nan_params_type[] = {};
unsigned short nan_params_length = 0;
int KAOS_EXPORT Kaos_nan()
{
    long double nan = NAN;
    kaos.returnVariableFloat(nan);
    return 0;
}


// Trigonometric functions

char *cos_params_name[] = {
    "x"
};
unsigned cos_params_type[] = {
    K_NUMBER
};
unsigned short cos_params_length = (unsigned short) sizeof(cos_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_cos()
{
    long double x = kaos.getVariableFloat(cos_params_name[0]);
    x = cos(x * pi / 180.0);
    kaos.returnVariableFloat(x);
    return 0;
}

char *sin_params_name[] = {
    "x"
};
unsigned sin_params_type[] = {
    K_NUMBER
};
unsigned short sin_params_length = (unsigned short) sizeof(sin_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_sin()
{
    long double x = kaos.getVariableFloat(cos_params_name[0]);
    x = sin(x * pi / 180.0);
    kaos.returnVariableFloat(x);
    return 0;
}

char *tan_params_name[] = {
    "x"
};
unsigned tan_params_type[] = {
    K_NUMBER
};
unsigned short tan_params_length = (unsigned short) sizeof(tan_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_tan()
{
    long double x = kaos.getVariableFloat(cos_params_name[0]);
    x = tan(x * pi / 180.0);
    kaos.returnVariableFloat(x);
    return 0;
}

char *acos_params_name[] = {
    "x"
};
unsigned acos_params_type[] = {
    K_NUMBER
};
unsigned short acos_params_length = (unsigned short) sizeof(acos_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_acos()
{
    long double x = kaos.getVariableFloat(cos_params_name[0]);
    x = acos(x) * 180.0 / pi;
    kaos.returnVariableFloat(x);
    return 0;
}

char *asin_params_name[] = {
    "x"
};
unsigned asin_params_type[] = {
    K_NUMBER
};
unsigned short asin_params_length = (unsigned short) sizeof(asin_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_asin()
{
    long double x = kaos.getVariableFloat(cos_params_name[0]);
    x = asin(x) * 180.0 / pi;
    kaos.returnVariableFloat(x);
    return 0;
}

char *atan_params_name[] = {
    "x"
};
unsigned atan_params_type[] = {
    K_NUMBER
};
unsigned short atan_params_length = (unsigned short) sizeof(atan_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_atan()
{
    long double x = kaos.getVariableFloat(cos_params_name[0]);
    x = atan(x) * 180.0 / pi;
    kaos.returnVariableFloat(x);
    return 0;
}

char *atan2_params_name[] = {
    "x",
    "y"
};
unsigned atan2_params_type[] = {
    K_NUMBER,
    K_NUMBER
};
unsigned short atan2_params_length = (unsigned short) sizeof(atan2_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_atan2()
{
    long double x = kaos.getVariableFloat(atan2_params_name[0]);
    long double y = kaos.getVariableFloat(atan2_params_name[1]);
    x = atan2(y, x) * 180.0 / pi;
    kaos.returnVariableFloat(x);
    return 0;
}


// Hyperbolic functions

char *cosh_params_name[] = {
    "x"
};
unsigned cosh_params_type[] = {
    K_NUMBER
};
unsigned short cosh_params_length = (unsigned short) sizeof(cosh_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_cosh()
{
    long double x = kaos.getVariableFloat(cosh_params_name[0]);
    x = cosh(x);
    kaos.returnVariableFloat(x);
    return 0;
}

char *sinh_params_name[] = {
    "x"
};
unsigned sinh_params_type[] = {
    K_NUMBER
};
unsigned short sinh_params_length = (unsigned short) sizeof(sinh_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_sinh()
{
    long double x = kaos.getVariableFloat(sinh_params_name[0]);
    x = sinh(x);
    kaos.returnVariableFloat(x);
    return 0;
}

char *tanh_params_name[] = {
    "x"
};
unsigned tanh_params_type[] = {
    K_NUMBER
};
unsigned short tanh_params_length = (unsigned short) sizeof(tanh_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_tanh()
{
    long double x = kaos.getVariableFloat(tanh_params_name[0]);
    x = tanh(x);
    kaos.returnVariableFloat(x);
    return 0;
}

char *acosh_params_name[] = {
    "x"
};
unsigned acosh_params_type[] = {
    K_NUMBER
};
unsigned short acosh_params_length = (unsigned short) sizeof(acosh_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_acosh()
{
    long double x = kaos.getVariableFloat(acosh_params_name[0]);
    x = acosh(x);
    kaos.returnVariableFloat(x);
    return 0;
}

char *asinh_params_name[] = {
    "x"
};
unsigned asinh_params_type[] = {
    K_NUMBER
};
unsigned short asinh_params_length = (unsigned short) sizeof(asinh_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_asinh()
{
    long double x = kaos.getVariableFloat(asinh_params_name[0]);
    x = asinh(x);
    kaos.returnVariableFloat(x);
    return 0;
}

char *atanh_params_name[] = {
    "x"
};
unsigned atanh_params_type[] = {
    K_NUMBER
};
unsigned short atanh_params_length = (unsigned short) sizeof(atanh_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_atanh()
{
    long double x = kaos.getVariableFloat(atanh_params_name[0]);
    x = atanh(x);
    kaos.returnVariableFloat(x);
    return 0;
}


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
    x = pow(x ,y);
    kaos.returnVariableFloat(x);
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

    // Mathematical constants
    kaos.defineFunction("pi", K_NUMBER, pi_params_name, pi_params_type, pi_params_length);
    kaos.defineFunction("e", K_NUMBER, e_params_name, e_params_type, e_params_length);
    kaos.defineFunction("inf", K_NUMBER, inf_params_name, inf_params_type, inf_params_length);
    kaos.defineFunction("nan", K_NUMBER, nan_params_name, nan_params_type, nan_params_length);

    // Trigonometric functions
    kaos.defineFunction("cos", K_NUMBER, cos_params_name, cos_params_type, cos_params_length);
    kaos.defineFunction("sin", K_NUMBER, sin_params_name, sin_params_type, sin_params_length);
    kaos.defineFunction("tan", K_NUMBER, tan_params_name, tan_params_type, tan_params_length);
    kaos.defineFunction("acos", K_NUMBER, acos_params_name, acos_params_type, acos_params_length);
    kaos.defineFunction("asin", K_NUMBER, asin_params_name, asin_params_type, asin_params_length);
    kaos.defineFunction("atan", K_NUMBER, atan_params_name, atan_params_type, atan_params_length);
    kaos.defineFunction("atan2", K_NUMBER, atan2_params_name, atan2_params_type, atan2_params_length);

    // Hyperbolic functions
    kaos.defineFunction("cosh", K_NUMBER, cosh_params_name, cosh_params_type, cosh_params_length);
    kaos.defineFunction("sinh", K_NUMBER, sinh_params_name, sinh_params_type, sinh_params_length);
    kaos.defineFunction("tanh", K_NUMBER, tanh_params_name, tanh_params_type, tanh_params_length);
    kaos.defineFunction("acosh", K_NUMBER, acosh_params_name, acosh_params_type, acosh_params_length);
    kaos.defineFunction("asinh", K_NUMBER, asinh_params_name, asinh_params_type, asinh_params_length);
    kaos.defineFunction("atanh", K_NUMBER, atanh_params_name, atanh_params_type, atanh_params_length);

    kaos.defineFunction("pow", K_NUMBER, pow_params_name, pow_params_type, pow_params_length);
    kaos.defineFunction("ceil", K_NUMBER, ceil_params_name, ceil_params_type, ceil_params_length);
    kaos.defineFunction("floor", K_NUMBER, floor_params_name, floor_params_type, floor_params_length);
    kaos.defineFunction("sqrt", K_NUMBER, sqrt_params_name, sqrt_params_type, sqrt_params_length);
    kaos.defineFunction("exp", K_NUMBER, exp_params_name, exp_params_type, exp_params_length);
    kaos.defineFunction("abs", K_NUMBER, abs_params_name, abs_params_type, abs_params_length);

    return 0;
}
