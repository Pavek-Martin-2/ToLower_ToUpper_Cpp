cls

# funkce ToUpper(),ToLower() zamena velikosti retezce

$male = "abcdefg"
$velke = "ABCDEFG"
$cislice = "1234567"
$znaky = ".,:;+=-"
$mix = "abCD12+=-"
Write-Host -ForegroundColor Yellow "$male.ToUpper()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Red $male.ToUpper()
Write-Host -ForegroundColor Yellow "$velke.ToUpper()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Red $velke.ToUpper()
Write-Host -ForegroundColor Yellow "$cislice.ToUpper()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Red $cislice.ToUpper()
Write-Host -ForegroundColor Yellow "$znaky.ToUpper()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Red $znaky.ToUpper()
Write-Host -ForegroundColor Cyan "$male.ToLower()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Magenta $male.ToLower()
Write-Host -ForegroundColor Cyan "$velke.ToLower()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Magenta $velke.ToLower()
Write-Host -ForegroundColor Cyan "$cislice.ToLower()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Magenta $cislice.ToLower()
Write-Host -ForegroundColor Cyan "$znaky.ToLower()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Magenta $znaky.ToLower()
Write-Host -ForegroundColor White "$mix.ToUpper()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Gray $mix.ToUpper()
Write-Host -ForegroundColor White "$mix.ToLower()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Gray $mix.ToLower()
sleep 10
