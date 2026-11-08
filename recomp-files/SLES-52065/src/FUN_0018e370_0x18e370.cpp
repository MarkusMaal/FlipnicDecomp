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

// Function: FUN_0018e370
// Address: 0x18e370 - 0x18e70c
void FUN_0018e370_0x18e370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018e370_0x18e370");
#endif

    switch (ctx->pc) {
        case 0x18e370u: goto label_18e370;
        case 0x18e374u: goto label_18e374;
        case 0x18e378u: goto label_18e378;
        case 0x18e37cu: goto label_18e37c;
        case 0x18e380u: goto label_18e380;
        case 0x18e384u: goto label_18e384;
        case 0x18e388u: goto label_18e388;
        case 0x18e38cu: goto label_18e38c;
        case 0x18e390u: goto label_18e390;
        case 0x18e394u: goto label_18e394;
        case 0x18e398u: goto label_18e398;
        case 0x18e39cu: goto label_18e39c;
        case 0x18e3a0u: goto label_18e3a0;
        case 0x18e3a4u: goto label_18e3a4;
        case 0x18e3a8u: goto label_18e3a8;
        case 0x18e3acu: goto label_18e3ac;
        case 0x18e3b0u: goto label_18e3b0;
        case 0x18e3b4u: goto label_18e3b4;
        case 0x18e3b8u: goto label_18e3b8;
        case 0x18e3bcu: goto label_18e3bc;
        case 0x18e3c0u: goto label_18e3c0;
        case 0x18e3c4u: goto label_18e3c4;
        case 0x18e3c8u: goto label_18e3c8;
        case 0x18e3ccu: goto label_18e3cc;
        case 0x18e3d0u: goto label_18e3d0;
        case 0x18e3d4u: goto label_18e3d4;
        case 0x18e3d8u: goto label_18e3d8;
        case 0x18e3dcu: goto label_18e3dc;
        case 0x18e3e0u: goto label_18e3e0;
        case 0x18e3e4u: goto label_18e3e4;
        case 0x18e3e8u: goto label_18e3e8;
        case 0x18e3ecu: goto label_18e3ec;
        case 0x18e3f0u: goto label_18e3f0;
        case 0x18e3f4u: goto label_18e3f4;
        case 0x18e3f8u: goto label_18e3f8;
        case 0x18e3fcu: goto label_18e3fc;
        case 0x18e400u: goto label_18e400;
        case 0x18e404u: goto label_18e404;
        case 0x18e408u: goto label_18e408;
        case 0x18e40cu: goto label_18e40c;
        case 0x18e410u: goto label_18e410;
        case 0x18e414u: goto label_18e414;
        case 0x18e418u: goto label_18e418;
        case 0x18e41cu: goto label_18e41c;
        case 0x18e420u: goto label_18e420;
        case 0x18e424u: goto label_18e424;
        case 0x18e428u: goto label_18e428;
        case 0x18e42cu: goto label_18e42c;
        case 0x18e430u: goto label_18e430;
        case 0x18e434u: goto label_18e434;
        case 0x18e438u: goto label_18e438;
        case 0x18e43cu: goto label_18e43c;
        case 0x18e440u: goto label_18e440;
        case 0x18e444u: goto label_18e444;
        case 0x18e448u: goto label_18e448;
        case 0x18e44cu: goto label_18e44c;
        case 0x18e450u: goto label_18e450;
        case 0x18e454u: goto label_18e454;
        case 0x18e458u: goto label_18e458;
        case 0x18e45cu: goto label_18e45c;
        case 0x18e460u: goto label_18e460;
        case 0x18e464u: goto label_18e464;
        case 0x18e468u: goto label_18e468;
        case 0x18e46cu: goto label_18e46c;
        case 0x18e470u: goto label_18e470;
        case 0x18e474u: goto label_18e474;
        case 0x18e478u: goto label_18e478;
        case 0x18e47cu: goto label_18e47c;
        case 0x18e480u: goto label_18e480;
        case 0x18e484u: goto label_18e484;
        case 0x18e488u: goto label_18e488;
        case 0x18e48cu: goto label_18e48c;
        case 0x18e490u: goto label_18e490;
        case 0x18e494u: goto label_18e494;
        case 0x18e498u: goto label_18e498;
        case 0x18e49cu: goto label_18e49c;
        case 0x18e4a0u: goto label_18e4a0;
        case 0x18e4a4u: goto label_18e4a4;
        case 0x18e4a8u: goto label_18e4a8;
        case 0x18e4acu: goto label_18e4ac;
        case 0x18e4b0u: goto label_18e4b0;
        case 0x18e4b4u: goto label_18e4b4;
        case 0x18e4b8u: goto label_18e4b8;
        case 0x18e4bcu: goto label_18e4bc;
        case 0x18e4c0u: goto label_18e4c0;
        case 0x18e4c4u: goto label_18e4c4;
        case 0x18e4c8u: goto label_18e4c8;
        case 0x18e4ccu: goto label_18e4cc;
        case 0x18e4d0u: goto label_18e4d0;
        case 0x18e4d4u: goto label_18e4d4;
        case 0x18e4d8u: goto label_18e4d8;
        case 0x18e4dcu: goto label_18e4dc;
        case 0x18e4e0u: goto label_18e4e0;
        case 0x18e4e4u: goto label_18e4e4;
        case 0x18e4e8u: goto label_18e4e8;
        case 0x18e4ecu: goto label_18e4ec;
        case 0x18e4f0u: goto label_18e4f0;
        case 0x18e4f4u: goto label_18e4f4;
        case 0x18e4f8u: goto label_18e4f8;
        case 0x18e4fcu: goto label_18e4fc;
        case 0x18e500u: goto label_18e500;
        case 0x18e504u: goto label_18e504;
        case 0x18e508u: goto label_18e508;
        case 0x18e50cu: goto label_18e50c;
        case 0x18e510u: goto label_18e510;
        case 0x18e514u: goto label_18e514;
        case 0x18e518u: goto label_18e518;
        case 0x18e51cu: goto label_18e51c;
        case 0x18e520u: goto label_18e520;
        case 0x18e524u: goto label_18e524;
        case 0x18e528u: goto label_18e528;
        case 0x18e52cu: goto label_18e52c;
        case 0x18e530u: goto label_18e530;
        case 0x18e534u: goto label_18e534;
        case 0x18e538u: goto label_18e538;
        case 0x18e53cu: goto label_18e53c;
        case 0x18e540u: goto label_18e540;
        case 0x18e544u: goto label_18e544;
        case 0x18e548u: goto label_18e548;
        case 0x18e54cu: goto label_18e54c;
        case 0x18e550u: goto label_18e550;
        case 0x18e554u: goto label_18e554;
        case 0x18e558u: goto label_18e558;
        case 0x18e55cu: goto label_18e55c;
        case 0x18e560u: goto label_18e560;
        case 0x18e564u: goto label_18e564;
        case 0x18e568u: goto label_18e568;
        case 0x18e56cu: goto label_18e56c;
        case 0x18e570u: goto label_18e570;
        case 0x18e574u: goto label_18e574;
        case 0x18e578u: goto label_18e578;
        case 0x18e57cu: goto label_18e57c;
        case 0x18e580u: goto label_18e580;
        case 0x18e584u: goto label_18e584;
        case 0x18e588u: goto label_18e588;
        case 0x18e58cu: goto label_18e58c;
        case 0x18e590u: goto label_18e590;
        case 0x18e594u: goto label_18e594;
        case 0x18e598u: goto label_18e598;
        case 0x18e59cu: goto label_18e59c;
        case 0x18e5a0u: goto label_18e5a0;
        case 0x18e5a4u: goto label_18e5a4;
        case 0x18e5a8u: goto label_18e5a8;
        case 0x18e5acu: goto label_18e5ac;
        case 0x18e5b0u: goto label_18e5b0;
        case 0x18e5b4u: goto label_18e5b4;
        case 0x18e5b8u: goto label_18e5b8;
        case 0x18e5bcu: goto label_18e5bc;
        case 0x18e5c0u: goto label_18e5c0;
        case 0x18e5c4u: goto label_18e5c4;
        case 0x18e5c8u: goto label_18e5c8;
        case 0x18e5ccu: goto label_18e5cc;
        case 0x18e5d0u: goto label_18e5d0;
        case 0x18e5d4u: goto label_18e5d4;
        case 0x18e5d8u: goto label_18e5d8;
        case 0x18e5dcu: goto label_18e5dc;
        case 0x18e5e0u: goto label_18e5e0;
        case 0x18e5e4u: goto label_18e5e4;
        case 0x18e5e8u: goto label_18e5e8;
        case 0x18e5ecu: goto label_18e5ec;
        case 0x18e5f0u: goto label_18e5f0;
        case 0x18e5f4u: goto label_18e5f4;
        case 0x18e5f8u: goto label_18e5f8;
        case 0x18e5fcu: goto label_18e5fc;
        case 0x18e600u: goto label_18e600;
        case 0x18e604u: goto label_18e604;
        case 0x18e608u: goto label_18e608;
        case 0x18e60cu: goto label_18e60c;
        case 0x18e610u: goto label_18e610;
        case 0x18e614u: goto label_18e614;
        case 0x18e618u: goto label_18e618;
        case 0x18e61cu: goto label_18e61c;
        case 0x18e620u: goto label_18e620;
        case 0x18e624u: goto label_18e624;
        case 0x18e628u: goto label_18e628;
        case 0x18e62cu: goto label_18e62c;
        case 0x18e630u: goto label_18e630;
        case 0x18e634u: goto label_18e634;
        case 0x18e638u: goto label_18e638;
        case 0x18e63cu: goto label_18e63c;
        case 0x18e640u: goto label_18e640;
        case 0x18e644u: goto label_18e644;
        case 0x18e648u: goto label_18e648;
        case 0x18e64cu: goto label_18e64c;
        case 0x18e650u: goto label_18e650;
        case 0x18e654u: goto label_18e654;
        case 0x18e658u: goto label_18e658;
        case 0x18e65cu: goto label_18e65c;
        case 0x18e660u: goto label_18e660;
        case 0x18e664u: goto label_18e664;
        case 0x18e668u: goto label_18e668;
        case 0x18e66cu: goto label_18e66c;
        case 0x18e670u: goto label_18e670;
        case 0x18e674u: goto label_18e674;
        case 0x18e678u: goto label_18e678;
        case 0x18e67cu: goto label_18e67c;
        case 0x18e680u: goto label_18e680;
        case 0x18e684u: goto label_18e684;
        case 0x18e688u: goto label_18e688;
        case 0x18e68cu: goto label_18e68c;
        case 0x18e690u: goto label_18e690;
        case 0x18e694u: goto label_18e694;
        case 0x18e698u: goto label_18e698;
        case 0x18e69cu: goto label_18e69c;
        case 0x18e6a0u: goto label_18e6a0;
        case 0x18e6a4u: goto label_18e6a4;
        case 0x18e6a8u: goto label_18e6a8;
        case 0x18e6acu: goto label_18e6ac;
        case 0x18e6b0u: goto label_18e6b0;
        case 0x18e6b4u: goto label_18e6b4;
        case 0x18e6b8u: goto label_18e6b8;
        case 0x18e6bcu: goto label_18e6bc;
        case 0x18e6c0u: goto label_18e6c0;
        case 0x18e6c4u: goto label_18e6c4;
        case 0x18e6c8u: goto label_18e6c8;
        case 0x18e6ccu: goto label_18e6cc;
        case 0x18e6d0u: goto label_18e6d0;
        case 0x18e6d4u: goto label_18e6d4;
        case 0x18e6d8u: goto label_18e6d8;
        case 0x18e6dcu: goto label_18e6dc;
        case 0x18e6e0u: goto label_18e6e0;
        case 0x18e6e4u: goto label_18e6e4;
        case 0x18e6e8u: goto label_18e6e8;
        case 0x18e6ecu: goto label_18e6ec;
        case 0x18e6f0u: goto label_18e6f0;
        case 0x18e6f4u: goto label_18e6f4;
        case 0x18e6f8u: goto label_18e6f8;
        case 0x18e6fcu: goto label_18e6fc;
        case 0x18e700u: goto label_18e700;
        case 0x18e704u: goto label_18e704;
        case 0x18e708u: goto label_18e708;
        default: break;
    }

    ctx->pc = 0x18e370u;

