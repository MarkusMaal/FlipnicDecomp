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

// Function: FUN_0013e250
// Address: 0x13e250 - 0x13e584
void FUN_0013e250_0x13e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013e250_0x13e250");
#endif

    switch (ctx->pc) {
        case 0x13e250u: goto label_13e250;
        case 0x13e254u: goto label_13e254;
        case 0x13e258u: goto label_13e258;
        case 0x13e25cu: goto label_13e25c;
        case 0x13e260u: goto label_13e260;
        case 0x13e264u: goto label_13e264;
        case 0x13e268u: goto label_13e268;
        case 0x13e26cu: goto label_13e26c;
        case 0x13e270u: goto label_13e270;
        case 0x13e274u: goto label_13e274;
        case 0x13e278u: goto label_13e278;
        case 0x13e27cu: goto label_13e27c;
        case 0x13e280u: goto label_13e280;
        case 0x13e284u: goto label_13e284;
        case 0x13e288u: goto label_13e288;
        case 0x13e28cu: goto label_13e28c;
        case 0x13e290u: goto label_13e290;
        case 0x13e294u: goto label_13e294;
        case 0x13e298u: goto label_13e298;
        case 0x13e29cu: goto label_13e29c;
        case 0x13e2a0u: goto label_13e2a0;
        case 0x13e2a4u: goto label_13e2a4;
        case 0x13e2a8u: goto label_13e2a8;
        case 0x13e2acu: goto label_13e2ac;
        case 0x13e2b0u: goto label_13e2b0;
        case 0x13e2b4u: goto label_13e2b4;
        case 0x13e2b8u: goto label_13e2b8;
        case 0x13e2bcu: goto label_13e2bc;
        case 0x13e2c0u: goto label_13e2c0;
        case 0x13e2c4u: goto label_13e2c4;
        case 0x13e2c8u: goto label_13e2c8;
        case 0x13e2ccu: goto label_13e2cc;
        case 0x13e2d0u: goto label_13e2d0;
        case 0x13e2d4u: goto label_13e2d4;
        case 0x13e2d8u: goto label_13e2d8;
        case 0x13e2dcu: goto label_13e2dc;
        case 0x13e2e0u: goto label_13e2e0;
        case 0x13e2e4u: goto label_13e2e4;
        case 0x13e2e8u: goto label_13e2e8;
        case 0x13e2ecu: goto label_13e2ec;
        case 0x13e2f0u: goto label_13e2f0;
        case 0x13e2f4u: goto label_13e2f4;
        case 0x13e2f8u: goto label_13e2f8;
        case 0x13e2fcu: goto label_13e2fc;
        case 0x13e300u: goto label_13e300;
        case 0x13e304u: goto label_13e304;
        case 0x13e308u: goto label_13e308;
        case 0x13e30cu: goto label_13e30c;
        case 0x13e310u: goto label_13e310;
        case 0x13e314u: goto label_13e314;
        case 0x13e318u: goto label_13e318;
        case 0x13e31cu: goto label_13e31c;
        case 0x13e320u: goto label_13e320;
        case 0x13e324u: goto label_13e324;
        case 0x13e328u: goto label_13e328;
        case 0x13e32cu: goto label_13e32c;
        case 0x13e330u: goto label_13e330;
        case 0x13e334u: goto label_13e334;
        case 0x13e338u: goto label_13e338;
        case 0x13e33cu: goto label_13e33c;
        case 0x13e340u: goto label_13e340;
        case 0x13e344u: goto label_13e344;
        case 0x13e348u: goto label_13e348;
        case 0x13e34cu: goto label_13e34c;
        case 0x13e350u: goto label_13e350;
        case 0x13e354u: goto label_13e354;
        case 0x13e358u: goto label_13e358;
        case 0x13e35cu: goto label_13e35c;
        case 0x13e360u: goto label_13e360;
        case 0x13e364u: goto label_13e364;
        case 0x13e368u: goto label_13e368;
        case 0x13e36cu: goto label_13e36c;
        case 0x13e370u: goto label_13e370;
        case 0x13e374u: goto label_13e374;
        case 0x13e378u: goto label_13e378;
        case 0x13e37cu: goto label_13e37c;
        case 0x13e380u: goto label_13e380;
        case 0x13e384u: goto label_13e384;
        case 0x13e388u: goto label_13e388;
        case 0x13e38cu: goto label_13e38c;
        case 0x13e390u: goto label_13e390;
        case 0x13e394u: goto label_13e394;
        case 0x13e398u: goto label_13e398;
        case 0x13e39cu: goto label_13e39c;
        case 0x13e3a0u: goto label_13e3a0;
        case 0x13e3a4u: goto label_13e3a4;
        case 0x13e3a8u: goto label_13e3a8;
        case 0x13e3acu: goto label_13e3ac;
        case 0x13e3b0u: goto label_13e3b0;
        case 0x13e3b4u: goto label_13e3b4;
        case 0x13e3b8u: goto label_13e3b8;
        case 0x13e3bcu: goto label_13e3bc;
        case 0x13e3c0u: goto label_13e3c0;
        case 0x13e3c4u: goto label_13e3c4;
        case 0x13e3c8u: goto label_13e3c8;
        case 0x13e3ccu: goto label_13e3cc;
        case 0x13e3d0u: goto label_13e3d0;
        case 0x13e3d4u: goto label_13e3d4;
        case 0x13e3d8u: goto label_13e3d8;
        case 0x13e3dcu: goto label_13e3dc;
        case 0x13e3e0u: goto label_13e3e0;
        case 0x13e3e4u: goto label_13e3e4;
        case 0x13e3e8u: goto label_13e3e8;
        case 0x13e3ecu: goto label_13e3ec;
        case 0x13e3f0u: goto label_13e3f0;
        case 0x13e3f4u: goto label_13e3f4;
        case 0x13e3f8u: goto label_13e3f8;
        case 0x13e3fcu: goto label_13e3fc;
        case 0x13e400u: goto label_13e400;
        case 0x13e404u: goto label_13e404;
        case 0x13e408u: goto label_13e408;
        case 0x13e40cu: goto label_13e40c;
        case 0x13e410u: goto label_13e410;
        case 0x13e414u: goto label_13e414;
        case 0x13e418u: goto label_13e418;
        case 0x13e41cu: goto label_13e41c;
        case 0x13e420u: goto label_13e420;
        case 0x13e424u: goto label_13e424;
        case 0x13e428u: goto label_13e428;
        case 0x13e42cu: goto label_13e42c;
        case 0x13e430u: goto label_13e430;
        case 0x13e434u: goto label_13e434;
        case 0x13e438u: goto label_13e438;
        case 0x13e43cu: goto label_13e43c;
        case 0x13e440u: goto label_13e440;
        case 0x13e444u: goto label_13e444;
        case 0x13e448u: goto label_13e448;
        case 0x13e44cu: goto label_13e44c;
        case 0x13e450u: goto label_13e450;
        case 0x13e454u: goto label_13e454;
        case 0x13e458u: goto label_13e458;
        case 0x13e45cu: goto label_13e45c;
        case 0x13e460u: goto label_13e460;
        case 0x13e464u: goto label_13e464;
        case 0x13e468u: goto label_13e468;
        case 0x13e46cu: goto label_13e46c;
        case 0x13e470u: goto label_13e470;
        case 0x13e474u: goto label_13e474;
        case 0x13e478u: goto label_13e478;
        case 0x13e47cu: goto label_13e47c;
        case 0x13e480u: goto label_13e480;
        case 0x13e484u: goto label_13e484;
        case 0x13e488u: goto label_13e488;
        case 0x13e48cu: goto label_13e48c;
        case 0x13e490u: goto label_13e490;
        case 0x13e494u: goto label_13e494;
        case 0x13e498u: goto label_13e498;
        case 0x13e49cu: goto label_13e49c;
        case 0x13e4a0u: goto label_13e4a0;
        case 0x13e4a4u: goto label_13e4a4;
        case 0x13e4a8u: goto label_13e4a8;
        case 0x13e4acu: goto label_13e4ac;
        case 0x13e4b0u: goto label_13e4b0;
        case 0x13e4b4u: goto label_13e4b4;
        case 0x13e4b8u: goto label_13e4b8;
        case 0x13e4bcu: goto label_13e4bc;
        case 0x13e4c0u: goto label_13e4c0;
        case 0x13e4c4u: goto label_13e4c4;
        case 0x13e4c8u: goto label_13e4c8;
        case 0x13e4ccu: goto label_13e4cc;
        case 0x13e4d0u: goto label_13e4d0;
        case 0x13e4d4u: goto label_13e4d4;
        case 0x13e4d8u: goto label_13e4d8;
        case 0x13e4dcu: goto label_13e4dc;
        case 0x13e4e0u: goto label_13e4e0;
        case 0x13e4e4u: goto label_13e4e4;
        case 0x13e4e8u: goto label_13e4e8;
        case 0x13e4ecu: goto label_13e4ec;
        case 0x13e4f0u: goto label_13e4f0;
        case 0x13e4f4u: goto label_13e4f4;
        case 0x13e4f8u: goto label_13e4f8;
        case 0x13e4fcu: goto label_13e4fc;
        case 0x13e500u: goto label_13e500;
        case 0x13e504u: goto label_13e504;
        case 0x13e508u: goto label_13e508;
        case 0x13e50cu: goto label_13e50c;
        case 0x13e510u: goto label_13e510;
        case 0x13e514u: goto label_13e514;
        case 0x13e518u: goto label_13e518;
        case 0x13e51cu: goto label_13e51c;
        case 0x13e520u: goto label_13e520;
        case 0x13e524u: goto label_13e524;
        case 0x13e528u: goto label_13e528;
        case 0x13e52cu: goto label_13e52c;
        case 0x13e530u: goto label_13e530;
        case 0x13e534u: goto label_13e534;
        case 0x13e538u: goto label_13e538;
        case 0x13e53cu: goto label_13e53c;
        case 0x13e540u: goto label_13e540;
        case 0x13e544u: goto label_13e544;
        case 0x13e548u: goto label_13e548;
        case 0x13e54cu: goto label_13e54c;
        case 0x13e550u: goto label_13e550;
        case 0x13e554u: goto label_13e554;
        case 0x13e558u: goto label_13e558;
        case 0x13e55cu: goto label_13e55c;
        case 0x13e560u: goto label_13e560;
        case 0x13e564u: goto label_13e564;
        case 0x13e568u: goto label_13e568;
        case 0x13e56cu: goto label_13e56c;
        case 0x13e570u: goto label_13e570;
        case 0x13e574u: goto label_13e574;
        case 0x13e578u: goto label_13e578;
        case 0x13e57cu: goto label_13e57c;
        case 0x13e580u: goto label_13e580;
        default: break;
    }

    ctx->pc = 0x13e250u;

