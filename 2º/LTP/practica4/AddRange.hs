module AddRange where 

  addRange :: Int -> Int -> Int
  addRange x y = if x == y then x else if x < y then x + addRange (x+1) y 
  else y + addRange (y+1) x 
