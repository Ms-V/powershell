$internet_check_path = "HKLM:\SYSTEM\CurrentControlSet\Services\NlaSvc\Parameters\Internet"
Set-ItemProperty -Path $internet_check_path -Name ActiveWebProbeContent -Value "Microsoft NCSI"
Set-ItemProperty -Path $internet_check_path -Name ActiveWebProbeContentV6 -Value "Microsoft NCSI"
Set-ItemProperty -Path $internet_check_path -Name ActiveWebProbeHost -Value "www.msftncsi.com"
Set-ItemProperty -Path $internet_check_path -Name ActiveWebProbeHostV6 -Value "ipv6.msftncsi.com"
Set-ItemProperty -Path $internet_check_path -Name ActiveWebProbePath -Value "ncsi.txt"
Set-ItemProperty -Path $internet_check_path -Name ActiveWebProbePathV6 -Value "ncsi.txt"