label_18e370:
    // 0x18e370: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18e370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_18e374:
    // 0x18e374: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18e374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18e378:
    // 0x18e378: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18e37c:
    // 0x18e37c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18e380:
    // 0x18e380: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18e380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18e384:
    // 0x18e384: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18e384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18e388:
    // 0x18e388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18e38c:
    // 0x18e38c: 0xc063dd4  jal         func_18F750
label_18e390:
    if (ctx->pc == 0x18E390u) {
        ctx->pc = 0x18E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E38Cu;
        // 0x18e390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E394u;
        goto label_18e394;
    }
    ctx->pc = 0x18E38Cu;
    SET_GPR_U32(ctx, 31, 0x18E394u);
    ctx->pc = 0x18E390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E38Cu;
    // 0x18e390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x18E38Cu, 0x18E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E394u;
label_18e394:
    // 0x18e394: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18e394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_18e398:
    // 0x18e398: 0x104300d5  beq         $v0, $v1, . + 4 + (0xD5 << 2)
label_18e39c:
    if (ctx->pc == 0x18E39Cu) {
        ctx->pc = 0x18E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E398u;
        // 0x18e39c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3A0u;
        goto label_18e3a0;
    }
    ctx->pc = 0x18E398u;
    {
        const bool branch_taken_0x18e398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E398u;
        // 0x18e39c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e398) {
            ctx->pc = 0x18E6F0u;
            goto label_18e6f0;
        }
    }
    ctx->pc = 0x18E3A0u;
