#include <iostream>
#include<stdlib.h>
using namespace std;

struct term
{
    int coeff;
    int expo;
};
struct Poly
{
    int n;
    struct term *terms;
};

void create(struct Poly *p)
{
    cout << "Enter the number of terms" << endl;
    cin >> p->n;
    
    cout << "Enter the coefficient and exponent: " << endl;
    p->terms = new term[p->n];
    for(int i=0; i < p->n; i++)
    {
        cin>> p->terms[i].coeff >> p->terms[i].expo;
    }
}

void display(struct Poly p)
{
    int x;
    for(int i=0; i < p.n; i++)
    {
        cout << p.terms[i].coeff << "*" << p.terms[i].expo << "+";
    }
    cout << endl;
}

struct Poly* add(struct Poly *p1, struct Poly *p2)
{
    int i=0, j=0, k=0;
    struct Poly *p3;
    
    p3 = (struct Poly*)malloc(sizeof(struct Poly));
    //p3 = new Poly();
    
    p3->terms = new term();
    //p3->terms = (struct term*)malloc(p1->n+p2->n*sizeof(struct term));
    
    while(i < p1->n && j < p2->n)
    {
        if(p1->terms[i].expo > p2->terms[j].expo)
        {
            p3->terms[k++] = p1->terms[i++];
        }
        else if(p1->terms[i].expo < p2->terms[j].expo)
        {
            p3->terms[k++] = p2->terms[j++];
        }
        else
        {
            p3->terms[k].expo = p1->terms[i].expo;
            p3->terms[k++].coeff = p1->terms[i++].coeff + p2->terms[j++].coeff;
        }
    }
    for(; i < p1->n; i++)
    {
        p3->terms[k++] = p1->terms[i];
    }
    for(; j < p2->n; j++)
    {
        p3->terms[k++] = p2->terms[j];
    }
    p3->n = k;
    
    return p3;
    
}

int main(int argc, const char * argv[]) {
    struct Poly p, p1, *p2;
    create(&p);
    create(&p1);
    p2 = add(&p, &p1);
    display(p);
    display(p1);
    display(*p2);
    
    return 0;
}
