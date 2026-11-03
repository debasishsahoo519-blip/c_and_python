def brute_force_coin_sums():
    ways = 0
    target = 200

    
    for c200 in range(0, target + 1, 200):
        #
        for c100 in range(0, target - c200 + 1, 100):
            
            for c50 in range(0, target - c200 - c100 + 1, 50):
               
                for c20 in range(0, target - c200 - c100 - c50 + 1, 20):
                   
                    for c10 in range(0, target - c200 - c100 - c50 - c20 + 1, 10):
                       
                        for c5 in range(0, target - c200 - c100 - c50 - c20 - c10 + 1, 5):
                            
                            for c2 in range(0, target - c200 - c100 - c50 - c20 - c10 - c5 + 1, 2):
                               
                                ways += 1
                                
    return ways
way=brute_force_coin_sums()
print(way)
