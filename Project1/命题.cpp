//#include<iostream>
//#include<string>    
//using namespace std;
////���ǰ����ַ�a�Ƿ����ַ���b��,����a��ʽ�����򷵻�1
////��|a��ʽ���ڷ���-1���������򷵻�0
//int Check(char a, string b)
//{
//	int len = b.length();
//	for (int i = 0; i < len; i++)
//	{
//		if (a == b[i])
//		{
//			if (i > 0 && '~' == b[i - 1])//��ֹ���鳬��
//				return -1;
//			return 1;
//		}
//
//	}
//	return 0;
//}
//
//int getPosition(char a, string b)//ע��ÿ��ɾ���ַ��󣬶�Ҫ�Լ��һ�ο����Ƿ�Ϊԭ�ӡ�
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
//	return -1;//������	
//}
//
//int  Fuse(string aa, string bb)//����1��ʾ����ͬ�ģ�����0��ʾû��
//{
//	for (int i = 0; i < aa.length(); i++)
//		for (int j = 0; j < bb.length(); j++)
//			if (aa[i] == bb[j])
//				return 1;
//	return 0;//��ʾû����ȵ�.
//}
//
//int main()
//{
//	//ע������������		 
//	while (1) //�����a , a|b,����ѭ����ȥ����
//	{
//		int panduan = 0;//�����ж��Ƿ�ֹͣ����
//		string a[30];//�洢��һ��ʽ��
//		string b[30];//�洢�񶨼�
//		string aa;//aa�д洢ԭ�ӣ�
//		string bb;//bb�д洢��ԭ����Ȼbb�в���|�����������Ƿ���
//		//���ȣ�һ����������ͬʱ��2���෴���Ǵ���ġ�����
//		//2�� V ֻ��һ��Ϊ����һ����Ϊ�棬һ��Ϊ����һ����˵��ʲô��
//		//��a�������ཻʱ������Ϊ1����Ϊ�棬����Ҳ�����Ϊ�١�
//		//.length();
//		// .erase(int a,int b);ɾ����aλ�ÿ�ʼ�Ľ��µ�b���ַ�
//		//.insert(int position,int count,string b)//λ��a�������ַ�,,
//		//.find("cad");���ң��Ҳ�������-1���޷��ű�ʾ������ֵ�ܴ�
//		//string &append(const string &s,int pos,int n);//���ַ���s�д�pos��ʼ��n���ַ����ӵ���ǰ�ַ����Ľ�β
//		//ע������ �ڶ�������ʱ����Ϊ����ȡʽ�����Է�һ�κ�ȫΪ���������Զ��ţ����Ի�Ϊԭ�ӣ�   
//
//		char chuli[500];
//		string bijiao;//char����ֱ�ӱȽϣ���ת��Ϊstring 
//		string act;
//		int position;
//		int zheng = 0;
//		int fu = 0;
//		int chuan = 0;//�洢�ַ����±� 
//		for (int count = 0; count < 2; count++)
//		{
//			cin.getline(chuli, 500);//�Եڶ��д���
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
//					if (position == 1)//λ����1����ǰ��Ϊ��ԭ�ӡ�
//					{
//						aa.insert(zheng, 1, (act[0]));
//						zheng++;
//						act = act.erase(0, position + 2);
//					}
//					else if (position == 2) //λ����1����ǰ��Ϊ��ԭ�ӡ�
//					{
//						bb.insert(fu, 1, (act[1]));
//						fu++;
//						act = act.erase(0, position + 2);//ɾ���ո�
//					}
//					else
//					{
//						a[chuan].append(act, 0, position);
//						chuan++;
//						act = act.erase(0, position + 2);//ɾ���ո�,λ�û�Сһ������  
//					}
//				}
//				else//���һ��
//				{
//					position = act.length();
//					if (position == 1)//λ����1����ǰ��Ϊ��ԭ�ӡ�
//					{
//						aa.insert(zheng, 1, (act[0]));
//						zheng++;
//						act = act.erase(0, position);
//					}
//					else if (position == 2) //λ����1����ǰ��Ϊ��ԭ�ӡ�
//					{
//						bb.insert(fu, 1, (act[1]));
//						fu++;
//						act = act.erase(0, position);//û�ո�
//					}
//					else
//					{
//						a[chuan].append(act, 0, position);
//						chuan++;
//						act = act.erase(0, position);//û�ո�
//					}
//				}
//			}
//		}
//		//�жϽ�������
//		if (panduan == 2) break;	//��������2�� NUL;
//		//ÿ����һ�Σ���Ҫ�Խ��Ƿ�����ȵģ��оͳɹ��� 
//		int flag;
//		flag = 0;//�����־��Ϊ1���˳�
//		//��ֱ���ж��Ƿ����ظ����������û����ȡ�ʹ���
//		if (Fuse(aa, bb) == 1)
//		{
//			cout << "TRUE" << endl;
//			flag = 2;
//		}
//		for (int r = 0; r < 2; r++)//��ֹbb�н����˼���aa�е�û���ٴαȽ�
//		{
//			for (int i = 0; i < aa.length(); i++)//�ȱ���aa����
//			{
//				for (int j = 0; j < chuan; j++)
//				{	 //cout<<"j "<<j<<endl;
//					if (Check(aa[i], a[j]) == -1)//�������棬�����෴,�鵽һ��������֮��ת����һ��a[j]
//					{//���ڣ��������и�
//						int positionLocal; //�±�λ��
//						positionLocal = getPosition(aa[i], a[j]);//���ص������±�ע���������и�|����ҲҪȥ��,����ǰ�滹�Ǻ���
//						if (positionLocal - 2 > -1)//��֤positionLocal-2���ڣ���ֹ���鳬��
//						{
//							a[j].erase(positionLocal - 2, 3);//ɾ����b:  a|~b|c �� a|~b �����
//						}
//						else
//						{
//							a[j].erase(positionLocal - 1, 3);//ɾ����b:  ~b|c �����,�������~b�����������
//						}
//
//						//�����������Լ��Ƿ�Ϊ���ַ�
//						if (a[j].length() == 1 || a[j].length() == 2)//stringֻʣ������
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
//						//������������������Ƿ�����ͬ��Ԫ�أ�
//						if (Fuse(aa, bb) == 1)
//						{
//							cout << "TRUE" << endl;
//							flag = 2;
//							break;
//						}
//					}
//					else if (Check(aa[i], a[j]) == 1)//������ѭ����һ�����
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
//			for (int i = 0; i < bb.length(); i++)//�ٱ���bb����
//			{
//				for (int j = 0; j < chuan; j++)
//				{	 //cout<<"j "<<j<<endl;
//					if (Check(bb[i], a[j]) == 1)
//					{//���ڣ��������и�
//						int positionLocal; //�±�λ��
//						positionLocal = getPosition(bb[i], a[j]);//���ص������±�ע������û��|����
//						if (positionLocal != 0)
//						{
//							a[j].erase(positionLocal - 1, 2);//ɾ��a:  r|a  r|a|b 2�����
//						}
//						else
//						{
//							a[j].erase(positionLocal, 2);//ɾ��a:    a|b 1��������������� a һ�����������Ϊÿ���и�󶼻��Լ�	
//						}
//						//�����������Լ��Ƿ�Ϊ���ַ�
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
//						//������������������Ƿ�����ͬ��Ԫ�أ�
//						if (Fuse(aa, bb) == 1)
//						{
//							cout << "TRUE" << endl;
//							flag = 2;
//							break;
//						}
//					}
//					else if (Check(bb[i], a[j]) == -1)//������ѭ����һ�����,û�����壬�����������
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