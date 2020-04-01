#include <iostream>
using namespace std;

int main() {
	int t,r,c,k,rows,cols;
	cin>>t;
	while(t--){
	    cin>>r>>c>>k;
	    if(r==0 || c==0){
	        cout<<"0";
	        break;
	    }
	    rows=0;
	    cols=0;
	    if(r+k>8){
	        rows+=8-r;
	    }
	    else{
	        rows+=k;
	    }
	    if(r-k<1){
	        rows+=r;
	    }
	    else{
	        rows+=k+1;
	    }
	    if(c+k>8){
	        cols+=8-c;
	    }
	    else{
	        cols+=k;
	    }
	    if(c-k<1){
	        cols+=c;
	    }
	    else{
	        cols+=k+1;
	    }
	    cout<<rows*cols<<endl;
	}

	return 0;
}
