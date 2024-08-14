#include "stdio.h"
#include "conio.h"
float f1,f2,f3,f4;
char o[] ="+-*/";
int sol_exists =0;

void display(int bracket_state, int i) // i -> is operator combination
{   sol_exists = 1;
    for (int j = 0, n = 0; j < 4; j++) {
        for (int k = 0; k < 4; k++) {
            for (int l = 0; l < 4; l++, n++) {

                if (n == i) {
                    switch (bracket_state) {
                    case 0:{
                        printf("%d %c %d %c %d %c %d\n", (int) f1, o[j], (int) f2, o[k], (int) f3, o[l], (int) f4);
                        break;
                    }
                    case 1:{
                        printf("(%d %c %d) %c %d %c %d\n", (int) f1, o[j], (int) f2, o[k], (int) f3, o[l], (int) f4);
                        break;
                    }
                    case 2:{
                        printf("(%d %c %d %c %d) %c %d\n", (int) f1, o[j], (int) f2, o[k], (int) f3, o[l], (int) f4);
                        break;
                    }

                    case 3:{
                        printf("%d %c (%d %c %d) %c %d\n", (int) f1, o[j], (int) f2, o[k], (int) f3, o[l], (int) f4);
                        break;
                    }
                    case 4:{
                        printf("%d %c (%d %c %d %c %d)\n", (int) f1, o[j], (int) f2, o[k], (int) f3, o[l], (int) f4);
                        break;
                    }
                    case 5:{
                        printf("%d %c %d %c (%d %c %d)\n", (int) f1, o[j], (int) f2, o[k], (int) f3, o[l], (int) f4);
                        break;
                    }
                        default:break;
                }
                    break;
            }
            if (n == i) break;
        }
        if (n == i) break;
    }
        if (n == i) break;
}
}

