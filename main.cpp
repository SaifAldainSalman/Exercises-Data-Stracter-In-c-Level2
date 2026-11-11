#include <iostream>

using namespace std;
struct st_data {

string name ;
int id ;
string sub[3] ;
float grade[3];
};
void input_st ( st_data &stu)
{
    cout << " enter name :";
    cin >> stu.name;
    cout << " enter id :";
    cin >> stu.id;

    for (int i =0 ; i < 3 ; i++)
    {
    cout<< "----------------------------------";
    cout << "\n enter a subject no  "<< i+1 <<" : ";
    cin >> stu.sub[i];
    cout << "\n enter a grade  : ";
    cin >> stu.grade[i];
    }
}

void output_st ( st_data stu)
{
        cout << " name :" << stu.name << endl;
        cout << " id :" << stu.id << endl;

    for (int i =0 ; i < 3 ; i++)
    {
    cout<< "\n----------------------------------\n";
    cout << "  subject "<< stu.sub[i];
    cout << "\n  grade : "<< stu.grade[i] <<" : ";
    }


}

int main()
{
    int ns;
    cout << " enter namers of student :";
    cin >> ns ;
    st_data stu [ns];
    for (int i =0 ; i < ns ; i++)
    {
    cout<< "\==================================\n";
    input_st(stu[i]);
    }

    for (int i =0 ; i < ns ; i++)
    {
    cout<< "\n==================================\n";
    output_st(stu[i]);
    }





    return 0;
}
