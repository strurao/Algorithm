#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> answer;
vector<vector<string>> input_tickets;
vector<bool> visited;

void dfs(string start, vector<string>& path, int cnt)
{
	path.push_back(start); // ���� ��ġ�� ��ο� �߰�

	// ��� �װ����� ������� ���
	if (cnt == input_tickets.size())
	{
		answer = path; // ������ ���� ��η� ����
		return;
	}

	// ��� �װ����� ������� �ʾ��� ���
	for (int i = 0; i < input_tickets.size(); i++)
	{
		if (input_tickets[i][0] == start && !visited[i]) // ������� ���� ��ġ�̰�, ������� ���� �װ����� ���
		{
			visited[i] = true;
			dfs(input_tickets[i][1], path, cnt + 1);
			visited[i] = false; // ��Ʈ��ŷ ���󺹱� : �ٸ� ��η��� Ž���� ���� ����ߴ� �װ��� ������ �ʱ�ȭ�Ѵ�
			if (!answer.empty()) return; // ������ ã���� �� �̻� �������� �ʴ´�
		}
	}
	path.pop_back(); // ���� ��ġ�� ��ο��� ���� (��Ʈ��ŷ)
}

vector<string> solution(vector<vector<string>> tickets)
{
	input_tickets = tickets;
	visited.resize(input_tickets.size(), false);
	sort(input_tickets.begin(), input_tickets.end()); // ���ĺ� �� ����
	vector<string> path; // ���� ��θ� ������ ����
	dfs("ICN", path, 0);
	return answer;
}