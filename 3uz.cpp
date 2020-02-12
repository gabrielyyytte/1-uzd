#include <iostream>

using namespace std;
struct eile
{
    string vardas, eile1="*", eile2="*", eile3="*", eile;
};

int main()
{
    int vnt;
    eile A;
    std::cout<<"Koks jusu vardas ?"<<std::endl;
    std::cin>>A.vardas;
    std::cout<<"Nurodykite remelio ploti (eiluciu skaiciu) ?"<<std::endl;
    std::cin>>vnt;
    if(vnt<3)
    {
         vnt=3;
         std::cout<<"Lentelei sudaryti reikia bent 3 eiluciu, todel parinkome maziausius galimus matmenis"<<std::endl;
    }
    if (*A.vardas.rbegin()=='s')
        A.eile=" Sveikas, ";
    else
        A.eile=" Sveika, ";
    A.eile3+=A.eile+A.vardas+"! *\n";
    int n=A.eile3.length();
    for (int i=1; i<n-2; i++, A.eile1=A.eile1+"*", A.eile2=A.eile2+" ");
    A.eile1=A.eile1+"*\n";
    A.eile2=A.eile2+"*\n";
    vnt-=3;
    std::cout<<A.eile1;
    for(int i=1; i<vnt/2+1; i++)
        std::cout<<A.eile2;
    std::cout<<A.eile3;
    for(int i=0; i<(vnt-(vnt/2)); i++)
        std::cout<<A.eile2;
    std::cout<<A.eile1;
}

