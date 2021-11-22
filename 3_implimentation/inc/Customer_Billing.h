/** 
* @file customer_billing.h
* 
*
*/
#ifndef_billing_H
#define_billing_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float amount(float rate, int quantity, float discount, float vat);
int j, quantity, cash, w = 0;
long cash_received, newt_amount;
float rate, discount, vat, t_amount=0, amount1, float_part;
char itemcode[5], date[20];

#endif
