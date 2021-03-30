#include<iostream>
#include<string>


using namespace std;

int main(){
    
    string url;    // assigning url to string
    cout << "Enter url" << endl; // asking user to enter the url
    cin >> url;// reading the erl

// add some comment for the file
//change after pushing it in repositories

    

    size_t search = url.find_first_of(" : "); // using size_t and find_first_ofsize and count of string and its match
    string protocol = url.substr(0, search); // matching the http to protocol
    
    string url1 = url.substr(search + 3); // assigning another url without http
    size_t search1 = url1.find_first_of(":"); // finding position of the domain
    string domain = url1.substr(0, search1);
    
    size_t search2 = url1.find_first_of("/");  // finding position of the port
    string port = url1.substr(search1 + 1, search2 - search1 - 1);
    size_t search3 = url1.find_first_of("?");
    string file_path = url1.substr(search1 + 3, search3 - search1 - 3); // for filepath
    
    
    string parameter = url1.substr(search3 + 1); // for the parameter


    //printing out the components of the url
    
    cout<< "Protocol: " << protocol << endl;
    cout<< "Domain: " << domain <<endl;
    cout<< "Port: " << port << endl;
    cout<< "File Path: " << file_path <<endl;
    cout << "Parameter: " <<parameter << endl;

    return 0;

}
