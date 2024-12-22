#include <stdio.h>
#include <stdlib.h>
int main(){

char Market_Name[50];
char Name[50];
int phone_number;
int customer_id;
int Market_Id;

int sugar;
int tea;
int coffee;

int pepsi;
int sprite;
int coke;

int total;
int grocery_total;
int berverage_total;


printf("================\n");
printf("BILLING SYSTEM\n");
printf("================\n");
printf("Customer Details\n\n");

printf("Market Name:");
scanf("%s", &Market_Name);
printf("Market number:");
scanf("%d", &phone_number);
printf("Market Id:");
scanf("%d", &Market_Id);

printf("================\n");

printf("BILL TO: ");
printf("Customer Name:");
scanf("%s", &Name);
printf("Customer number:");
scanf("%d", &phone_number);
printf("Customer Id:");
scanf("%d", &customer_id);

printf("=========================\n");


printf("GROCERIES\n\n");
printf("Suger ( Rs 100 ) : ");
scanf("%d", &sugar);
printf("Tea ( Rs 15 ) : ");
scanf("%d", &tea);
printf("Coffee ( Rs 50 ) : ");
scanf("%d", &coffee);

printf("================\n");

printf("BEVERAGES\nn");

printf("Pepsi ( Rs 30 ) : ");
scanf("%d", &pepsi);
printf("Sprite ( Rs 35 ) : ");
scanf("%d", &sprite);
printf("Coke ( Rs 30 ) : ");
scanf("%d", &coke);

printf("================\n");

int s;
int t;
int c;

s = 100 * sugar;
t = 15 * tea;
c = 50 * coffee;

grocery_total = s+t+c;
printf("Suger :");
printf("%d RS\n",s);
printf("Tea :");
printf("%d RS\n",t);
printf("Coffee :");
printf("%d RS\n",c);

printf("Total grocery price :");
printf("%d RS\n",grocery_total);

printf("================\n");
int pep;
int spr;
int cok;

pep = 30 * pepsi;
spr = 35 * sprite;
cok = 30 * coke;

berverage_total = pep + spr + cok ;

printf("pepsi :");
printf("%d RS\n", pep);
printf("sprite :");
printf("%d RS\n", spr);
printf("coke :");
printf("%d RS\n", cok);

printf("berverage price:");
printf("%d RS\n", berverage_total);

printf("================\n");
 
total = grocery_total +berverage_total;
printf("Total Amount :");
printf("%dRS\n", total);

printf("================\n");

printf("===========================================================================\n\t\t\t");

printf("ARMADA SUPER MARKET\n\n");

printf("Customer  name : ");
printf("%s\n", Name);
printf("Customer phone_number : ");
printf("%d\n", phone_number);
printf("Customer id : ");
printf("%d\n", customer_id);
printf("Product Name                               Quantinty                              Price\n\n");
printf("suger                                         %d                                  %d\n", sugar,s);
printf("Tea                                           %d                                  %d\n", tea,t);
printf("coffee                                        %d                                  %d\n", coffee,c);
printf("Pepsi                                         %d                                  %d\n", pepsi,pep);
printf("Sprite                                        %d                                  %d\n", sprite,spr);
printf("coke                                          %d                                  %d\n", coke,cok);

printf("Groceey Total Price : %d\n\n", grocery_total);
printf("Berverage Total price : %d\n\n",berverage_total);
printf("Total Price : %d\n\n", total);

printf("==========================================================================\n\t\t\t");
printf("THANKS COMMING MY MARKET!!!");
return 0;
}










