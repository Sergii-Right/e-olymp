#include <iostream>
#include <vector>

using namespace std;
double Max(vector<double> v){
    double max = v[0];
    for(int i = 1; i < (int)v.size(); i++){
        if(max < v[i]){
            max = v[i];
        }
    }
    return max;
}

int main()
{
    string str, s = "";
    vector<double> vec;
    getline(cin, str);
    for(auto i : str){
        if(i != ' '){
            s += i;
        }
        else{
            vec.push_back(stod(s));
            s = "";
        }
    }
    vec.push_back(stod(s));
    cout.precision(2);
    cout << fixed << Max(vec) << endl;

    return 0;
}
