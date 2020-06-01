#include <iostream>
#include <string.h>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <cmath>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
    system("Color 0A");
    int glavni_odabir;
    int odabir_mat;
    int odabir_funk;
    int trokut;
    int trigonometry;
    int odabir_jed;
    int convert_ns;
    int convert_mj;

    char check;
    int pass;
    int lozinka = 1214;



    while(1)
    {
        system("cls");
        cout <<"================================================================"<< endl;
        cout <<"Login Verification!"<< endl;
        cout <<"================================================================"<< endl;
        cout <<"Unesite lozinku :" << endl;

        ofstream datoteka;
        datoteka.open("password.txt");
        datoteka << lozinka << endl;
        datoteka.close();

        try
        {
            cin >> pass;
            if(pass != lozinka)
                throw "Unijeli ste pogresan broj,molimo ponovite: ";
            break;
        }
        catch(const char* msg)
        {
            cout << msg << endl;
        }
    }
    if(pass == lozinka)
    {


        while(1)
        {
            system("cls");
            cout <<"================================================================"<< endl;
            cout <<"Dobrodosli u ultimate kalkulator! Odaberite vrstu kalkulatora"<< endl;
            cout <<"================================================================"<< endl;
            cout <<"Odaberite broj 1 za matematicki kalkulator" << endl;
            cout <<"Odaberite broj 2 za programerski kalkulator" << endl;
            cout << "\n" << endl;
            cout << "Odabir: ";


            try
            {
                cin >> glavni_odabir;
                if(glavni_odabir !=1 && glavni_odabir !=2)
                    throw "Unijeli ste pogresan broj,molimo ponovite: ";
                break;
            }
            catch(const char* msg)
            {
                cout << msg << endl;
            }
        }


        if(glavni_odabir==1) //glavna grana
        {
            while(1)
            {
                system("cls");
                cout <<"================================================================"<< endl;
                cout <<"Dobrodosli u matematicki dio"<< endl;
                cout <<"================================================================"<< endl;
                cout <<"Odaberite broj 1 za osnovne matematicke operacije" << endl;
                cout <<"Odaberite broj 2 za geometriju" << endl;
                cout <<"Odaberite broj 3 za trignonometriju" << endl;
                cout <<"Odaberite broj 4 za jednadzbe" << endl;
                cout <<"Odaberite broj 5 za pretvaranje mjernih jedinica" << endl;
                cout << "\n" << endl;
                cout << "Odabir: ";

                try
                {
                    cin >> odabir_mat;
                    if(odabir_mat !=1 && odabir_mat !=2 && odabir_mat !=3 && odabir_mat !=4 && odabir_mat !=5)
                        throw "Unijeli ste pogresan broj,molimo ponovite: ";
                    break;
                }
                catch(const char* msg)
                {
                    cout << msg << endl;
                }
            }
            if(odabir_mat==1) // podizbornik
            {
                while(1)
                {
                    system("cls");
                    cout <<"================================================================"<< endl;
                    cout <<"Odaberite matematicku operaciju"<< endl;
                    cout <<"================================================================"<< endl;
                    cout <<"Odabire broj 1 za zbrajanje" << endl;
                    cout <<"Odabire broj 2 za oduzimanje" << endl;
                    cout <<"Odabire broj 3 za mnozenje" << endl;
                    cout <<"Odabire broj 4 za dijeljenje" << endl;
                    cout << "\n" << endl;
                    cout << "Odabir: ";

                    try
                    {
                        cin >> odabir_funk;
                        if(odabir_mat !=1 && odabir_mat !=2 && odabir_mat !=3 && odabir_mat !=4)
                            throw "Unijeli ste pogresan broj,molimo ponovite: ";
                        break;
                    }
                    catch(const char* msg)
                    {
                        cout << msg << endl;
                    }
                }
                while(1)
                {
                    do
                    {
                        if(odabir_funk !=1 && odabir_funk !=2 && odabir_funk !=3 && odabir_funk !=4)
                        {
                            cout <<"Unijeli ste pogresan broj , molimo ponovite: ";
                            cin >> odabir_funk;
                        }
                    }while(odabir_funk ==1 && odabir_funk ==2 && odabir_funk ==3 && odabir_funk ==4);


                    if(odabir_funk==1)
                    {
                        do
                        {

                            int n;
                            double br;
                            double suma=0;
                            cout <<"Unesite broj brojeva koje zelite zbrojiti , a zatim ih redom unesite: ";
                            cin >> n;
                            for(int i=0;i<n;i++)
                            {
                                cin >> br;
                                suma=suma+br;
                            }
                            cout <<"================================================================"<< endl;
                            cout <<"Suma svih brojeva iznosi: "<< suma << endl;
                            cout <<"================================================================"<< endl;

                            cout << "Ukoliko zelite nastaviti zbrajati odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                            cin >> check;
                            cout << "\n" << endl;
                        }while(check == 'd' || check == 'D');


                    }
                    if(odabir_funk==2)
                    {
                        do
                        {

                            int n;
                            double pocetni;
                            double br;
                            double razlika=0;
                            double rez;
                            cout <<"Unesite početni broj: ";
                            cin >> pocetni;
                            cout <<"Unesite broj brojeva koje zelite oduzeti od pocetnog broja,a zatim ih redom unesite: ";
                            cin >> n;
                            for(int i=0;i<n;i++)
                            {
                                cin >> br;
                                razlika=razlika+br;
                                rez=pocetni-razlika;

                            }
                            cout <<"================================================================"<< endl;
                            cout <<"Razlika iznosi: "<< rez << endl;
                            cout <<"================================================================"<< endl;

                            cout << "Ukoliko zelite nastaviti oduzimati odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                            cin >> check;
                            cout << "\n" << endl;
                        }while(check == 'd' || check == 'D');
                    }
                    if(odabir_funk==3)
                    {
                        do
                        {

                            int n;
                            double br;
                            double umnozak = 1;
                            cout <<"Unesite broj brojeva koje zelite pomnoziti od pocetnog broja,a zatim ih redom unesite: ";
                            cin >> n;
                            for(int i=0;i<n;i++)
                            {
                                cin >> br;
                                umnozak=umnozak*br;
                            }
                            cout <<"================================================================"<< endl;
                            cout <<"Umnozak iznosi: "<< umnozak << endl;
                            cout <<"================================================================"<< endl;

                            cout << "Ukoliko zelite nastaviti mnoziti odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                            cin >> check;
                            cout << "\n" << endl;
                        }while(check == 'd' || check == 'D');
                    }
                    if(odabir_funk==4)
                    {
                        do
                        {
                            double br1,br2;
                            cout <<"Unesite prvi broj :";
                            cin >> br1;
                            cout <<"Unesite drugi broj :";
                            cin >> br2;
                            double kolicnik = br1/br2;

                            cout <<"================================================================"<< endl;
                            cout <<"Kolicnik iznosi: "<< kolicnik << endl;
                            cout <<"================================================================"<< endl;

                            cout << "Ukoliko zelite nastaviti dijeliti odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                            cin >> check;
                            cout << "\n" << endl;
                        }while(check == 'd' || check == 'D');
                    }



                }



            }
            if(odabir_mat==2) // podizbornik
            {

                int odabir_geometryfunk;
                int odabir_geometrybody;
                int odabir_geometryfigure;

                while(1)
                {
                    system("cls");
                    cout <<"================================================================"<< endl;
                    cout <<"Dobrodosli u geometrijski dio , odaberite jednu od ponudenih funkcija"<< endl;
                    cout <<"================================================================"<< endl;
                    cout <<"Odabire broj 1 za geometrijska tijela" << endl;
                    cout <<"Odabire broj 2 za geometrijske likove" << endl;
                    cout << "\n" << endl;
                    cout << "Odabir: ";

                    try
                    {
                        cin >> odabir_geometryfunk;
                        if(odabir_geometryfunk !=1 && odabir_geometryfunk !=2 && odabir_geometryfunk !=3)
                            throw "Unijeli ste pogresan broj,molimo ponovite: ";
                        break;
                    }
                    catch(const char* msg)
                    {
                        cout << msg << endl;
                    }
                }

                if(odabir_geometryfunk==1)
                {
                    while(1)
                    {
                        system("cls");
                        cout <<"================================================================"<< endl;
                        cout <<"Odaberite jednu od ponudenih opcija"<< endl;
                        cout <<"================================================================"<< endl;
                        cout <<"Odaberite broj 1 za kocku" << endl;
                        cout <<"Odaberite broj 2 za kvadar" << endl;
                        cout <<"Odaberite broj 3 za cetverostranu piramidu" << endl;
                        cout <<"Odaberite broj 4 za valjak" << endl;
                        cout <<"Odaberite broj 5 za kuglu" << endl;
                        cout << "\n" << endl;
                        cout << "Odabir: ";

                        try
                        {
                            cin >> odabir_geometrybody;
                            if(odabir_geometrybody !=1 && odabir_geometrybody !=2 && odabir_geometrybody !=3 && odabir_geometrybody !=4 && odabir_geometrybody !=5)
                                throw "Unijeli ste pogresan broj,molimo ponovite: ";
                            break;
                        }
                        catch(const char* msg)
                        {
                            cout << msg << endl;
                        }
                    }
                    if(odabir_geometrybody==1)
                    {
                        do
                        {
                            cout << "Unesite duljinu stranice a: ";
                            double a;
                            cin >> a;
                            double volumen = pow(a,3);
                            double oplosje =6*pow(a,2);
                            double plosna = a*sqrt(2);
                            double prostorna = a*sqrt(3);
                            double radius_upisane = a/2;
                            double radius_opisane = (sqrt(3)*a)/2;

                            cout <<"================================================================"<< endl;
                            cout <<"Podatci: "<< endl;
                            cout <<"Volumen kocke iznosi: " << volumen << " cm3"<< endl;
                            cout <<"Oplosje kocke iznosi: " << oplosje << " cm2"<< endl;
                            cout <<"Plosna dijagonala kocke iznosi: " << plosna << " cm" << endl;
                            cout <<"Prostorna dijagonala kocke iznosi: " << prostorna << " cm"<< endl;
                            cout <<"Radius upisane kruznice kocke iznosi: " << radius_upisane << " cm" << endl;
                            cout <<"Radius opisane kruznice kocke iznosi: " << radius_opisane << " cm" << endl;
                            cout <<"================================================================"<< endl;

                            cout << "Ukoliko zelite ponovni izracun za kocku D , ukolike zelite izaci iz programa odaberite N: ";
                            cin >> check;
                            cout << "\n" << endl;
                        }while(check == 'd' || check == 'D');
                    }
                    if(odabir_geometrybody==2)
                    {
                        do
                        {
                            double a;
                            double b;
                            double c;
                            cout << "Unesite duljinu stranice a: ";
                            cin >> a;
                            cout << "Unesite duljinu stranice b: ";
                            cin >> b;
                            cout << "Unesite duljinu stranice c: ";
                            cin >> c;
                            double volumen = a*b*c;
                            double oplosje =2*(a*b+b*c+a*c);
                            double prostorna = sqrt((a*a)+(b*b)+(c*c));

                            cout <<"================================================================"<< endl;
                            cout <<"Podatci: "<< endl;
                            cout <<"Volumen kvadra iznosi: " << volumen << " cm3"<< endl;
                            cout <<"Oplosje kvadra iznosi: " << oplosje << " cm2"<< endl;
                            cout <<"Prostorna dijagonala kvadra iznosi: " << prostorna << " cm"<< endl;
                            cout <<"================================================================"<< endl;

                            cout << "Ukoliko zelite ponovni izracun za novi kvadar odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                            cin >> check;
                            cout << "\n" << endl;
                        }while(check == 'd' || check == 'D');
                    }
                    if(odabir_geometrybody==3)
                    {
                        do
                        {
                            double a;
                            double b;
                            cout << "Unesite duljinu stranice a: ";
                            cin >> a;
                            cout << "Unesite duljinu stranice b: ";
                            cin >> b;
                            double s;
                            double B = pow(a,2);
                            s = sqrt((b*b)-pow(a/2,2));
                            double v;
                            v = sqrt((s*s)-(a/2*a/2));
                            double oplosje = B+4*((a*s)/2);
                            double volumen = (pow(a,2)*v)/3;

                            cout <<"Volumen cetverostrane piramide iznosi: " << volumen << " cm3"<< endl;
                            cout <<"Oplosje cetverostrane piramide iznosi: " << oplosje << " cm2"<< endl;


                            cout << "Ukoliko zelite ponovni izracun za cetverostranu piramidu D , ukolike zelite izaci iz programa odaberite N: ";
                            cin >> check;
                            cout << "\n" << endl;
                        }while(check == 'd' || check == 'D');
                    }
                    if(odabir_geometrybody == 4)
                    {
                        do
                        {
                            const double pi = 3.141592;
                            double r;
                            double v;
                            cout << "Unesite radius valjka: ";
                            cin >> r;
                            cout << "Unesite visinu valjka: ";
                            cin >> v;

                            double volumen = (r*r)*pi*v;
                            double oplosje = 2*r*pi*(r+v);

                            cout <<"================================================================"<< endl;
                            cout <<"Podatci: "<< endl;
                            cout <<"Volumen valjka iznosi: " << volumen << " cm3"<< endl;
                            cout <<"Oplosje valjka iznosi: " << oplosje << " cm2"<< endl;
                            cout <<"================================================================"<< endl;

                            cout << "Ukoliko zelite ponovni izracun za valjak D , ukolike zelite izaci iz programa odaberite N: ";
                            cin >> check;
                            cout << "\n" << endl;
                        }while(check == 'd' || check == 'D');
                    }
                    if(odabir_geometrybody == 5)
                    {
                        do
                        {
                            const double pi = 3.141592;
                            double r;
                            cout << "Unesite radius kugle: ";
                            cin >> r;

                            double volumen = (4/3)*pow(r,3)*pi;
                            double oplosje = 4*(r*r)*pi;

                            cout <<"================================================================"<< endl;
                            cout <<"Podatci: "<< endl;
                            cout <<"Volumen kugle iznosi: " << volumen << " cm3"<< endl;
                            cout <<"Oplosje kugle iznosi: " << oplosje << " cm2"<< endl;
                            cout <<"================================================================"<< endl;

                            cout << "Ukoliko zelite ponovni izracun za kuglu D , ukolike zelite izaci iz programa odaberite N: ";
                            cin >> check;
                            cout << "\n" << endl;
                        }while(check == 'd' || check == 'D');
                    }

                }
                if(odabir_geometryfunk == 2)
                {
                    while(1)
                    {


                        system("cls");
                        cout <<"================================================================"<< endl;
                        cout <<"Odaberite jednu od ponudenih opcija"<< endl;
                        cout <<"================================================================"<< endl;
                        cout <<"Odaberite broj 1 za kvadrat" << endl;
                        cout <<"Odaberite broj 2 za pravokutnik" << endl;
                        cout <<"Odaberite broj 3 za kruznicu" << endl;
                        cout <<"Odaberite broj 4 za trokut" << endl;
                        cout <<"Odaberite broj 5 za paralelogram" << endl;
                        cout <<"Odaberite broj 6 za romb" << endl;
                        cout << "\n" << endl;
                        cout << "Odabir: ";

                        try
                        {
                            cin >> odabir_geometryfigure;
                            if(odabir_geometryfigure !=1 && odabir_geometryfigure !=2 && odabir_geometryfigure!=3 && odabir_geometryfigure !=4 && odabir_geometryfigure !=5 && odabir_geometryfigure !=6)
                                throw "Unijeli ste pogresan broj,molimo ponovite: ";
                            break;
                        }
                        catch(const char* msg)
                        {
                            cout << msg << endl;
                        }
                    }
                    if(odabir_geometryfigure == 1)
                    {
                        do
                        {
                            double a;
                            cout << "Unesite duljinu stranice a: ";
                            cin >> a;

                            double opseg = 4*a;
                            double povrsina = a*a;
                            double dijagonala = a*sqrt(2);
                            double radius_upisane = a/2;
                            double radius_opisane = (a*sqrt(2))/2;

                            cout <<"================================================================"<< endl;
                            cout <<"Podatci: "<< endl;
                            cout <<"Opseg kvadrata iznosi: " << opseg << " cm"<< endl;
                            cout <<"Povrsina kvadrata iznosi: " << povrsina << " cm2"<< endl;
                            cout <<"Dijagonala kvadrata iznosi: " << dijagonala << " cm"<< endl;
                            cout <<"Radius upisane kruznice kvadrata iznosi: " << radius_upisane << " cm"<< endl;
                            cout <<"Radius opisane kruznice kvadrata iznosi: " << radius_opisane << " cm"<< endl;
                            cout <<"================================================================"<< endl;

                            cout << "Ukoliko zelite ponovni izracun za novi kvadar odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                            cin >> check;
                            cout << "\n" << endl;
                        }while(check == 'd' || check == 'D');
                    }
                    if(odabir_geometryfigure == 2)
                    {
                        do
                        {
                            double a,b;
                            cout << "Unesite duljinu stranice a: ";
                            cin >> a;
                            cout << "Unesite duljinu stranice b : ";
                            cin >> b;

                            double opseg = 2*(a+b);
                            double povrsina = a*b;
                            double dijagonala= sqrt((a*a)+(b*b));
                            double radius_opisane = dijagonala / 2;

                            cout <<"================================================================"<< endl;
                            cout <<"Podatci: "<< endl;
                            cout <<"Opseg pravokutnika iznosi: " << opseg << " cm"<< endl;
                            cout <<"Povrsina pravokutnika iznosi: " << povrsina << " cm2"<< endl;
                            cout <<"Dijagonala pravokutnika iznosi: " << dijagonala << " cm"<< endl;
                            cout <<"Radius opisane kruznice pravokutnika iznosi: " << radius_opisane << " cm"<< endl;
                            cout <<"================================================================"<< endl;

                            cout << "Ukoliko zelite ponovni izracun za novi pravokutnik odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                            cin >> check;
                            cout << "\n" << endl;
                        }while(check == 'd' || check == 'D');
                    }
                    if(odabir_geometryfigure == 3)
                    {
                        do
                        {
                            double r;
                            cout << "Unesite duljinu radiusa (polumjera) kruznice: ";
                            cin >> r;

                            const double pi = 3.141592;
                            double promjer = 2*r;
                            double opseg = 2*r*pi;
                            double povrsina = (r*r)*pi;


                            cout <<"================================================================"<< endl;
                            cout <<"Podatci: "<< endl;
                            cout <<"Promjer (dijametar) kruznice iznosi: " << promjer << " cm"<< endl;
                            cout <<"Opseg kruznice iznosi: " << opseg << " cm"<< endl;
                            cout <<"Povrsina kruznice iznosi: " << povrsina << " cm2"<< endl;
                            cout <<"================================================================"<< endl;

                            cout << "Ukoliko zelite ponovni izracun za novu kruznicu odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                            cin >> check;
                            cout << "\n" << endl;
                        }while(check == 'd' || check == 'D');
                    }
                    if(odabir_geometryfigure == 4)
                    {
                        while(1)
                        {


                            system("cls");
                            cout <<"================================================================"<< endl;
                            cout <<"Odaberite vrstu trokuta :"<< endl;
                            cout <<"================================================================"<< endl;
                            cout <<"Odaberite broj 1 za jednakostranican trokut" << endl;
                            cout <<"Odaberite broj 2 za jednakokracan trokut" << endl;
                            cout <<"Odaberite broj 3 za raznostranican trokut" << endl;

                            cout << "\n" << endl;
                            cout << "Odabir: ";

                            try
                            {
                                cin >> trokut;
                                if(trokut !=1 && trokut !=2 && trokut !=3 && trokut !=4)
                                    throw "Unijeli ste pogresan broj,molimo ponovite: ";
                                break;
                            }
                            catch(const char* msg)
                            {
                                cout << msg << endl;
                            }
                        }
                        if(trokut == 1)
                        {
                            do
                            {
                                double a;
                                cout << "Unesite stranicu trokuta : ";
                                cin >> a;
                                double opseg = 3*a;
                                double povrsina = (sqrt(3)/4)*(a*a);
                                double polumjer_upisane = (sqrt(3)/6)*a;
                                double polumjer_opisane = (sqrt(3)/3)*a;
                                double visina = (sqrt(3)/2)*a;

                                cout <<"================================================================"<< endl;
                                cout <<"Podatci: "<< endl;
                                cout <<"Opseg trokuta iznosi: " << opseg << " cm"<< endl;
                                cout <<"Povrsina povrsina iznosi: " << povrsina << " cm2"<< endl;
                                cout <<"Polumjer upisane kruznice trokuta iznosi: " << polumjer_upisane << " cm"<< endl;
                                cout <<"Polumjer opisane kruznice trokuta iznosi: " << polumjer_opisane << " cm"<< endl;
                                cout <<"Visina trokuta iznosi: " << visina << " cm"<< endl;

                                cout <<"================================================================"<< endl;

                                cout << "Ukoliko zelite ponovni izracun za novi trokut odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                                cin >> check;
                                cout << "\n" << endl;
                            }while(check == 'd' || check == 'D');

                        }
                        if(trokut == 2)
                        {
                            do
                            {
                                double a,b;
                                cout << "Unesite duljinu osnovice trokuta : ";
                                cin >> a;
                                cout << "Unesite duljinu kraka trokuta : ";
                                cin >> b;

                                double opseg = a+2*b;
                                double visina;
                                visina = sqrt((b*b)-(pow(a/2,2)));
                                double s = (a+b+b)/2;
                                double povrsina = sqrt(s*(s-a)*(s-b)*(s-b));

                                cout <<"================================================================"<< endl;
                                cout <<"Podatci: "<< endl;
                                cout <<"Opseg trokuta iznosi: " << opseg << " cm"<< endl;
                                cout <<"Povrsina povrsina iznosi: " << povrsina << " cm2"<< endl;
                                cout <<"Visina trokuta iznosi: "<< setprecision(3)  << visina << " cm"<< endl;

                                cout <<"================================================================"<< endl;

                                cout << "Ukoliko zelite ponovni izracun za novi trokut odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                                cin >> check;
                                cout << "\n" << endl;
                            }while(check == 'd' || check == 'D');
                        }
                        if(trokut == 3)
                        {
                            do
                            {
                                double a,b;
                                cout << "Unesite duljinu stranice a : ";
                                cin >> a;
                                cout << "Unesite duljinu stranice b : ";
                                cin >> b;

                                double c = sqrt((a*a)+(b*b));
                                double s = (a+b+c)/2;

                                double opseg = a+b+c;
                                double povrsina = sqrt(s*(s-a)*(s-b)*(s-b));

                                cout <<"================================================================"<< endl;
                                cout <<"Podatci: "<< endl;
                                cout <<"Hipotenuza trokuta iznosi: " << c << " cm"<< endl;
                                cout <<"Opseg trokuta iznosi: " << opseg << " cm"<< endl;
                                cout <<"Povrsina povrsina iznosi: " << povrsina << " cm2"<< endl;
                                cout <<"================================================================"<< endl;

                                cout << "Ukoliko zelite ponovni izracun za novi trokut odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                                cin >> check;
                                cout << "\n" << endl;
                            }while(check == 'd' || check == 'D');
                        }
                    }
                    if(odabir_geometryfigure == 5)
                    {
                        do
                        {
                            double a,b,kut;
                            cout << "Unesite duljinu stranice a : ";
                            cin >> a;
                            cout << "Unesite duljinu stranice b : ";
                            cin >> b;
                            cout << "Unesite kut izmedu 2 susjedne stranice : ";
                            cin >> kut;

                            double ha = b*sin(kut);

                            double opseg = 2*(a+b);
                            double povrsina = a*ha;

                            cout <<"================================================================"<< endl;
                            cout <<"Podatci: "<< endl;
                            cout <<"Visina na stranicu a iznosi: " << ha << " cm"<< endl;
                            cout <<"Opseg paralelograma iznosi: " << opseg << " cm"<< endl;
                            cout <<"Povrsina paralelograma iznosi: " << povrsina << " cm2"<< endl;
                            cout <<"================================================================"<< endl;

                            cout << "Ukoliko zelite ponovni izracun za novi paralelogram odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                            cin >> check;
                            cout << "\n" << endl;
                        }while(check == 'd' || check == 'D');
                    }
                    if(odabir_geometryfigure == 6)
                    {
                        do
                        {
                            double e,f;
                            cout << "Unesite duljinu dijagonale e: ";
                            cin >> e;
                            cout << "Unesite duljinu dijagonale f : ";
                            cin >> f;

                            double a = sqrt(pow(e/2,2)+pow(f/2,2));

                            double opseg = 4*a;
                            double povrsina = (e*f)/2;

                            cout <<"================================================================"<< endl;
                            cout <<"Podatci: "<< endl;
                            cout <<"Stranica a iznosi: " << a << " cm"<< endl;
                            cout <<"Opseg romba iznosi: " << opseg << " cm"<< endl;
                            cout <<"Povrsina romba iznosi: " << povrsina << " cm2"<< endl;
                            cout <<"================================================================"<< endl;

                            cout << "Ukoliko zelite ponovni izracun za novi romb odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                            cin >> check;
                            cout << "\n" << endl;
                        }while(check == 'd' || check == 'D');
                    }



                }

            }
            if(odabir_mat == 3)
            {
                while(1)
                {


                    system("cls");
                    cout <<"================================================================"<< endl;
                    cout <<"Odaberite jednu od ponudenih opcija :"<< endl;
                    cout <<"================================================================"<< endl;
                    cout <<"Odaberite broj 1 za sinus unesenog kuta" << endl;
                    cout <<"Odaberite broj 2 za kosinus unesenog kuta" << endl;
                    cout <<"Odaberite broj 3 za tangens unesenog kuta" << endl;
                    cout <<"Odaberite broj 4 za kotangens unesenog kuta" << endl;
                    cout << "\n" << endl;
                    cout << "Odabir: ";

                    try
                    {
                        cin >> trigonometry;
                        if(trigonometry !=1 && trigonometry!=2 && trigonometry !=3 && trigonometry !=4)
                            throw "Unijeli ste pogresan broj,molimo ponovite: ";
                        break;
                    }
                    catch(const char* msg)
                    {
                        cout << msg << endl;
                    }
                }
                if(trigonometry == 1)
                {
                    do
                    {
                        const double pi = 3.141592;
                        double n;
                        cout <<"Unesite sinus kuta: ";
                        cin >> n;

                        cout <<"================================================================"<< endl;
                        cout <<"Sinus unesenog kuta iznosi: "<< setprecision(5) << sin(n*pi/180) << endl;
                        cout <<"================================================================"<< endl;

                        cout << "Ukoliko zelite ponovni izracun za sinus odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                        cin >> check;
                        cout << "\n" << endl;
                    }while(check == 'd' || check == 'D');
                }
                if(trigonometry == 2)
                {
                    do
                    {
                        const double pi = 3.141592;
                        double n;
                        cout <<"Unesite kosinus kuta: ";
                        cin >> n;

                        cout <<"================================================================"<< endl;
                        cout <<"Sinus unesenog kuta iznosi: "<< setprecision(5) << cos(n*pi/180) << endl;
                        cout <<"================================================================"<< endl;

                        cout << "Ukoliko zelite ponovni izracun za kosinus odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                        cin >> check;
                        cout << "\n" << endl;
                    }while(check == 'd' || check == 'D');
                }
                if(trigonometry == 3)
                {
                    do
                    {
                        const double pi = 3.141592;
                        double n;
                        cout <<"Unesite tangens kuta: ";
                        cin >> n;

                        cout <<"================================================================"<< endl;
                        cout <<"Sinus unesenog kuta iznosi: "<< setprecision(5) << tan(n*pi/180) << endl;
                        cout <<"================================================================"<< endl;

                        cout << "Ukoliko zelite ponovni izracun za tangens odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                        cin >> check;
                        cout << "\n" << endl;
                    }while(check == 'd' || check == 'D');
                }
                if(trigonometry == 4)
                {
                    do
                    {
                        const double pi = 3.141592;
                        double n;
                        cout <<"Unesite kotangens kuta: ";
                        cin >> n;
                        n = tan(n*pi/180);

                        cout <<"================================================================"<< endl;
                        cout <<"Sinus unesenog kuta iznosi: "<< setprecision(5) << pow(n,-1) << endl;
                        cout <<"================================================================"<< endl;

                        cout << "Ukoliko zelite ponovni izracun za kotangens odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                        cin >> check;
                        cout << "\n" << endl;
                    }while(check == 'd' || check == 'D');
                }

            }
            if(odabir_mat == 4)
            {
                while(1)
                {


                    system("cls");
                    cout <<"================================================================"<< endl;
                    cout <<"Odaberite jednu od ponudenih opcija :"<< endl;
                    cout <<"================================================================"<< endl;
                    cout <<"Odaberite broj 1 za linearnu jednadzbu tipa ax+b = cx+d" << endl;
                    cout <<"Odaberite broj 2 za kvadratnu jednadzbu" << endl;
                    cout << "\n" << endl;
                    cout << "Odabir: ";

                    try
                    {
                        cin >> odabir_jed;
                        if(odabir_jed!=1 && odabir_jed!=2)
                            throw "Unijeli ste pogresan broj,molimo ponovite: ";
                        break;
                    }
                    catch(const char* msg)
                    {
                        cout << msg << endl;
                    }
                }
                if(odabir_jed == 1)
                {
                    do
                    {
                        float ax, b, cx, d, X;
                        cout<<"Unesite ax :";
                        cin>>ax;
                        cout<<"Unesite b :";
                        cin>>b;
                        cout<<"Unesite cx :";
                        cin>>cx;
                        cout<<"Unesite d:";
                        cin>>d;
                        cout<<"Odabrana jednadzba izgleda ovako : "<<ax<<"X + "<<b<<" = "<<cx<<"X + "<<d<<endl;

                        if(ax==cx && b==d)
                        {
                            cout <<"================================================================"<< endl;
                            cout<<"Beskonacno mnogo rjesenja"<<endl;
                            cout <<"================================================================"<< endl;
                        }
                        else if(ax==cx)
                        {
                            cout <<"================================================================"<< endl;
                            cout<<"Nevazeca jednadzba"<<endl;
                            cout <<"================================================================"<< endl;
                        }
                        else {
                            X = (d-b)/(ax-cx);
                            cout <<"================================================================"<< endl;
                            cout<<"X iznosi = "<< X <<endl;
                            cout <<"================================================================"<< endl;


                            cout << "Ukoliko zelite ponovni izracun za kotangens odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                            cin >> check;
                            cout << "\n" << endl;

                            ofstream datoteka;
                            datoteka.open("jednadzba.txt");
                            datoteka << X << endl;
                            datoteka.close();



                            ofstream out("oktalniconver.txt" , ios::binary);

                            out.write((char*)&X,sizeof(X));
                            out.close();

                            ifstream in("oktalniconvert.txt",ios::binary);
                            in.read((char*)&X,sizeof(X));
                        }
                        cout << "Ukoliko zelite ponovni izracun za kotangens odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                        cin >> check;
                        cout << "\n" << endl;
                    }while(check == 'd' || check == 'D');
                }
                if(odabir_jed == 2)
                {
                    float a, b, c, x1, x2, D , RealniDio, Imaginarni_Dio;
                    cout <<"Unesite a: ";
                    cin >> a;
                    cout <<"Unesite b: ";
                    cin >> b;
                    cout <<"Unesite c: ";
                    cin >> c;
                    D = b*b - 4*a*c;

                    if (D > 0) {
                        x1 = (-b + sqrt(D)) / (2*a);
                        x2 = (-b - sqrt(D)) / (2*a);
                        cout <<"================================================================"<< endl;
                        cout << "Rjesenja su realna i razlicita." << endl;
                        cout << "x1 = " << x1 << endl;
                        cout << "x2 = " << x2 << endl;
                        cout <<"================================================================"<< endl;
                    }

                    else if (D == 0) {
                        cout <<"================================================================"<< endl;
                        cout << "Rjesenja su realna i jednaka." << endl;
                        x1 = (-b + sqrt(D)) / (2*a);
                        cout << "x1 = x2 =" << x1 << endl;
                        cout <<"================================================================"<< endl;
                    }

                    else {
                        RealniDio = -b/(2*a);
                        Imaginarni_Dio =sqrt(-D)/(2*a);
                        cout <<"================================================================"<< endl;
                        cout << "Rjesenja su kompleksna i razlicita."  << endl;
                        cout << "x1 = " << RealniDio << "+" << Imaginarni_Dio << "i" << endl;
                        cout << "x2 = " << RealniDio << "-" << Imaginarni_Dio << "i" << endl;
                        cout <<"================================================================"<< endl;

                        cout << "Ukoliko zelite ponovni izracun za novi trokut odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                        cin >> check;
                        cout << "\n" << endl;
                    }while(check == 'd' || check == 'D');
                }
            }
            if(odabir_mat == 5)
            {
                while(1)
                {
                    system("cls");
                    cout <<"================================================================"<< endl;
                    cout <<"Odaberite jednu od ponudenih opcija"<< endl;
                    cout <<"================================================================"<< endl;
                    cout <<"Odabire broj 1 za pretvaranje milimetara u centimetre" << endl;
                    cout <<"Odabire broj 2 za pretvaranje kilometara u metre" << endl;
                    cout <<"Odabire broj 3 za pretvaranje centimetara u decimetre" << endl;
                    cout <<"Odabire broj 4 za pretvaranje mililitara u litre " << endl;
                    cout <<"Odabire broj 5 za pretvaranje metara kubnih u litre " << endl;


                    cout << "\n" << endl;
                    cout << "Odabir: ";

                    try
                    {
                        cin >> convert_mj;
                        if(convert_mj !=1 && convert_mj !=2 && convert_mj !=3 && convert_mj !=4 && convert_mj !=5)
                            throw "Unijeli ste pogresan broj,molimo ponovite: ";
                        break;
                    }
                    catch(const char* msg)
                    {
                        cout << msg << endl;
                    }
                }
                if(convert_mj == 1)
                {
                    do
                    {
                        double milimetri;
                        cout << "Unesite milimetre: ";
                        cin >> milimetri;
                        double centimetri = milimetri/10;

                        cout << milimetri << " mm" << " je jednako " << centimetri << " cm" << endl;
                        cout << "Ukoliko zelite ponovni izracun odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                        cin >> check;
                        cout << "\n" << endl;
                    }while(check == 'd' || check == 'D');
                }
                if(convert_mj == 2)
                {
                    do
                    {
                        double kilometri;
                        cout << "Unesite kilometre: ";
                        cin >> kilometri;
                        double metri = kilometri*1000;

                        cout << kilometri << " km" << " je jednako " << metri << " m" << endl;
                        cout << "Ukoliko zelite ponovni izracun odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                        cin >> check;
                        cout << "\n" << endl;
                    }while(check == 'd' || check == 'D');
                }
                if(convert_mj == 3)
                {
                    do
                    {
                        double centimetri;
                        cout << "Unesite centimetre: ";
                        cin >> centimetri;
                        double decimetri = centimetri/10;

                        cout << centimetri << " cm" << " je jednako " << decimetri << " dm" << endl;
                        cout << "Ukoliko zelite ponovni izracun odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                        cin >> check;
                        cout << "\n" << endl;
                    }while(check == 'd' || check == 'D');
                }
                if(convert_mj == 4)
                {
                    do
                    {
                        double mililitre;
                        cout << "Unesite mililitre: ";
                        cin >> mililitre;
                        double litre = mililitre/1000;

                        cout << mililitre << " mL" << " je jednako " << litre << " L" << endl;
                        cout << "Ukoliko zelite ponovni izracun odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                        cin >> check;
                        cout << "\n" << endl;
                    }while(check == 'd' || check == 'D');
                }
                if(convert_mj == 5)
                {
                    do
                    {
                        double m3;
                        cout << "Unesite centimetre kubicne: ";
                        cin >> m3;
                        double litre = m3*1000;

                        cout << m3 << " m3" << " je jednako " << litre << " L" << endl;
                        cout << "Ukoliko zelite ponovni izracun odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                        cin >> check;
                        cout << "\n" << endl;
                    }while(check == 'd' || check == 'D');
                }
            }
        }
        if(glavni_odabir == 2)
        {
            while(1)
            {
                system("cls");
                cout <<"================================================================"<< endl;
                cout <<"Dobrodosli u programerski dio"<< endl;
                cout <<"================================================================"<< endl;
                cout <<"Odabire broj 1 za racunanje dijeljenog ostatka (MOD) " << endl;
                cout <<"Odabire broj 2 za pretvaranje iz binarnog u dekadski brojevni sustav" << endl;
                cout <<"Odabire broj 3 za pretvaranje iz dekadskog u oktalni brojevni sustav" << endl;
                cout <<"Odabire broj 4 za pretvaranje iz heksadekadskog u binarni brojevni sustav" << endl;

                cout << "\n" << endl;
                cout << "Odabir: ";

                try
                {
                    cin >> convert_ns;
                    if(convert_ns !=1 && convert_ns !=2 && convert_ns !=3 && convert_ns !=4 && convert_ns !=5)
                        throw "Unijeli ste pogresan broj,molimo ponovite: ";
                    break;
                }
                catch(const char* msg)
                {
                    cout << msg << endl;
                }
            }
            if(convert_ns == 1)
            {
                cout << "Unesite broj :";
                int broj;
                cin >> broj;
                broj = broj % 2;
                {
                    cout <<"Ostatak je: " << broj << endl;
                }
            }
            if(convert_ns == 2)
            {
                do
                {
                    long int binarni, oktalni = 0, j = 1, temp;
                    cout<<"Unesite binarni broj: ";
                    cin>>binarni;
                    while (binarni != 0)
                    {
                        temp = binarni % 10;
                        oktalni = oktalni + temp * j;
                        j = j * 2;
                        binarni = binarni / 10;
                    }
                    cout <<"================================================================"<< endl;
                    cout<<"Oktalni broj: " <<oktalni;
                    cout <<"================================================================"<< endl;
                    getch();

                    ofstream datoteka;
                    datoteka.open("convert.txt");
                    datoteka << oktalni << endl;
                    datoteka.close();

                    ofstream out("convert.txt" , ios::binary);

                    out.write((char*)&oktalni,sizeof(oktalni));
                    out.close();

                    ifstream in("convert.txt",ios::binary);
                    in.read((char*)&oktalni,sizeof(oktalni));

                    cout << "Ukoliko zelite ponovni izracun za novi trokut odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                    cin >> check;
                    cout << "\n" << endl;
                }while(check == 'd' || check == 'D');
            }
            if(convert_ns == 3)
            {
                do
                {

                    int dekadski;
                    cout <<"Unesite dekadski broj: ";
                    cin >> dekadski;
                    int oktalni = 0, mjesto = 1;
                    while (dekadski != 0)
                    {
                        oktalni += (dekadski % 8) * mjesto;
                        dekadski /= 8;
                        mjesto *= 10;
                    }

                    cout <<"================================================================"<< endl;
                    cout<<"Oktalni zapis: "<< oktalni <<endl;
                    cout <<"================================================================"<< endl;

                    cout << "Ukoliko zelite ponovni izracun odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                    cin >> check;
                    cout << "\n" << endl;

                    ofstream datoteka;
                    datoteka.open("oktalniconvert.txt");
                    datoteka << oktalni << endl;
                    datoteka.close();



                    ofstream out("oktalniconver.txt" , ios::binary);

                    out.write((char*)&oktalni,sizeof(oktalni));
                    out.close();

                    ifstream in("oktalniconvert.txt",ios::binary);
                    in.read((char*)&oktalni,sizeof(oktalni));

                }while(check == 'd' || check == 'D');


            }
            if(convert_ns == 4)
            {
                do
                {
                    long int i=0;
                    char hex[100];
                    cout<<"Unesite heksadekadski broj : ";
                    cin>>hex;
                    cout<<"Binarni zapis: ";
                    while(hex[i])
                    {
                        switch(hex[i])
                        {
                        case '0' : cout<<"0000";
                            break;
                        case '1' : cout<<"0001";
                            break;
                        case '2' : cout<<"0010";
                            break;
                        case '3' : cout<<"0011";
                            break;
                        case '4' : cout<<"0100";
                            break;
                        case '5' : cout<<"0101";
                            break;
                        case '6' : cout<<"0110";
                            break;
                        case '7' : cout<<"0111";
                            break;
                        case '8' : cout<<"1000";
                            break;
                        case '9' : cout<<"1001";
                            break;
                        case 'A' : cout<<"1010";
                            break;
                        case 'B' : cout<<"1011";
                            break;
                        case 'C' : cout<<"1100";
                            break;
                        case 'D' : cout<<"1101";
                            break;
                        case 'E' : cout<<"1110";
                            break;
                        case 'F' : cout<<"1111";
                            break;
                        case 'a' : cout<<"1010";
                            break;
                        case 'b' : cout<<"1011";
                            break;
                        case 'c' : cout<<"1100";
                            break;
                        case 'd' : cout<<"1101";
                            break;
                        case 'e' : cout<<"1110";
                            break;
                        case 'f' : cout<<"1111";
                            break;
                        default : cout<<"Pogresna znamenka. ";
                        }
                        i++;
                    }

                    getch();

                    cout << "\n" << endl;
                    cout << "Ukoliko zelite ponovni izracun odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                    cin >> check;
                    cout << "\n" << endl;
                }while(check == 'd' || check == 'D');
            }
        }
    }


    return 0;
}














