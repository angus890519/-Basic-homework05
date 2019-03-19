/* 計算機概論實務-基本練習作業-作業5*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/03/08 10:00*/  
#include <stdio.h> //函示庫
#include <stdlib.h> //函示庫
int main(void)
{
   int hour1,mim1,sec1,hour2,mim2,sec2,finhour,finmim,finsec,time; //定義變數 
    printf("請輸入起始時間：");
    scanf("%d:%d:%d", &hour1, &mim1, &sec1); //輸入起始時間 
    printf("請輸入結束時間：");
    scanf("%d:%d:%d", &hour2, &mim2, &sec2); //輸入結束時間  
    finhour = hour1-hour2; //相減 
    finmim  = mim1-mim2;   //相減 
    finsec  = sec1-sec2;   //相減 
	finhour = abs(finhour); //取絕對值 
    finmim = abs(finmim);   //取絕對值
    finsec = abs(finsec);  //取絕對值
    time = finhour * 3600 + finmim * 60 + finsec; //相加及轉換秒數 
    printf("\n兩個時間間隔秒數為: %d\n", time); //顯示 
    system("pause"); //暫停視窗 
    return 0; //回傳值為0  
}
