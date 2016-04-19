
#include "../includes/fdf.h"



static void	ft_roll_face_color1(t_env *env, int key_code)
{
	if (key_code == 101)
		env->color = 0xeeeeee;
	if (key_code == 97)
		env->color = 0xff6698;
	if (key_code == 100)
		env->color = 0xffff66;
	if (key_code == 102)
		env->color = 0xfa8072;
	if (key_code == 99)
		env->color = 0xff4444;
	if (key_code == 98)
		env->color = 0xdd8a0a;
}
	
static void	ft_roll_face_color2(t_env *env, int key_code)
{	
	if (key_code == 105)
		env->color = 0xffef99;
	if (key_code == 103)
		env->color = 0x00ff7f;
	if (key_code == 104)
		env->color = 0x35383b;
	if (key_code == 106)
		env->color = 0x4e5154;
	if (key_code == 107)
		env->color = 0x1f4b71;
	if (key_code == 108)
		env->color = 0xd382d8;
	if (key_code == 111)
		env->color = 0x230b2f;
	if (key_code == 110)
		env->color = 0x4f3c2e;
	if (key_code == 109)
		env->color = 0xdcdcdc;
}

static void	ft_roll_face_color3(t_env *env, int key_code)
{
	if (key_code == 113)
		env->color = 0xc5d8d5;
	if (key_code == 119)
		env->color = 0xcdf3fe;
	if (key_code == 114)
		env->color = 0xffe4el;
	if (key_code == 116)
		env->color = 0xe7c3f9;
	if (key_code == 121)
		env->color = 0xd7eff2;
	if (key_code == 117)
		env->color = 0xeff95e;
	if (key_code == 115)
		env->color = 0xff8890;
	if (key_code == 122)
		env->color = 0xc5405b;
	if (key_code == 120)
		env->color = 0x00b159;
	if (key_code == 118)
		env->color = 0xffd700;
	if (key_code == 112)
		env->color = 0xb23aee;
}

void	ft_roll_face_color(t_env *env, int key_code)
{
	if (key_code > 96 && key_code < 103)
		ft_roll_face_color1(env, key_code);
	else if (key_code > 102 && key_code < 112)
		ft_roll_face_color2(env, key_code);
	else
		ft_roll_face_color3(env, key_code);
}