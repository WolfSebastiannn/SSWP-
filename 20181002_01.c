#include <stdio.h>
 int main () {
     int zahla=19;
     int zahlb=30;
     printf("im Moment bin ich 19 Jahre alt");
     scanf("%3d",&zahla);
     
     printf("wie alt bin ich in 30 Jahre");
     scanf("%d",&zahlb);
     
     printf("in 30 Jahre bin ich %d\n", zahla + zahlb);
     return 0;
 }
