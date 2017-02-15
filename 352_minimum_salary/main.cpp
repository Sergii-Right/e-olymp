#include <iostream>
#include <vector>

using namespace std;

double min(vector<double> v){
    double min = v[0];
    for(int i = 1; i < (int)v.size(); i++){
        if(min > v[i]) min = v[i];
    }
    return min;
}

int main()
{
    vector<double> vec;
    string str, s = "";
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
    cout << fixed << min(vec) << endl;
    return 0;
}