label_13e250:
    // 0x13e250: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x13e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_13e254:
    // 0x13e254: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13e254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_13e258:
    // 0x13e258: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x13e258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_13e25c:
    // 0x13e25c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x13e25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_13e260:
    // 0x13e260: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x13e260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_13e264:
    // 0x13e264: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x13e264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_13e268:
    // 0x13e268: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13e268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e26c:
    // 0x13e26c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x13e26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_13e270:
    // 0x13e270: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13e270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_13e274:
    // 0x13e274: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13e274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_13e278:
    // 0x13e278: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13e278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_13e27c:
    // 0x13e27c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13e27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13e280:
    // 0x13e280: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x13e280u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_13e284:
    // 0x13e284: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13e284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13e288:
    // 0x13e288: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_13e28c:
    if (ctx->pc == 0x13E28Cu) {
        ctx->pc = 0x13E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E288u;
        // 0x13e28c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E290u;
        goto label_13e290;
    }
    ctx->pc = 0x13E288u;
    {
        const bool branch_taken_0x13e288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E288u;
        // 0x13e28c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e288) {
            ctx->pc = 0x13E2C0u;
            goto label_13e2c0;
        }
    }
    ctx->pc = 0x13E290u;
label_13e290:
    // 0x13e290: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13e290u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e294:
    // 0x13e294: 0x10000003  b           . + 4 + (0x3 << 2)
