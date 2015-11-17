#include "common.h"

#include <stdio.h>
#include <stdarg.h>

void gt_log (const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    vfprintf(stderr, fmt, ap);
    va_end(ap);
}

void gt_fatal (const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    vfprintf(stderr, fmt, ap);
    va_end(ap);

    exit(EXIT_FAILURE);
}

void gt_na (const char *name)
{
    gt_log("%s is not available on your platform!\n", name);
}