label_18e3a0:
    // 0x18e3a0: 0x104300d1  beq         $v0, $v1, . + 4 + (0xD1 << 2)
label_18e3a4:
    if (ctx->pc == 0x18E3A4u) {
        ctx->pc = 0x18E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3A0u;
        // 0x18e3a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3A8u;
        goto label_18e3a8;
    }
    ctx->pc = 0x18E3A0u;
    {
        const bool branch_taken_0x18e3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3A0u;
        // 0x18e3a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3a0) {
            ctx->pc = 0x18E6E8u;
            goto label_18e6e8;
        }
    }
    ctx->pc = 0x18E3A8u;
label_18e3a8:
    // 0x18e3a8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x18e3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18e3ac:
    // 0x18e3ac: 0x10460067  beq         $v0, $a2, . + 4 + (0x67 << 2)
label_18e3b0:
    if (ctx->pc == 0x18E3B0u) {
        ctx->pc = 0x18E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3ACu;
        // 0x18e3b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3B4u;
        goto label_18e3b4;
    }
    ctx->pc = 0x18E3ACu;
    {
        const bool branch_taken_0x18e3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x18E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3ACu;
        // 0x18e3b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3ac) {
            ctx->pc = 0x18E54Cu;
            goto label_18e54c;
        }
    }
    ctx->pc = 0x18E3B4u;
label_18e3b4:
    // 0x18e3b4: 0x10440042  beq         $v0, $a0, . + 4 + (0x42 << 2)
label_18e3b8:
    if (ctx->pc == 0x18E3B8u) {
        ctx->pc = 0x18E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3B4u;
        // 0x18e3b8: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3BCu;
        goto label_18e3bc;
    }
    ctx->pc = 0x18E3B4u;
    {
        const bool branch_taken_0x18e3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x18E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3B4u;
        // 0x18e3b8: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3b4) {
            ctx->pc = 0x18E4C0u;
            goto label_18e4c0;
        }
    }
    ctx->pc = 0x18E3BCu;
label_18e3bc:
    // 0x18e3bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18e3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e3c0:
    // 0x18e3c0: 0x1045000c  beq         $v0, $a1, . + 4 + (0xC << 2)
label_18e3c4:
    if (ctx->pc == 0x18E3C4u) {
        ctx->pc = 0x18E3C8u;
        goto label_18e3c8;
    }
    ctx->pc = 0x18E3C0u;
    {
        const bool branch_taken_0x18e3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x18e3c0) {
            ctx->pc = 0x18E3F4u;
            goto label_18e3f4;
        }
    }
    ctx->pc = 0x18E3C8u;
label_18e3c8:
    // 0x18e3c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18e3cc:
    if (ctx->pc == 0x18E3CCu) {
        ctx->pc = 0x18E3D0u;
        goto label_18e3d0;
    }
    ctx->pc = 0x18E3C8u;
    {
        const bool branch_taken_0x18e3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e3c8) {
            ctx->pc = 0x18E3D8u;
            goto label_18e3d8;
        }
    }
    ctx->pc = 0x18E3D0u;
label_18e3d0:
    // 0x18e3d0: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_18e3d4:
    if (ctx->pc == 0x18E3D4u) {
        ctx->pc = 0x18E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3D0u;
        // 0x18e3d4: 0xae40045c  sw          $zero, 0x45C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3D8u;
        goto label_18e3d8;
    }
    ctx->pc = 0x18E3D0u;
    {
        const bool branch_taken_0x18e3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3D0u;
        // 0x18e3d4: 0xae40045c  sw          $zero, 0x45C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3d0) {
            ctx->pc = 0x18E6F4u;
            goto label_18e6f4;
        }
    }
    ctx->pc = 0x18E3D8u;
label_18e3d8:
    // 0x18e3d8: 0xae400478  sw          $zero, 0x478($s2)
    ctx->pc = 0x18e3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1144), GPR_U32(ctx, 0));
label_18e3dc:
    // 0x18e3dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e3e0:
    // 0x18e3e0: 0xae452714  sw          $a1, 0x2714($s2)
    ctx->pc = 0x18e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10004), GPR_U32(ctx, 5));
