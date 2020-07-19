#include <math.h>

#include "Chaos.h"


// Mathematical constants

const long double pi = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214;
const long double e = 2.71828182845904523536028747135266249775724709369995957496696762772407663035354759457138217852516642742746;
const long double golden_ratio = 1.61803398874989484820458683436563811772030917980576286213544862270526046281890244970720720418939113748475;

// num math.pi()

char *pi_params_name[] = {};
unsigned pi_params_type[] = {};
unsigned short pi_params_length = 0;
int KAOS_EXPORT Kaos_pi()
{
    kaos.returnVariableFloat(pi);
    return 0;
}

// num math.e()

char *e_params_name[] = {};
unsigned e_params_type[] = {};
unsigned short e_params_length = 0;
int KAOS_EXPORT Kaos_e()
{
    kaos.returnVariableFloat(e);
    return 0;
}

// num math.golden_ratio()

char *golden_ratio_params_name[] = {};
unsigned golden_ratio_params_type[] = {};
unsigned short golden_ratio_params_length = 0;
int KAOS_EXPORT Kaos_golden_ratio()
{
    kaos.returnVariableFloat(golden_ratio);
    return 0;
}

// num math.inf()

char *inf_params_name[] = {};
unsigned inf_params_type[] = {};
unsigned short inf_params_length = 0;
int KAOS_EXPORT Kaos_inf()
{
    long double inf = INFINITY;
    kaos.returnVariableFloat(inf);
    return 0;
}

// num math.nan()

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

// num math.cos(num x)

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
    x = cosl(x * pi / 180.0);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.sin(num x)