float calculate (int n1,int n2, int n3, int n4, int c)
{

    f1=n1; f2=n2; f3=n3; f4=n4;
    switch (c) {
        case 0: return(f1+f2+f3+f4);
        case 1: return(f1+f2+f3-f4);
        case 2: return(f1+f2+f3*f4);
        case 3: return(f1+f2+f3/f4);
        case 4: return(f1+f2-f3+f4);
        case 5: return(f1+f2-f3-f4);
        case 6: return(f1+f2-f3*f4);
        case 7: return(f1+f2-f3/f4);
        case 8: return(f1+f2*f3+f4);
        case 9: return(f1+f2*f3-f4);
        case 10: return(f1+f2*f3*f4);
        case 11: return(f1+f2*f3/f4);
        case 12: return(f1+f2/f3+f4);
        case 13: return(f1+f2/f3-f4);
        case 14: return(f1+f2/f3*f4);
        case 15: return(f1+f2/f3/f4);
        case 16: return(f1-f2+f3+f4);
        case 17: return(f1-f2+f3-f4);
        case 18: return(f1-f2+f3*f4);
        case 19: return(f1-f2+f3/f4);
        case 20: return(f1-f2-f3+f4);
        case 21: return(f1-f2-f3-f4);
        case 22: return(f1-f2-f3*f4);
        case 23: return(f1-f2-f3/f4);
        case 24: return(f1-f2*f3+f4);
        case 25: return(f1-f2*f3-f4);
        case 26: return(f1-f2*f3*f4);
        case 27: return(f1-f2*f3/f4);
        case 28: return(f1-f2/f3+f4);
        case 29: return(f1-f2/f3-f4);
        case 30: return(f1-f2/f3*f4);
        case 31: return(f1-f2/f3/f4);
        case 32: return(f1*f2+f3+f4);
        case 33: return(f1*f2+f3-f4);
        case 34: return(f1*f2+f3*f4);
        case 35: return(f1*f2+f3/f4);
        case 36: return(f1*f2-f3+f4);
        case 37: return(f1*f2-f3-f4);
        case 38: return(f1*f2-f3*f4);
        case 39: return(f1*f2-f3/f4);
        case 40: return(f1*f2*f3+f4);
        case 41: return(f1*f2*f3-f4);
        case 42: return(f1*f2*f3*f4);
        case 43: return(f1*f2*f3/f4);
        case 44: return(f1*f2/f3+f4);
        case 45: return(f1*f2/f3-f4);
        case 46: return(f1*f2/f3*f4);
        case 47: return(f1*f2/f3/f4);
        case 48: return(f1/f2+f3+f4);
        case 49: return(f1/f2+f3-f4);
        case 50: return(f1/f2+f3*f4);
        case 51: return(f1/f2+f3/f4);
        case 52: return(f1/f2-f3+f4);
        case 53: return(f1/f2-f3-f4);
        case 54: return(f1/f2-f3*f4);
        case 55: return(f1/f2-f3/f4);
        case 56: return(f1/f2*f3+f4);
        case 57: return(f1/f2*f3-f4);
        case 58: return(f1/f2*f3*f4);
        case 59: return(f1/f2*f3/f4);
        case 60: return(f1/f2/f3+f4);
        case 61: return(f1/f2/f3-f4);
        case 62: return(f1/f2/f3*f4);
        case 63: return(f1/f2/f3/f4);
        default: return 0;
    }
}
float calculate1 (int n1,int n2, int n3, int n4, int c)
{

    f1=n1; f2=n2; f3=n3; f4=n4;
    switch (c) {
        case 0: return((f1+f2)+f3+f4);
        case 1: return((f1+f2)+f3-f4);
        case 2: return((f1+f2)+f3*f4);
        case 3: return((f1+f2)+f3/f4);
        case 4: return((f1+f2)-f3+f4);
        case 5: return((f1+f2)-f3-f4);
        case 6: return((f1+f2)-f3*f4);
        case 7: return((f1+f2)-f3/f4);
        case 8: return((f1+f2)*f3+f4);
        case 9: return((f1+f2)*f3-f4);
        case 10: return((f1+f2)*f3*f4);
        case 11: return((f1+f2)*f3/f4);
        case 12: return((f1+f2)/f3+f4);
        case 13: return((f1+f2)/f3-f4);
        case 14: return((f1+f2)/f3*f4);
        case 15: return((f1+f2)/f3/f4);
        case 16: return((f1-f2)+f3+f4);
        case 17: return((f1-f2)+f3-f4);
        case 18: return((f1-f2)+f3*f4);
        case 19: return((f1-f2)+f3/f4);
        case 20: return((f1-f2)-f3+f4);
        case 21: return((f1-f2)-f3-f4);
        case 22: return((f1-f2)-f3*f4);
        case 23: return((f1-f2)-f3/f4);
        case 24: return((f1-f2)*f3+f4);
        case 25: return((f1-f2)*f3-f4);
        case 26: return((f1-f2)*f3*f4);
        case 27: return((f1-f2)*f3/f4);
        case 28: return((f1-f2)/f3+f4);
        case 29: return((f1-f2)/f3-f4);
        case 30: return((f1-f2)/f3*f4);
        case 31: return((f1-f2)/f3/f4);
        case 32: return((f1*f2)+f3+f4);
        case 33: return((f1*f2)+f3-f4);
        case 34: return((f1*f2)+f3*f4);
        case 35: return((f1*f2)+f3/f4);
        case 36: return((f1*f2)-f3+f4);
        case 37: return((f1*f2)-f3-f4);
        case 38: return((f1*f2)-f3*f4);
        case 39: return((f1*f2)-f3/f4);
        case 40: return((f1*f2)*f3+f4);
        case 41: return((f1*f2)*f3-f4);
        case 42: return((f1*f2)*f3*f4);
        case 43: return((f1*f2)*f3/f4);
        case 44: return((f1*f2)/f3+f4);
        case 45: return((f1*f2)/f3-f4);
        case 46: return((f1*f2)/f3*f4);
        case 47: return((f1*f2)/f3/f4);
        case 48: return((f1/f2)+f3+f4);
        case 49: return((f1/f2)+f3-f4);
        case 50: return((f1/f2)+f3*f4);
        case 51: return((f1/f2)+f3/f4);
        case 52: return((f1/f2)-f3+f4);
        case 53: return((f1/f2)-f3-f4);
        case 54: return((f1/f2)-f3*f4);
        case 55: return((f1/f2)-f3/f4);
        case 56: return((f1/f2)*f3+f4);
        case 57: return((f1/f2)*f3-f4);
        case 58: return((f1/f2)*f3*f4);
        case 59: return((f1/f2)*f3/f4);
        case 60: return((f1/f2)/f3+f4);
        case 61: return((f1/f2)/f3-f4);
        case 62: return((f1/f2)/f3*f4);
        case 63: return((f1/f2)/f3/f4);
        default: return 0;
    }
}
float calculate2 (int n1,int n2, int n3, int n4, int c)
{

    f1=n1; f2=n2; f3=n3; f4=n4;
    switch (c) {
        case 0: return((f1+f2+f3)+f4);
        case 1: return((f1+f2+f3)-f4);
        case 2: return((f1+f2+f3)*f4);
        case 3: return((f1+f2+f3)/f4);
        case 4: return((f1+f2-f3)+f4);
        case 5: return((f1+f2-f3)-f4);
        case 6: return((f1+f2-f3)*f4);
        case 7: return((f1+f2-f3)/f4);
        case 8: return((f1+f2*f3)+f4);
        case 9: return((f1+f2*f3)-f4);
        case 10: return((f1+f2*f3)*f4);
        case 11: return((f1+f2*f3)/f4);
        case 12: return((f1+f2/f3)+f4);
        case 13: return((f1+f2/f3)-f4);
        case 14: return((f1+f2/f3)*f4);
        case 15: return((f1+f2/f3)/f4);
        case 16: return((f1-f2+f3)+f4);
        case 17: return((f1-f2+f3)-f4);
        case 18: return((f1-f2+f3)*f4);
        case 19: return((f1-f2+f3)/f4);
        case 20: return((f1-f2-f3)+f4);
        case 21: return((f1-f2-f3)-f4);
        case 22: return((f1-f2-f3)*f4);
        case 23: return((f1-f2-f3)/f4);
        case 24: return((f1-f2*f3)+f4);
        case 25: return((f1-f2*f3)-f4);
        case 26: return((f1-f2*f3)*f4);
        case 27: return((f1-f2*f3)/f4);
        case 28: return((f1-f2/f3)+f4);
        case 29: return((f1-f2/f3)-f4);
        case 30: return((f1-f2/f3)*f4);
        case 31: return((f1-f2/f3)/f4);
        case 32: return((f1*f2+f3)+f4);
        case 33: return((f1*f2+f3)-f4);
        case 34: return((f1*f2+f3)*f4);
        case 35: return((f1*f2+f3)/f4);
        case 36: return((f1*f2-f3)+f4);
        case 37: return((f1*f2-f3)-f4);
        case 38: return((f1*f2-f3)*f4);
        case 39: return((f1*f2-f3)/f4);
        case 40: return((f1*f2*f3)+f4);
        case 41: return((f1*f2*f3)-f4);
        case 42: return((f1*f2*f3)*f4);
        case 43: return((f1*f2*f3)/f4);
        case 44: return((f1*f2/f3)+f4);
        case 45: return((f1*f2/f3)-f4);
        case 46: return((f1*f2/f3)*f4);
        case 47: return((f1*f2/f3)/f4);
        case 48: return((f1/f2+f3)+f4);
        case 49: return((f1/f2+f3)-f4);
        case 50: return((f1/f2+f3)*f4);
        case 51: return((f1/f2+f3)/f4);
        case 52: return((f1/f2-f3)+f4);
        case 53: return((f1/f2-f3)-f4);
        case 54: return((f1/f2-f3)*f4);
        case 55: return((f1/f2-f3)/f4);
        case 56: return((f1/f2*f3)+f4);
        case 57: return((f1/f2*f3)-f4);
        case 58: return((f1/f2*f3)*f4);
        case 59: return((f1/f2*f3)/f4);
        case 60: return((f1/f2/f3)+f4);
        case 61: return((f1/f2/f3)-f4);
        case 62: return((f1/f2/f3)*f4);
        case 63: return((f1/f2/f3)/f4);
        default: return 0;
    }
}
float calculate3 (int n1,int n2, int n3, int n4, int c)
{

    f1=n1; f2=n2; f3=n3; f4=n4;
    switch (c) {
        case 0: return(f1+(f2+f3)+f4);
        case 1: return(f1+(f2+f3)-f4);
        case 2: return(f1+(f2+f3)*f4);
        case 3: return(f1+(f2+f3)/f4);
        case 4: return(f1+(f2-f3)+f4);
        case 5: return(f1+(f2-f3)-f4);
        case 6: return(f1+(f2-f3)*f4);
        case 7: return(f1+(f2-f3)/f4);
        case 8: return(f1+(f2*f3)+f4);
        case 9: return(f1+(f2*f3)-f4);
        case 10: return(f1+(f2*f3)*f4);
        case 11: return(f1+(f2*f3)/f4);
        case 12: return(f1+(f2/f3)+f4);
        case 13: return(f1+(f2/f3)-f4);
        case 14: return(f1+(f2/f3)*f4);
        case 15: return(f1+(f2/f3)/f4);
        case 16: return(f1-(f2+f3)+f4);
        case 17: return(f1-(f2+f3)-f4);
        case 18: return(f1-(f2+f3)*f4);
        case 19: return(f1-(f2+f3)/f4);
        case 20: return(f1-(f2-f3)+f4);
        case 21: return(f1-(f2-f3)-f4);
        case 22: return(f1-(f2-f3)*f4);
        case 23: return(f1-(f2-f3)/f4);
        case 24: return(f1-(f2*f3)+f4);
        case 25: return(f1-(f2*f3)-f4);
        case 26: return(f1-(f2*f3)*f4);
        case 27: return(f1-(f2*f3)/f4);
        case 28: return(f1-(f2/f3)+f4);
        case 29: return(f1-(f2/f3)-f4);
        case 30: return(f1-(f2/f3)*f4);
        case 31: return(f1-(f2/f3)/f4);
        case 32: return(f1*(f2+f3)+f4);
        case 33: return(f1*(f2+f3)-f4);
        case 34: return(f1*(f2+f3)*f4);
        case 35: return(f1*(f2+f3)/f4);
        case 36: return(f1*(f2-f3)+f4);
        case 37: return(f1*(f2-f3)-f4);
        case 38: return(f1*(f2-f3)*f4);
        case 39: return(f1*(f2-f3)/f4);
        case 40: return(f1*(f2*f3)+f4);
        case 41: return(f1*(f2*f3)-f4);
        case 42: return(f1*(f2*f3)*f4);
        case 43: return(f1*(f2*f3)/f4);
        case 44: return(f1*(f2/f3)+f4);
        case 45: return(f1*(f2/f3)-f4);
        case 46: return(f1*(f2/f3)*f4);
        case 47: return(f1*(f2/f3)/f4);
        case 48: return(f1/(f2+f3)+f4);
        case 49: return(f1/(f2+f3)-f4);
        case 50: return(f1/(f2+f3)*f4);
        case 51: return(f1/(f2+f3)/f4);
        case 52: return(f1/(f2-f3)+f4);
        case 53: return(f1/(f2-f3)-f4);
        case 54: return(f1/(f2-f3)*f4);
        case 55: return(f1/(f2-f3)/f4);
        case 56: return(f1/(f2*f3)+f4);
        case 57: return(f1/(f2*f3)-f4);
        case 58: return(f1/(f2*f3)*f4);
        case 59: return(f1/(f2*f3)/f4);
        case 60: return(f1/(f2/f3)+f4);
        case 61: return(f1/(f2/f3)-f4);
        case 62: return(f1/(f2/f3)*f4);
        case 63: return(f1/(f2/f3)/f4);
        default: return 0;
    }
}
float calculate4 (int n1,int n2, int n3, int n4, int c)
{

    f1=n1; f2=n2; f3=n3; f4=n4;
    switch (c) {
        case 0: return(f1+(f2+f3+f4));
        case 1: return(f1+(f2+f3-f4));
        case 2: return(f1+(f2+f3*f4));
        case 3: return(f1+(f2+f3/f4));
        case 4: return(f1+(f2-f3+f4));
        case 5: return(f1+(f2-f3-f4));
        case 6: return(f1+(f2-f3*f4));
        case 7: return(f1+(f2-f3/f4));
        case 8: return(f1+(f2*f3+f4));
        case 9: return(f1+(f2*f3-f4));
        case 10: return(f1+(f2*f3*f4));
        case 11: return(f1+(f2*f3/f4));
        case 12: return(f1+(f2/f3+f4));
        case 13: return(f1+(f2/f3-f4));
        case 14: return(f1+(f2/f3*f4));
        case 15: return(f1+(f2/f3/f4));
        case 16: return(f1-(f2+f3+f4));
        case 17: return(f1-(f2+f3-f4));
        case 18: return(f1-(f2+f3*f4));
        case 19: return(f1-(f2+f3/f4));
        case 20: return(f1-(f2-f3+f4));
        case 21: return(f1-(f2-f3-f4));
        case 22: return(f1-(f2-f3*f4));
        case 23: return(f1-(f2-f3/f4));
        case 24: return(f1-(f2*f3+f4));
        case 25: return(f1-(f2*f3-f4));
        case 26: return(f1-(f2*f3*f4));
        case 27: return(f1-(f2*f3/f4));
        case 28: return(f1-(f2/f3+f4));
        case 29: return(f1-(f2/f3-f4));
        case 30: return(f1-(f2/f3*f4));
        case 31: return(f1-(f2/f3/f4));
        case 32: return(f1*(f2+f3+f4));
        case 33: return(f1*(f2+f3-f4));
        case 34: return(f1*(f2+f3*f4));
        case 35: return(f1*(f2+f3/f4));
        case 36: return(f1*(f2-f3+f4));
        case 37: return(f1*(f2-f3-f4));
        case 38: return(f1*(f2-f3*f4));
        case 39: return(f1*(f2-f3/f4));
        case 40: return(f1*(f2*f3+f4));
        case 41: return(f1*(f2*f3-f4));
        case 42: return(f1*(f2*f3*f4));
        case 43: return(f1*(f2*f3/f4));
        case 44: return(f1*(f2/f3+f4));
        case 45: return(f1*(f2/f3-f4));
        case 46: return(f1*(f2/f3*f4));
        case 47: return(f1*(f2/f3/f4));
        case 48: return(f1/(f2+f3+f4));
        case 49: return(f1/(f2+f3-f4));
        case 50: return(f1/(f2+f3*f4));
        case 51: return(f1/(f2+f3/f4));
        case 52: return(f1/(f2-f3+f4));
        case 53: return(f1/(f2-f3-f4));
        case 54: return(f1/(f2-f3*f4));
        case 55: return(f1/(f2-f3/f4));
        case 56: return(f1/(f2*f3+f4));
        case 57: return(f1/(f2*f3-f4));
        case 58: return(f1/(f2*f3*f4));
        case 59: return(f1/(f2*f3/f4));
        case 60: return(f1/(f2/f3+f4));
        case 61: return(f1/(f2/f3-f4));
        case 62: return(f1/(f2/f3*f4));
        case 63: return(f1/(f2/f3/f4));
        default: return 0;
    }
}
float calculate5 (int n1,int n2, int n3, int n4, int c)
{

    f1=n1; f2=n2; f3=n3; f4=n4;
    switch (c) {
        case 0: return(f1+f2+(f3+f4));
        case 1: return(f1+f2+(f3-f4));
        case 2: return(f1+f2+(f3*f4));
        case 3: return(f1+f2+(f3/f4));
        case 4: return(f1+f2-(f3+f4));
        case 5: return(f1+f2-(f3-f4));
        case 6: return(f1+f2-(f3*f4));
        case 7: return(f1+f2-(f3/f4));
        case 8: return(f1+f2*(f3+f4));
        case 9: return(f1+f2*(f3-f4));
        case 10: return(f1+f2*(f3*f4));
        case 11: return(f1+f2*(f3/f4));
        case 12: return(f1+f2/(f3+f4));
        case 13: return(f1+f2/(f3-f4));
        case 14: return(f1+f2/(f3*f4));
        case 15: return(f1+f2/(f3/f4));
        case 16: return(f1-f2+(f3+f4));
        case 17: return(f1-f2+(f3-f4));
        case 18: return(f1-f2+(f3*f4));
        case 19: return(f1-f2+(f3/f4));
        case 20: return(f1-f2-(f3+f4));
        case 21: return(f1-f2-(f3-f4));
        case 22: return(f1-f2-(f3*f4));
        case 23: return(f1-f2-(f3/f4));
        case 24: return(f1-f2*(f3+f4));
        case 25: return(f1-f2*(f3-f4));
        case 26: return(f1-f2*(f3*f4));
        case 27: return(f1-f2*(f3/f4));
        case 28: return(f1-f2/(f3+f4));
        case 29: return(f1-f2/(f3-f4));
        case 30: return(f1-f2/(f3*f4));
        case 31: return(f1-f2/(f3/f4));
        case 32: return(f1*f2+(f3+f4));
        case 33: return(f1*f2+(f3-f4));
        case 34: return(f1*f2+(f3*f4));
        case 35: return(f1*f2+(f3/f4));
        case 36: return(f1*f2-(f3+f4));
        case 37: return(f1*f2-(f3-f4));
        case 38: return(f1*f2-(f3*f4));
        case 39: return(f1*f2-(f3/f4));
        case 40: return(f1*f2*(f3+f4));
        case 41: return(f1*f2*(f3-f4));
        case 42: return(f1*f2*(f3*f4));
        case 43: return(f1*f2*(f3/f4));
        case 44: return(f1*f2/(f3+f4));
        case 45: return(f1*f2/(f3-f4));
        case 46: return(f1*f2/(f3*f4));
        case 47: return(f1*f2/(f3/f4));
        case 48: return(f1/f2+(f3+f4));
        case 49: return(f1/f2+(f3-f4));
        case 50: return(f1/f2+(f3*f4));
        case 51: return(f1/f2+(f3/f4));
        case 52: return(f1/f2-(f3+f4));
        case 53: return(f1/f2-(f3-f4));
        case 54: return(f1/f2-(f3*f4));
        case 55: return(f1/f2-(f3/f4));
        case 56: return(f1/f2*(f3+f4));
        case 57: return(f1/f2*(f3-f4));
        case 58: return(f1/f2*(f3*f4));
        case 59: return(f1/f2*(f3/f4));
        case 60: return(f1/f2/(f3+f4));
        case 61: return(f1/f2/(f3-f4));
        case 62: return(f1/f2/(f3*f4));
        case 63: return(f1/f2/(f3/f4));
        default: return 0;
    }
}