label_18e3e4:
    // 0x18e3e4: 0xc063e08  jal         func_18F820
label_18e3e8:
    if (ctx->pc == 0x18E3E8u) {
        ctx->pc = 0x18E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3E4u;
        // 0x18e3e8: 0xae452710  sw          $a1, 0x2710($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 10000), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3ECu;
        goto label_18e3ec;
    }
    ctx->pc = 0x18E3E4u;
    SET_GPR_U32(ctx, 31, 0x18E3ECu);
    ctx->pc = 0x18E3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E3E4u;
    // 0x18e3e8: 0xae452710  sw          $a1, 0x2710($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 10000), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E3E4u, 0x18E3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3ECu;
label_18e3ec:
    // 0x18e3ec: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_18e3f0:
    if (ctx->pc == 0x18E3F0u) {
        ctx->pc = 0x18E3F4u;
        goto label_18e3f4;
    }
    ctx->pc = 0x18E3ECu;
    {
        const bool branch_taken_0x18e3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e3ec) {
            ctx->pc = 0x18E6F0u;
            goto label_18e6f0;
        }
    }
    ctx->pc = 0x18E3F4u;
label_18e3f4:
    // 0x18e3f4: 0x8e430484  lw          $v1, 0x484($s2)
    ctx->pc = 0x18e3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1156)));
label_18e3f8:
    // 0x18e3f8: 0x8e452724  lw          $a1, 0x2724($s2)
    ctx->pc = 0x18e3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
label_18e3fc:
    // 0x18e3fc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18e400:
    // 0x18e400: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18e400u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e404:
    // 0x18e404: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18e408:
    // 0x18e408: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e40c:
    // 0x18e40c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18e410:
    // 0x18e410: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18e410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18e414:
    // 0x18e414: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x18e414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18e418:
    // 0x18e418: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_18e41c:
    if (ctx->pc == 0x18E41Cu) {
        ctx->pc = 0x18E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E418u;
        // 0x18e41c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E420u;
        goto label_18e420;
    }
    ctx->pc = 0x18E418u;
    {
        const bool branch_taken_0x18e418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E418u;
        // 0x18e41c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e418) {
            ctx->pc = 0x18E490u;
            goto label_18e490;
        }
    }
    ctx->pc = 0x18E420u;
label_18e420:
    // 0x18e420: 0xc05f878  jal         func_17E1E0
label_18e424:
    if (ctx->pc == 0x18E424u) {
        ctx->pc = 0x18E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E420u;
        // 0x18e424: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E428u;
        goto label_18e428;
    }
    ctx->pc = 0x18E420u;
    SET_GPR_U32(ctx, 31, 0x18E428u);
    ctx->pc = 0x18E424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E420u;
    // 0x18e424: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E420u, 0x18E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E428u;
label_18e428:
    // 0x18e428: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18e428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e42c:
    // 0x18e42c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18e42cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18e430:
    // 0x18e430: 0x320f809  jalr        $t9
label_18e434:
    if (ctx->pc == 0x18E434u) {
        ctx->pc = 0x18E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E430u;
        // 0x18e434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E438u;
        goto label_18e438;
    }
    ctx->pc = 0x18E430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18E438u);
        ctx->pc = 0x18E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E430u;
        // 0x18e434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E430u, 0x18E438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E438u;
label_18e438:
    // 0x18e438: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
label_18e43c:
    if (ctx->pc == 0x18E43Cu) {
        ctx->pc = 0x18E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E438u;
        // 0x18e43c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E440u;
        goto label_18e440;
    }
    ctx->pc = 0x18E438u;
    {
        const bool branch_taken_0x18e438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E438u;
        // 0x18e43c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e438) {
            ctx->pc = 0x18E6F0u;
            goto label_18e6f0;
        }
    }
    ctx->pc = 0x18E440u;
label_18e440:
    // 0x18e440: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18e440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e444:
    // 0x18e444: 0xc05f878  jal         func_17E1E0
label_18e448:
    if (ctx->pc == 0x18E448u) {
        ctx->pc = 0x18E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E444u;
        // 0x18e448: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E44Cu;
        goto label_18e44c;
    }
    ctx->pc = 0x18E444u;
    SET_GPR_U32(ctx, 31, 0x18E44Cu);
    ctx->pc = 0x18E448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E444u;
    // 0x18e448: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E444u, 0x18E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E44Cu;
label_18e44c:
    // 0x18e44c: 0x8e430484  lw          $v1, 0x484($s2)
    ctx->pc = 0x18e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1156)));
label_18e450:
    // 0x18e450: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e454:
    // 0x18e454: 0x8e452724  lw          $a1, 0x2724($s2)
    ctx->pc = 0x18e454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
label_18e458:
    // 0x18e458: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18e458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18e45c:
    // 0x18e45c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e460:
    // 0x18e460: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18e464:
    // 0x18e464: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e464u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e468:
    // 0x18e468: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18e468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18e46c:
    // 0x18e46c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18e470:
    // 0x18e470: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x18e470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18e474:
    // 0x18e474: 0xc0532f4  jal         func_14CBD0
label_18e478:
    if (ctx->pc == 0x18E478u) {
        ctx->pc = 0x18E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E474u;
        // 0x18e478: 0x8e460450  lw          $a2, 0x450($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E47Cu;
        goto label_18e47c;
    }
    ctx->pc = 0x18E474u;
    SET_GPR_U32(ctx, 31, 0x18E47Cu);
    ctx->pc = 0x18E478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E474u;
    // 0x18e478: 0x8e460450  lw          $a2, 0x450($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18E474u, 0x18E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E47Cu;
label_18e47c:
    // 0x18e47c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e480:
    // 0x18e480: 0xc063e08  jal         func_18F820
label_18e484:
    if (ctx->pc == 0x18E484u) {
        ctx->pc = 0x18E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E480u;
        // 0x18e484: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E488u;
        goto label_18e488;
    }
    ctx->pc = 0x18E480u;
    SET_GPR_U32(ctx, 31, 0x18E488u);
    ctx->pc = 0x18E484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E480u;
    // 0x18e484: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E480u, 0x18E488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E488u;
