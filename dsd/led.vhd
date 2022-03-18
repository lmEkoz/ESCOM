library ieee;
use ieee.std_logic_lib64.all;

entity led is
    port(
        sw : in std_logic(0 to 4);
        salida : out std_logic(0 to 4)
        );
end entity;

architecture enciende of led is
    begin
        salida <= sw;
end architecture