$win7 = "win7"
$win10ent = "win10ent key"
$win10pro = "win10ent pro"
$ver = Get-WmiObject -Class Win32_OperatingSystem | Select-Object -ExpandProperty Caption
if($ver -like "*Windows 10*" -and $ver -like "*רҵ��*")
{
    Write-Host "The os is "$ver "AKA Win10 pro.start inject key"
    slmgr -ipk $win10pro
    Write-Host "Start activation"
    slmgr -ato
    Read-Host
}
elseif($ver -like "*Windows 10*" -and $ver -like "*��ҵ��*")
{
    Write-Host "The os is "$ver "AKA Win10 Ent.start inject key"
    slmgr -ipk $win10pro
    Write-Host "Start activation"
    slmgr -ato
    Read-Host
}
elseif($ver -like "*Windows 7*")
{
    Write-Host "The os is "$ver "AKA Win7.start inject key"
    slmgr -ipk $win7
    Write-Host "Start activation"
    slmgr -ato
    Read-Host
}
else
{
    Write-Host "Error"
    Read-Host
}