label_13e298:
    if (ctx->pc == 0x13E298u) {
        ctx->pc = 0x13E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E294u;
        // 0x13e298: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E29Cu;
        goto label_13e29c;
    }
    ctx->pc = 0x13E294u;
    {
        const bool branch_taken_0x13e294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E294u;
        // 0x13e298: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e294) {
            ctx->pc = 0x13E2A4u;
            goto label_13e2a4;
        }
    }
    ctx->pc = 0x13E29Cu;
label_13e29c:
    // 0x13e29c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x13e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_13e2a0:
    // 0x13e2a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13e2a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_13e2a4:
    // 0x13e2a4: 0x0  nop
    ctx->pc = 0x13e2a4u;
    // NOP
label_13e2a8:
    // 0x13e2a8: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x13e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_13e2ac:
    // 0x13e2ac: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x13e2acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13e2b0:
    // 0x13e2b0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_13e2b4:
    if (ctx->pc == 0x13E2B4u) {
        ctx->pc = 0x13E2B8u;
        goto label_13e2b8;
    }
    ctx->pc = 0x13E2B0u;
    {
        const bool branch_taken_0x13e2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e2b0) {
            ctx->pc = 0x13E29Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e29c;
        }
    }
    ctx->pc = 0x13E2B8u;
label_13e2b8:
    // 0x13e2b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_13e2bc:
    if (ctx->pc == 0x13E2BCu) {
        ctx->pc = 0x13E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2B8u;
        // 0x13e2bc: 0x2e820020  sltiu       $v0, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E2C0u;
        goto label_13e2c0;
    }
    ctx->pc = 0x13E2B8u;
    {
        const bool branch_taken_0x13e2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2B8u;
        // 0x13e2bc: 0x2e820020  sltiu       $v0, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2b8) {
            ctx->pc = 0x13E2D0u;
            goto label_13e2d0;
        }
    }
    ctx->pc = 0x13E2C0u;
