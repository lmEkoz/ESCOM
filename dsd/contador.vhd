library library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity count is
  generic (width:POSITIVE:=8);
  port (clk   : in std_logic; 
        reset : in std_logic; 
        enable: in std_logic; 
        count : out std_logic_vector(width-1 downto 0)
  );
end count;

architecture arch1 of count is
  signal cnt : UNSIGNED(width-1 downto 0);
  begin

    pSeq : process (clk, reset) is
    begin
        if reset = '1' then
          cnt <= (others => '0');
        elsif clk'event and clk='1' then
          if enable='1' then
            cnt <= cnt + 1;
          end if;
        end if;
      end process;

    count <= std_logic_vector(cnt);

    end arch1;