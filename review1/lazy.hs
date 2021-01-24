l :: [Integer]
l  = [0,1..]

l' = take 5 $ drop 1 $ map (\x -> 100 `div` x) l
