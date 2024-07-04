/*
 ============================================================================
 Module      : Data types
 Name        : STD_TYPES.h
 Layer       : LIB
 Author      : RASHA_YASSER
 Description : Data types
 Date        : 7/4/2023
 ============================================================================
 */

#ifndef  STD_TYPES_H
#define  STD_TYPES_H

/* Boolean Data Type */
typedef unsigned char boolean;

/* Boolean Values */
#ifndef FALSE
#define FALSE        (0u)
#endif
#ifndef TRUE
#define TRUE         (1u)
#endif

#define OK            1
#define NOT_OK        0

#define LOGIC_HIGH   (1u)
#define LOGIC_LOW    (0u)

#define NULL     ((void*)0)


typedef unsigned char         u8;          /*           0 .. 255              */
typedef signed char           s8;          /*        -128 .. +127             */
typedef unsigned short        u16;         /*           0 .. 65535            */
typedef signed short          s16;         /*      -32768 .. +32767           */
typedef unsigned long         u32;         /*           0 .. 4294967295       */
typedef signed long           s32;         /* -2147483648 .. +2147483647      */
typedef unsigned long long    u64;         /*       0 .. 18446744073709551615  */
typedef signed long long      s64;         /* -9223372036854775808 .. 9223372036854775807 */
typedef float                 f32;
typedef double                f64;


#endif
