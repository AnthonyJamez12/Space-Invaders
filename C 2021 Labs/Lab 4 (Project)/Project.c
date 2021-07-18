#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


void do_charges(int i, double data[10], double *cph, double *ave_cost);
double round_money(double money);

int main(void){

	int n=0, 
		i=1,  
		day, 
		month;
	
	double  id=0.0, 
			val=0.0, 
			data[10], 
			charge_per_hour = 0.0, 
			average_cost = 0.0;
	
	char c;

	FILE *fp = fopen("usage.txt", "r");
	
	if(fp == NULL ) 
		printf("error\n");

	fscanf(fp,"%d %d", &day, &month);

	while ( c != EOF ){
		fscanf(fp,"%lf %lf", &id, &val);
		data[i] = id;
		data[i+4] = val;

		c = getc(fp);
		i++;
	}
	
	fclose(fp);

	fp = fopen("charges.txt", "w");
	if(fp == NULL ) 
		printf("error\n");

		fprintf(fp,"Charges for %d/%d\n\n\n", day, month);
		fprintf(fp,"Customer\t Hours used\t C.P.H.\t\t Ave. Cost\n\n");
	
		printf("Charges for %d/%d\n\n\n", day, month);
		printf("Customer\t Hours used\t C.P.H.\t\t Ave. Cost\n\n");
	
	for(i=1;i<4;i++){
		charge_per_hour = 0;
		do_charges(i, data, &charge_per_hour, &average_cost);
		fprintf(fp,"%1.0lf\t\t %0.1lf\t\t %0.2lf\t\t %0.2lf\n\n",data[i], data[i+4], charge_per_hour, average_cost);
		printf("%1.0lf\t\t %0.1lf\t\t %0.2lf\t\t %0.2lf\n\n",data[i], data[i+4], charge_per_hour, average_cost);

	}
	fclose(fp);
	return 0;
	}

	void do_charges(int i, double data[10], double *cph, double *ave_cost){
	
	int base_rate = 7.99, 
		partial_rate = 1.99;
	
	double  remain=0.0, 
			total_hours=0.0, 
			money=0.0;


	if(data[i+4] > 10){
		remain = data[i+4] - 10;
	
	while(remain > 0){
		*cph = *cph + 1.99;
	
	if(remain/10>0) 
		remain--;
	}
	
	*cph = *cph + 7.99;
	money = *cph;
	*cph = round_money(money);
	total_hours = (remain * *cph);

	
	} 
	else {
	
	*cph = 7.99;
	money = *cph;
	*cph = round_money(money);
	total_hours = data[i+4] * 7.99;
	}
	
	*ave_cost = *cph / data[i+4];
	money = *ave_cost;
	*ave_cost = round_money(money);
	
	}
	
	double round_money(double money){
	
	money = money * 100;
	money = round(money);
	money = money / 100;
	
	return money;
	}

