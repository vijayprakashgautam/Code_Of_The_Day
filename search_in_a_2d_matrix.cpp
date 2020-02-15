#include<bits/stdc++.h>
using namespace std;

bool matrix_search(vector<vector<int>>vect, int row, int col, int target)
{
    int left = 0; 
    int right = row*col - 1;
    
    while(left <= right)
    {
        int mid = left + (right - left)/2;
        
        int mid_value = vect[mid/col][mid%col];
        
        if(mid_value == target)
            return true;
        else if(mid_value < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
    
}

int main()
{
    int row,col;
    cin >> row >> col;
    
    int temp;
    int target;
    
    vector<vector<int>>vect;
    for(int i=0; i<row; i++)
    {
        vector<int>arr;
        for(int j=0; j<col; j++)
        {
            cin >> temp;
            arr.push_back(temp);
        }
        vect.push_back(arr);
    }
    
    cin >> target;
    
    bool res = matrix_search(vect, row, col, target);
    
    if(res)
        cout << "Target found in the 2d matrix";
    else
        cout << "Target not found in the 2d matrix";
    
}


// input
// 3 4
// 1 3 5 7
// 10 11 16 20
// 23 30 34 50
// 13
