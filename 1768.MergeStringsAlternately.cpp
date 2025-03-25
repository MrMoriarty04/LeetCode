class Solution {

public:

	string mergeAlternately(string word1, string word2) {
		string res="";
		
		int size1=word1.size(),size2=word2.size();
		
		  
		
		int minloop=min(size1,size2)*2;
		
		int i=0,j=0;
		
		while(minloop>0){
		
			if(minloop%2 == 0)
			
				res+=word1[i++];
			
			else
			
				res+=word2[j++];
			
			minloop--;
		
		}
		
		if(size1>size2){
		
			for(int in=i;in<size1;in++)
			
			res+=word1[in];
			
		}
		
		if(size2>size1){
		
			for(int in=j;in<size2;in++)
			res+=word2[in];
		}
		
		return res;
	}

};
