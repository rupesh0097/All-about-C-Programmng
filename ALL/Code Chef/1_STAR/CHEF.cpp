//The IMDB 
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--){
        int no_of_movie, space_required;                    //2 2
        cin>> no_of_movie >> space_required;
        
        int current_imdb =0;
        
        while(no_of_movie--){
            int required_space, IMDB_rating; 
            cin >> required_space >> IMDB_rating;

            if(required_space <= space_required && current_imdb < IMDB_rating)
            current_imdb = IMDB_rating;

        }
        cout << current_imdb << endl;
    }
}