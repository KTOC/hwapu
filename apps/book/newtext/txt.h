

/*
���ܣ����ļ�
���룺file�ļ�·��
���أ�0--���ɹ� 1--�ɹ�
*/
int txt_openfile(char *filename);
 
 
/*
���ܣ��ر�
����: ��
���أ���
*/
void txt_closefile();
 
/*
���ܣ����ļ���ƫ��offset����ȡ����Ϊlen���ı�

���룺offset �ļ�ƫ��

      buf  ����ַ�

      len ����ȡ�ĳ���

�����*len ʵ�ʻ�ȡ�ĳ���

���أ�-1 ���ļ���β

         0  ����
*/
int getText(unsigned long offset, char *buf,  int *len);

 

/*
���ܣ������ַ�ƫ�ƻ�ȡ�ֽ�ƫ��

���룺offsetƫ�ƣ�nChar�ַ�����

���أ��ֽ�ƫ��
*/
unsigned long getByteOffset(unsigned long offset, int nChar);

 

/*
���ܣ���offset��������ǰ/�����n������

���룺offset Ϊ��ʼλ�ã�nΪ��������������ǰ�ң������������ң�

���أ��¾��ӵ�ƫ�ƣ� Ϊ0xffffffff��ʾδ�ҵ�
*/
unsigned long skipSentences(unsigned long offset, int n);

 

/*

���ܣ���offset����ǰ/�����n������

���룺offset Ϊ��ʼλ�ã�nΪ��������������ǰ�ң������������ң�

���أ���λ�õ�ƫ�ƣ� Ϊ0xffffffff��ʾδ�ҵ�

��ע���ú���ֻҪdoc,docx�ṩ
*/
unsigned long skipPara(unsigned long offset, int n);

unsigned long txtGetTotalSize(void);


