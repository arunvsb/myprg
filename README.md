import.java.io.*;
import.java.util.*;
public static String removeDuplicate(String s)
{
    char [] temp = s.toCharArray();
    int length =temp.length; 
    for (int i=0;i<length;i++)
    {
        for (int j = i+1; j<length;j++)
        {
            if(temp[i]==temp[j])
            {
                int test =j;
                for(int k=j+1; k<length ; k++)
                {
                    temp[test] = temp[k];
                    test++;
                }
                length--;
                j--;
            }
        }
    }
    return String.copyValueOf(temp).substring(0,length);
}
