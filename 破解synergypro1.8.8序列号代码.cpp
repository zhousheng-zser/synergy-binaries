#include<fstream>
#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<sstream>
#include<iomanip>
#include<stdexcept>
 
static std::string
hexEncode(std::string const& str){
    std::ostringstream oss;
    for(size_t i=0;i<str.size();++i){
        int c=str[i];
        oss<<std::setfill('0')<<std::hex<<std::setw(2)
           <<std::uppercase;
        oss<<c;
        }
        return oss.str();
}
    
int main()
{
    std::ostringstream oss;
    oss<<"{v1;pro;AW;5;avv@avv.com;CV Computer;0;0}";
    std::cout<<hexEncode(oss.str());
    }