label_18e488:
    // 0x18e488: 0x10000099  b           . + 4 + (0x99 << 2)
label_18e48c:
    if (ctx->pc == 0x18E48Cu) {
        ctx->pc = 0x18E490u;
        goto label_18e490;
    }
    ctx->pc = 0x18E488u;
    {
        const bool branch_taken_0x18e488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e488) {
            ctx->pc = 0x18E6F0u;
            goto label_18e6f0;
        }
    }
    ctx->pc = 0x18E490u;
label_18e490:
    // 0x18e490: 0xae40045c  sw          $zero, 0x45C($s2)
    ctx->pc = 0x18e490u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1116), GPR_U32(ctx, 0));
label_18e494:
    // 0x18e494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e498:
    // 0x18e498: 0xae400460  sw          $zero, 0x460($s2)
    ctx->pc = 0x18e498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1120), GPR_U32(ctx, 0));
label_18e49c:
    // 0x18e49c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x18e49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18e4a0:
    // 0x18e4a0: 0xae400464  sw          $zero, 0x464($s2)
    ctx->pc = 0x18e4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1124), GPR_U32(ctx, 0));
label_18e4a4:
    // 0x18e4a4: 0xae40046c  sw          $zero, 0x46C($s2)
    ctx->pc = 0x18e4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1132), GPR_U32(ctx, 0));
label_18e4a8:
    // 0x18e4a8: 0xae400468  sw          $zero, 0x468($s2)
    ctx->pc = 0x18e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 0));
label_18e4ac:
    // 0x18e4ac: 0xae402714  sw          $zero, 0x2714($s2)
    ctx->pc = 0x18e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10004), GPR_U32(ctx, 0));
label_18e4b0:
    // 0x18e4b0: 0xc063e08  jal         func_18F820
label_18e4b4:
    if (ctx->pc == 0x18E4B4u) {
        ctx->pc = 0x18E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4B0u;
        // 0x18e4b4: 0xae402710  sw          $zero, 0x2710($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 10000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E4B8u;
        goto label_18e4b8;
    }
    ctx->pc = 0x18E4B0u;
    SET_GPR_U32(ctx, 31, 0x18E4B8u);
    ctx->pc = 0x18E4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4B0u;
    // 0x18e4b4: 0xae402710  sw          $zero, 0x2710($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 10000), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E4B0u, 0x18E4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4B8u;
label_18e4b8:
    // 0x18e4b8: 0x1000008d  b           . + 4 + (0x8D << 2)
label_18e4bc:
    if (ctx->pc == 0x18E4BCu) {
        ctx->pc = 0x18E4C0u;
        goto label_18e4c0;
    }
    ctx->pc = 0x18E4B8u;
    {
        const bool branch_taken_0x18e4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e4b8) {
            ctx->pc = 0x18E6F0u;
            goto label_18e6f0;
        }
    }
    ctx->pc = 0x18E4C0u;
label_18e4c0:
    // 0x18e4c0: 0xc05f878  jal         func_17E1E0
label_18e4c4:
    if (ctx->pc == 0x18E4C4u) {
        ctx->pc = 0x18E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4C0u;
        // 0x18e4c4: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E4C8u;
        goto label_18e4c8;
    }
    ctx->pc = 0x18E4C0u;
    SET_GPR_U32(ctx, 31, 0x18E4C8u);
    ctx->pc = 0x18E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4C0u;
    // 0x18e4c4: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E4C0u, 0x18E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4C8u;
label_18e4c8:
    // 0x18e4c8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18e4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e4cc:
    // 0x18e4cc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18e4ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18e4d0:
    // 0x18e4d0: 0x320f809  jalr        $t9
label_18e4d4:
    if (ctx->pc == 0x18E4D4u) {
        ctx->pc = 0x18E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4D0u;
        // 0x18e4d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E4D8u;
        goto label_18e4d8;
    }
    ctx->pc = 0x18E4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18E4D8u);
        ctx->pc = 0x18E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4D0u;
        // 0x18e4d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E4D0u, 0x18E4D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E4D8u;
label_18e4d8:
    // 0x18e4d8: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_18e4dc:
    if (ctx->pc == 0x18E4DCu) {
        ctx->pc = 0x18E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4D8u;
        // 0x18e4dc: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E4E0u;
        goto label_18e4e0;
    }
    ctx->pc = 0x18E4D8u;
    {
        const bool branch_taken_0x18e4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4D8u;
        // 0x18e4dc: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4d8) {
            ctx->pc = 0x18E6F0u;
            goto label_18e6f0;
        }
    }
    ctx->pc = 0x18E4E0u;
label_18e4e0:
    // 0x18e4e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e4e4:
    // 0x18e4e4: 0xc05f878  jal         func_17E1E0
label_18e4e8:
    if (ctx->pc == 0x18E4E8u) {
        ctx->pc = 0x18E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4E4u;
        // 0x18e4e8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E4ECu;
        goto label_18e4ec;
    }
    ctx->pc = 0x18E4E4u;
    SET_GPR_U32(ctx, 31, 0x18E4ECu);
    ctx->pc = 0x18E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4E4u;
    // 0x18e4e8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E4E4u, 0x18E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4ECu;
label_18e4ec:
    // 0x18e4ec: 0x8e430484  lw          $v1, 0x484($s2)
    ctx->pc = 0x18e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1156)));
label_18e4f0:
    // 0x18e4f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e4f4:
    // 0x18e4f4: 0x8e452724  lw          $a1, 0x2724($s2)
    ctx->pc = 0x18e4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
label_18e4f8:
    // 0x18e4f8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18e4fc:
    // 0x18e4fc: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e500:
    // 0x18e500: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18e504:
    // 0x18e504: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e504u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e508:
    // 0x18e508: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18e508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18e50c:
    // 0x18e50c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18e510:
    // 0x18e510: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x18e510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_18e514:
    // 0x18e514: 0xc0532f4  jal         func_14CBD0
