$testpath='D:\ftpshare'  #ָ��һ����Ŀ¼
foreach($filename in Get-ChildItem $testpath -name)#��ȡ��Ŀ¼����ļ������ļ�������
{
	if((New-TimeSpan -end (get-date (Get-Item $testpath\$filename).CreationTime -Format 'yyyy-MM-dd')).days -lt -7)#�ж����ļ����������Ƿ񳬹�7��(����-7��������ǰ����)
	{
		Remove-Item -Path $testpath\$filename -Recurse -Force #�ǵĻ���ɾ��
	}
}