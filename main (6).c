#include <stdio.h>

int main() {
    int eng,hindi,maths,sst,sci;
    printf("User input \n");
    printf("input value of eng ");
    scanf("%d", & eng);
    printf("eng=%d", eng);
    printf("User input \n");

    printf("input value of hindi ");
    scanf("%d", & hindi);
    printf("eng=%d", hindi);
    printf("User input \n");

    printf("input value of maths");
    scanf("%d", & maths);
    printf("eng=%d", maths);
    printf("User input \n");

    printf("input value of sst");
    scanf("%d", & sst);
    printf("eng=%d", sst);
    printf("User input \n");

    printf("input value of sci ");
    scanf("%d", & sci);
    printf("eng=%d", sci);
    printf("Aggregate marks=%d", eng+hindi+maths+sst+sci);



    return 0;
}
