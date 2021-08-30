/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
using namespace std;
struct books
{
  char book_title[50];
  int book_price,number_of_pages;
}b1[10];
int push(books &n)
{
  scanf("%s",&n.book_title);
  scanf("%d",&n.book_price);
  scanf("%d",&n.number_of_pages);
  return 0;
}
int traverse(books &n)
{
  printf("Title of the book is = %s\n",n.book_title);
  printf("Price of the book is = %d\n",n.book_price);
  printf("Number of pages in the book are %d\n",n.number_of_pages);
  printf("-------X------X---------X---------X-------X-------\n");
  return 0;
}
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   foi(4)
   {
     printf("Enter the detail of book with S.No. %d\n",i+1);
     push(b1[i]);
   }

   foi(4)
   {
     traverse(b1[i]);
   }

 }
