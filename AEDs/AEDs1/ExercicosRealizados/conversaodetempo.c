#include <stdio.h>
int main(){
int ent, ts, tm, th;
scanf("%d", &ent);
th=ent/3600;
tm=(ent%3600)/60;
ts=(ent%3600)%60;
printf("%2.2d:%2.2d:%2.2d", th, tm, ts);

}
