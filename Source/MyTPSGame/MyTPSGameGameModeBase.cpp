// Copyright Epic Games, Inc. All Rights Reserved.


#include "MyTPSGameGameModeBase.h"
#include "MyTPSGame.h"
AMyTPSGameGameModeBase::AMyTPSGameGameModeBase() // 생성자 만드는법 A파일이름::A파일이름()  {}
{	// 생성자는 존재를 한번 만들어낼때, 언리얼을 한번 열때만 불린다. // CDO를 만들어서 붕어빵 만들듯이 찍어낸다.
	
	// 로그출력 Hello world	
	// UE_LOG(LogTemp, Warning, TEXT("안녕"));	
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *CALLINFO);

	// PRINT_CALLINFO();

	PRINT_LOG(TEXT("%s %s"),TEXT("hello"),TEXT("World!"));
}
				