#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v1;
	vector<int> v2;
	vector<int>::iterator it;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v2.push_back(6);
	v2.push_back(7);
	v2.push_back(8);
	v2.push_back(9);
	v2.push_back(10);
	/*it=v1.begin();       // print first element 
	cout<<*it<<endl;
	it=v1.end()-1;         // print last element
	cout<<*it;*/
    
   /* cout<<v1.size()<<endl;    // sizes of vector
    cout<<v1.max_size()<<endl;
    cout<<v1.capacity();*/

   // cout<<v1.empty();     // checks wheater vector is empty
   
   /*v1.assign(5,10);       // assignig the values of vector
   for(int i=0;i<5;i++)
   cout<<v1[i]<<endl;*/
   
   /*v1.pop_back();           //deletes the element from the back
   v1.pop_back();
   for(int i=0;i<v1.size();i++)
   cout<<v1[i]<<endl;*/
   
  /* v1.insert(v1.begin()+2,5);    //insert element at specified position
   for(int i=0;i<v1.size();i++)
   cout<<v1[i]<<endl;*/
   
   /*v1.erase(v1.begin());        //erase specific element
   for(int i=0;i<v1.size();i++)
   cout<<v1[i]<<endl;*/
   
   /*v1.swap(v2);             //swap 2 vectors
   for(int i=0;i<v1.size();i++)
   cout<<v1[i]<<endl;*/
   
   /*v1.clear();            //delete all the elements
   for(int i=0;i<v1.size();i++)
   cout<<v1[i]<<endl;*/
   
   return 0;
   
}
