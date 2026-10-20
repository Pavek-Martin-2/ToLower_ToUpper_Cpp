cls

# funkce ToUpper(),ToLower() pokus z Unicode

$unicode_1 = "ěščřžýáíéůóň"
$unicode_2 = "ĚŠČŘŽÝÁÍÉŮÓŇ"
$unicode_3 = "ěŠčŘžÝáÍéŮóŇ"
$unicode_4 = "Příliš žluťoučký kůň úpěl ďábelské ódy"

Write-Host -ForegroundColor Yellow "$unicode_1.ToUpper()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Red $unicode_1.ToUpper()
Write-Host -ForegroundColor Cyan "$unicode_2.ToLower()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Magenta $unicode_2.ToLower()
Write-Host -ForegroundColor White "$unicode_3.ToUpper()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Gray $unicode_3.ToUpper()
Write-Host -ForegroundColor White "$unicode_3.ToLower()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Gray $unicode_3.ToLower()

Write-Host -ForegroundColor Yellow "$unicode_4.ToUpper()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Red $unicode_4.ToUpper()
Write-Host -ForegroundColor Cyan "$unicode_4.ToLower()" -NoNewline
Write-Host -ForegroundColor Green " -> " -NoNewline
Write-Host -ForegroundColor Magenta $unicode_4.ToLower()
sleep 10
