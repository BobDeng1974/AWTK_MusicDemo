#ifndef _AUDIO_H
#define _AUDIO_H

#include <awtk.h>

BEGIN_C_DECLS

int print(void);
void Zplay_Create(void);
int Zplay_Destroy(void);
void Zplay_GetError(void);
int Zplay_OpenFile(char* filename);
int Zplay_CloseFile(void);
int Zplay_Play(void);
int Zplay_Pause(void);
int Zplay_GetPlayStatus(void);
int Zplay_GetPosition(void);
int Zplay_GetTimeLength(void);
int Zplay_Seek(int seek_time);

int Zplay_SetEquailzerPoints(void);
void Zplay_GetEquailzerPoints(void);
int Zplay_SetEqualizerParam(int* nBandGain, int nNumOfBands);
int Zplay_GetEqualizerParam(int* nBandGain, int nNumOfBands);
int Zplay_Enable(int nEnable);

int Zplay_SetPitch(unsigned int nPitch);
unsigned int Zplay_GetPitch(void);
int Zplay_SetRate(unsigned int nRata);
unsigned int Zplay_GetRate(void);
int Zplay_SetTempo(unsigned int nTempo);
unsigned int Zplay_GetTempo(void);
int Zplay_SetPlayerVolume(unsigned int Vol);
unsigned int Zplay_GetPlayerVolume(void);

END_C_DECLS

#endif // !_AUDIO_H