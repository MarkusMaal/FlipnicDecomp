#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001f4140
// Address: 0x1f4140 - 0x1f4360
void entry_001f4140_0x1f4140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4140_0x1f4140");
#endif

    switch (ctx->pc) {
        case 0x1f4140u: goto label_1f4140;
        case 0x1f4144u: goto label_1f4144;
        case 0x1f4148u: goto label_1f4148;
        case 0x1f414cu: goto label_1f414c;
        case 0x1f4150u: goto label_1f4150;
        case 0x1f4154u: goto label_1f4154;
        case 0x1f4158u: goto label_1f4158;
        case 0x1f415cu: goto label_1f415c;
        case 0x1f4160u: goto label_1f4160;
        case 0x1f4164u: goto label_1f4164;
        case 0x1f4168u: goto label_1f4168;
        case 0x1f416cu: goto label_1f416c;
        case 0x1f4170u: goto label_1f4170;
        case 0x1f4174u: goto label_1f4174;
        case 0x1f4178u: goto label_1f4178;
        case 0x1f417cu: goto label_1f417c;
        case 0x1f4180u: goto label_1f4180;
        case 0x1f4184u: goto label_1f4184;
        case 0x1f4188u: goto label_1f4188;
        case 0x1f418cu: goto label_1f418c;
        case 0x1f4190u: goto label_1f4190;
        case 0x1f4194u: goto label_1f4194;
        case 0x1f4198u: goto label_1f4198;
        case 0x1f419cu: goto label_1f419c;
        case 0x1f41a0u: goto label_1f41a0;
        case 0x1f41a4u: goto label_1f41a4;
        case 0x1f41a8u: goto label_1f41a8;
        case 0x1f41acu: goto label_1f41ac;
        case 0x1f41b0u: goto label_1f41b0;
        case 0x1f41b4u: goto label_1f41b4;
        case 0x1f41b8u: goto label_1f41b8;
        case 0x1f41bcu: goto label_1f41bc;
        case 0x1f41c0u: goto label_1f41c0;
        case 0x1f41c4u: goto label_1f41c4;
        case 0x1f41c8u: goto label_1f41c8;
        case 0x1f41ccu: goto label_1f41cc;
        case 0x1f41d0u: goto label_1f41d0;
        case 0x1f41d4u: goto label_1f41d4;
        case 0x1f41d8u: goto label_1f41d8;
        case 0x1f41dcu: goto label_1f41dc;
        case 0x1f41e0u: goto label_1f41e0;
        case 0x1f41e4u: goto label_1f41e4;
        case 0x1f41e8u: goto label_1f41e8;
        case 0x1f41ecu: goto label_1f41ec;
        case 0x1f41f0u: goto label_1f41f0;
        case 0x1f41f4u: goto label_1f41f4;
        case 0x1f41f8u: goto label_1f41f8;
        case 0x1f41fcu: goto label_1f41fc;
        case 0x1f4200u: goto label_1f4200;
        case 0x1f4204u: goto label_1f4204;
        case 0x1f4208u: goto label_1f4208;
        case 0x1f420cu: goto label_1f420c;
        case 0x1f4210u: goto label_1f4210;
        case 0x1f4214u: goto label_1f4214;
        case 0x1f4218u: goto label_1f4218;
        case 0x1f421cu: goto label_1f421c;
        case 0x1f4220u: goto label_1f4220;
        case 0x1f4224u: goto label_1f4224;
        case 0x1f4228u: goto label_1f4228;
        case 0x1f422cu: goto label_1f422c;
        case 0x1f4230u: goto label_1f4230;
        case 0x1f4234u: goto label_1f4234;
        case 0x1f4238u: goto label_1f4238;
        case 0x1f423cu: goto label_1f423c;
        case 0x1f4240u: goto label_1f4240;
        case 0x1f4244u: goto label_1f4244;
        case 0x1f4248u: goto label_1f4248;
        case 0x1f424cu: goto label_1f424c;
        case 0x1f4250u: goto label_1f4250;
        case 0x1f4254u: goto label_1f4254;
        case 0x1f4258u: goto label_1f4258;
        case 0x1f425cu: goto label_1f425c;
        case 0x1f4260u: goto label_1f4260;
        case 0x1f4264u: goto label_1f4264;
        case 0x1f4268u: goto label_1f4268;
        case 0x1f426cu: goto label_1f426c;
        case 0x1f4270u: goto label_1f4270;
        case 0x1f4274u: goto label_1f4274;
        case 0x1f4278u: goto label_1f4278;
        case 0x1f427cu: goto label_1f427c;
        case 0x1f4280u: goto label_1f4280;
        case 0x1f4284u: goto label_1f4284;
        case 0x1f4288u: goto label_1f4288;
        case 0x1f428cu: goto label_1f428c;
        case 0x1f4290u: goto label_1f4290;
        case 0x1f4294u: goto label_1f4294;
        case 0x1f4298u: goto label_1f4298;
        case 0x1f429cu: goto label_1f429c;
        case 0x1f42a0u: goto label_1f42a0;
        case 0x1f42a4u: goto label_1f42a4;
        case 0x1f42a8u: goto label_1f42a8;
        case 0x1f42acu: goto label_1f42ac;
        case 0x1f42b0u: goto label_1f42b0;
        case 0x1f42b4u: goto label_1f42b4;
        case 0x1f42b8u: goto label_1f42b8;
        case 0x1f42bcu: goto label_1f42bc;
        case 0x1f42c0u: goto label_1f42c0;
        case 0x1f42c4u: goto label_1f42c4;
        case 0x1f42c8u: goto label_1f42c8;
        case 0x1f42ccu: goto label_1f42cc;
        case 0x1f42d0u: goto label_1f42d0;
        case 0x1f42d4u: goto label_1f42d4;
        case 0x1f42d8u: goto label_1f42d8;
        case 0x1f42dcu: goto label_1f42dc;
        case 0x1f42e0u: goto label_1f42e0;
        case 0x1f42e4u: goto label_1f42e4;
        case 0x1f42e8u: goto label_1f42e8;
        case 0x1f42ecu: goto label_1f42ec;
        case 0x1f42f0u: goto label_1f42f0;
        case 0x1f42f4u: goto label_1f42f4;
        case 0x1f42f8u: goto label_1f42f8;
        case 0x1f42fcu: goto label_1f42fc;
        case 0x1f4300u: goto label_1f4300;
        case 0x1f4304u: goto label_1f4304;
        case 0x1f4308u: goto label_1f4308;
        case 0x1f430cu: goto label_1f430c;
        case 0x1f4310u: goto label_1f4310;
        case 0x1f4314u: goto label_1f4314;
        case 0x1f4318u: goto label_1f4318;
        case 0x1f431cu: goto label_1f431c;
        case 0x1f4320u: goto label_1f4320;
        case 0x1f4324u: goto label_1f4324;
        case 0x1f4328u: goto label_1f4328;
        case 0x1f432cu: goto label_1f432c;
        case 0x1f4330u: goto label_1f4330;
        case 0x1f4334u: goto label_1f4334;
        case 0x1f4338u: goto label_1f4338;
        case 0x1f433cu: goto label_1f433c;
        case 0x1f4340u: goto label_1f4340;
        case 0x1f4344u: goto label_1f4344;
        case 0x1f4348u: goto label_1f4348;
        case 0x1f434cu: goto label_1f434c;
        case 0x1f4350u: goto label_1f4350;
        case 0x1f4354u: goto label_1f4354;
        case 0x1f4358u: goto label_1f4358;
        case 0x1f435cu: goto label_1f435c;
        default: break;
    }

    ctx->pc = 0x1f4140u;