label_18e518:
    if (ctx->pc == 0x18E518u) {
        ctx->pc = 0x18E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E514u;
        // 0x18e518: 0x8e460450  lw          $a2, 0x450($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E51Cu;
        goto label_18e51c;
    }
    ctx->pc = 0x18E514u;
    SET_GPR_U32(ctx, 31, 0x18E51Cu);
    ctx->pc = 0x18E518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E514u;
    // 0x18e518: 0x8e460450  lw          $a2, 0x450($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18E514u, 0x18E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E51Cu;
label_18e51c:
    // 0x18e51c: 0xae40045c  sw          $zero, 0x45C($s2)
    ctx->pc = 0x18e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1116), GPR_U32(ctx, 0));
label_18e520:
    // 0x18e520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e524:
    // 0x18e524: 0xae400460  sw          $zero, 0x460($s2)
    ctx->pc = 0x18e524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1120), GPR_U32(ctx, 0));
label_18e528:
    // 0x18e528: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18e528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18e52c:
    // 0x18e52c: 0xae400464  sw          $zero, 0x464($s2)
    ctx->pc = 0x18e52cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1124), GPR_U32(ctx, 0));
label_18e530:
    // 0x18e530: 0xae40046c  sw          $zero, 0x46C($s2)
    ctx->pc = 0x18e530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1132), GPR_U32(ctx, 0));
label_18e534:
    // 0x18e534: 0xae400468  sw          $zero, 0x468($s2)
    ctx->pc = 0x18e534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 0));
label_18e538:
    // 0x18e538: 0xae402714  sw          $zero, 0x2714($s2)
    ctx->pc = 0x18e538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10004), GPR_U32(ctx, 0));
label_18e53c:
    // 0x18e53c: 0xc063e08  jal         func_18F820
label_18e540:
    if (ctx->pc == 0x18E540u) {
        ctx->pc = 0x18E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E53Cu;
        // 0x18e540: 0xae402710  sw          $zero, 0x2710($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 10000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E544u;
        goto label_18e544;
    }
    ctx->pc = 0x18E53Cu;
    SET_GPR_U32(ctx, 31, 0x18E544u);
    ctx->pc = 0x18E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E53Cu;
    // 0x18e540: 0xae402710  sw          $zero, 0x2710($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 10000), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E53Cu, 0x18E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E544u;
label_18e544:
    // 0x18e544: 0x1000006a  b           . + 4 + (0x6A << 2)
label_18e548:
    if (ctx->pc == 0x18E548u) {
        ctx->pc = 0x18E54Cu;
        goto label_18e54c;
    }
    ctx->pc = 0x18E544u;
    {
        const bool branch_taken_0x18e544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e544) {
            ctx->pc = 0x18E6F0u;
            goto label_18e6f0;
        }
    }
    ctx->pc = 0x18E54Cu;
label_18e54c:
    // 0x18e54c: 0x8e500484  lw          $s0, 0x484($s2)
    ctx->pc = 0x18e54cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1156)));
label_18e550:
    // 0x18e550: 0xc07d3ac  jal         func_1F4EB0
label_18e554:
    if (ctx->pc == 0x18E554u) {
        ctx->pc = 0x18E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E550u;
        // 0x18e554: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E558u;
        goto label_18e558;
    }
    ctx->pc = 0x18E550u;
    SET_GPR_U32(ctx, 31, 0x18E558u);
    ctx->pc = 0x18E554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E550u;
    // 0x18e554: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x18E550u, 0x18E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E558u;
label_18e558:
    // 0x18e558: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18e558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18e55c:
    // 0x18e55c: 0xc07d334  jal         func_1F4CD0
label_18e560:
    if (ctx->pc == 0x18E560u) {
        ctx->pc = 0x18E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E55Cu;
        // 0x18e560: 0x264505c0  addiu       $a1, $s2, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E564u;
        goto label_18e564;
    }
    ctx->pc = 0x18E55Cu;
    SET_GPR_U32(ctx, 31, 0x18E564u);
    ctx->pc = 0x18E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E55Cu;
    // 0x18e560: 0x264505c0  addiu       $a1, $s2, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CD0u, 0x18E55Cu, 0x18E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E564u;
label_18e564:
    // 0x18e564: 0x8e472724  lw          $a3, 0x2724($s2)
    ctx->pc = 0x18e564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
label_18e568:
    // 0x18e568: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x18e568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_18e56c:
    // 0x18e56c: 0x502823  subu        $a1, $v0, $s0
    ctx->pc = 0x18e56cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_18e570:
    // 0x18e570: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18e570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18e574:
    // 0x18e574: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x18e574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18e578:
    // 0x18e578: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18e578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18e57c:
    // 0x18e57c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x18e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_18e580:
    // 0x18e580: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x18e580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_18e584:
    // 0x18e584: 0x380c0  sll         $s0, $v1, 3
    ctx->pc = 0x18e584u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18e588:
    // 0x18e588: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x18e588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18e58c:
    // 0x18e58c: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x18e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_18e590:
    // 0x18e590: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x18e590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e594:
    // 0x18e594: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x18e594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_18e598:
    // 0x18e598: 0x8e432724  lw          $v1, 0x2724($s2)
    ctx->pc = 0x18e598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
label_18e59c:
    // 0x18e59c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x18e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_18e5a0:
    // 0x18e5a0: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x18e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e5a4:
    // 0x18e5a4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x18e5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_18e5a8:
    // 0x18e5a8: 0x8e432724  lw          $v1, 0x2724($s2)
    ctx->pc = 0x18e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
label_18e5ac:
    // 0x18e5ac: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x18e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_18e5b0:
    // 0x18e5b0: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x18e5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e5b4:
    // 0x18e5b4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x18e5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_18e5b8:
    // 0x18e5b8: 0xc07d2e2  jal         func_1F4B88
label_18e5bc:
    if (ctx->pc == 0x18E5BCu) {
        ctx->pc = 0x18E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5B8u;
        // 0x18e5bc: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E5C0u;
        goto label_18e5c0;
    }
    ctx->pc = 0x18E5B8u;
    SET_GPR_U32(ctx, 31, 0x18E5C0u);
    ctx->pc = 0x18E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5B8u;
    // 0x18e5bc: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x18E5B8u, 0x18E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E5C0u;
