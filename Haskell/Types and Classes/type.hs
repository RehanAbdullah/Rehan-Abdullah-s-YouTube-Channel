


append x y = x ++ y
swap (x,y) = (y,x)


twice x = (x,x)

smallest x y z = minimum [x,y,z]
largest x y z = x `max` y `max` z