label_1f4140:
    // 0x1f4140: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x1f4140u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_1f4144:
    // 0x1f4144: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x1f4144u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_1f4148:
    // 0x1f4148: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x1f4148u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
label_1f414c:
    // 0x1f414c: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x1f414cu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_1f4150:
    // 0x1f4150: 0x40f  sync.p
    ctx->pc = 0x1f4150u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1f4154:
    // 0x1f4154: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f4154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1f4158:
    // 0x1f4158: 0x8c421068  lw          $v0, 0x1068($v0)
    ctx->pc = 0x1f4158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4200)));
label_1f415c:
    // 0x1f415c: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x1f415cu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
label_1f4160:
    // 0x1f4160: 0x40f  sync.p
    ctx->pc = 0x1f4160u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1f4164:
    // 0x1f4164: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f4164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1f4168:
    // 0x1f4168: 0xdc421040  ld          $v0, 0x1040($v0)
    ctx->pc = 0x1f4168u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4160)));
label_1f416c:
    // 0x1f416c: 0x400011  mthi        $v0
    ctx->pc = 0x1f416cu;
    ctx->hi = GPR_U64(ctx, 2);
label_1f4170:
    // 0x1f4170: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f4170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1f4174:
    // 0x1f4174: 0xdc421048  ld          $v0, 0x1048($v0)
    ctx->pc = 0x1f4174u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4168)));