label_13e2c0:
    // 0x13e2c0: 0xc080748  jal         func_201D20
label_13e2c4:
    if (ctx->pc == 0x13E2C4u) {
        ctx->pc = 0x13E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2C0u;
        // 0x13e2c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E2C8u;
        goto label_13e2c8;
    }
    ctx->pc = 0x13E2C0u;
    SET_GPR_U32(ctx, 31, 0x13E2C8u);
    ctx->pc = 0x13E2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E2C0u;
    // 0x13e2c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x13E2C0u, 0x13E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E2C8u;
label_13e2c8:
    // 0x13e2c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13e2c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e2cc:
    // 0x13e2cc: 0x2e820020  sltiu       $v0, $s4, 0x20
    ctx->pc = 0x13e2ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_13e2d0:
    // 0x13e2d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_13e2d4:
    if (ctx->pc == 0x13E2D4u) {
        ctx->pc = 0x13E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2D0u;
        // 0x13e2d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E2D8u;
        goto label_13e2d8;
    }
    ctx->pc = 0x13E2D0u;
    {
        const bool branch_taken_0x13e2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2D0u;
        // 0x13e2d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2d0) {
            ctx->pc = 0x13E2E0u;
            goto label_13e2e0;
        }
    }
    ctx->pc = 0x13E2D8u;
label_13e2d8:
    // 0x13e2d8: 0x1000009e  b           . + 4 + (0x9E << 2)
label_13e2dc:
    if (ctx->pc == 0x13E2DCu) {
        ctx->pc = 0x13E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2D8u;
        // 0x13e2dc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E2E0u;
        goto label_13e2e0;
    }
    ctx->pc = 0x13E2D8u;
    {
        const bool branch_taken_0x13e2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2D8u;
        // 0x13e2dc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2d8) {
            ctx->pc = 0x13E554u;
            goto label_13e554;
        }
    }
    ctx->pc = 0x13E2E0u;
label_13e2e0:
    // 0x13e2e0: 0x8ea201c0  lw          $v0, 0x1C0($s5)
    ctx->pc = 0x13e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 448)));
label_13e2e4:
    // 0x13e2e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_13e2e8:
    if (ctx->pc == 0x13E2E8u) {
        ctx->pc = 0x13E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2E4u;
        // 0x13e2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E2ECu;
        goto label_13e2ec;
    }
    ctx->pc = 0x13E2E4u;
    {
        const bool branch_taken_0x13e2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2E4u;
        // 0x13e2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2e4) {
            ctx->pc = 0x13E2F4u;
            goto label_13e2f4;
        }
    }
    ctx->pc = 0x13E2ECu;
label_13e2ec:
    // 0x13e2ec: 0x10000098  b           . + 4 + (0x98 << 2)
label_13e2f0:
    if (ctx->pc == 0x13E2F0u) {
        ctx->pc = 0x13E2F4u;
        goto label_13e2f4;
    }
    ctx->pc = 0x13E2ECu;
    {
        const bool branch_taken_0x13e2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2ec) {
            ctx->pc = 0x13E550u;
            goto label_13e550;
        }
    }
    ctx->pc = 0x13E2F4u;
label_13e2f4:
    // 0x13e2f4: 0xc04b7b4  jal         func_12DED0
label_13e2f8:
    if (ctx->pc == 0x13E2F8u) {
        ctx->pc = 0x13E2FCu;
        goto label_13e2fc;
    }
    ctx->pc = 0x13E2F4u;
    SET_GPR_U32(ctx, 31, 0x13E2FCu);
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x13E2F4u, 0x13E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E2FCu;
label_13e2fc:
    // 0x13e2fc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13e2fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e300:
    // 0x13e300: 0x8ea201c4  lw          $v0, 0x1C4($s5)
    ctx->pc = 0x13e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
