#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    string text;
    int quote = 0;

    while(getline(cin,text)) {

        for (int i = 0; i<text.size();++i) {

            if (text[i] == '"') {

                if (quote % 2 == 0) {
                    text.replace(i, 1, " ``");
                }

                else{
                   text.replace(i,1," ''");
                }

                quote += 1;
            }
            else
                cout << text[i];
        }
        cout << endl;
    }
    return EXIT_SUCCESS;
}