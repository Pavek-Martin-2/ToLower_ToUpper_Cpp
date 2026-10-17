cls

$x="x"

for ( $aa = 1; $aa -le 10; $aa++ ) {
$x += [char]::ConvertFromUtf32(0x202F) # unicode znak narrow no-break space
}

$x += "x"

Write-Host -ForegroundColor Yellow $x
echo "to co je mezi x-kama je 10 znaku narrow no-break space U+202F"
echo "tzv. neviditelna mezera viz. screenshot"
echo $x.Length

$file = "out.txt"
Set-Content -Path $file -Encoding Unicode -Value $x

$unicode_znak = " "
#$unicode_znak = " " # obycejna mezera (32)

$a = [system.Text.Encoding]::UTF32.GetBytes($unicode_znak)
#echo $a.GetType()
echo "$a" # 4x8 bit=32bit  takze funkce UTF32.GetBytes(); ToUInt32() 
#echo $a.Length
echo $unicode_znak.Length

sleep 60

