class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        freqs = defaultdict(int)
        res = 0
        i = 0
        for j in range(len(s)):
            freqs[s[j]] += 1
            curlen = j - i + 1
            if (curlen - max(freqs.values())) > k:
                freqs[s[i]] -= 1
                i += 1
                curlen = j - i + 1
            
            res = max(res, curlen)

        return res
            
