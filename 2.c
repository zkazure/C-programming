#include <stdio.h>

int main()
{
  int price = 0;//定义变量, 定义int变量的类型, 然后赋予初始值. 
  //如果不初始化, 那么price地址里原本的数字会被放进price. 

  printf("请输入金额: ");
  scanf("%d", &price);//函数最后的f是format


  int a = 0;
  int b = 0;

  scanf("%d, %d", &a, &b);//字符串内是必须输入的内容, 空格只作为分隔标识, 不是必须输入内容.
  printf("%d, %d",a,b);

  const int AMOUNT = 100;//const 不能被修改, 习惯上把变量全部大写. 
  // AMOUNT = 2; $read only
}