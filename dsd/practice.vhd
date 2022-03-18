library library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity orgate is                 --Used to specify inputs (in), outputs (out), input-outputs (inout) or buffer.       
    generic(
        Delay: Time:=10ns
   ); 

    port( 
        a: in std_logic;
        b: in std_logic;
        c: out std_logic;
    );
end orgate;

architecture synthesis of orgate is
    
begin
    c <= a OR b;   
    
    
end architecture synthesis;
