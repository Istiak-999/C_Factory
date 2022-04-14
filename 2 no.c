#include <stdio.h>
int main()
{
    float m=800,o=2500,g=200;//m=mask,o=oximeter,g=gift
    float c=((800*4)+2500);//cost
    float d=c-(c*.15);//d=discount
    float vat=d+(d*0.1);
    float p=vat;//p=payment
    printf("purchase%.2f\n",c);
    printf("discount%.2f\n",c*.15);
    printf("gift%.2f\n",g);
    printf("to give%.2f\n",vat);

    return 0;
}
