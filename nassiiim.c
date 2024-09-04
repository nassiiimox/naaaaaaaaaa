#include <stdio.h>
#include <stdlib.h>

int main(){
int t[100];
int i,s,b,n;
printf("entrer le saize de tableua");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("entrer le nombre  ");
scanf("%d",&t[i]);

}
s=0;

for(i=0;i<n;i++){
        s=s+t[i];

}
 printf("%d  ",s);













   return 0 ;
}
