library library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity mux is
    port(s0,s1,d0,d1,d2,d3 : in bit; y : out bit);
end mux;

architecture data of mux is    
begin
    y<= (not s0 and not s1 and d0) or
        (s0 and not s1 and d1) or
        (not s0 and s1 and d2) or
        (s0 and s1 and d3);
end architecture data;