label_13e304:
    // 0x13e304: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13e304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e308:
    // 0x13e308: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_13e30c:
    if (ctx->pc == 0x13E30Cu) {
        ctx->pc = 0x13E310u;
        goto label_13e310;
    }
    ctx->pc = 0x13E308u;
    {
        const bool branch_taken_0x13e308 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e308) {
            ctx->pc = 0x13E318u;
            goto label_13e318;
        }
    }
    ctx->pc = 0x13E310u;
label_13e310:
    // 0x13e310: 0x1000008f  b           . + 4 + (0x8F << 2)
label_13e314:
    if (ctx->pc == 0x13E314u) {
        ctx->pc = 0x13E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E310u;
        // 0x13e314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E318u;
        goto label_13e318;
    }
    ctx->pc = 0x13E310u;
    {
        const bool branch_taken_0x13e310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E310u;
        // 0x13e314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e310) {
            ctx->pc = 0x13E550u;
            goto label_13e550;
        }
    }
    ctx->pc = 0x13E318u;
label_13e318:
    // 0x13e318: 0xc04d71c  jal         func_135C70
label_13e31c:
    if (ctx->pc == 0x13E31Cu) {
        ctx->pc = 0x13E320u;
        goto label_13e320;
    }
    ctx->pc = 0x13E318u;
    SET_GPR_U32(ctx, 31, 0x13E320u);
    ctx->pc = 0x135C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135C70u, 0x13E318u, 0x13E320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E320u;
label_13e320:
    // 0x13e320: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x13e320u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_13e324:
    // 0x13e324: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13e324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13e328:
    // 0x13e328: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13e328u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_13e32c:
    // 0x13e32c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x13e32cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e330:
    // 0x13e330: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13e330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e334:
    // 0x13e334: 0xc04b8ec  jal         func_12E3B0
label_13e338:
    if (ctx->pc == 0x13E338u) {
        ctx->pc = 0x13E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E334u;
        // 0x13e338: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E33Cu;
        goto label_13e33c;
    }
    ctx->pc = 0x13E334u;
    SET_GPR_U32(ctx, 31, 0x13E33Cu);
    ctx->pc = 0x13E338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E334u;
    // 0x13e338: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E3B0u, 0x13E334u, 0x13E33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E33Cu;
label_13e33c:
    // 0x13e33c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x13e33cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_13e340:
    // 0x13e340: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13e340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_13e344:
    // 0x13e344: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x13e344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e348:
    // 0x13e348: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x13e348u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e34c:
    // 0x13e34c: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x13e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_13e350:
    // 0x13e350: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x13e350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13e354:
    // 0x13e354: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13e354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e358:
    // 0x13e358: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13e358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13e35c:
    // 0x13e35c: 0x0  nop
    ctx->pc = 0x13e35cu;
    // NOP
label_13e360:
    // 0x13e360: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13e360u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_13e364:
    // 0x13e364: 0x0  nop
    ctx->pc = 0x13e364u;
    // NOP
label_13e368:
    // 0x13e368: 0x0  nop
    ctx->pc = 0x13e368u;
    // NOP
label_13e36c:
    // 0x13e36c: 0xc04b81c  jal         func_12E070
label_13e370:
    if (ctx->pc == 0x13E370u) {
        ctx->pc = 0x13E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E36Cu;
        // 0x13e370: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E374u;
        goto label_13e374;
    }
    ctx->pc = 0x13E36Cu;
    SET_GPR_U32(ctx, 31, 0x13E374u);
    ctx->pc = 0x13E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E36Cu;
    // 0x13e370: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E070u, 0x13E36Cu, 0x13E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E374u;
label_13e374:
    // 0x13e374: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x13e374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_13e378:
    // 0x13e378: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x13e378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_13e37c:
    // 0x13e37c: 0xc04b8d8  jal         func_12E360
label_13e380:
    if (ctx->pc == 0x13E380u) {
        ctx->pc = 0x13E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E37Cu;
        // 0x13e380: 0xafa2010c  sw          $v0, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E384u;
        goto label_13e384;
    }
    ctx->pc = 0x13E37Cu;
    SET_GPR_U32(ctx, 31, 0x13E384u);
    ctx->pc = 0x13E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E37Cu;
    // 0x13e380: 0xafa2010c  sw          $v0, 0x10C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E360u, 0x13E37Cu, 0x13E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E384u;
label_13e384:
    // 0x13e384: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x13e384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_13e388:
    // 0x13e388: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13e388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e38c:
    // 0x13e38c: 0xc04b8d4  jal         func_12E350
