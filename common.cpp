#include "stdafx.h"
#include "common.h"
int EquipmentType = TESTTYPE_ZHUJI;// ;//zhj add V1.01


/*V1.01 ����ṩ��Ħ���հ�������޸�
1����ԭ��Ħ����ײ���������������ϳ�һ������
2��Ϊ��Ӧ800*600����Ļ����������������޸�
3��ȡ����d�̱������ݵĹ���
4��������԰���PlcͨѶ������
��Ҫ��������⣺�����ſ��ź�û�ҵ����Ҳ���ԭ�� ��ʱȡ���˹���
V1.03  20170301�����ֱ�
1�����������������Ŵ���(plc�����Ѿ��������������˴���)
2��������ͨ��mocha.ini�ж���Ħ������ײ���Ĺ��ܣ�ֻ�ñ���һ�ο���ͬʱӦ�õ�Ħ����ײ��
3����������ֵ�ĳ���ʾ1λС�������ĺ���Ҫ��������������Ч
4��ײ����װ��������������Ϊ5��10����
�����趨��λ��ԭ����δ�ҵ�
V1.04 
1���޸�Ħ��ʵʱ�߶�û�г���10��bug
2��������������ʱ�Գ���һ��  ��PLCд��ʧ�ܣ���ַ��D000000��д����λ���ִ��󣩣����ظ����ִ����⣩
V1.05 ������PLCд��ʧ�ܣ���ַ��D000000��д�������¼
      ��С��ⱨ�桢�������ڴ�С
	  ����������⣺�������ݷ�ʽ�������Ҳ��������ļ������ļ��������ļ�û������
V1.06 
*/