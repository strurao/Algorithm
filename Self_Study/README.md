# 메모

- 알고리즘 문제를 접할 때는 "수"와 "숫자"의 차이를 기억해야 한다. "수"는 100, 700, 1000과 같이 실제 정수와 같은 데이터를 의미하고, "숫자"는 0부터 9 사이의 한 자리 숫자 데이터를 의미한다.

- 인접행렬에서
  ``y`` 를 중심으로 하는 2차원 배열로 만드는 이유로는. C++ 에서는 2차원 배열이 만들어졌을 때 행별로 캐싱이 되서, 
``i = y , j = x`` 기준으로 즉, ``y``축을 중심으로 ``x``축을 탐색하는 것이 좋다.
```cpp
for (int i=0; i<n, i++){
	for (int j=0; j<n; j++){
    	// ...
    }
}
```

- 행렬 구분 : 행(가로줄개수)(y), 열(세로줄개수)(x)
<img width="849" alt="스크린샷 2023-08-13 오후 7 30 10" src="https://github.com/strurao/Algorithm/assets/126440235/8f549a3a-c69d-4f18-9732-6d8f16cbcc20">

- 주어진 문제가 **그리디, 구현, 완전탐색, 또는 다이나믹 프로그래밍** 으로 해결할 수 있는지 검토한다.