label_13e390:
    if (ctx->pc == 0x13E390u) {
        ctx->pc = 0x13E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E38Cu;
        // 0x13e390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E394u;
        goto label_13e394;
    }
    ctx->pc = 0x13E38Cu;
    SET_GPR_U32(ctx, 31, 0x13E394u);
    ctx->pc = 0x13E390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E38Cu;
    // 0x13e390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E350u, 0x13E38Cu, 0x13E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E394u;
label_13e394:
    // 0x13e394: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x13e394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_13e398:
    // 0x13e398: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x13e398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_13e39c:
    // 0x13e39c: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x13e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_13e3a0:
    // 0x13e3a0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x13e3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_13e3a4:
    // 0x13e3a4: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x13e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_13e3a8:
    // 0x13e3a8: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x13e3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_13e3ac:
    // 0x13e3ac: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x13e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_13e3b0:
    // 0x13e3b0: 0x83a70108  lb          $a3, 0x108($sp)
    ctx->pc = 0x13e3b0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 264)));
label_13e3b4:
    // 0x13e3b4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_13e3b8:
    // 0x13e3b8: 0xc04b944  jal         func_12E510
label_13e3bc:
    if (ctx->pc == 0x13E3BCu) {
        ctx->pc = 0x13E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3B8u;
        // 0x13e3bc: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E3C0u;
        goto label_13e3c0;
    }
    ctx->pc = 0x13E3B8u;
    SET_GPR_U32(ctx, 31, 0x13E3C0u);
    ctx->pc = 0x13E3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E3B8u;
    // 0x13e3bc: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E510u, 0x13E3B8u, 0x13E3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E3C0u;
label_13e3c0:
    // 0x13e3c0: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x13e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_13e3c4:
    // 0x13e3c4: 0xc04bb10  jal         func_12EC40
label_13e3c8:
    if (ctx->pc == 0x13E3C8u) {
        ctx->pc = 0x13E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3C4u;
        // 0x13e3c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E3CCu;
        goto label_13e3cc;
    }
    ctx->pc = 0x13E3C4u;
    SET_GPR_U32(ctx, 31, 0x13E3CCu);
    ctx->pc = 0x13E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E3C4u;
    // 0x13e3c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x13E3C4u, 0x13E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E3CCu;
label_13e3cc:
    // 0x13e3cc: 0x14082b  sltu        $at, $zero, $s4
    ctx->pc = 0x13e3ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_13e3d0:
    // 0x13e3d0: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
label_13e3d4:
    if (ctx->pc == 0x13E3D4u) {
        ctx->pc = 0x13E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3D0u;
        // 0x13e3d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E3D8u;
        goto label_13e3d8;
    }
    ctx->pc = 0x13E3D0u;
    {
        const bool branch_taken_0x13e3d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3D0u;
        // 0x13e3d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3d0) {
            ctx->pc = 0x13E484u;
            goto label_13e484;
        }
    }
    ctx->pc = 0x13E3D8u;
label_13e3d8:
    // 0x13e3d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13e3d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e3dc:
    // 0x13e3dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13e3dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e3e0:
    // 0x13e3e0: 0x8ea201c4  lw          $v0, 0x1C4($s5)
    ctx->pc = 0x13e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
label_13e3e4:
    // 0x13e3e4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_13e3e8:
    // 0x13e3e8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x13e3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e3ec:
    // 0x13e3ec: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_13e3f0:
    if (ctx->pc == 0x13E3F0u) {
        ctx->pc = 0x13E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3ECu;
        // 0x13e3f0: 0x27b700f0  addiu       $s7, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E3F4u;
        goto label_13e3f4;
    }
    ctx->pc = 0x13E3ECu;
    {
        const bool branch_taken_0x13e3ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3ECu;
        // 0x13e3f0: 0x27b700f0  addiu       $s7, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3ec) {
            ctx->pc = 0x13E470u;
            goto label_13e470;
        }
    }
    ctx->pc = 0x13E3F4u;
label_13e3f4:
    // 0x13e3f4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13e3f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e3f8:
    // 0x13e3f8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x13e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_13e3fc:
    // 0x13e3fc: 0x8f3900e8  lw          $t9, 0xE8($t9)
    ctx->pc = 0x13e3fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 232)));
label_13e400:
    // 0x13e400: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_13e404:
    // 0x13e404: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13e404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e408:
    // 0x13e408: 0x320f809  jalr        $t9
label_13e40c:
    if (ctx->pc == 0x13E40Cu) {
        ctx->pc = 0x13E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E408u;
        // 0x13e40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E410u;
        goto label_13e410;
    }
    ctx->pc = 0x13E408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E410u);
        ctx->pc = 0x13E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E408u;
        // 0x13e40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E408u, 0x13E410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E410u;
