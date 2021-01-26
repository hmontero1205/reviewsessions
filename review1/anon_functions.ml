let l = [ 0;5;1023;-8;10; ]

let is_pos = List.map (fun x -> x > 0) l

let only_pos = List.fold_left (fun a b -> a && b) true is_pos

let get_gt key lst = List.fold_right (fun x l -> if x > key then x :: l else l) lst []
