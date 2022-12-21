using VI=vector<int>;
using VVI=vector<VI>;
class Solution {
public:
    VVI transpose(VVI& A) {
        int M=(int)A.size(),N=(int)A[0].size();
        VVI ans(N,VI(M,0));
        for (int i=0; i<M; ++i)
            for (int j=0; j<N; ++j)
                ans[j][i]=A[i][j];
        return ans;
    }
};
