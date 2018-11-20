#include <bits/stdc++.h>
using namespace std;

struct point{ int x, y; };
typedef pair< point, point > ppp;
ppp common(point le, point ri, point maxx, point minn){
    maxx.x = max(le.x, maxx.x);
    maxx.y = max(le.y, maxx.y);
	minn.x = min(ri.x, minn.x);
    minn.y = min(ri.y, minn.y);
    return {maxx, minn};
}

bool inter(point x1, point y1, point x2, point y2){
	ppp tmp=common(x1, y1, x2, y2);
	if(tmp.first.x<=tmp.second.x && tmp.first.y<=tmp.second.y)
		return true;
	return false;
}

ppp rect[132680], suf[132680];
vector< ppp > vc;
bool decpf[132680], decsf[132680];
int main(){
	int n;
	cin>>n;
	point le, ri, maxx, minn;

	maxx={INT_MIN, INT_MIN}, minn={INT_MAX, INT_MAX};
	vc.push_back({maxx, minn});
	for(int i=1;i<=n;i++){
		cin>>le.x>>le.y>>ri.x>>ri.y;
		vc.push_back({le, ri});
	}

	rect[0]={maxx, minn};
	for(int i=1;i<=n;i++){
		le=vc[i].first, ri=vc[i].second;
		rect[i]=common(le, ri, rect[i-1].first, rect[i-1].second);
		//maxx=rect[i].first, minn=rect[i].second;
	}

	suf[n+1]={maxx, minn};
	for(int i=n;i>=1;i--){
		le=vc[i].first, ri=vc[i].second;
		suf[i]=common(le, ri, suf[i+1].first, suf[i+1].second);
		//maxx=suf[i].first, minn=suf[i].second;
	}


	for(int i=1;i<=n;i++){

		if(inter(rect[i-1].first, rect[i-1].second, suf[i+1].first, suf[i+1].second)){
			//cout<<rect[i-1].first.x<<" "<<rect[i-1].first.y<<" "<<rect[i-1].second.x<<" "<<rect[i-1].second.y<<endl;
			//cout<<suf[i+1].first.x<<" "<<suf[i+1].first.y<<" "<<suf[i+1].second.x<<" "<<suf[i+1].second.y<<endl;
			
			ppp tmp = common(rect[i-1].first, rect[i-1].second, suf[i+1].first, suf[i+1].second);
			cout<<tmp.second.x<<" "<<tmp.second.y<<endl;
			return 0;
		}
	}

	//cout<<maxx.x<<" "<<maxx.y<<endl;

	//cout<<minn.x<<" "<<minn.y<<endl;
	return 0;
}