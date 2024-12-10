#ifndef SORT_H
#define SORT_H
#include<vector>
using namespace std;
class sort
{
private:
    /* data */
    vector<int> arr;
public:
    sort(/* args */);
    ~sort();
    void quickSort(vector<int>& arr);
};
#endif
