/* Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
Example 4:

Input: s = "([)]"
Output: false
Example 5:

Input: s = "{[]}"
Output: true
 

Constraints:

     1 <= s.length <= 104
     s consists of parentheses only '()[]{}'             */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if(s.length()==0){
           cout<<"true"<<endl;
            return true;
        }
        vector<char> stack;
        stack.push_back(s[0]);
        map<char, char> a = {{'{', '}'}, {'[', ']'}, {'(', ')'}};
        for(int i = 1;i < s.length();i++)
        {
            if(a[stack.back()] == s[i])
                stack.pop_back();
            else
                stack.push_back(s[i]);
        }
        if(stack.empty())
        {
           cout<<"true"<<endl;
            return true;
        }
        else
        {
           cout<<"false"<<endl;
            return false;
        }
    }
};
int main()
{
   string s;
   cin>>s;
   Solution p;
   p.isValid(s);
}