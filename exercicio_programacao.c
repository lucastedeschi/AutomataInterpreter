#include <stdlib.h>
#include <stdio.h>

void scanner();

int main( int argc, const char* argv[] )
{
        scanner();
}

void scanner(){
        char c;

	q0: c = getchar();
        if (c == '\r')
        printf('Palavra inválida - Estado NF Q0');
	else if ((c == '+') || (c == '-'))
        goto q1;
	else if	((c == '0') || (c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6') || (c == '7') || (c == '8') || (c == '9'))
        goto q2;
	return;

	q1: c = getchar();
        if (c == '\r')
        printf('Palavra inválida - Estado NF Q1');
	else if	((c == '0') || (c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6') || (c == '7') || (c == '8') || (c == '9'))
	goto q2;
        return;

        q2: c = getchar();
        if (c == '\r')
        printf('Palavra válida - Estado F Q2');
	else if	((c == '0') || (c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6') || (c == '7') || (c == '8') || (c == '9'))
        goto q2;
        else if (c == '.')
        goto q3;
        return;

        q3: c = getchar();
        if (c == '\r')
        printf('Palavra inválida - Estado NF Q3');
	else if ((c == '0') || (c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6') || (c == '7') || (c == '8') || (c == '9'))
        goto q4;
        
        q4: c = getchar();
        if (c == '\r')
        printf('Palavra válida - Estado F Q4');
	else if ((c == '0') || (c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6') || (c == '7') || (c == '8') || (c == '9'))
        goto q4;
        return;
}	