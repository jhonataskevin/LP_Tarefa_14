#include <stdio.h>

int main() {
	
	int N, i;
	float v1, v2, v3, media;
	
	scanf("%d", &N);
	media= 0;
	
	for(i=0; i<N; i++){
		scanf("%f %f %f", &v1, &v2, &v3);
		media = v1*2 + v2*3 + v3*5;
		media =  media/ 10;
		printf("%.1f\n", media);
	}
	
	return 0;
}
