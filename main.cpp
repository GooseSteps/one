#include <iostream>

using namespace std;

int Consolution(string s,int l,int r);

int main()
{
    int n;
    cout<<"输入一个数字："<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;



    /*string s="adfefa";
        int max_len=0,start=0,end=0;
        string ans;


        if (s.size() < 1)
		{
			cout<<"";
		}

        for(int i=0;i<s.size();i++)
        {
            int len1=Consolution(s,i,i);
            int len2=Consolution(s,i,i+1);
            int len=max(len1,len2);
            if(max_len<len)
            {
                max_len=len;
                start = i - (len -1) / 2;
				end = i + len / 2;
            }
            cout<<len<<" "<<start<<endl;
            ans=s.substr(start+1,end-start-1);
        }
        cout<< ans;*/
    }
}
    int Consolution(string s,int left,int right)
    {
        int l=left;
        int r=right;
        while(l>=0 && r<s.size() && s[l]==s[r] )
        {
            r++;
            l--;
        }
        return r-l+1;
    }


