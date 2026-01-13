 #include <iostream>
using namespace std;

int main() {
	for(int i=1;i<=5;i++){
	    cout<<i<<" - "<<i*i<<endl;
	}

    long num = 34345433433543L;
    cout<<num<<endl;

    string s1 = "first";
    string s2 = "Second";

    string s3 = s1+" "+s2;
    cout<<s3<<endl;


     string one = "Coding";
    string two = "on";
    string three = "CodeChef";
    int o_s = one.size();
    int t_s = two.size();
    int th_s = three.size();
    
    string ans = one+" "+two+" "+three;
    
    cout<<one<<" - "<<o_s<<endl;
    cout<<two<<" - "<<t_s<<endl;
    cout<<three<<" - "<<th_s<<endl;
    cout<<ans<<" - "<<ans.size()<<endl;



}