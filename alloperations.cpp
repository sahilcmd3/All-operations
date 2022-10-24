#include<iostream>
int main()
{
    float a,b,sum,sub,product,quotient;
    std::cout<<"Enter the value a and b: ";
    std::cin>>a>>b;
    sum=a+b;
    std::cout<<"Sum: "<<sum<<std::endl;
    sub=a-b;
    std::cout<<"Sub: "<<sub<<std::endl;
    product=a*b;
    std::cout<<"Product: "<<product<<std::endl;
    quotient=a/b;
    std::cout<<"Quotient: "<<quotient;
    return 0;
}