label_1f4178:
    // 0x1f4178: 0x70400011  mthi1       $v0
    ctx->pc = 0x1f4178u;
    ctx->hi1 = GPR_U64(ctx, 2);
label_1f417c:
    // 0x1f417c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f417cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1f4180:
    // 0x1f4180: 0xdc421050  ld          $v0, 0x1050($v0)
    ctx->pc = 0x1f4180u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4176)));
label_1f4184:
    // 0x1f4184: 0x400013  mtlo        $v0
    ctx->pc = 0x1f4184u;
    ctx->lo = GPR_U64(ctx, 2);
label_1f4188:
    // 0x1f4188: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f4188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1f418c:
    // 0x1f418c: 0xdc421058  ld          $v0, 0x1058($v0)
    ctx->pc = 0x1f418cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4184)));
label_1f4190:
    // 0x1f4190: 0x70400013  mtlo1       $v0
    ctx->pc = 0x1f4190u;
    ctx->lo1 = GPR_U64(ctx, 2);
label_1f4194:
    // 0x1f4194: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f4194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1f4198:
    // 0x1f4198: 0xdc421060  ld          $v0, 0x1060($v0)
    ctx->pc = 0x1f4198u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4192)));
label_1f419c:
    // 0x1f419c: 0x400029  mtsa        $v0
    ctx->pc = 0x1f419cu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_1f41a0:
    // 0x1f41a0: 0x40f  sync.p
    ctx->pc = 0x1f41a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1f41a4:
    // 0x1f41a4: 0x3c1a0039  lui         $k0, 0x39
    ctx->pc = 0x1f41a4u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)57 << 16));
label_1f41a8:
    // 0x1f41a8: 0x275a0e40  addiu       $k0, $k0, 0xE40
    ctx->pc = 0x1f41a8u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 3648));
label_1f41ac:
    // 0x1f41ac: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x1f41acu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 26), 16)));
label_1f41b0:
    // 0x1f41b0: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x1f41b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 26), 32)));
label_1f41b4:
    // 0x1f41b4: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x1f41b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 26), 48)));
label_1f41b8:
    // 0x1f41b8: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x1f41b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 26), 64)));
label_1f41bc:
    // 0x1f41bc: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x1f41bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 26), 80)));
label_1f41c0:
    // 0x1f41c0: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x1f41c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 26), 96)));
label_1f41c4:
    // 0x1f41c4: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x1f41c4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 26), 112)));
label_1f41c8:
    // 0x1f41c8: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x1f41c8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 26), 128)));
label_1f41cc:
    // 0x1f41cc: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x1f41ccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 26), 144)));
label_1f41d0:
    // 0x1f41d0: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x1f41d0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 26), 160)));
label_1f41d4:
    // 0x1f41d4: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x1f41d4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 26), 176)));
label_1f41d8:
    // 0x1f41d8: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x1f41d8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 26), 192)));
label_1f41dc:
    // 0x1f41dc: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x1f41dcu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 26), 208)));
label_1f41e0:
    // 0x1f41e0: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x1f41e0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 26), 224)));
label_1f41e4:
    // 0x1f41e4: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x1f41e4u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 26), 240)));
label_1f41e8:
    // 0x1f41e8: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x1f41e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 26), 256)));
label_1f41ec:
    // 0x1f41ec: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x1f41ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 272)));
label_1f41f0:
    // 0x1f41f0: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x1f41f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 288)));
label_1f41f4:
    // 0x1f41f4: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x1f41f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 26), 304)));
label_1f41f8:
    // 0x1f41f8: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x1f41f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 26), 320)));
label_1f41fc:
    // 0x1f41fc: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x1f41fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 26), 336)));
label_1f4200:
    // 0x1f4200: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x1f4200u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 26), 352)));
