#include <stdio.h>
#include <stdlib.h>

void resolve(int n1, int n2, int d1, int d2, char op){

	int n3, 
		d3,
		n4,
		d4,
		r;

	switch(op){
		case '+':
			n3 = (n1 * d2 + n2 * d1);
		   	d3 = (d1 * d2);
			n4 = n3;
			d4 = d3;
			r = 1;

			while(r == 1)
				if(n4 == d4){
					n4 = 1;
					d4 = 1;
				}else if(n4 % 2 == 0 && d4 % 2 == 0){
					n4 /= 2;
					d4 /= 2;
				}else if(n4 % 3 == 0 && d4 % 3 == 0){
					n4 /= 3;
					d4 /= 3;
				}else if(n4 % 5 == 0 && d4 % 5 == 0){
					n4 /= 5;
					d4 /= 5;
				}else{
					r = 0;
				}

			printf("%d/%d = %d/%d\n",n3,d3,n4,d4);

			break;

		case '-':

			n3 = (n1 * d2 - n2 * d1);
			d3 = (d1 * d2);
			n4 = n3;
			d4 = d3;
			r = 1;

			while(r == 1)
				if(n4 == d4){
					n4 = 1;
					d4 = 1;
				}else if(n4 % 2 == 0 && d4 % 2 == 0){
					n4 /= 2;
					d4 /= 2;
				}else if(n4 % 3 == 0 && d4 % 3 == 0){
					n4 /= 3;
					d4 /= 3;
				}else if(n4 % 5 == 0 && d4 % 5 == 0){
					n4 /= 5;
					d4 /= 5;
				}else{
					r = 0;
				}

			printf("%d/%d = %d/%d\n",n3,d3,n4,d4);

			break;

		case '*':

			n3 = (n1 * n2);
			d3 = (d1 * d2);
			n4 = n3;
			d4 = d3;
			r = 1;

			while(r == 1)
				if(n4 == d4){
					n4 = 1;
					d4 = 1;
				}else if(n4 % 2 == 0 && d4 % 2 == 0){
					n4 /= 2;
					d4 /= 2;
				}else if(n4 % 3 == 0 && d4 % 3 == 0){
					n4 /= 3;
					d4 /= 3;
				}else if(n4 % 5 == 0 && d4 % 5 == 0){
					n4 /= 5;
					d4 /= 5;
				}else{
					r = 0;
				}

			printf("%d/%d = %d/%d\n",n3,d3,n4,d4);


			break;

		case '/':

			n3 = (n1 * d2);
			d3 = (d1 * n2);
			n4 = n3;
			d4 = d3;
			r = 1;

			while(r == 1)
				if(n4 == d4){
					n4 = 1;
					d4 = 1;
				}else if(n4 % 2 == 0 && d4 % 2 == 0){
					n4 /= 2;
					d4 /= 2;
				}else if(n4 % 3 == 0 && d4 % 3 == 0){
					n4 /= 3;
					d4 /= 3;
				}else if(n4 % 5 == 0 && d4 % 5 == 0){
					n4 /= 5;
					d4 /= 5;
				}else{
					r = 0;
				}

			printf("%d/%d = %d/%d\n",n3,d3,n4,d4);


			break;

		default:
			printf("Operador inválido!\n");
			break;
	}
}

int main(){

	int quant;		

	scanf("%d",&quant);

	for(int i = 0; i < quant; i++){

		int n1,
			n2,
			d1,
			d2;

		char op;

		scanf("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);

		resolve(n1,n2,d1,d2,op);
		
	}
}
