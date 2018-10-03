#include <stdio.h>
 int main () {
     int zahla;
     int zahlb;
     printf("erste Zahl: ");
     scanf("%d",&zahla);
     
     printf("zweite Zahl: ");
     scanf("%d",&zahlb);
     
     if(zahla<zahlb) {
         printf("Die groessere Zahl ist: %d\n", zahlb);
     }
     else {
         printf("Die groessere Zahl ist: %d\n", zahla);
     }
     return 0;
 }