label_1f4204:
    // 0x1f4204: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x1f4204u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 26), 368)));
label_1f4208:
    // 0x1f4208: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x1f4208u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 26), 384)));
label_1f420c:
    // 0x1f420c: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x1f420cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 26), 400)));
label_1f4210:
    // 0x1f4210: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x1f4210u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 26), 448)));
label_1f4214:
    // 0x1f4214: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x1f4214u;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 26), 464)));
label_1f4218:
    // 0x1f4218: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x1f4218u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 26), 480)));
label_1f421c:
    // 0x1f421c: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x1f421cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 26), 496)));
label_1f4220:
    // 0x1f4220: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x1f4220u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
label_1f4224:
    // 0x1f4224: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x1f4224u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)19);
label_1f4228:
    // 0x1f4228: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x1f4228u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
label_1f422c:
    // 0x1f422c: 0x40f  sync.p
    ctx->pc = 0x1f422cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1f4230:
    // 0x1f4230: 0x42000018  eret
    ctx->pc = 0x1f4230u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_1f4234:
    // 0x1f4234: 0x0  nop
    ctx->pc = 0x1f4234u;
    // NOP
label_1f4238:
    // 0x1f4238: 0x0  nop
    ctx->pc = 0x1f4238u;
    // NOP
label_1f423c:
    // 0x1f423c: 0x0  nop
    ctx->pc = 0x1f423cu;
    // NOP
label_1f4240:
    // 0x1f4240: 0x3c1a0039  lui         $k0, 0x39
    ctx->pc = 0x1f4240u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)57 << 16));
label_1f4244:
    // 0x1f4244: 0x275a0e40  addiu       $k0, $k0, 0xE40
    ctx->pc = 0x1f4244u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 3648));
label_1f4248:
    // 0x1f4248: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x1f4248u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_1f424c:
    // 0x1f424c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x1f424cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_1f4250:
    // 0x1f4250: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x1f4250u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_1f4254:
    // 0x1f4254: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x1f4254u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_1f4258:
    // 0x1f4258: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x1f4258u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_1f425c:
    // 0x1f425c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x1f425cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_1f4260:
    // 0x1f4260: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x1f4260u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_1f4264:
    // 0x1f4264: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x1f4264u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_1f4268:
    // 0x1f4268: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x1f4268u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_1f426c:
    // 0x1f426c: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x1f426cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_1f4270:
    // 0x1f4270: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x1f4270u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_1f4274:
    // 0x1f4274: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x1f4274u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_1f4278:
    // 0x1f4278: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x1f4278u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_1f427c:
    // 0x1f427c: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x1f427cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_1f4280:
    // 0x1f4280: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x1f4280u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_1f4284:
    // 0x1f4284: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x1f4284u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_1f4288:
    // 0x1f4288: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x1f4288u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_1f428c:
    // 0x1f428c: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x1f428cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_1f4290:
    // 0x1f4290: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x1f4290u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_1f4294:
    // 0x1f4294: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x1f4294u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_1f4298:
    // 0x1f4298: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x1f4298u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_1f429c:
    // 0x1f429c: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x1f429cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_1f42a0:
    // 0x1f42a0: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x1f42a0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_1f42a4:
    // 0x1f42a4: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x1f42a4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_1f42a8:
    // 0x1f42a8: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x1f42a8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_1f42ac:
    // 0x1f42ac: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x1f42acu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_1f42b0:
    // 0x1f42b0: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x1f42b0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_1f42b4:
    // 0x1f42b4: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x1f42b4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_1f42b8:
    // 0x1f42b8: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x1f42b8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_1f42bc:
    // 0x1f42bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1f42bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f42c0:
    // 0x1f42c0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1f42c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1f42c4:
    // 0x1f42c4: 0xfc221040  sd          $v0, 0x1040($at)
    ctx->pc = 0x1f42c4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4160), GPR_U64(ctx, 2));
label_1f42c8:
    // 0x1f42c8: 0x70001010  mfhi1       $v0
    ctx->pc = 0x1f42c8u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_1f42cc:
    // 0x1f42cc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1f42ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1f42d0:
    // 0x1f42d0: 0xfc221048  sd          $v0, 0x1048($at)
    ctx->pc = 0x1f42d0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4168), GPR_U64(ctx, 2));
