#pragma once

#include "../HeaderFile/Game.h"



class CScene
{
private:

	CScene();
	~CScene();

private:
	friend class CSceneManager;


	//private:
		/*
		1. 몬스터 정보
		2. 플레이어 정보
		3. 지형 정보 저장
		*/

private:
	// ( false : 화면 비활성화 , true : 화면 활성화 )
	// 화면에 대한 활성화 정보 입니다. 
	GLboolean m_bEnable = false;

private:
	class CCamera*	m_Camera;
	class CLight*	m_Light;
	class CAxis*	m_Axis;


// **************************************
// Test For Load OBJ File Render !! 
// **************************************
private:
	class CAirplane* m_Airplane;
	class CMonster* m_Monster;
	class CBackground* m_Background;
	
	
	class CFloor* m_Floor[4]; // Floor 을 4개 생성하고 각 (1~4)사분면에 배치 
	class CFloor* m_Floor_test;
	class CTriangle* m_triangle;



public:
	bool GetEnable()
	{
		return m_bEnable;
	}
	void SetEnable(bool enable)
	{
		m_bEnable = enable;
	}

public:
	void UpdateProjectionMat();
	void UpdateOrthoMat();


public:
	void Init_MainStage(SCENE_TYPE type);
	void Init_BeginStage(SCENE_TYPE type);
	void Init_EndStage(SCENE_TYPE type);


	bool Init(SCENE_TYPE type);

	void Input(float fDeltaTime);					// * 입력
	int Update(float fDeltaTime);					// * 업데이트
	int LateUpdate(float fDeltaTime);				// * 업데이트 후처리
	void Collision(float fDeltaTime);				// * 충돌
	void Render(float fDeltaTime);					// * 출력


};