label_18e5c0:
    // 0x18e5c0: 0x8e422724  lw          $v0, 0x2724($s2)
    ctx->pc = 0x18e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
label_18e5c4:
    // 0x18e5c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18e5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18e5c8:
    // 0x18e5c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18e5cc:
    // 0x18e5cc: 0xc44c006c  lwc1        $f12, 0x6C($v0)
    ctx->pc = 0x18e5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18e5d0:
    // 0x18e5d0: 0xc0630d4  jal         func_18C350
label_18e5d4:
    if (ctx->pc == 0x18E5D4u) {
        ctx->pc = 0x18E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5D0u;
        // 0x18e5d4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E5D8u;
        goto label_18e5d8;
    }
    ctx->pc = 0x18E5D0u;
    SET_GPR_U32(ctx, 31, 0x18E5D8u);
    ctx->pc = 0x18E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5D0u;
    // 0x18e5d4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C350u, 0x18E5D0u, 0x18E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E5D8u;
label_18e5d8:
    // 0x18e5d8: 0x8e432724  lw          $v1, 0x2724($s2)
    ctx->pc = 0x18e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
label_18e5dc:
    // 0x18e5dc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18e5e0:
    // 0x18e5e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18e5e4:
    // 0x18e5e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18e5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18e5e8:
    // 0x18e5e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18e5ec:
    // 0x18e5ec: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18e5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18e5f0:
    // 0x18e5f0: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x18e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_18e5f4:
    // 0x18e5f4: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x18e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e5f8:
    // 0x18e5f8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x18e5f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_18e5fc:
    // 0x18e5fc: 0x0  nop
    ctx->pc = 0x18e5fcu;
    // NOP
label_18e600:
    // 0x18e600: 0x0  nop
    ctx->pc = 0x18e600u;
    // NOP
label_18e604:
    // 0x18e604: 0xc0631cc  jal         func_18C730
label_18e608:
    if (ctx->pc == 0x18E608u) {
        ctx->pc = 0x18E60Cu;
        goto label_18e60c;
    }
    ctx->pc = 0x18E604u;
    SET_GPR_U32(ctx, 31, 0x18E60Cu);
    ctx->pc = 0x18C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C730u, 0x18E604u, 0x18E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E60Cu;
label_18e60c:
    // 0x18e60c: 0xc063070  jal         func_18C1C0
label_18e610:
    if (ctx->pc == 0x18E610u) {
        ctx->pc = 0x18E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E60Cu;
        // 0x18e610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E614u;
        goto label_18e614;
    }
    ctx->pc = 0x18E60Cu;
    SET_GPR_U32(ctx, 31, 0x18E614u);
    ctx->pc = 0x18E610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E60Cu;
    // 0x18e610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C1C0u, 0x18E60Cu, 0x18E614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E614u;
label_18e614:
    // 0x18e614: 0x8e420478  lw          $v0, 0x478($s2)
    ctx->pc = 0x18e614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1144)));
label_18e618:
    // 0x18e618: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18e61c:
    // 0x18e61c: 0xae420478  sw          $v0, 0x478($s2)
    ctx->pc = 0x18e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1144), GPR_U32(ctx, 2));
label_18e620:
    // 0x18e620: 0x8e430484  lw          $v1, 0x484($s2)
    ctx->pc = 0x18e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1156)));
label_18e624:
    // 0x18e624: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x18e624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e628:
    // 0x18e628: 0x8e442724  lw          $a0, 0x2724($s2)
    ctx->pc = 0x18e628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
label_18e62c:
    // 0x18e62c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18e630:
    // 0x18e630: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18e630u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e634:
    // 0x18e634: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18e638:
    // 0x18e638: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e63c:
    // 0x18e63c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18e640:
    // 0x18e640: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18e644:
    // 0x18e644: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x18e644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e648:
    // 0x18e648: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18e648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18e64c:
    // 0x18e64c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18e64cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18e650:
    // 0x18e650: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18e650u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18e654:
    // 0x18e654: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18e654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18e658:
    // 0x18e658: 0x0  nop
    ctx->pc = 0x18e658u;
    // NOP
label_18e65c:
    // 0x18e65c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_18e660:
    if (ctx->pc == 0x18E660u) {
        ctx->pc = 0x18E664u;
        goto label_18e664;
    }
    ctx->pc = 0x18E65Cu;
    {
        const bool branch_taken_0x18e65c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e65c) {
            ctx->pc = 0x18E668u;
            goto label_18e668;
        }
    }
    ctx->pc = 0x18E664u;
label_18e664:
    // 0x18e664: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18e668:
    // 0x18e668: 0x8e420478  lw          $v0, 0x478($s2)
    ctx->pc = 0x18e668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1144)));
label_18e66c:
    // 0x18e66c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x18e66cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18e670:
    // 0x18e670: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_18e674:
    if (ctx->pc == 0x18E674u) {
        ctx->pc = 0x18E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E670u;
        // 0x18e674: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E678u;
        goto label_18e678;
    }
    ctx->pc = 0x18E670u;
    {
        const bool branch_taken_0x18e670 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E670u;
        // 0x18e674: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e670) {
            ctx->pc = 0x18E698u;
            goto label_18e698;
        }
    }
    ctx->pc = 0x18E678u;
label_18e678:
    // 0x18e678: 0xae400478  sw          $zero, 0x478($s2)
    ctx->pc = 0x18e678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1144), GPR_U32(ctx, 0));
label_18e67c:
    // 0x18e67c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e680:
    // 0x18e680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e684:
    // 0x18e684: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x18e684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18e688:
    // 0x18e688: 0xc063e08  jal         func_18F820
