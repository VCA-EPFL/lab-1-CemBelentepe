import Vector::*;

typedef Bit#(16) Word;

(* noinline *)
function Vector#(16, Word) naiveShfl(Vector#(16, Word) in, Bit#(4) shftAmnt);
    Vector#(16, Word) resultVector = in; 
    for (Integer i = 0; i < 16; i = i + 1) begin
        Bit#(4) idx = fromInteger(i);
        resultVector[i] = in[shftAmnt+idx];
    end
    return resultVector;
endfunction


function Vector#(16, Word) barrelLeft(Vector#(16, Word) in, Bit#(4) shftAmnt);
    Vector#(16, Word) res = in;
    
    for(Integer i = 0; i < 4; i = i + 1)
        if(shftAmnt[i] == 1)
            res = naiveShfl(res, fromInteger(2 ** i));

    return res;
endfunction