char *sin_params_name[] = {
    "x"
};
unsigned sin_params_type[] = {
    K_NUMBER
};
unsigned short sin_params_length = (unsigned short) sizeof(sin_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_sin()
{
    long double x = kaos.getVariableFloat(sin_params_name[0]);
    x = sinl(x * pi / 180.0);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.tan(num x)

char *tan_params_name[] = {
    "x"
};
unsigned tan_params_type[] = {
    K_NUMBER
};
unsigned short tan_params_length = (unsigned short) sizeof(tan_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_tan()
{
    long double x = kaos.getVariableFloat(tan_params_name[0]);
    x = tanl(x * pi / 180.0);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.acos(num x)

char *acos_params_name[] = {
    "x"
};
unsigned acos_params_type[] = {
    K_NUMBER
};
unsigned short acos_params_length = (unsigned short) sizeof(acos_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_acos()
{
    long double x = kaos.getVariableFloat(acos_params_name[0]);
    x = acosl(x) * 180.0 / pi;
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.asin(num x)

char *asin_params_name[] = {
    "x"
};
unsigned asin_params_type[] = {
    K_NUMBER
};
unsigned short asin_params_length = (unsigned short) sizeof(asin_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_asin()
{
    long double x = kaos.getVariableFloat(asin_params_name[0]);
    x = asinl(x) * 180.0 / pi;
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.atan(num x)

char *atan_params_name[] = {
    "x"
};
unsigned atan_params_type[] = {
    K_NUMBER
};
unsigned short atan_params_length = (unsigned short) sizeof(atan_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_atan()
{
    long double x = kaos.getVariableFloat(atan_params_name[0]);
    x = atanl(x) * 180.0 / pi;
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.atan2(num x, num y)

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
    x = atan2l(y, x) * 180.0 / pi;
    kaos.returnVariableFloat(x);
    return 0;
}


// Hyperbolic functions

// num math.cosh(num x)

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
    x = coshl(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.sinh(num x)

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
    x = sinhl(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.tanh(num x)

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
    x = tanhl(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.acosh(num x)

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
    x = acoshl(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.asinh(num x)

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
    x = asinhl(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.atanh(num x)

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
    x = atanhl(x);
    kaos.returnVariableFloat(x);
    return 0;
}


// Exponential and logarithmic functions

// num math.exp(num x)

char *exp_params_name[] = {
    "x"
};
unsigned exp_params_type[] = {
    K_NUMBER
};
unsigned short exp_params_length = (unsigned short) sizeof(exp_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_exp()
{
    long double x = kaos.getVariableFloat(exp_params_name[0]);
    x = expl(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num dict math.frexp(num x)

char *frexp_params_name[] = {
    "x"
};
unsigned frexp_params_type[] = {
    K_NUMBER
};
unsigned short frexp_params_length = (unsigned short) sizeof(frexp_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_frexp()
{
    long double x = kaos.getVariableFloat(frexp_params_name[0]);
    int n;
    long double m = frexpl(x , &n);
    kaos.startBuildingDict();
    kaos.createVariableFloat("mantissa", m);
    kaos.createVariableInt("exponent", (long long) n);
    kaos.returnDict(K_NUMBER);
    return 0;
}

// num math.ldexp(num x, num exp)

char *ldexp_params_name[] = {
    "x",
    "y"
};
unsigned ldexp_params_type[] = {
    K_NUMBER,
    K_NUMBER
};
unsigned short ldexp_params_length = (unsigned short) sizeof(ldexp_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_ldexp()
{
    long double x = kaos.getVariableFloat(ldexp_params_name[0]);
    long double y = kaos.getVariableFloat(ldexp_params_name[1]);
    x = ldexpl(x, y);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.ln(num x)

char *ln_params_name[] = {
    "x"
};
unsigned ln_params_type[] = {
    K_NUMBER
};
unsigned short ln_params_length = (unsigned short) sizeof(ln_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_ln()
{
    long double x = kaos.getVariableFloat(ln_params_name[0]);
    x = logl(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.log(num x, num b)

char *log_params_name[] = {
    "x",
    "b"
};
unsigned log_params_type[] = {
    K_NUMBER,
    K_NUMBER
};
unsigned short log_params_length = (unsigned short) sizeof(log_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_log()
{
    long double x = kaos.getVariableFloat(log_params_name[0]);
    long double b = kaos.getVariableFloat(log_params_name[1]);
    x = logl(x) / logl(b);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.log1p(num x)

char *log1p_params_name[] = {
    "x"
};
unsigned log1p_params_type[] = {
    K_NUMBER
};
unsigned short log1p_params_length = (unsigned short) sizeof(log1p_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_log1p()
{
    long double x = kaos.getVariableFloat(log1p_params_name[0]);
    x = log1pl(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.log2(num x)

char *log2_params_name[] = {
    "x"
};
unsigned log2_params_type[] = {
    K_NUMBER
};
unsigned short log2_params_length = (unsigned short) sizeof(log2_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_log2()
{
    long double x = kaos.getVariableFloat(log2_params_name[0]);
    x = log2l(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.log10(num x)

char *log10_params_name[] = {
    "x"
};
unsigned log10_params_type[] = {
    K_NUMBER
};
unsigned short log10_params_length = (unsigned short) sizeof(log10_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_log10()
{
    long double x = kaos.getVariableFloat(log10_params_name[0]);
    x = log10l(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num dict math.modf(num x)

char *modf_params_name[] = {
    "x"
};
unsigned modf_params_type[] = {
    K_NUMBER
};
unsigned short modf_params_length = (unsigned short) sizeof(modf_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_modf()
{
    long double x = kaos.getVariableFloat(modf_params_name[0]);
    long double i;
    long double f = modfl(x , &i);
    kaos.startBuildingDict();
    kaos.createVariableInt("integer", (long long) i);
    kaos.createVariableFloat("fraction", f);
    kaos.returnDict(K_NUMBER);
    return 0;
}

// num math.expm1(num x)

char *expm1_params_name[] = {
    "x"
};
unsigned expm1_params_type[] = {
    K_NUMBER
};
unsigned short expm1_params_length = (unsigned short) sizeof(expm1_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_expm1()
{
    long double x = kaos.getVariableFloat(expm1_params_name[0]);
    x = expm1l(x);
    kaos.returnVariableFloat(x);
    return 0;
}


// Power functions

// num math.pow(num x, num y)

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
    x = powl(x ,y);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.sqrt(num x)

char *sqrt_params_name[] = {
    "x"
};
unsigned sqrt_params_type[] = {
    K_NUMBER
};
unsigned short sqrt_params_length = (unsigned short) sizeof(sqrt_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_sqrt()
{
    long double x = kaos.getVariableFloat(sqrt_params_name[0]);
    x = sqrtl(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.cbrt(num x)

char *cbrt_params_name[] = {
    "x"
};
unsigned cbrt_params_type[] = {
    K_NUMBER
};
unsigned short cbrt_params_length = (unsigned short) sizeof(cbrt_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_cbrt()
{
    long double x = kaos.getVariableFloat(cbrt_params_name[0]);
    x = cbrtl(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.hypot(num x, num y)

char *hypot_params_name[] = {
    "x",
    "y"
};
unsigned hypot_params_type[] = {
    K_NUMBER,
    K_NUMBER
};
unsigned short hypot_params_length = (unsigned short) sizeof(hypot_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_hypot()
{
    long double x = kaos.getVariableFloat(hypot_params_name[0]);
    long double y = kaos.getVariableFloat(hypot_params_name[1]);
    x = hypotl(x ,y);
    kaos.returnVariableFloat(x);
    return 0;
}


// Error and gamma functions

// num math.erf(num x)

char *erf_params_name[] = {
    "x"
};
unsigned erf_params_type[] = {
    K_NUMBER
};
unsigned short erf_params_length = (unsigned short) sizeof(erf_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_erf()
{
    long double x = kaos.getVariableFloat(erf_params_name[0]);
    x = erfl(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.erfc(num x)

char *erfc_params_name[] = {
    "x"
};
unsigned erfc_params_type[] = {
    K_NUMBER
};
unsigned short erfc_params_length = (unsigned short) sizeof(erfc_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_erfc()
{
    long double x = kaos.getVariableFloat(erfc_params_name[0]);
    x = erfcl(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.gamma(num x)

char *gamma_params_name[] = {
    "x"
};
unsigned gamma_params_type[] = {
    K_NUMBER
};
unsigned short gamma_params_length = (unsigned short) sizeof(gamma_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_gamma()
{
    long double x = kaos.getVariableFloat(gamma_params_name[0]);
    x = tgammal(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.lgamma(num x)

char *lgamma_params_name[] = {
    "x"
};
unsigned lgamma_params_type[] = {
    K_NUMBER
};
unsigned short lgamma_params_length = (unsigned short) sizeof(lgamma_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_lgamma()
{
    long double x = kaos.getVariableFloat(lgamma_params_name[0]);
    x = lgammal(x);
    kaos.returnVariableFloat(x);
    return 0;
}


// Rounding and remainder functions

// num math.ceil(num x)

char *ceil_params_name[] = {
    "x"
};
unsigned ceil_params_type[] = {
    K_NUMBER
};
unsigned short ceil_params_length = (unsigned short) sizeof(ceil_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_ceil()
{
    long double x = kaos.getVariableFloat(ceil_params_name[0]);
    long long y = (long long) ceill(x);
    kaos.returnVariableInt(y);
    return 0;
}

// num math.floor(num x)

char *floor_params_name[] = {
    "x"
};
unsigned floor_params_type[] = {
    K_NUMBER
};
unsigned short floor_params_length = (unsigned short) sizeof(floor_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_floor()
{
    long double x = kaos.getVariableFloat(floor_params_name[0]);
    long long y = (long long) floorl(x);
    kaos.returnVariableInt(y);
    return 0;
}

// num math.mod(num x, num y)

char *mod_params_name[] = {
    "x",
    "y"
};
unsigned mod_params_type[] = {
    K_NUMBER,
    K_NUMBER
};
unsigned short mod_params_length = (unsigned short) sizeof(mod_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_mod()
{
    long long x = kaos.getVariableInt(mod_params_name[0]);
    long long y = kaos.getVariableInt(mod_params_name[1]);
    x = x % y;
    kaos.returnVariableInt(x);
    return 0;
}

// num math.fmod(num x, num y)

char *fmod_params_name[] = {
    "x",
    "y"
};
unsigned fmod_params_type[] = {
    K_NUMBER,
    K_NUMBER
};
unsigned short fmod_params_length = (unsigned short) sizeof(fmod_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_fmod()
{
    long double x = kaos.getVariableFloat(fmod_params_name[0]);
    long double y = kaos.getVariableFloat(fmod_params_name[1]);
    x = fmodl(x, y);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.trunc(num x)

char *trunc_params_name[] = {
    "x"
};
unsigned trunc_params_type[] = {
    K_NUMBER
};
unsigned short trunc_params_length = (unsigned short) sizeof(trunc_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_trunc()
{
    long double x = kaos.getVariableFloat(trunc_params_name[0]);
    long long y = (long long) truncl(x);
    kaos.returnVariableInt(y);
    return 0;
}

// num math.round(num x)

char *round_params_name[] = {
    "x"
};
unsigned round_params_type[] = {
    K_NUMBER
};
unsigned short round_params_length = (unsigned short) sizeof(round_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_round()
{
    long double x = kaos.getVariableFloat(round_params_name[0]);
    long long y = llroundl(x);
    kaos.returnVariableInt(y);
    return 0;
}

// num math.remainder(num x, num y)

char *remainder_params_name[] = {
    "x",
    "y"
};
unsigned remainder_params_type[] = {
    K_NUMBER,
    K_NUMBER
};
unsigned short remainder_params_length = (unsigned short) sizeof(remainder_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_remainder()
{
    long double x = kaos.getVariableFloat(remainder_params_name[0]);
    long double y = kaos.getVariableFloat(remainder_params_name[1]);
    x = remainderl(x, y);
    kaos.returnVariableFloat(x);
    return 0;
}

// num dict math.remquo(num x, num y)

char *remquo_params_name[] = {
    "x",
    "y"
};
unsigned remquo_params_type[] = {
    K_NUMBER,
    K_NUMBER
};
unsigned short remquo_params_length = (unsigned short) sizeof(remquo_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_remquo()
{
    long double x = kaos.getVariableFloat(remquo_params_name[0]);
    long double y = kaos.getVariableFloat(remquo_params_name[1]);
    int q;
    x = remquol(x, y, &q);
    kaos.startBuildingDict();
    kaos.createVariableFloat("remainder", x);
    kaos.createVariableInt("quotient", (long long) q);
    kaos.returnDict(K_NUMBER);
    return 0;
}


// Floating-point manipulation functions

// num math.copysign(num x, num y)

char *copysign_params_name[] = {
    "x",
    "y"
};
unsigned copysign_params_type[] = {
    K_NUMBER,
    K_NUMBER
};
unsigned short copysign_params_length = (unsigned short) sizeof(copysign_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_copysign()
{
    long double x = kaos.getVariableFloat(copysign_params_name[0]);
    long double y = kaos.getVariableFloat(copysign_params_name[1]);
    x = copysignl(x ,y);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.nextafter(num x, num y)

char *nextafter_params_name[] = {
    "x",
    "y"
};
unsigned nextafter_params_type[] = {
    K_NUMBER,
    K_NUMBER
};
unsigned short nextafter_params_length = (unsigned short) sizeof(nextafter_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_nextafter()
{
    long double x = kaos.getVariableFloat(nextafter_params_name[0]);
    long double y = kaos.getVariableFloat(nextafter_params_name[1]);
    x = nextafterl(x ,y);
    kaos.returnVariableFloat(x);
    return 0;
}


// Other functions

// num math.abs(num x)

char *abs_params_name[] = {
    "x"
};
unsigned abs_params_type[] = {
    K_NUMBER
};
unsigned short abs_params_length = (unsigned short) sizeof(abs_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_abs()
{
    long double x = kaos.getVariableFloat(abs_params_name[0]);
    x = fabsl(x);
    kaos.returnVariableFloat(x);
    return 0;
}

// num math.factorial(num x)

long long factorial(long long n) {
    return n < 0 ? -1 : n == 0 ? 1 : n * factorial(n - 1);
}
char *factorial_params_name[] = {
    "x"
};
unsigned factorial_params_type[] = {
    K_NUMBER
};
unsigned short factorial_params_length = (unsigned short) sizeof(factorial_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_factorial()
{
    long long x = kaos.getVariableFloat(factorial_params_name[0]);
    x = factorial(x);
    kaos.returnVariableInt(x);
    return 0;
}


// Boolean functions

// bool math.is_finite(num x)

char *is_finite_params_name[] = {
    "x"
};
unsigned is_finite_params_type[] = {
    K_NUMBER
};
unsigned short is_finite_params_length = (unsigned short) sizeof(is_finite_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_is_finite()
{
    long double x = kaos.getVariableFloat(is_finite_params_name[0]);
    bool b = (bool) isfinite(x);
    kaos.returnVariableBool(b);
    return 0;
}

// bool math.is_inf(num x)

char *is_inf_params_name[] = {
    "x"
};
unsigned is_inf_params_type[] = {
    K_NUMBER
};
unsigned short is_inf_params_length = (unsigned short) sizeof(is_inf_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_is_inf()
{
    long double x = kaos.getVariableFloat(is_inf_params_name[0]);
    bool b = (bool) isinf(x);
    kaos.returnVariableBool(b);
    return 0;
}

// bool math.is_nan(num x)

char *is_nan_params_name[] = {
    "x"
};
unsigned is_nan_params_type[] = {
    K_NUMBER
};
unsigned short is_nan_params_length = (unsigned short) sizeof(is_nan_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_is_nan()
{
    long double x = kaos.getVariableFloat(is_nan_params_name[0]);
    bool b = (bool) isnan(x);
    kaos.returnVariableBool(b);
    return 0;
}

// bool math.is_normal(num x)

char *is_normal_params_name[] = {
    "x"
};
unsigned is_normal_params_type[] = {
    K_NUMBER
};
unsigned short is_normal_params_length = (unsigned short) sizeof(is_normal_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_is_normal()
{
    long double x = kaos.getVariableFloat(is_normal_params_name[0]);
    bool b = (bool) isnormal(x);
    kaos.returnVariableBool(b);
    return 0;
}

// bool math.is_positive(num x)

char *is_positive_params_name[] = {
    "x"
};
unsigned is_positive_params_type[] = {
    K_NUMBER
};
unsigned short is_positive_params_length = (unsigned short) sizeof(is_positive_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_is_positive()
{
    long double x = kaos.getVariableFloat(is_positive_params_name[0]);
    bool b = ! (bool) signbit(x);
    kaos.returnVariableBool(b);
    return 0;
}

// bool math.is_negative(num x)

char *is_negative_params_name[] = {
    "x"
};
unsigned is_negative_params_type[] = {
    K_NUMBER
};
unsigned short is_negative_params_length = (unsigned short) sizeof(is_negative_params_type) / sizeof(unsigned);
int KAOS_EXPORT Kaos_is_negative()
{
    long double x = kaos.getVariableFloat(is_negative_params_name[0]);
    bool b = (bool) signbit(x);
    kaos.returnVariableBool(b);
    return 0;
}


int KAOS_EXPORT KaosRegister(struct Kaos _kaos)
{
    kaos = _kaos;

    // Mathematical Constants
    kaos.defineFunction("pi", K_NUMBER, K_ANY, pi_params_name, pi_params_type, pi_params_length);
    kaos.defineFunction("e", K_NUMBER, K_ANY, e_params_name, e_params_type, e_params_length);
    kaos.defineFunction("golden_ratio", K_NUMBER, K_ANY, golden_ratio_params_name, golden_ratio_params_type, golden_ratio_params_length);
    kaos.defineFunction("inf", K_NUMBER, K_ANY, inf_params_name, inf_params_type, inf_params_length);
    kaos.defineFunction("nan", K_NUMBER, K_ANY, nan_params_name, nan_params_type, nan_params_length);

    // Trigonometric Functions
    kaos.defineFunction("cos", K_NUMBER, K_ANY, cos_params_name, cos_params_type, cos_params_length);
    kaos.defineFunction("sin", K_NUMBER, K_ANY, sin_params_name, sin_params_type, sin_params_length);
    kaos.defineFunction("tan", K_NUMBER, K_ANY, tan_params_name, tan_params_type, tan_params_length);
    kaos.defineFunction("acos", K_NUMBER, K_ANY, acos_params_name, acos_params_type, acos_params_length);
    kaos.defineFunction("asin", K_NUMBER, K_ANY, asin_params_name, asin_params_type, asin_params_length);
    kaos.defineFunction("atan", K_NUMBER, K_ANY, atan_params_name, atan_params_type, atan_params_length);
    kaos.defineFunction("atan2", K_NUMBER, K_ANY, atan2_params_name, atan2_params_type, atan2_params_length);

    // Hyperbolic Functions
    kaos.defineFunction("cosh", K_NUMBER, K_ANY, cosh_params_name, cosh_params_type, cosh_params_length);
    kaos.defineFunction("sinh", K_NUMBER, K_ANY, sinh_params_name, sinh_params_type, sinh_params_length);
    kaos.defineFunction("tanh", K_NUMBER, K_ANY, tanh_params_name, tanh_params_type, tanh_params_length);
    kaos.defineFunction("acosh", K_NUMBER, K_ANY, acosh_params_name, acosh_params_type, acosh_params_length);
    kaos.defineFunction("asinh", K_NUMBER, K_ANY, asinh_params_name, asinh_params_type, asinh_params_length);
    kaos.defineFunction("atanh", K_NUMBER, K_ANY, atanh_params_name, atanh_params_type, atanh_params_length);

    // Exponential and Logarithmic Functions
    kaos.defineFunction("exp", K_NUMBER, K_ANY, exp_params_name, exp_params_type, exp_params_length);
    kaos.defineFunction("frexp", K_DICT, K_NUMBER, frexp_params_name, frexp_params_type, frexp_params_length);
    kaos.defineFunction("ldexp", K_NUMBER, K_ANY, ldexp_params_name, ldexp_params_type, ldexp_params_length);
    kaos.defineFunction("ln", K_NUMBER, K_ANY, ln_params_name, ln_params_type, ln_params_length);
    kaos.defineFunction("log", K_NUMBER, K_ANY, log_params_name, log_params_type, log_params_length);
    kaos.defineFunction("log1p", K_NUMBER, K_ANY, log1p_params_name, log1p_params_type, log1p_params_length);
    kaos.defineFunction("log2", K_NUMBER, K_ANY, log2_params_name, log2_params_type, log2_params_length);
    kaos.defineFunction("log10", K_NUMBER, K_ANY, log10_params_name, log10_params_type, log10_params_length);
    kaos.defineFunction("modf", K_DICT, K_NUMBER, modf_params_name, modf_params_type, modf_params_length);
    kaos.defineFunction("expm1", K_NUMBER, K_ANY, expm1_params_name, expm1_params_type, expm1_params_length);

    // Power Functions
    kaos.defineFunction("pow", K_NUMBER, K_ANY, pow_params_name, pow_params_type, pow_params_length);
    kaos.defineFunction("sqrt", K_NUMBER, K_ANY, sqrt_params_name, sqrt_params_type, sqrt_params_length);
    kaos.defineFunction("cbrt", K_NUMBER, K_ANY, cbrt_params_name, cbrt_params_type, cbrt_params_length);
    kaos.defineFunction("hypot", K_NUMBER, K_ANY, hypot_params_name, hypot_params_type, hypot_params_length);

    // Error and Gamma Functions
    kaos.defineFunction("erf", K_NUMBER, K_ANY, erf_params_name, erf_params_type, erf_params_length);
    kaos.defineFunction("erfc", K_NUMBER, K_ANY, erfc_params_name, erfc_params_type, erfc_params_length);
    kaos.defineFunction("gamma", K_NUMBER, K_ANY, gamma_params_name, gamma_params_type, gamma_params_length);
    kaos.defineFunction("lgamma", K_NUMBER, K_ANY, lgamma_params_name, lgamma_params_type, lgamma_params_length);

    // Rounding and Remainder Functions
    kaos.defineFunction("ceil", K_NUMBER, K_ANY, ceil_params_name, ceil_params_type, ceil_params_length);
    kaos.defineFunction("floor", K_NUMBER, K_ANY, floor_params_name, floor_params_type, floor_params_length);
    kaos.defineFunction("mod", K_NUMBER, K_ANY, mod_params_name, mod_params_type, mod_params_length);
    kaos.defineFunction("fmod", K_NUMBER, K_ANY, fmod_params_name, fmod_params_type, fmod_params_length);
    kaos.defineFunction("trunc", K_NUMBER, K_ANY, trunc_params_name, trunc_params_type, trunc_params_length);
    kaos.defineFunction("round", K_NUMBER, K_ANY, round_params_name, round_params_type, round_params_length);
    kaos.defineFunction("remainder", K_NUMBER, K_ANY, remainder_params_name, remainder_params_type, remainder_params_length);
    kaos.defineFunction("remquo", K_DICT, K_NUMBER, remquo_params_name, remquo_params_type, remquo_params_length);

    // Floating-point Manipulation Functions
    kaos.defineFunction("copysign", K_NUMBER, K_ANY, copysign_params_name, copysign_params_type, copysign_params_length);
    kaos.defineFunction("nextafter", K_NUMBER, K_ANY, nextafter_params_name, nextafter_params_type, nextafter_params_length);

    // Other Functions
    kaos.defineFunction("abs", K_NUMBER, K_ANY, abs_params_name, abs_params_type, abs_params_length);
    kaos.defineFunction("factorial", K_NUMBER, K_ANY, factorial_params_name, factorial_params_type, factorial_params_length);

    // Boolean Functions
    kaos.defineFunction("is_finite", K_BOOL, K_ANY, is_finite_params_name, is_finite_params_type, is_finite_params_length);
    kaos.defineFunction("is_inf", K_BOOL, K_ANY, is_inf_params_name, is_inf_params_type, is_inf_params_length);
    kaos.defineFunction("is_nan", K_BOOL, K_ANY, is_nan_params_name, is_nan_params_type, is_nan_params_length);
    kaos.defineFunction("is_normal", K_BOOL, K_ANY, is_normal_params_name, is_normal_params_type, is_normal_params_length);
    kaos.defineFunction("is_positive", K_BOOL, K_ANY, is_positive_params_name, is_positive_params_type, is_positive_params_length);
    kaos.defineFunction("is_negative", K_BOOL, K_ANY, is_negative_params_name, is_negative_params_type, is_negative_params_length);

    return 0;
}
