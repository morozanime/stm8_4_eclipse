for %%f in ("C:\WORK\Embedded Workbench 6.5\stm8\inc\*.h") do awk -f 1.awk "%%f" > %%~nf%%~xf
