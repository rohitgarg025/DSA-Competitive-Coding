 #Function to reverse words in a given string.
    def reverseWords(self,S):
        # code here 
        l = S.split('.')
        l.reverse()
        ans = '.'
        ans = ans.join(l)
        return ans
