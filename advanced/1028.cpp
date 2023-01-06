/**
 *
 *Filename: 1028.cpp
 *created in 2023/01/06 22:43:44
 *By tabbleman
 *
 */
#include <bits/stdc++.h>
using namespace std;

struct Person{
    int num;
    string name;
    int grade;
};

int main(int argc,char** argv){
    cin.tie(0);
    int n, sortby;
    cin >> n >> sortby;

    vector<Person> lists;
    for(int i = 0; i < n; i ++){
        int num, grade;
        string name;
        cin >> num >> name >> grade;
        
        lists.push_back({num, name, grade});
    }
    sort(lists.begin(), lists.end(), 
        [sortby](const Person &p1, const Person &p2){
            switch (sortby)
            {
            case 1:
                return p1.num<p2.num;
                break;
            case 2:
                return p1.name < p2.name;
                break;
            case 3:
                return p1.grade < p2.grade;
                break;
                
            default:
                break;
            }   
        });
    
    for(vector<Person>::iterator iter = lists.begin(); 
        iter != lists.end();
        iter++
    ){
        printf("%06d %s %d\n", iter->num, iter->name.c_str(), iter->grade);
    }
    return 0;
}
