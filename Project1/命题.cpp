//#include<iostream>
//#include<string>    
//using namespace std;
////检查前面的字符a是否在字符串b中,若以a形式存在则返回1
////以|a形式存在返回-1，不存在则返回0
//int Check(char a, string b)
//{
//	int len = b.length();
//	for (int i = 0; i < len; i++)
//	{
//		if (a == b[i])
//		{
//			if (i > 0 && '~' == b[i - 1])//防止数组超限
//				return -1;
//			return 1;
//		}
//
//	}
//	return 0;
//}
//
//int getPosition(char a, string b)//注意每次删除字符后，都要自检查一次看看是否为原子。
//{
//	int len = b.length();
//	for (int i = 0; i < len; i++)
//	{
//		if (a == b[i])
//		{
//			return i;
//		}
//
//	}
//	return -1;//错误码	
//}
//
//int  Fuse(string aa, string bb)//返回1表示有相同的，返回0表示没有
//{
//	for (int i = 0; i < aa.length(); i++)
//		for (int j = 0; j < bb.length(); j++)
//			if (aa[i] == bb[j])
//				return 1;
//	return 0;//表示没有相等的.
//}
//
//int main()
//{
//	//注意归结的这种情况		 
//	while (1) //如果有a , a|b,会死循环！去掉！
//	{
//		int panduan = 0;//用于判断是否停止程序
//		string a[30];//存储第一公式集
//		string b[30];//存储否定集
//		string aa;//aa中存储原子，
//		string bb;//bb中存储反原子虽然bb中不带|，但是意义是反的
//		//首先，一个集合里面同时有2个相反的是错误的。。。
//		//2个 V 只有一个为假另一个才为真，一个为真另一个不说明什么。
//		//当a中正负相交时，抵消为1，极为真，如果找不到即为假。
//		//.length();
//		// .erase(int a,int b);删除从a位置开始的接下的b个字符
//		//.insert(int position,int count,string b)//位置a处插入字符,,
//		//.find("cad");查找，找不到返回-1（无符号表示，所以值很大）
//		//string &append(const string &s,int pos,int n);//把字符串s中从pos开始的n个字符连接到当前字符串的结尾
//		//注意输入 第二个集合时，因为是析取式，所以反一次后全为并，即可以逗号，可以化为原子！   
//
//		char chuli[500];
//		string bijiao;//char不能直接比较，先转化为string 
//		string act;
//		int position;
//		int zheng = 0;
//		int fu = 0;
//		int chuan = 0;//存储字符串下标 
//		for (int count = 0; count < 2; count++)
//		{
//			cin.getline(chuli, 500);//对第二行处理
//			bijiao = chuli;
//			if (panduan == 2) break;
//			if (bijiao == "NIL")
//			{
//				panduan++;
//				continue;
//			}
//			act = chuli;
//			while (act.length() > 0)
//			{
//				if (Check(',', act) == 1)
//				{
//					position = getPosition(',', act);
//					if (position == 1)//位置在1，即前面为正原子。
//					{
//						aa.insert(zheng, 1, (act[0]));
//						zheng++;
//						act = act.erase(0, position + 2);
//					}
//					else if (position == 2) //位置在1，即前面为负原子。
//					{
//						bb.insert(fu, 1, (act[1]));
//						fu++;
//						act = act.erase(0, position + 2);//删除空格
//					}
//					else
//					{
//						a[chuan].append(act, 0, position);
//						chuan++;
//						act = act.erase(0, position + 2);//删除空格,位置会小一个坐标  
//					}
//				}
//				else//最后一个
//				{
//					position = act.length();
//					if (position == 1)//位置在1，即前面为正原子。
//					{
//						aa.insert(zheng, 1, (act[0]));
//						zheng++;
//						act = act.erase(0, position);
//					}
//					else if (position == 2) //位置在1，即前面为负原子。
//					{
//						bb.insert(fu, 1, (act[1]));
//						fu++;
//						act = act.erase(0, position);//没空格
//					}
//					else
//					{
//						a[chuan].append(act, 0, position);
//						chuan++;
//						act = act.erase(0, position);//没空格
//					}
//				}
//			}
//		}
//		//判断结束条件
//		if (panduan == 2) break;	//连续输入2个 NUL;
//		//每做完一次，都要自建是否有相等的，有就成功， 
//		int flag;
//		flag = 0;//检验标志，为1则退出
//		//先直接判断是否有重复，如果输入没有析取就错误
//		if (Fuse(aa, bb) == 1)
//		{
//			cout << "TRUE" << endl;
//			flag = 2;
//		}
//		for (int r = 0; r < 2; r++)//防止bb中结束了加入aa中的没有再次比较
//		{
//			for (int i = 0; i < aa.length(); i++)//先遍历aa查找
//			{
//				for (int j = 0; j < chuan; j++)
//				{	 //cout<<"j "<<j<<endl;
//					if (Check(aa[i], a[j]) == -1)//正向集里面，查找相反,查到一个，结束之后转向下一个a[j]
//					{//存在！，进行切割
//						int positionLocal; //下标位置
//						positionLocal = getPosition(aa[i], a[j]);//返回的是其下表，注意这里是有个|符号也要去掉,看在前面还是后面
//						if (positionLocal - 2 > -1)//保证positionLocal-2存在，防止数组超限
//						{
//							a[j].erase(positionLocal - 2, 3);//删除了b:  a|~b|c 和 a|~b 的情况
//						}
//						else
//						{
//							a[j].erase(positionLocal - 1, 3);//删除了b:  ~b|c 的情况,不会出现~b进来的情况。
//						}
//
//						//接下来进行自检是否为单字符
//						if (a[j].length() == 1 || a[j].length() == 2)//string只剩单独。
//						{
//
//							if (a[j].length() == 1)
//							{
//								aa.insert(zheng, 1, (a[j][0]));
//								zheng++;
//								a[j].erase(0, 1);
//							}
//							else
//							{
//								bb.insert(fu, 1, (a[j][1]));
//								fu++;
//								a[j].erase(0, 2);
//							}
//						}
//						//接下来检查两个集合是否有相同的元素！
//						if (Fuse(aa, bb) == 1)
//						{
//							cout << "TRUE" << endl;
//							flag = 2;
//							break;
//						}
//					}
//					else if (Check(aa[i], a[j]) == 1)//出现死循环的一种情况
//					{
//						int lenLocal = a[j].length();
//						a[j].erase(0, lenLocal);
//					}
//				}
//				if (flag == 2) break;
//			}
//
//			if (flag == 2) break;;
//
//			//bug
//			for (int i = 0; i < bb.length(); i++)//再遍历bb查找
//			{
//				for (int j = 0; j < chuan; j++)
//				{	 //cout<<"j "<<j<<endl;
//					if (Check(bb[i], a[j]) == 1)
//					{//存在！，进行切割
//						int positionLocal; //下标位置
//						positionLocal = getPosition(bb[i], a[j]);//返回的是其下表，注意这里没有|符号
//						if (positionLocal != 0)
//						{
//							a[j].erase(positionLocal - 1, 2);//删除a:  r|a  r|a|b 2种情况
//						}
//						else
//						{
//							a[j].erase(positionLocal, 2);//删除a:    a|b 1种情况，不可能有 a 一个的情况，因为每次切割后都会自检	
//						}
//						//接下来进行自检是否为单字符
//						if (a[j].length() == 1 || a[j].length() == 2)
//						{
//							if (a[j].length() == 1)
//							{
//								aa.insert(zheng, 1, (a[j][0]));
//								zheng++;
//								a[j].erase(0, 1);
//							}
//							else
//							{
//								bb.insert(fu, 1, (a[j][1]));
//								fu++;
//								a[j].erase(0, 2);
//							}
//						}
//						//接下来检查两个集合是否有相同的元素！
//						if (Fuse(aa, bb) == 1)
//						{
//							cout << "TRUE" << endl;
//							flag = 2;
//							break;
//						}
//					}
//					else if (Check(bb[i], a[j]) == -1)//出现死循环的一种情况,没有意义，基本不会出现
//					{
//						int lenLocal = a[j].length();
//						a[j].erase(0, lenLocal);
//					}
//				}
//				if (flag == 2) break;
//			}
//			if (flag == 2) break;
//		}
//
//
//		if (flag != 2)
//			cout << "FALSE" << endl;
//	}
//	return 0;
//}