int main()
{
    int a,b,c,d;
    int i;
    float answer;
    printf("Solution of Mobile Game '4=10'.\n");
    printf("Enter the four operands(numbers)...\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    for ( i = 0; i < 64; i++) {
        answer = calculate(a,b,c,d,i);
        if(answer == 10.0) display(0,i);
        answer = calculate(a,b,d,c,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(a,c,b,d,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(a,c,d,b,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(a,d,b,c,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(a,d,c,b,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(b,a,c,d,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(b,a,d,c,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(b,c,a,d,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(b,c,d,a,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(b,d,a,c,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(b,d,c,a,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(c,a,b,d,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(c,a,d,b,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(c,b,a,d,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(c,b,d,a,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(c,d,a,b,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(c,d,b,a,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(d,a,b,c,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(d,a,c,b,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(d,b,a,c,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(d,b,c,a,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(d,c,a,b,i);
        if(answer == 10.0)  display(0,i);
        answer = calculate(d,c,b,a,i);
        if(answer == 10.0)  display(0,i);
    }
    for ( i = 0; i < 64; i++) {
        answer = calculate1(a,b,c,d,i);
        if(answer == 10.0)  display(1,i);
        answer = calculate1(a,b,d,c,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(a,c,b,d,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(a,c,d,b,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(a,d,b,c,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(a,d,c,b,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(b,a,c,d,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(b,a,d,c,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(b,c,a,d,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(b,c,d,a,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(b,d,a,c,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(b,d,c,a,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(c,a,b,d,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(c,a,d,b,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(c,b,a,d,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(c,b,d,a,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(c,d,a,b,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(c,d,b,a,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(d,a,b,c,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(d,a,c,b,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(d,b,a,c,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(d,b,c,a,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(d,c,a,b,i);
        if(answer == 10.0) display(1,i);
        answer = calculate1(d,c,b,a,i);
        if(answer == 10.0) display(1,i);
    }
    for ( i = 0; i < 64; i++) {
        answer = calculate2(a,b,c,d,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(a,b,d,c,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(a,c,b,d,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(a,c,d,b,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(a,d,b,c,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(a,d,c,b,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(b,a,c,d,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(b,a,d,c,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(b,c,a,d,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(b,c,d,a,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(b,d,a,c,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(b,d,c,a,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(c,a,b,d,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(c,a,d,b,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(c,b,a,d,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(c,b,d,a,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(c,d,a,b,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(c,d,b,a,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(d,a,b,c,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(d,a,c,b,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(d,b,a,c,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(d,b,c,a,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(d,c,a,b,i);
        if(answer == 10.0) display(2,i);
        answer = calculate2(d,c,b,a,i);
        if(answer == 10.0) display(2,i);
    }
    for ( i = 0; i < 64; i++) {
        answer = calculate3(a,b,c,d,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(a,b,d,c,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(a,c,b,d,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(a,c,d,b,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(a,d,b,c,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(a,d,c,b,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(b,a,c,d,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(b,a,d,c,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(b,c,a,d,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(b,c,d,a,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(b,d,a,c,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(b,d,c,a,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(c,a,b,d,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(c,a,d,b,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(c,b,a,d,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(c,b,d,a,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(c,d,a,b,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(c,d,b,a,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(d,a,b,c,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(d,a,c,b,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(d,b,a,c,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(d,b,c,a,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(d,c,a,b,i);
        if(answer == 10.0) display(3,i);
        answer = calculate3(d,c,b,a,i);
        if(answer == 10.0) display(3,i);
    }
    for ( i = 0; i < 64; i++) {
        answer = calculate4(a,b,c,d,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(a,b,d,c,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(a,c,b,d,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(a,c,d,b,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(a,d,b,c,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(a,d,c,b,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(b,a,c,d,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(b,a,d,c,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(b,c,a,d,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(b,c,d,a,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(b,d,a,c,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(b,d,c,a,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(c,a,b,d,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(c,a,d,b,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(c,b,a,d,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(c,b,d,a,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(c,d,a,b,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(c,d,b,a,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(d,a,b,c,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(d,a,c,b,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(d,b,a,c,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(d,b,c,a,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(d,c,a,b,i);
        if(answer == 10.0) display(4,i);
        answer = calculate4(d,c,b,a,i);
        if(answer == 10.0) display(4,i);
    }
    for ( i = 0; i < 64; i++) {
        answer = calculate5(a,b,c,d,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(a,b,d,c,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(a,c,b,d,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(a,c,d,b,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(a,d,b,c,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(a,d,c,b,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(b,a,c,d,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(b,a,d,c,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(b,c,a,d,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(b,c,d,a,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(b,d,a,c,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(b,d,c,a,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(c,a,b,d,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(c,a,d,b,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(c,b,a,d,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(c,b,d,a,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(c,d,a,b,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(c,d,b,a,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(d,a,b,c,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(d,a,c,b,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(d,b,a,c,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(d,b,c,a,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(d,c,a,b,i);
        if(answer == 10.0) display(5,i);
        answer = calculate5(d,c,b,a,i);
        if(answer == 10.0) display(5,i);
    }
    if (sol_exists == 0)
        printf("No Solution/Combinations exists..\n");

    getch();
    return 0;
}
