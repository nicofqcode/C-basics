# Basics C examples

This document records information about the C language along with basic examples.

##  Starting 🚀

###  Keywords
| Keywords  |  |  |  |
| --- | --- | --- | --- |
| auto      | double    | int       | struct    |
| break     | else      | long      | switch    |
| case      | enum      | register  | typedef   |
| char      | extern    | return    | union     |
| const     | float     | short     | unsigned  |
| continue  | for       | signed    | void      |
| default   | goto      | sizeof    | volatile  |
| do        | if        | static    | while     |
| _Packed   |           |           |           |

### Specifier

| Format specifier  | Description |  Supported data types |
| --- | --- | --- | 
| %c                | a single character                        | char, unsigned char |
| %d                | Signed integer                            | short, unsigned short, int, long |
| %e or %E          | Scientific notation of float values       | float, double |
| %f                | Floating point                            | float |
| %g or %G          | Similar as %e or %E                       | float double |
| %hi               | Signed integer(short)                     | short |
| %hu               | Unsigned integer(short)                   | unsigned short |
| %i                | Signed Integer                            | short, unsigned short, int, long |
| %l or %ld or %li  | Signed integer                            | long |
| %lf               | Floating point                            | double |
| %Lf               | Floating point                            | long double |
| %lu               | Unsigned integer                          | unsigned int, unsigned long |
| %lli, %lld        | Signed integer                            | long long |
| %llu              | Unsigned integer                          | unsigned long long |
| %o                | Octal representation of integer           | short, unsigned short, int, unsigned int, long |
| %p                | an address (or pointer)                   | void *     |
| %Lf               | Floating point                            | long double |
| %s                | a string                                  | char * |
| %u                | int unsigned decimal                      | unsigned int, unsigned long |
| %n                | prints nothing                            | - |
| %%                | Prints % character                        | - |

### Integer types

| Type | Storage size | Value range |  
| --- | --- | --- |
| char              | 1 byte                              | -128 to 127 or 0 to 255 | 
| unsigned char     | 1 byte                              | 0 to 255                | 
| signed char       | 1 byte                              | -128 to 127             | 
| int               | 2 or 4 bytes                        | -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647 | 
| unsigned int      | 2 or 4 bytes                        | -128 to 127 or 0 to 255 | 
| short             | 2 bytes                             | -32,768 to 32,767       | 
| unsigned short    | 2 bytes                             | 0 to 65,535             | 
| long              | 8 bytes or (4 bytes for 32 bit OS)  | -9223372036854775808 to 9223372036854775807 | 
| unsigned long     | 8 bytes                             | 0 to 18446744073709551615 | 

```
CHAR_BIT    :   8
CHAR_MAX    :   127
CHAR_MIN    :   -128
INT_MAX     :   2147483647
INT_MIN     :   -2147483648
LONG_MAX    :   9223372036854775807
LONG_MIN    :   -9223372036854775808
SCHAR_MAX   :   127
SCHAR_MIN   :   -128
SHRT_MAX    :   32767
SHRT_MIN    :   -32768
UCHAR_MAX   :   255
UINT_MAX    :   4294967295
ULONG_MAX   :   18446744073709551615
USHRT_MAX   :   65535
```
### Floating-point types

| Type  | Storage size | Value range | Precision |
| --- | --- | --- | --- |
| float         | 4 byte     | 1.2E-38 to 3.4E+38      | 6 decimal places    |
| double        | 8 byte     | 2.3E-308 to 1.7E+308    | 15 decimal places   |
| long double   | 10 byte    | 3.4E-4932 to 1.1E+4932  | 10 decimal places   |

```
Storage size for float  :   4 
FLT_MAX                 :   3.40282e+38
FLT_MIN                 :   1.17549e-38
-FLT_MAX                :   -3.40282e+38
-FLT_MIN                :   -1.17549e-38
DBL_MAX                 :   1.79769e+308
DBL_MIN                 :   2.22507e-308
-DBL_MAX                :   -1.79769e+308
Precision value         :   6
```
