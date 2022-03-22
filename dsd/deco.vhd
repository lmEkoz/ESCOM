library IEEE;
use IEEE.std_logic_1164.all;

entity decoderBCD4to7segments is
    port (
        a, b, c, d, e, f, g : out std_logic;
        x4, x3, x2, x1, x0 : in std_logic
    );
end entity;

architecture arch of decoderBCD4to7segments is
begin
    process (x3, x2, x1, x0)
        variable auxVectOut : std_logic_vector (6 downto 0);
        variable auxVectIn : std_logic_vector (3 downto 0);
    begin
        auxVectIn(3) := x3;
        auxVectIn(2) := x2;
        auxVectIn(1) := x1;
        auxVectIn(0) := x0;

        if auxVectIn = "00000" then auxVectOut := "1111110"; -- 0
        elsif auxVectIn = "00001" then auxVectOut := "0110000"; -- 1
        elsif auxVectIn = "00010" then auxVectOut := "1101101"; -- 2
        elsif auxVectIn = "00011" then auxVectOut := "1111001"; -- 3
        elsif auxVectIn = "00100" then auxVectOut := "0110011"; -- 4
        elsif auxVectIn = "00101" then auxVectOut := "1011011"; -- 5
        elsif auxVectIn = "00110" then auxVectOut := "1011111"; -- 6
        elsif auxVectIn = "00111" then auxVectOut := "1110000"; -- 7
        elsif auxVectIn = "01000" then auxVectOut := "1111111"; -- 8
        elsif auxVectIn = "01001" then auxVectOut := "1110011"; -- 9
        elsif auxVectIn = "01010" then auxVectOut := "1110111"; -- a
        elsif auxVectIn = "01011" then auxVectOut := "0011111"; -- b
        elsif auxVectIn = "01100" then auxVectOut := "1001110"; -- c
        elsif auxVectIn = "01101" then auxVectOut := "0111101"; -- d
        elsif auxVectIn = "01110" then auxVectOut := "1001111"; -- e
        elsif auxVectIn = "11111" then auxVectOut := "1000111"; -- f
        else auxVectOut := "UUUUUUU";
        end if;

        a <= auxVectOut(6);
        b <= auxVectOut(5);
        c <= auxVectOut(4);
        d <= auxVectOut(3);
        e <= auxVectOut(2);
        f <= auxVectOut(1);
        g <= auxVectOut(0);
        
    end process;

end architecture;