	.set BGM_AQUA, 419
	.set BGM_MAGMA, 441

	.ifdef SAPPHIRE
	.set BGM_EVIL_TEAM, BGM_AQUA
	.set BGM_GOOD_TEAM, BGM_MAGMA
	.else
	.set BGM_EVIL_TEAM, BGM_MAGMA
	.set BGM_GOOD_TEAM, BGM_AQUA
	.endc
