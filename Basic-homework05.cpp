/* �p������׹��-�򥻽m�ߧ@�~-�@�~5*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/03/08 10:00*/  
#include <stdio.h> //��ܮw
#include <stdlib.h> //��ܮw
int main(void)
{
   int hour1,mim1,sec1,hour2,mim2,sec2,finhour,finmim,finsec,time; //�w�q�ܼ� 
    printf("�п�J�_�l�ɶ��G");
    scanf("%d:%d:%d", &hour1, &mim1, &sec1); //��J�_�l�ɶ� 
    printf("�п�J�����ɶ��G");
    scanf("%d:%d:%d", &hour2, &mim2, &sec2); //��J�����ɶ�  
    finhour = hour1-hour2; //�۴� 
    finmim  = mim1-mim2;   //�۴� 
    finsec  = sec1-sec2;   //�۴� 
	finhour = abs(finhour); //������� 
    finmim = abs(finmim);   //�������
    finsec = abs(finsec);  //�������
    time = finhour * 3600 + finmim * 60 + finsec; //�ۥ[���ഫ��� 
    printf("\n��Ӯɶ����j��Ƭ�: %d\n", time); //��� 
    system("pause"); //�Ȱ����� 
    return 0; //�^�ǭȬ�0  
}
