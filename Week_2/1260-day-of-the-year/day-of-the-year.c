bool leap(int year){
    return (year%400==0)||(year%4==0&&year%100!=0);
}

int dayOfYear(char* date) {

    int year,month,day;

    sscanf(date,"%d-%d-%d",&year,&month,&day);

    int monthDay[12]={
        31,28,31,30,31,30,
        31,31,30,31,30,31
    };

    int ans=0;

    for(int i=1;i<month;i++){

        if(i==2 && leap(year))
            ans+=29;
        else
            ans+=monthDay[i-1];
    }

    ans+=day;

    return ans;
}