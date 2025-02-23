class Solution:
    def wateringPlants(self, plants: List[int], capacity: int) -> int:
        cap = capacity
        N = len(plants)
        steps = 0
        for i in range(N):
            if plants[i] > cap:
                steps += 2*i +1
                cap = capacity - plants[i]
            elif plants[i] < cap:
                cap -= plants[i]
                steps += 1
            else:
                cap = 0
                steps += 1
        return steps
        