label_13e410:
    // 0x13e410: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13e410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_13e414:
    // 0x13e414: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x13e414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_13e418:
    // 0x13e418: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x13e418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_13e41c:
    // 0x13e41c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e420:
    // 0x13e420: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13e420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e424:
    // 0x13e424: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x13e424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_13e428:
    // 0x13e428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e42c:
    // 0x13e42c: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x13e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_13e430:
    // 0x13e430: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x13e430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13e434:
    // 0x13e434: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x13e434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e438:
    // 0x13e438: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x13e438u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
label_13e43c:
    // 0x13e43c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13e43cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13e440:
    // 0x13e440: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x13e440u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_13e444:
    // 0x13e444: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x13e444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_13e448:
    // 0x13e448: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x13e448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_13e44c:
    // 0x13e44c: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x13e44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
label_13e450:
    // 0x13e450: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x13e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_13e454:
    // 0x13e454: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13e454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e458:
    // 0x13e458: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_13e45c:
    // 0x13e45c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x13e45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e460:
    // 0x13e460: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x13e460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_13e464:
    // 0x13e464: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x13e464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_13e468:
    // 0x13e468: 0x320f809  jalr        $t9
label_13e46c:
    if (ctx->pc == 0x13E46Cu) {
        ctx->pc = 0x13E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E468u;
        // 0x13e46c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E470u;
        goto label_13e470;
    }
    ctx->pc = 0x13E468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E470u);
        ctx->pc = 0x13E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E468u;
        // 0x13e46c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E468u, 0x13E470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E470u;
label_13e470:
    // 0x13e470: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13e470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13e474:
    // 0x13e474: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x13e474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_13e478:
    // 0x13e478: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x13e478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_13e47c:
    // 0x13e47c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_13e480:
    if (ctx->pc == 0x13E480u) {
        ctx->pc = 0x13E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E47Cu;
        // 0x13e480: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E484u;
        goto label_13e484;
    }
    ctx->pc = 0x13E47Cu;
    {
        const bool branch_taken_0x13e47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E47Cu;
        // 0x13e480: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e47c) {
            ctx->pc = 0x13E3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e3e0;
        }
    }
    ctx->pc = 0x13E484u;
label_13e484:
    // 0x13e484: 0x0  nop
    ctx->pc = 0x13e484u;
    // NOP
label_13e488:
    // 0x13e488: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x13e488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13e48c:
    // 0x13e48c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x13e48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_13e490:
    // 0x13e490: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13e490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e494:
    // 0x13e494: 0xc04b7dc  jal         func_12DF70
label_13e498:
    if (ctx->pc == 0x13E498u) {
        ctx->pc = 0x13E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E494u;
        // 0x13e498: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E49Cu;
        goto label_13e49c;
    }
    ctx->pc = 0x13E494u;
    SET_GPR_U32(ctx, 31, 0x13E49Cu);
    ctx->pc = 0x13E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E494u;
    // 0x13e498: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x13E494u, 0x13E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E49Cu;
label_13e49c:
    // 0x13e49c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x13e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_13e4a0:
    // 0x13e4a0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x13e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_13e4a4:
    // 0x13e4a4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x13e4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13e4a8:
    // 0x13e4a8: 0x2e810020  sltiu       $at, $s4, 0x20
    ctx->pc = 0x13e4a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_13e4ac:
    // 0x13e4ac: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x13e4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13e4b0:
    // 0x13e4b0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x13e4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e4b4:
    // 0x13e4b4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x13e4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e4b8:
    // 0x13e4b8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x13e4b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_13e4bc:
    // 0x13e4bc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x13e4bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_13e4c0:
    // 0x13e4c0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x13e4c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_13e4c4:
    // 0x13e4c4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x13e4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_13e4c8:
    // 0x13e4c8: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x13e4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13e4cc:
    // 0x13e4cc: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x13e4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13e4d0:
    // 0x13e4d0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x13e4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e4d4:
    // 0x13e4d4: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x13e4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e4d8:
    // 0x13e4d8: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x13e4d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_13e4dc:
    // 0x13e4dc: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x13e4dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_13e4e0:
    // 0x13e4e0: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x13e4e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_13e4e4:
    // 0x13e4e4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_13e4e8:
    if (ctx->pc == 0x13E4E8u) {
        ctx->pc = 0x13E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4E4u;
        // 0x13e4e8: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E4ECu;
        goto label_13e4ec;
    }
    ctx->pc = 0x13E4E4u;
    {
        const bool branch_taken_0x13e4e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4E4u;
        // 0x13e4e8: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e4e4) {
            ctx->pc = 0x13E540u;
            goto label_13e540;
        }
    }
    ctx->pc = 0x13E4ECu;
