#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getMotionEnergy(double w, double v);
int assignment0401(void);

int main(void)
{
	int r = assignment0401();

	return 0;
}

/*
* �Լ���:assignment()
* ���(å��): ����, �ӷ��� �Է¹���,��������� ����ϵ��� ȣ��, �� ����� �ֿܼ� ���
* �Է�:����
* ��ȯ: �����̸� 0�̸� ����, �� �� ���� �����̴�
*/
int assignment0401(void)
{
	// 1. ����, �ӵ� �Է� �޾� ����
	double w = 0.0; //���� kg
	double v = 0.0; //�ӷ� m/s
	printf("���� �ӵ��� �Է����ּ���: ");
	scanf("%lf %lf", &w, &v);


	// 2. ������� ���
	double result = getMotionEnergy(w, v);



	// 3.���� ������� ���
	printf("����=%.2f kg, �ӷ� %.2f m/s �� ��������� %.2f �Դϴ�.", w, v, result);
	return 0;

}

/*�Լ���:getMotionEnergy()
 ���:����, �ӷ� �Է¹޾� ��������� ����Ͽ� ��ȯ
* �Է�:����,�ӷ�
* ��ȯ:�������
 */

double getMotionEnergy(double w, double v)
{
	double energy = 0.0;

	//������=1/2*����*�ӵ�*�ӵ�
	energy = 1.0 / 2.0 * w * v * v;

	return energy;
}#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getMotionEnergy(double w, double v);
int assignment0401(void);

int main(void)
{
	int r = assignment0401();

	return 0;
}

/*
* �Լ���:assignment()
* ���(å��): ����, �ӷ��� �Է¹���,��������� ����ϵ��� ȣ��, �� ����� �ֿܼ� ���
* �Է�:����
* ��ȯ: �����̸� 0�̸� ����, �� �� ���� �����̴�
*/
int assignment0401(void)
{
	// 1. ����, �ӵ� �Է� �޾� ����
	double w = 0.0; //���� kg
	double v = 0.0; //�ӷ� m/s
	printf("���� �ӵ��� �Է����ּ���: ");
	scanf("%lf %lf", &w, &v);


	// 2. ������� ���
	double result = getMotionEnergy(w, v);



	// 3.���� ������� ���
	printf("����=%.2f kg, �ӷ� %.2f m/s �� ��������� %.2f �Դϴ�.", w, v, result);
	return 0;

}

/*�Լ���:getMotionEnergy()
 ���:����, �ӷ� �Է¹޾� ��������� ����Ͽ� ��ȯ
* �Է�:����,�ӷ�
* ��ȯ:�������
 */

double getMotionEnergy(double w, double v)
{
	double energy = 0.0;

	//������=1/2*����*�ӵ�*�ӵ�
	energy = 1.0 / 2.0 * w * v * v;

	return energy;
}