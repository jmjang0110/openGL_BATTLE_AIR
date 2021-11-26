#include "SceneManager.h"
#include "Scene.h"



DEFINITION_SINGLE(CSceneManager);


CSceneManager::CSceneManager()
{
	m_Scene_Begin = nullptr;
	m_Scene_End = nullptr;
	m_Scene_MainStage = nullptr;


}

CSceneManager::~CSceneManager()
{

	if (m_Scene_Begin == nullptr)
		delete m_Scene_Begin;

	if (m_Scene_MainStage == nullptr)
		delete m_Scene_MainStage;

	if (m_Scene_End == nullptr)
		delete m_Scene_End;


}

bool CSceneManager::Init()
{

	if (m_Scene_Begin == nullptr)
		m_Scene_Begin = new CScene;
	m_Scene_Begin->Init();


	if (m_Scene_MainStage == nullptr)
		m_Scene_MainStage = new CScene;
	m_Scene_MainStage->Init();

	if (m_Scene_End == nullptr)
		m_Scene_End = new CScene;
	m_Scene_End->Init();



	return true;

}

void CSceneManager::Input(float fDeltaTime)
{
	// Scene�� Ȱ��ȭ TRUE �ΰ͸� �����մϴ�. 
	if (m_Scene_Begin->GetEnable() == true)
		m_Scene_Begin->Input(fDeltaTime);
	
	else if (m_Scene_MainStage->GetEnable() == true)
		m_Scene_MainStage->Input(fDeltaTime);
	
	else if (m_Scene_End->GetEnable() == true)
		m_Scene_End->Input(fDeltaTime);



}

int CSceneManager::Update(float fDeltaTime)
{
	// Scene�� Ȱ��ȭ TRUE �ΰ͸� �����մϴ�. 
	if (m_Scene_Begin->GetEnable() == true)
		m_Scene_Begin->Update(fDeltaTime);

	else if (m_Scene_MainStage->GetEnable() == true)
		m_Scene_MainStage->Update(fDeltaTime);

	else if (m_Scene_End->GetEnable() == true)
		m_Scene_End->Update(fDeltaTime);

	return 0;
}

int CSceneManager::LateUpdate(float fDeltaTime)
{
	// Scene�� Ȱ��ȭ TRUE �ΰ͸� �����մϴ�. 
	if (m_Scene_Begin->GetEnable() == true)
		m_Scene_Begin->LateUpdate(fDeltaTime);

	else if (m_Scene_MainStage->GetEnable() == true)
		m_Scene_MainStage->LateUpdate(fDeltaTime);

	else if (m_Scene_End->GetEnable() == true)
		m_Scene_End->LateUpdate(fDeltaTime);

	return 0;
}

void CSceneManager::Collision(float fDeltaTime)
{
	// Scene�� Ȱ��ȭ TRUE �ΰ͸� �����մϴ�. 
	if (m_Scene_Begin->GetEnable() == true)
		m_Scene_Begin->Collision(fDeltaTime);

	else if (m_Scene_MainStage->GetEnable() == true)
		m_Scene_MainStage->Collision(fDeltaTime);

	else if (m_Scene_End->GetEnable() == true)
		m_Scene_End->Collision(fDeltaTime);


}

void CSceneManager::Render(float fDeltaTime)
{
	// Scene�� Ȱ��ȭ TRUE �ΰ͸� �����մϴ�. 
	if (m_Scene_Begin->GetEnable() == true)
		m_Scene_Begin->Render(fDeltaTime);

	else if (m_Scene_MainStage->GetEnable() == true)
		m_Scene_MainStage->Render(fDeltaTime);

	else if (m_Scene_End->GetEnable() == true)
		m_Scene_End->Render(fDeltaTime);


}