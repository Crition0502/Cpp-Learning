#include <iostream>

using namespace std;

int main()
{
	/*sizeof 运算符获取数据类型占用内存空间的大小
	 * 用法： sizeof(typr_name)
	 * 结果以字节为单位
	 */
	cout << sizeof(double) << endl;
	cout << sizeof(12) << endl;//12默认为整形int
	cout << sizeof("abc") << endl;//字符串
	cout << sizeof("马牛逼") << endl;//中文字符串，有问题。。。

	/*运算符优先级
	 * （）的优先级别最高
	 * 单目运算符！ ~ ++ -- sizeof 优先级别高
	 * 算术运算符>关系运算符>逻辑运算符
	 *优先级别最低的就是赋值运算符
	 */
	cout << !((18 + 45 % 3 * 5) > 16) << endl;//打印结果为0，条件为假，结果为真
	int num = 5 > 6 ? 10 : 12;//三目运算
	cout << num << endl;//5是否大于6？是的话就把10赋值给num，否则就是把12赋值给num。

	/*条件结构
	 * if结构：先判断，再执行
	 * 使用程序判断输入的数据是否满足条件
	 */
	char pan = '\0';//将char的默认值设置为空字符
	cout << "请输入一个字符，给爷判断判断" << endl;
	cin >> pan;
	if (pan >= 'A' && pan <= 'Z')//典型错误： ‘A’<=pan<= 'Z',要使用逻辑关系!
	{
		cout << "OK,您请进" << endl;
	}
	else
	{
		cout << "滚蛋!别碍事" << endl;
	}

	/*多重if结构
	 *  if  else if  else(条件一，条件二，代码块123)（想要多少else if就可以搞多少）
	 */

	/*switch选择结构
	 *switch(表达式){
	 * case 常量1：（小case，小情况）
	 *      语句1：
	 *      break；(跳出)
	 * case 常量2：
	 *      语句2：
	 *      break；
	 * ......
	 * default：（默认）
	 *      语句；
	 * }
	 * 
	 * 1.switch后面的表达式只能是整型或者字符型
	 * 2.case后面接的表达式的值不可以相同
	 * 3.case后面可以接很多条语句，想要几条就可以写几条，而且不需要大括号
	 * 4.如果不加入break，则需要特别注意程序执行的顺序
	 * 5.case和default子句的先后顺序可以自行变动
	 * 6.default子句可以省略
	 */
	int choice = 2;
	switch (choice) 
	{
	default:
		cout << "!!!!!!! Your choice is 996" << endl;//当case里面没得符合的情况的时候，就会输出这个玩意
	case 1:
		cout << "你个臭崽子选择了1" << endl;
		break;//break可以省略，但是不可以乱省略
	case 2://case的情况不可以重复
		cout << "好家伙，你个聪明鬼选择了2" << endl;
		break;
	case 3:
		cout << "!Get 3" << endl;
		//break;
	}
	/*switch和多重if的比较
	* A：相同：都是用来处理多分枝条件的结构
	* B：不同：
	* 1.switch：等值条件判断（条件有限时）（杀鸡刀）大于20个时就不要采用了
	* 2.多重if：判断某个连续区间的情况（杀牛刀）
	*/
	//switch 除了用在菜单选择上，还可以用在月份处理上
	//用来判断某一个月份有几天
	int month = '\0';
	cout << "Please put one number" << endl;
	cin >> month;
	switch (month)
	{
	case 1:
		cout << "有几天" << endl;//把每个月份的情况一一例举，然后就可以得到一个月份程序
		break;
	case 3:
		cout << "!" << endl;
		break;
	case 5:
		cout << "!!" << endl;
	case 7:
		cout << "!!!" << endl;
	default:
		cout << "np,you win!" << endl;
	}

	//思考题
	int a = 5, b = 10;
	if (a > b)
	if (a++ > --b)
	a += b;
	cout << a << '\t' << b << endl;
	//这个时候打印的结果为5 10 因为不满足第一个if的条件，所以第二个if进都进不去
	//所以一定要看清楚多重if的从属关系
	/*这两个if语句的关系相当于：
	* if(a>b)
	* {
	*	if(a++>--b)
	*   {
	*    a+=b;
	*    }
	* }
	* 所以啊，考试的题目不会把程序很清楚的告诉你，自己找好逻辑关系
	*/

	return 0;
}