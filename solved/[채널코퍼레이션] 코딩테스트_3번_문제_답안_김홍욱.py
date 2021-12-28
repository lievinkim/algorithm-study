# 안녕하세요, 채널코퍼레이션 백엔드 지원자 김홍욱입니다.
# 채널코퍼레이션 코딩 테스트 3번 문제에 대한 답안 전달 드립니다.
# 감사합니다.

def solution():

    R = [[3, 5, 7, 8, 4, 6],
[1, 4, 5, 8, 9, 10],
[3, 6, 4, 2, 6, 9],
[7, 4, 2, 6, 5, 7]]
    
    h = len(R)
    w = len(R[0])

    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]

    dp = [[0]*w for _ in range(h)]
    answer = 1

    def dfs(x, y, length):
        if (dp[x][y] > length):
            return;

        nonlocal answer
        dp[x][y] = length
        answer = max(answer, length)

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0<=nx<h and 0<=ny<w and R[nx][ny]>R[x][y]:
                print(length+1)
                dfs(nx, ny, length+1)
    
    for i in range(h):
        for j in range(w):
            dfs(i, j, 1)

    return answer

print(solution())