library library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity mux is
    port(
        a       : in std_logic_vector(3 downto 0);
        b       : in std_logic_vector(3 downto 0);
        c       : in std_logic_vector(3 downto 0);
        sel     : in std_logic_vector(1 downto 0);
        salida  : out std_logic_vector(3 downto 0);
    )
end mux;

architecture synth of mux is    
begin
    process(sel, a, b, c) is
        case sel is
            when "00" => salida <= (others => '0';)
            when "01" => salida <= a;
            when "10" => salida <= b;
            when "11" => salida <= c;
            when others => salida <= (others => '0');
        end case;
    end process
end architecture synth;