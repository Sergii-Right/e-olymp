#include <iostream>
#include <vector>

using namespace std;

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

    double max = vec[0], min = vec[0];
    for(int i = 1; i < (int)vec.size(); i++){
        if(max < vec[i]) max = vec[i];
        if(min > vec[i]) min = vec[i];
    }

    cout.precision(2);
    cout << fixed << max - min << endl;
    return 0;
}
