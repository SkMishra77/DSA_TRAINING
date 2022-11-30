class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        z=[tuple(sorted(list(i))) for i in strs]
        d={}
        for i,j in enumerate(z):
            if(j in d):
                d[j]=d[j]+[strs[i]]
            else:
                d[j]=[strs[i]]
        return list(d.values())
            