#include <stdio.h> 
int main()
{
	//�������ļ�������
	//fread�Ƕ�ȡ�������ļ��ĺ�����fwrite��д��������ļ��ĺ�����
	char kkk[60]={"96"};
	FILE *k;
	k=fopen("C:/Users/pc/Pictures/Camera Roll/sdf.jpg","rb");//��ȡ�������ļ�
	if(k==NULL) printf("�ļ���ʧ�ܡ�");
	else printf("�ļ��򿪳ɹ���"); 
	int x=fread(kkk,1,9,k);
	printf("��ȡ��%d�ֽڵ����ݣ�",x);
	printf("\n��ȡ������Ϊ��%d��%f��%s��%c��%p��%o��%x",kkk,kkk,kkk,kkk,kkk,kkk,kkk);
	int c=fclose(k);
	if(c==0) printf("\n�ļ��رճɹ���");
	else printf("\n�ļ��ر�ʧ�ܣ�");
	
	//���������ļ����У���д�������ļ��أ�Ϊʲô���������ļ�����?����֣������ļ�������ȷ�ġ�������Ǿ���·��ȴ�ᱨ������C:\Users\pc\Pictures\Camera Ro\ sss.jpg 

	/*
	 // ����1��ʹ����б�ܣ��Ƽ���
    k = fopen("C:/Users/pc/Pictures/Camera Ro/ sss.jpg", "rb");
    
    // ����2��ʹ��˫��б��
    // k = fopen("C:\\Users\\pc\\Pictures\\Camera Ro\\ sss.jpg", "rb");
    
    // ����3��ֻʹ���ļ������ļ������ڳ���ͬһĿ¼��
    // k = fopen("sdf.jpg", "rb");
	
	*/
	
	//�����Ϊʲô�ҵĶ�ȡ��ʧ�ܵ�ԭ����Ϊʹ���ļ����Ļ����ļ�����ͬ������ͬһĿ¼�� 
	printf("\n==================================================");
	//�ļ���ȡ�ɹ��ˣ��� 
	
	
	int write[60]={12,65,87,9};
	FILE *zhi;
	zhi=fopen("C:/Users/pc/Pictures/Camera Roll/ooda.jpg","wb");
	if(zhi==NULL) printf("\n�ļ�����ʧ�ܡ�");
	else printf("\n�ļ������ɹ���");
	fwrite(write,9,9,zhi);
	int obg=fclose(zhi);
	if(obg==0) printf("\n�ļ��رճɹ���"); 
	else printf("\n�ļ��ر�ʧ�ܡ�");
	return 0;
}
