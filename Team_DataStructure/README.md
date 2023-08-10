# 자료구조
### 우선순위 큐
우선순위가 가장 높은 데이터를 가장 먼저 삭제하는 자료구조이다.

데이터를 우선순위에 따라 처리하고 싶을 때 사용한다.
- 예: 물건 데이터를 자료구조에 넣었다가 가치가 높은 물건부터 꺼내서 확인해야 하는 경우

참고로 스택은 가장 나중에 삽입된 데이터를, 큐는 가장 먼저 삽입된 데이터를 가장 먼저 삭제한다.

### 힙
완전 이진 트리 자료구조의 일종이다.
- 완전 이진 트리란 루트 노드부터 시작하여 왼쪽 자식 노드, 오른쪽 자식 노드 순서대로 데이터가 차례대로 삽입되는 트리를 의미한다.
- 균형 잡힌 트리로서 동작한다.
- 새로운 원소가 삽입되었을 때 최악의 경우에도 O(logN)의 시간 복잡도로 힙 성질을 유지하도록 할 수 있다.
- 원소가 제거되었을 때에도 최악의 경우 O(logN)의 시간 복잡도로 힙 성질을 유지하도록 할 수 있다.

항상 루트 노드를 제거한다.

최소 힙 
- 루트 노드가 가장 작은 값을 가진다.
- 따라서 값이 작은 데이터가 우선적으로 제거된다.
- 오름차순 정렬에 용이하다.
  
최대 힙
- 루트 노드가 가장 큰 값을 가진다.
- 따라서 값이 큰 데이터가 우선적으로 제거된다.
- 내림차순 정렬에 용이하다.