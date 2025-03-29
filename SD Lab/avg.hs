--finding avg using Haskell

avg :: [Int] -> Float
avg [] = 0
avg x = fromIntegral (sum x) / fromIntegral (length x)
