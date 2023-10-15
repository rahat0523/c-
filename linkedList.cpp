#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
struct node
{
    int data;
    struct node *link;
};
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   struct node *head= malloc(sizeof(struct node));
   struct  * current=malloc(sizeof(struct node));
   current-> data=45;
   current-> link=NULL;
   printf("%d",head->data);
}