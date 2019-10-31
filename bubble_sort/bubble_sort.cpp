#include <iostream>
#include <vector>
using namespace std;
void bubble_sort(vector<int> *array)
{
    for(int i=0; i<(*array).size(); ++i)
    {
        for(int j=0; j<(*array).size()-1-i; ++j)
        {
            if((*array)[j]>(*array)[j+1]) swap((*array)[j],(*array)[j+1]);
        }
    }
}
int main()
{

}