label_18e68c:
    if (ctx->pc == 0x18E68Cu) {
        ctx->pc = 0x18E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E688u;
        // 0x18e68c: 0xae422720  sw          $v0, 0x2720($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 10016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E690u;
        goto label_18e690;
    }
    ctx->pc = 0x18E688u;
    SET_GPR_U32(ctx, 31, 0x18E690u);
    ctx->pc = 0x18E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E688u;
    // 0x18e68c: 0xae422720  sw          $v0, 0x2720($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 10016), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E688u, 0x18E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E690u;
label_18e690:
    // 0x18e690: 0x10000017  b           . + 4 + (0x17 << 2)
label_18e694:
    if (ctx->pc == 0x18E694u) {
        ctx->pc = 0x18E698u;
        goto label_18e698;
    }
    ctx->pc = 0x18E690u;
    {
        const bool branch_taken_0x18e690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e690) {
            ctx->pc = 0x18E6F0u;
            goto label_18e6f0;
        }
    }
    ctx->pc = 0x18E698u;
label_18e698:
    // 0x18e698: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18e698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18e69c:
    // 0x18e69c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18e69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e6a0:
    // 0x18e6a0: 0xc06333c  jal         func_18CCF0
label_18e6a4:
    if (ctx->pc == 0x18E6A4u) {
        ctx->pc = 0x18E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6A0u;
        // 0x18e6a4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E6A8u;
        goto label_18e6a8;
    }
    ctx->pc = 0x18E6A0u;
    SET_GPR_U32(ctx, 31, 0x18E6A8u);
    ctx->pc = 0x18E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6A0u;
    // 0x18e6a4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCF0u, 0x18E6A0u, 0x18E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6A8u;
label_18e6a8:
    // 0x18e6a8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_18e6ac:
    if (ctx->pc == 0x18E6ACu) {
        ctx->pc = 0x18E6B0u;
        goto label_18e6b0;
    }
    ctx->pc = 0x18E6A8u;
    {
        const bool branch_taken_0x18e6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e6a8) {
            ctx->pc = 0x18E6F0u;
            goto label_18e6f0;
        }
    }
    ctx->pc = 0x18E6B0u;
label_18e6b0:
    // 0x18e6b0: 0x8e420484  lw          $v0, 0x484($s2)
    ctx->pc = 0x18e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1156)));
label_18e6b4:
    // 0x18e6b4: 0x8e43271c  lw          $v1, 0x271C($s2)
    ctx->pc = 0x18e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10012)));
label_18e6b8:
    // 0x18e6b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18e6bc:
    // 0x18e6bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_18e6c0:
    if (ctx->pc == 0x18E6C0u) {
        ctx->pc = 0x18E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6BCu;
        // 0x18e6c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E6C4u;
        goto label_18e6c4;
    }
    ctx->pc = 0x18E6BCu;
    {
        const bool branch_taken_0x18e6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6BCu;
        // 0x18e6c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6bc) {
            ctx->pc = 0x18E6D0u;
            goto label_18e6d0;
        }
    }
    ctx->pc = 0x18E6C4u;
label_18e6c4:
    // 0x18e6c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18e6c8:
    // 0x18e6c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_18e6cc:
    if (ctx->pc == 0x18E6CCu) {
        ctx->pc = 0x18E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6C8u;
        // 0x18e6cc: 0xae422720  sw          $v0, 0x2720($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 10016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E6D0u;
        goto label_18e6d0;
    }
    ctx->pc = 0x18E6C8u;
    {
        const bool branch_taken_0x18e6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6C8u;
        // 0x18e6cc: 0xae422720  sw          $v0, 0x2720($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 10016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6c8) {
            ctx->pc = 0x18E6D4u;
            goto label_18e6d4;
        }
    }
    ctx->pc = 0x18E6D0u;
label_18e6d0:
    // 0x18e6d0: 0xae422720  sw          $v0, 0x2720($s2)
    ctx->pc = 0x18e6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10016), GPR_U32(ctx, 2));
label_18e6d4:
    // 0x18e6d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e6d8:
    // 0x18e6d8: 0xc063e08  jal         func_18F820
label_18e6dc:
    if (ctx->pc == 0x18E6DCu) {
        ctx->pc = 0x18E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6D8u;
        // 0x18e6dc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E6E0u;
        goto label_18e6e0;
    }
    ctx->pc = 0x18E6D8u;
    SET_GPR_U32(ctx, 31, 0x18E6E0u);
    ctx->pc = 0x18E6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6D8u;
    // 0x18e6dc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E6D8u, 0x18E6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6E0u;
label_18e6e0:
    // 0x18e6e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_18e6e4:
    if (ctx->pc == 0x18E6E4u) {
        ctx->pc = 0x18E6E8u;
        goto label_18e6e8;
    }
    ctx->pc = 0x18E6E0u;
    {
        const bool branch_taken_0x18e6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e6e0) {
            ctx->pc = 0x18E6F0u;
            goto label_18e6f0;
        }
    }
    ctx->pc = 0x18E6E8u;
label_18e6e8:
    // 0x18e6e8: 0xc063e34  jal         func_18F8D0
label_18e6ec:
    if (ctx->pc == 0x18E6ECu) {
        ctx->pc = 0x18E6F0u;
        goto label_18e6f0;
    }
    ctx->pc = 0x18E6E8u;
    SET_GPR_U32(ctx, 31, 0x18E6F0u);
    ctx->pc = 0x18F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F8D0u, 0x18E6E8u, 0x18E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6F0u;
label_18e6f0:
    // 0x18e6f0: 0xae40045c  sw          $zero, 0x45C($s2)
    ctx->pc = 0x18e6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1116), GPR_U32(ctx, 0));
label_18e6f4:
    // 0x18e6f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18e6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18e6f8:
    // 0x18e6f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e6f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18e6fc:
    // 0x18e6fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e6fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18e700:
    // 0x18e700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18e704:
    // 0x18e704: 0x3e00008  jr          $ra
label_18e708:
    if (ctx->pc == 0x18E708u) {
        ctx->pc = 0x18E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E704u;
        // 0x18e708: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E70Cu;
        goto label_fallthrough_0x18e704;
    }
    ctx->pc = 0x18E704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E704u;
        // 0x18e708: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18e704:
    ctx->pc = 0x18E70Cu;
}
