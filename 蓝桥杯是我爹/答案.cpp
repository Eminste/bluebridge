#include <iostream>
#include <string>
#include <vector>
#include<utility>

using namespace std;

class Solution {
public:
	string longestPalindrome(string s) {
		int n = s.size();
		if (n < 2) {
			return s;
		}

		int maxLen = 1;
		int begin = 0;
		// dp[i][j] ��ʾ s[i..j] �Ƿ��ǻ��Ĵ�
		vector<vector<int>> dp(n, vector<int>(n));
		// ��ʼ�������г���Ϊ 1 ���Ӵ����ǻ��Ĵ�
		for (int i = 0; i < n; i++) {
			dp[i][i] = true;
		}
		// ���ƿ�ʼ
		// ��ö���Ӵ�����
		for (int L = 2; L <= n; L++) {
			// ö����߽磬��߽���������ÿ��Կ���һЩ
			for (int i = 0; i < n; i++) {
				// �� L �� i ����ȷ���ұ߽磬�� j - i + 1 = L ��
				int j = L + i - 1;
				// ����ұ߽�Խ�磬�Ϳ����˳���ǰѭ��
				if (j >= n) {
					break;
				}

				if (s[i] != s[j]) {
					dp[i][j] = false;
				}
				else {
					if (j - i < 3) {
						dp[i][j] = true;
					}
					else {
						dp[i][j] = dp[i + 1][j - 1];
					}
				}

				// ֻҪ dp[i][L] == true �������ͱ�ʾ�Ӵ� s[i..L] �ǻ��ģ���ʱ��¼���ĳ��Ⱥ���ʼλ��
				if (dp[i][j] && j - i + 1 > maxLen) {
					maxLen = j - i + 1;
					begin = i;
				}
			}
		}
		return s.substr(begin, maxLen);
	}
};

//���ߣ�LeetCode - Solution
//���ӣ�https ://leetcode.cn/problems/longest-palindromic-substring/solution/zui-chang-hui-wen-zi-chuan-by-leetcode-solution/
//��Դ�����ۣ�LeetCode��
//����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������



class Solution2 {
public:
	pair<int, int> expandAroundCenter(const string& s, int left, int right) {
		while (left >= 0 && right < s.size() && s[left] == s[right]) {
			--left;
			++right;
		}
		return { left + 1, right - 1 };
	}

	string longestPalindrome(string s) {
		int start = 0, end = 0;
		//int left1 = 0, left2 = 0, ringht1 = 0,right2 = 0;
		for (int i = 0; i < s.size(); ++i) {
			auto [left1, right1] = expandAroundCenter(s, i, i);
			auto [left2, right2] = expandAroundCenter(s, i, i + 1);
			if (right1 - left1 > end - start) {
				start = left1;
				end = right1;
			}
			if (right2 - left2 > end - start) {
				start = left2;
				end = right2;
			}
		}
		return s.substr(start, end - start + 1);
	}
};