label_13e4ec:
    // 0x13e4ec: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x13e4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_13e4f0:
    // 0x13e4f0: 0x8ea201c4  lw          $v0, 0x1C4($s5)
    ctx->pc = 0x13e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
label_13e4f4:
    // 0x13e4f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_13e4f8:
    // 0x13e4f8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x13e4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e4fc:
    // 0x13e4fc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_13e500:
    if (ctx->pc == 0x13E500u) {
        ctx->pc = 0x13E504u;
        goto label_13e504;
    }
    ctx->pc = 0x13E4FCu;
    {
        const bool branch_taken_0x13e4fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e4fc) {
            ctx->pc = 0x13E52Cu;
            goto label_13e52c;
        }
    }
    ctx->pc = 0x13E504u;
label_13e504:
    // 0x13e504: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13e504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e508:
    // 0x13e508: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x13e508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_13e50c:
    // 0x13e50c: 0x8f3900e8  lw          $t9, 0xE8($t9)
    ctx->pc = 0x13e50cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 232)));
label_13e510:
    // 0x13e510: 0x320f809  jalr        $t9
label_13e514:
    if (ctx->pc == 0x13E514u) {
        ctx->pc = 0x13E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E510u;
        // 0x13e514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E518u;
        goto label_13e518;
    }
    ctx->pc = 0x13E510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E518u);
        ctx->pc = 0x13E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E510u;
        // 0x13e514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E510u, 0x13E518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E518u;
label_13e518:
    // 0x13e518: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13e518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e51c:
    // 0x13e51c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e520:
    // 0x13e520: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x13e520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_13e524:
    // 0x13e524: 0x320f809  jalr        $t9
label_13e528:
    if (ctx->pc == 0x13E528u) {
        ctx->pc = 0x13E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E524u;
        // 0x13e528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E52Cu;
        goto label_13e52c;
    }
    ctx->pc = 0x13E524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E52Cu);
        ctx->pc = 0x13E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E524u;
        // 0x13e528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E524u, 0x13E52Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E52Cu;
label_13e52c:
    // 0x13e52c: 0x0  nop
    ctx->pc = 0x13e52cu;
    // NOP
label_13e530:
    // 0x13e530: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13e530u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_13e534:
    // 0x13e534: 0x2e820020  sltiu       $v0, $s4, 0x20
    ctx->pc = 0x13e534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_13e538:
    // 0x13e538: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_13e53c:
    if (ctx->pc == 0x13E53Cu) {
        ctx->pc = 0x13E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E538u;
        // 0x13e53c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E540u;
        goto label_13e540;
    }
    ctx->pc = 0x13E538u;
    {
        const bool branch_taken_0x13e538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E538u;
        // 0x13e53c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e538) {
            ctx->pc = 0x13E4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e4f0;
        }
    }
    ctx->pc = 0x13E540u;
label_13e540:
    // 0x13e540: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x13e540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_13e544:
    // 0x13e544: 0xc04bb10  jal         func_12EC40
label_13e548:
    if (ctx->pc == 0x13E548u) {
        ctx->pc = 0x13E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E544u;
        // 0x13e548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E54Cu;
        goto label_13e54c;
    }
    ctx->pc = 0x13E544u;
    SET_GPR_U32(ctx, 31, 0x13E54Cu);
    ctx->pc = 0x13E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E544u;
    // 0x13e548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x13E544u, 0x13E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E54Cu;
label_13e54c:
    // 0x13e54c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e550:
    // 0x13e550: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13e550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_13e554:
    // 0x13e554: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x13e554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_13e558:
    // 0x13e558: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x13e558u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13e55c:
    // 0x13e55c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13e55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13e560:
    // 0x13e560: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13e560u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13e564:
    // 0x13e564: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x13e564u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13e568:
    // 0x13e568: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x13e568u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13e56c:
    // 0x13e56c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x13e56cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13e570:
    // 0x13e570: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13e570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13e574:
    // 0x13e574: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13e574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13e578:
    // 0x13e578: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13e578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13e57c:
    // 0x13e57c: 0x3e00008  jr          $ra
label_13e580:
    if (ctx->pc == 0x13E580u) {
        ctx->pc = 0x13E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E57Cu;
        // 0x13e580: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E584u;
        goto label_fallthrough_0x13e57c;
    }
    ctx->pc = 0x13E57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E57Cu;
        // 0x13e580: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13e57c:
    ctx->pc = 0x13E584u;
}
