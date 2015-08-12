#pragma once

#include "COMMSTRUCT.h"


class CDataProcess
{
public:
	CDataProcess(void);
	~CDataProcess(void);
public:
	void UnPackGPGGA( const string &data, GPGGA *pMsg );

	void UnPackGPVTG( const string &data, GPVTG *pMsg );

	///���λ��Ϣ
	void UnPackGPRMC( const string &data, GPRMC *pMsg );

    ///���λ�����ݷ��͸�����
	void PackGPRMC( const GPRMC *pMsg, const CURRENT_POINT * nextPT, string &data, int lineIndex =0 , int pointIndex = 0 );

	string GetPointString( int pointType, int pointIndex );
};