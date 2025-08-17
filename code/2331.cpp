%:include<bits/stdc++.h>
using namespace std;
int main() <%
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a<:i:>;    
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    int dx<:4:> = <%0, 0, 1, -1%>;
    int dy<:4:> = <%1, -1, 0, 0%>;
    int ans = 0;
    for (int i = 0; i < n; i++) <%
        for (int j = 0; j < n; j++) <%
            if (a<:i:><:j:> == '#' && !vis<:i:><:j:>) <%
                vector<pair<int, int>> points;
                queue<pair<int, int>> q;
                q.push(<%i, j%>);
                vis<:i:><:j:> = true;
                
                while (!q.empty()) <%
                    auto <:x, y:> = q.front();
                    q.pop();
                    points.push_back(<%x, y%>);
                    for (int d = 0; d < 4; d++) <%
                        int nx = x + dx<:d:>;
                        int ny = y + dy<:d:>;
                        if (nx >= 0 && nx < n && ny >= 0 && ny < n && !vis<:nx:><:ny:> && a<:nx:><:ny:> == '#') <%
                            vis<:nx:><:ny:> = true;
                            q.push(<%nx, ny%>);
                        %>
                    %>
                %>
                
                bool alive = false;
                for (auto &p : points) <%
                    int x = p.first;
                    int y = p.second;
                    bool live = true;
                    for (int d = 0; d < 4; d++) <%
                        int nx = x + dx<:d:>;
                        int ny = y + dy<:d:>;
                        if (nx < 0 || nx >= n || ny < 0 || ny >= n) <%
                            live = false;
                            break;
                        %>
                        if (a<:nx:><:ny:> == '.') <%
                            live = false;
                            break;
                        %>
                    %>
                    if (live) <%
                        alive = true;
                        break;
                    %>
                %>
                
                if (!alive) <%
                    ans++;
                %>
            %>
        %>
    %>
    
    cout << ans;
    return 0;
%>