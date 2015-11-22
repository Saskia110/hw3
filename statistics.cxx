//
//  main.cpp
//  home3
//
//  Created by Saskia Funk on 22.11.15.
//  Copyright © 2015 Saskia Funk. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <ctime>

using namespace std;


void fillarray ( double* p, const int N);
void mevacalc ( double* p, double mean, double var, const int N);


int main (){
    srand(time(NULL)); // damit nicht immer die gleichen Zahlen kommen --> Programm läuft nicht, da er hier irgendeinen break point findet ?!
    const int N=100;
    double p[N];  // Array für die Zufallszahlen
    double mean, var;
    
    fillarray (p,N);
    mevacalc (p,mean,var,N);
    
    
    cout << "Mean = " << mean << endl;
    cout << "Variance = " << var << endl;
    
    
    return 0;
}

void fillarray(double* p, const int N) {// array befüllen mit den Zufallszahlen
    for(int i=0;i<N;i++){
        p[i] = (double) rand() / RAND_MAX; // Array von 0 bis 1; nicht in, sondern double wegen 0-1 ≠ ganze Zahlen, Klammern um double ergänzt, da er gemeckert hat...?
        
    }
}
    
void mevacalc (double* p, double mean, double var, const int N){ // mean and var werden mit Formeln berechnet
    for(int i=0; i<N-1; i++){
        mean=(p[i]/N);
        var= pow(p[i]-mean, 2)/N;
    }
    
   
}