label_1f42d4:
    // 0x1f42d4: 0x1012  mflo        $v0
    ctx->pc = 0x1f42d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1f42d8:
    // 0x1f42d8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1f42d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1f42dc:
    // 0x1f42dc: 0xfc221050  sd          $v0, 0x1050($at)
    ctx->pc = 0x1f42dcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4176), GPR_U64(ctx, 2));
label_1f42e0:
    // 0x1f42e0: 0x70001012  mflo1       $v0
    ctx->pc = 0x1f42e0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_1f42e4:
    // 0x1f42e4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1f42e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1f42e8:
    // 0x1f42e8: 0xfc221058  sd          $v0, 0x1058($at)
    ctx->pc = 0x1f42e8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4184), GPR_U64(ctx, 2));
label_1f42ec:
    // 0x1f42ec: 0x1028  mfsa        $v0
    ctx->pc = 0x1f42ecu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_1f42f0:
    // 0x1f42f0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1f42f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1f42f4:
    // 0x1f42f4: 0xfc221060  sd          $v0, 0x1060($at)
    ctx->pc = 0x1f42f4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4192), GPR_U64(ctx, 2));
label_1f42f8:
    // 0x1f42f8: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x1f42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_1f42fc:
    // 0x1f42fc: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x1f42fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_1f4300:
    // 0x1f4300: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x1f4300u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_1f4304:
    // 0x1f4304: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x1f4304u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_1f4308:
    // 0x1f4308: 0x4008b800  mfc0        $t0, Reserved23
    ctx->pc = 0x1f4308u;
    SET_GPR_S32(ctx, 8, (int32_t)ctx->cop0_badpaddr);
label_1f430c:
    // 0x1f430c: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f430cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
label_1f4310:
    // 0x1f4310: 0x25290e40  addiu       $t1, $t1, 0xE40
    ctx->pc = 0x1f4310u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3648));
label_1f4314:
    // 0x1f4314: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1f4314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_1f4318:
    // 0x1f4318: 0x2421433c  addiu       $at, $at, 0x433C
    ctx->pc = 0x1f4318u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 17212));
label_1f431c:
    // 0x1f431c: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x1f431cu;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_1f4320:
    // 0x1f4320: 0x40f  sync.p
    ctx->pc = 0x1f4320u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1f4324:
    // 0x1f4324: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x1f4324u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_1f4328:
    // 0x1f4328: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1f4328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1f432c:
    // 0x1f432c: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x1f432cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_1f4330:
    // 0x1f4330: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x1f4330u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_1f4334:
    // 0x1f4334: 0x40f  sync.p
    ctx->pc = 0x1f4334u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1f4338:
    // 0x1f4338: 0x42000018  eret
    ctx->pc = 0x1f4338u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_1f433c:
    // 0x1f433c: 0x30a2007c  andi        $v0, $a1, 0x7C
    ctx->pc = 0x1f433cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)124);
label_1f4340:
    // 0x1f4340: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1f4340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1f4344:
    // 0x1f4344: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1f4344u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1f4348:
    // 0x1f4348: 0x8c21a7c0  lw          $at, -0x5840($at)
    ctx->pc = 0x1f4348u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294944704)));
label_1f434c:
    // 0x1f434c: 0x3c1d0039  lui         $sp, 0x39
    ctx->pc = 0x1f434cu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)57 << 16));
label_1f4350:
    // 0x1f4350: 0x20f809  jalr        $at
label_1f4354:
    if (ctx->pc == 0x1F4354u) {
        ctx->pc = 0x1F4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4350u;
        // 0x1f4354: 0x27bd0e40  addiu       $sp, $sp, 0xE40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4358u;
        goto label_1f4358;
    }
    ctx->pc = 0x1F4350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x1F4358u);
        ctx->pc = 0x1F4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4350u;
        // 0x1f4354: 0x27bd0e40  addiu       $sp, $sp, 0xE40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3648));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4350u, 0x1F4358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4358u;
label_1f4358:
    // 0x1f4358: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x1f4358u;
    runtime->handleBreak(rdram, ctx);
label_1f435c:
    // 0x1f435c: 0x0  nop
    ctx->pc = 0x1f435cu;
    // NOP
    ctx->pc = 0x1f4360u;
}
