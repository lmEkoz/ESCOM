library ieee;
use ieee.std_logic_1164.all;

entity T_FF is
	port(
		d, clk: in std_logic;
		q0, q1: out std_logic);
end T_FF;
 
architecture Behavioral of T_FF is
	signal tmp: std_logic;
	begin
	q0 <= d;
	process (clk)	
	begin
		if clk'event and clk='1' then
			if q0='0' then
				tmp <= tmp;
			elsif q0='1' then
				tmp <= not (tmp);
			end if;
		end if;
	end process;
	q1 <= tmp;
end Behavioral;
