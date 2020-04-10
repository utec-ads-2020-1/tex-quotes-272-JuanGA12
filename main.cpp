#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    string text;
    bool quote = true;

    while(getline(cin,text)) {

        for (int i = 0; i<text.size();++i) {

            if (text[i] == '"') {
                if (quote)
                    text.replace(i,1," ``");
                else
                    text.replace(i,1," ''");
                quote = !quote;
            }
            else
                cout << text[i];
        }cout << endl;
    }
    return EXIT_SUCCESS;
}