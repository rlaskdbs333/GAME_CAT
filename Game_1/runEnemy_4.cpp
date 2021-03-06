#pragma once
#include "runEnemy_4.h"
#include "global.h"

RunEnemy_4::RunEnemy_4()
{
	//posX = WINDOW_WIDTH;
	posY = BOTTOM_Y - RUN_ENEMY1_HEIGHT;
	isDead = false;
	radious = 0;
	classType = 0;
	//speed = 30;

	width = RUN_ENEMY4_WIDTH;
	height = RUN_ENEMY4_HEIGHT;
}

void RunEnemy_4::Render()
{
	TextureElement* element = textureManager.GetTexture(RUN_ENEMY4);
	element->g_pSprite->Begin(D3DXSPRITE_ALPHABLEND);

	RECT rc;
	rc.left = 0;
	rc.top = 0;
	rc.right = RUN_ENEMY4_WIDTH;
	rc.bottom = RUN_ENEMY4_HEIGHT;

	D3DXVECTOR3 pos(posX, posY, 0);
	//D3DXVECTOR3 cen(RUN_ENEMY1_WIDTH / 2, RUN_ENEMY1_HEIGHT / 2, 0);

	element->g_pSprite->Draw(element->g_Texture, &rc, nullptr, &pos, D3DCOLOR_XRGB(255, 255, 255));
	element->g_pSprite->End();
}

void RunEnemy_4::Update()
{
	if (!gameEntityManager.runPlayer->getIsDead())
	{
		posX -= speed;
	}

}

