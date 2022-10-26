/* Program of polynomial addition and multiplication using linked list */

/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pb push_back
#define eb emplace_back
#define pi 3.14159265358979323846
#define MOD 1000000007
#define unbuffer cin.clear(); cin.sync();
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
using namespace std;
//using namespace boost::multiprecision;

struct node
{
  float coef;
  int expo;
  struct node *link;
};

struct node *create(struct node *);
struct node *insert_s(struct node *, float, int);
struct node *insert(struct node *, float, int);
void display(struct node *ptr);
void poly_add(struct node *, struct node *);
void poly_mult(struct node *, struct node *);

int main()
{
  //ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);

   struct node *start1=NULL, *start2=NULL;
   cout<<"Enter polynomial 1 :\n";
   start1=create(start1);
   cout<<"Enter polynomial 2 :\n";
   start2=create(start2);

   /*---------X------------X-----------X-----------X----------X----------X--------X---------*/

   printf("Polynomial 1 is : ");
   display(start1);
   cout<<"Polynomial 2 is : ";
   display(start2);

   poly_add(start1,start2);
   poly_mult(start1,start2);

   return 0;
}

struct node *create( struct node *start)
{
  int n,ex;
  float co;
  cout<<"Enter the number of terms ";
  cin>>n;
  foi(n)
  {
    cout<<"Enter the coefficient for the term : "<<i+1<<' ';
    cin>>co;
    cout<<"Enter exponent for term : "<<i+1<<' ';
    cin>>ex;
    start=insert_s(start,co,ex);
  }
  return start;
}

/*---------X------------X-----------X-----------X----------X----------X--------X---------*/

struct node *insert_s(struct node *start,float co, int ex)
{
  struct node *ptr, *tmp;
  tmp=(struct node *)malloc(sizeof(struct node));
  tmp->coef=co;
  tmp->expo=ex;
  //list empty or expo greater than the first one
  if(start==NULL || ex>start->expo)
  {
    tmp->link=start;
    start=tmp;
  }
  else
  {
    ptr=start;
    while(ptr->link!=NULL && ptr->link->expo>=ex)
      ptr=ptr->link;
    tmp->link=ptr->link;
    ptr->link=tmp;
  }
  return start;
}

/*---------X------------X-----------X-----------X----------X----------X--------X---------*/

struct node *insert(struct node *start, float co, int ex)
{
  struct node *ptr,*tmp;
  tmp=(struct node *)malloc(sizeof(struct node));
  tmp->coef=co;
  tmp->expo=ex;
  //if list is empty
  if(start==NULL)
  {
    tmp->link=start;
    start=tmp;
  }
  else
  {
    ptr=start;
    while(ptr->link!=NULL)
      ptr=ptr->link;
    tmp->link=ptr->link;
    ptr->link=tmp;
  }
  return start;
}

/*---------X------------X-----------X-----------X----------X----------X--------X---------*/

void display(struct node *ptr)
{
  if(ptr==NULL)
    {
      cout<<"Zero polynomial\n";
      return;
    }
    while(ptr!=NULL)
    {
      cout<<setprecision(1)<<fixed<<ptr->coef<<'^'<<ptr->expo;
      ptr=ptr->link;
      if(ptr!=NULL)
        cout<<" + ";
      else
        cout<<"\n";
    }
}

/*---------X------------X-----------X-----------X----------X----------X--------X---------*/

void poly_add(struct node *p1,struct node *p2)
{
  struct node *start3;
  start3=NULL;
  while(p1!=NULL && p2!=NULL)
  {
    if(p1->expo>p2->expo)
    {
      start3=insert(start3,p2->coef,p2->expo);
      p1=p1->link;
    }
    else if(p2->expo>p1->expo)
    {
      start3=insert(start3,p2->coef,p2->expo);
      p2=p2->link;
    }
    else if(p1->expo==p2->expo)
    {
      start3=insert(start3,p1->coef,p1->expo);
      p1=p1->link;
      p2=p2->link;
    }
  }
  //if poly2 has finished and elements left in poly 1
  while(p1!=NULL)
  {
    start3=insert(start3,p1->coef,p1->expo);
    p1=p1->link;
  }
  //if poly1 has finished and elements left in poly2
  while(p2!=NULL)
  {
    start3=insert(start3,p2->coef,p2->expo);
    p2=p2->link;
  }
  cout<<"Added polynomial is : "<<&start3;
}

/*---------X------------X-----------X-----------X----------X----------X--------X---------*/

void poly_mult(struct node *p1, struct node *p2)
{
  struct node *start3;
  struct node *p2_beg=p2;
  start3=NULL;
  if(p1==NULL&&p2==NULL)
  {
    cout<<"Multiplied polynomial is zero polynomial\n";
    return;
  }
  while(p1!=NULL)
  {
    p2=p2_beg;
    while(p2!=NULL)
    {
      start3=insert_s(start3,p1->coef*p2->coef,p1->expo+p2->expo);
      p2=p2->link;
    }
    p1=p1->link;
  }
  cout<<"Multiplied Polynomial is : ";
  display(start3);
}
