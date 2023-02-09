#define MY_TST_MAC

#ifndef MY_TST_MAC

#include "podmornicegui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PodmorniceGUI w;
    w.show();

    return a.exec();
}

#else
#include<iostream>
#include "kreniigru.h"

void postaviTablu(int matrica[][10]){
    for (int vrsta=0;vrsta<10;vrsta++)
        for(int kolona=0;kolona<10;kolona++)
            matrica[vrsta][kolona]=0;

}

int main(int argc,char *argv[]){
	
	//pravim moj main gde se nece koristiti Qt biblioteke u cilju ispitivanja izvornog koda Valgrindom
	
    int matrica[10][10];
    int potopljenePodmornice=0;
    QVector<Podmornica> listaPodmornica;
    int pokusaji=0;
	

    postaviTablu(matrica);
    listaPodmornica.clear();
    postaviPodmornicu(matrica,1,Br1p,listaPodmornica);
    postaviPodmornicu(matrica,2,Br2p,listaPodmornica);
    postaviPodmornicu(matrica,3,Br3p,listaPodmornica);
    postaviPodmornicu(matrica,4,Br4p,listaPodmornica);
    postaviPodmornicu(matrica,5,Br5p,listaPodmornica);
    potopljenePodmornice=0;
    pokusaji=0;

    //saljemo vrstu i kolonu gde mislimo da je podmornica

    int rez=0;

    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++){
            rez=igraj(i,j,matrica,&pokusaji,&potopljenePodmornice,listaPodmornica);
            if(rez==1 || rez==-1)
                break;

        }
    return 0;
}


#endif
