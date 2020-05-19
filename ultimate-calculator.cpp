#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
    system("Color 0A");
    int glavni_odabir;
    int odabir_mat;
    int odabir_funk;

    char check;
    while(1)
    {
        system("cls");
        cout <<"================================================================"<< endl;
        cout <<"Dobrodosli u ultimate kalkulator! Odaberite vrstu kalkulatora"<< endl;
        cout <<"================================================================"<< endl;
        cout <<"Odabire broj 1 za matematicki kalkulator" << endl;
        cout <<"Odabire broj 2 za programerski kalkulator" << endl;
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
            cout <<"Odabire broj 1 za osnovne matematicke operacije" << endl;
            cout <<"Odabire broj 2 za geometriju" << endl;
            cout <<"Odabire broj 3 za trignonometriju" << endl;
            cout <<"Odabire broj 4 za jednadzbe" << endl;
            cout << "\n" << endl;
            cout << "Odabir: ";

            try
            {
                cin >> odabir_mat;
                if(odabir_mat !=1 && odabir_mat !=2 && odabir_mat !=3 && odabir_mat !=4)
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
                cout <<"Odabire broj 3 za izracun kuteva" << endl;
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


                        cout << "Ukoliko zelite ponovni izracun za kocku D , ukolike zelite izaci iz programa odaberite N: ";
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

                        cout << "Ukoliko zelite ponovni izracun za kocku D , ukolike zelite izaci iz programa odaberite N: ";
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

                        cout << "Ukoliko zelite ponovni izracun za kocku D , ukolike zelite izaci iz programa odaberite N: ";
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
                        double dijagonala = sqrt((a*a)+(b*b));
                        double radius_opisane = dijagonala / 2;

                        cout <<"================================================================"<< endl;
                        cout <<"Podatci: "<< endl;
                        cout <<"Opseg pravokutnika iznosi: " << opseg << " cm"<< endl;
                        cout <<"Povrsina pravokutnika iznosi: " << povrsina << " cm2"<< endl;
                        cout <<"Dijagonala pravokutnika iznosi: " << dijagonala << " cm"<< endl;
                        cout <<"Radius opisane kruznice pravokutnika iznosi: " << radius_opisane << " cm"<< endl;
                        cout <<"================================================================"<< endl;

                        cout << "Ukoliko zelite ponovni izracun za novi kvadar odaberite D , ukolike zelite izaci iz programa odaberite N: ";
                        cin >> check;
                        cout << "\n" << endl;
                    }while(check == 'd' || check == 'D');
                }


            }

        }

    }





return 0;
}
















