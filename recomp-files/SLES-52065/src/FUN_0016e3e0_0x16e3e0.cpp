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

// Function: FUN_0016e3e0
// Address: 0x16e3e0 - 0x16e734
void FUN_0016e3e0_0x16e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016e3e0_0x16e3e0");
#endif

    switch (ctx->pc) {
        case 0x16e3e0u: goto label_16e3e0;
        case 0x16e3e4u: goto label_16e3e4;
        case 0x16e3e8u: goto label_16e3e8;
        case 0x16e3ecu: goto label_16e3ec;
        case 0x16e3f0u: goto label_16e3f0;
        case 0x16e3f4u: goto label_16e3f4;
        case 0x16e3f8u: goto label_16e3f8;
        case 0x16e3fcu: goto label_16e3fc;
        case 0x16e400u: goto label_16e400;
        case 0x16e404u: goto label_16e404;
        case 0x16e408u: goto label_16e408;
        case 0x16e40cu: goto label_16e40c;
        case 0x16e410u: goto label_16e410;
        case 0x16e414u: goto label_16e414;
        case 0x16e418u: goto label_16e418;
        case 0x16e41cu: goto label_16e41c;
        case 0x16e420u: goto label_16e420;
        case 0x16e424u: goto label_16e424;
        case 0x16e428u: goto label_16e428;
        case 0x16e42cu: goto label_16e42c;
        case 0x16e430u: goto label_16e430;
        case 0x16e434u: goto label_16e434;
        case 0x16e438u: goto label_16e438;
        case 0x16e43cu: goto label_16e43c;
        case 0x16e440u: goto label_16e440;
        case 0x16e444u: goto label_16e444;
        case 0x16e448u: goto label_16e448;
        case 0x16e44cu: goto label_16e44c;
        case 0x16e450u: goto label_16e450;
        case 0x16e454u: goto label_16e454;
        case 0x16e458u: goto label_16e458;
        case 0x16e45cu: goto label_16e45c;
        case 0x16e460u: goto label_16e460;
        case 0x16e464u: goto label_16e464;
        case 0x16e468u: goto label_16e468;
        case 0x16e46cu: goto label_16e46c;
        case 0x16e470u: goto label_16e470;
        case 0x16e474u: goto label_16e474;
        case 0x16e478u: goto label_16e478;
        case 0x16e47cu: goto label_16e47c;
        case 0x16e480u: goto label_16e480;
        case 0x16e484u: goto label_16e484;
        case 0x16e488u: goto label_16e488;
        case 0x16e48cu: goto label_16e48c;
        case 0x16e490u: goto label_16e490;
        case 0x16e494u: goto label_16e494;
        case 0x16e498u: goto label_16e498;
        case 0x16e49cu: goto label_16e49c;
        case 0x16e4a0u: goto label_16e4a0;
        case 0x16e4a4u: goto label_16e4a4;
        case 0x16e4a8u: goto label_16e4a8;
        case 0x16e4acu: goto label_16e4ac;
        case 0x16e4b0u: goto label_16e4b0;
        case 0x16e4b4u: goto label_16e4b4;
        case 0x16e4b8u: goto label_16e4b8;
        case 0x16e4bcu: goto label_16e4bc;
        case 0x16e4c0u: goto label_16e4c0;
        case 0x16e4c4u: goto label_16e4c4;
        case 0x16e4c8u: goto label_16e4c8;
        case 0x16e4ccu: goto label_16e4cc;
        case 0x16e4d0u: goto label_16e4d0;
        case 0x16e4d4u: goto label_16e4d4;
        case 0x16e4d8u: goto label_16e4d8;
        case 0x16e4dcu: goto label_16e4dc;
        case 0x16e4e0u: goto label_16e4e0;
        case 0x16e4e4u: goto label_16e4e4;
        case 0x16e4e8u: goto label_16e4e8;
        case 0x16e4ecu: goto label_16e4ec;
        case 0x16e4f0u: goto label_16e4f0;
        case 0x16e4f4u: goto label_16e4f4;
        case 0x16e4f8u: goto label_16e4f8;
        case 0x16e4fcu: goto label_16e4fc;
        case 0x16e500u: goto label_16e500;
        case 0x16e504u: goto label_16e504;
        case 0x16e508u: goto label_16e508;
        case 0x16e50cu: goto label_16e50c;
        case 0x16e510u: goto label_16e510;
        case 0x16e514u: goto label_16e514;
        case 0x16e518u: goto label_16e518;
        case 0x16e51cu: goto label_16e51c;
        case 0x16e520u: goto label_16e520;
        case 0x16e524u: goto label_16e524;
        case 0x16e528u: goto label_16e528;
        case 0x16e52cu: goto label_16e52c;
        case 0x16e530u: goto label_16e530;
        case 0x16e534u: goto label_16e534;
        case 0x16e538u: goto label_16e538;
        case 0x16e53cu: goto label_16e53c;
        case 0x16e540u: goto label_16e540;
        case 0x16e544u: goto label_16e544;
        case 0x16e548u: goto label_16e548;
        case 0x16e54cu: goto label_16e54c;
        case 0x16e550u: goto label_16e550;
        case 0x16e554u: goto label_16e554;
        case 0x16e558u: goto label_16e558;
        case 0x16e55cu: goto label_16e55c;
        case 0x16e560u: goto label_16e560;
        case 0x16e564u: goto label_16e564;
        case 0x16e568u: goto label_16e568;
        case 0x16e56cu: goto label_16e56c;
        case 0x16e570u: goto label_16e570;
        case 0x16e574u: goto label_16e574;
        case 0x16e578u: goto label_16e578;
        case 0x16e57cu: goto label_16e57c;
        case 0x16e580u: goto label_16e580;
        case 0x16e584u: goto label_16e584;
        case 0x16e588u: goto label_16e588;
        case 0x16e58cu: goto label_16e58c;
        case 0x16e590u: goto label_16e590;
        case 0x16e594u: goto label_16e594;
        case 0x16e598u: goto label_16e598;
        case 0x16e59cu: goto label_16e59c;
        case 0x16e5a0u: goto label_16e5a0;
        case 0x16e5a4u: goto label_16e5a4;
        case 0x16e5a8u: goto label_16e5a8;
        case 0x16e5acu: goto label_16e5ac;
        case 0x16e5b0u: goto label_16e5b0;
        case 0x16e5b4u: goto label_16e5b4;
        case 0x16e5b8u: goto label_16e5b8;
        case 0x16e5bcu: goto label_16e5bc;
        case 0x16e5c0u: goto label_16e5c0;
        case 0x16e5c4u: goto label_16e5c4;
        case 0x16e5c8u: goto label_16e5c8;
        case 0x16e5ccu: goto label_16e5cc;
        case 0x16e5d0u: goto label_16e5d0;
        case 0x16e5d4u: goto label_16e5d4;
        case 0x16e5d8u: goto label_16e5d8;
        case 0x16e5dcu: goto label_16e5dc;
        case 0x16e5e0u: goto label_16e5e0;
        case 0x16e5e4u: goto label_16e5e4;
        case 0x16e5e8u: goto label_16e5e8;
        case 0x16e5ecu: goto label_16e5ec;
        case 0x16e5f0u: goto label_16e5f0;
        case 0x16e5f4u: goto label_16e5f4;
        case 0x16e5f8u: goto label_16e5f8;
        case 0x16e5fcu: goto label_16e5fc;
        case 0x16e600u: goto label_16e600;
        case 0x16e604u: goto label_16e604;
        case 0x16e608u: goto label_16e608;
        case 0x16e60cu: goto label_16e60c;
        case 0x16e610u: goto label_16e610;
        case 0x16e614u: goto label_16e614;
        case 0x16e618u: goto label_16e618;
        case 0x16e61cu: goto label_16e61c;
        case 0x16e620u: goto label_16e620;
        case 0x16e624u: goto label_16e624;
        case 0x16e628u: goto label_16e628;
        case 0x16e62cu: goto label_16e62c;
        case 0x16e630u: goto label_16e630;
        case 0x16e634u: goto label_16e634;
        case 0x16e638u: goto label_16e638;
        case 0x16e63cu: goto label_16e63c;
        case 0x16e640u: goto label_16e640;
        case 0x16e644u: goto label_16e644;
        case 0x16e648u: goto label_16e648;
        case 0x16e64cu: goto label_16e64c;
        case 0x16e650u: goto label_16e650;
        case 0x16e654u: goto label_16e654;
        case 0x16e658u: goto label_16e658;
        case 0x16e65cu: goto label_16e65c;
        case 0x16e660u: goto label_16e660;
        case 0x16e664u: goto label_16e664;
        case 0x16e668u: goto label_16e668;
        case 0x16e66cu: goto label_16e66c;
        case 0x16e670u: goto label_16e670;
        case 0x16e674u: goto label_16e674;
        case 0x16e678u: goto label_16e678;
        case 0x16e67cu: goto label_16e67c;
        case 0x16e680u: goto label_16e680;
        case 0x16e684u: goto label_16e684;
        case 0x16e688u: goto label_16e688;
        case 0x16e68cu: goto label_16e68c;
        case 0x16e690u: goto label_16e690;
        case 0x16e694u: goto label_16e694;
        case 0x16e698u: goto label_16e698;
        case 0x16e69cu: goto label_16e69c;
        case 0x16e6a0u: goto label_16e6a0;
        case 0x16e6a4u: goto label_16e6a4;
        case 0x16e6a8u: goto label_16e6a8;
        case 0x16e6acu: goto label_16e6ac;
        case 0x16e6b0u: goto label_16e6b0;
        case 0x16e6b4u: goto label_16e6b4;
        case 0x16e6b8u: goto label_16e6b8;
        case 0x16e6bcu: goto label_16e6bc;
        case 0x16e6c0u: goto label_16e6c0;
        case 0x16e6c4u: goto label_16e6c4;
        case 0x16e6c8u: goto label_16e6c8;
        case 0x16e6ccu: goto label_16e6cc;
        case 0x16e6d0u: goto label_16e6d0;
        case 0x16e6d4u: goto label_16e6d4;
        case 0x16e6d8u: goto label_16e6d8;
        case 0x16e6dcu: goto label_16e6dc;
        case 0x16e6e0u: goto label_16e6e0;
        case 0x16e6e4u: goto label_16e6e4;
        case 0x16e6e8u: goto label_16e6e8;
        case 0x16e6ecu: goto label_16e6ec;
        case 0x16e6f0u: goto label_16e6f0;
        case 0x16e6f4u: goto label_16e6f4;
        case 0x16e6f8u: goto label_16e6f8;
        case 0x16e6fcu: goto label_16e6fc;
        case 0x16e700u: goto label_16e700;
        case 0x16e704u: goto label_16e704;
        case 0x16e708u: goto label_16e708;
        case 0x16e70cu: goto label_16e70c;
        case 0x16e710u: goto label_16e710;
        case 0x16e714u: goto label_16e714;
        case 0x16e718u: goto label_16e718;
        case 0x16e71cu: goto label_16e71c;
        case 0x16e720u: goto label_16e720;
        case 0x16e724u: goto label_16e724;
        case 0x16e728u: goto label_16e728;
        case 0x16e72cu: goto label_16e72c;
        case 0x16e730u: goto label_16e730;
        default: break;
    }

    ctx->pc = 0x16e3e0u;

label_16e3e0:
    // 0x16e3e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16e3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16e3e4:
    // 0x16e3e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16e3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16e3e8:
    // 0x16e3e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16e3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16e3ec:
    // 0x16e3ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16e3f0:
    // 0x16e3f0: 0x8c8301d8  lw          $v1, 0x1D8($a0)
    ctx->pc = 0x16e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 472)));
label_16e3f4:
    // 0x16e3f4: 0x90630042  lbu         $v1, 0x42($v1)
    ctx->pc = 0x16e3f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 66)));
label_16e3f8:
    // 0x16e3f8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_16e3fc:
    if (ctx->pc == 0x16E3FCu) {
        ctx->pc = 0x16E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3F8u;
        // 0x16e3fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E400u;
        goto label_16e400;
    }
    ctx->pc = 0x16E3F8u;
    {
        const bool branch_taken_0x16e3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3F8u;
        // 0x16e3fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e3f8) {
            ctx->pc = 0x16E478u;
            goto label_16e478;
        }
    }
    ctx->pc = 0x16E400u;
label_16e400:
    // 0x16e400: 0x10000016  b           . + 4 + (0x16 << 2)
label_16e404:
    if (ctx->pc == 0x16E404u) {
        ctx->pc = 0x16E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E400u;
        // 0x16e404: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E408u;
        goto label_16e408;
    }
    ctx->pc = 0x16E400u;
    {
        const bool branch_taken_0x16e400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E400u;
        // 0x16e404: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e400) {
            ctx->pc = 0x16E45Cu;
            goto label_16e45c;
        }
    }
    ctx->pc = 0x16E408u;
label_16e408:
    // 0x16e408: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x16e408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_16e40c:
    // 0x16e40c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16e410:
    // 0x16e410: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16e410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_16e414:
    // 0x16e414: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16e414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16e418:
    // 0x16e418: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16e418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16e41c:
    // 0x16e41c: 0x84630080  lh          $v1, 0x80($v1)
    ctx->pc = 0x16e41cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_16e420:
    // 0x16e420: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
label_16e424:
    if (ctx->pc == 0x16E424u) {
        ctx->pc = 0x16E428u;
        goto label_16e428;
    }
    ctx->pc = 0x16E420u;
    {
        const bool branch_taken_0x16e420 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16e420) {
            ctx->pc = 0x16E458u;
            goto label_16e458;
        }
    }
    ctx->pc = 0x16E428u;
label_16e428:
    // 0x16e428: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16e428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16e42c:
    // 0x16e42c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16e430:
    // 0x16e430: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16e430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16e434:
    // 0x16e434: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16e434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e438:
    // 0x16e438: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e43c:
    // 0x16e43c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16e440:
    // 0x16e440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e444:
    // 0x16e444: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e448:
    // 0x16e448: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16e448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e44c:
    // 0x16e44c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16e44cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16e450:
    // 0x16e450: 0x320f809  jalr        $t9
label_16e454:
    if (ctx->pc == 0x16E454u) {
        ctx->pc = 0x16E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E450u;
        // 0x16e454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E458u;
        goto label_16e458;
    }
    ctx->pc = 0x16E450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E458u);
        ctx->pc = 0x16E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E450u;
        // 0x16e454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E450u, 0x16E458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E458u;
label_16e458:
    // 0x16e458: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16e458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16e45c:
    // 0x16e45c: 0x0  nop
    ctx->pc = 0x16e45cu;
    // NOP
label_16e460:
    // 0x16e460: 0x86230214  lh          $v1, 0x214($s1)
    ctx->pc = 0x16e460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
label_16e464:
    // 0x16e464: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16e464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_16e468:
    // 0x16e468: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_16e46c:
    if (ctx->pc == 0x16E46Cu) {
        ctx->pc = 0x16E470u;
        goto label_16e470;
    }
    ctx->pc = 0x16E468u;
    {
        const bool branch_taken_0x16e468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e468) {
            ctx->pc = 0x16E408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e408;
        }
    }
    ctx->pc = 0x16E470u;
label_16e470:
    // 0x16e470: 0x100000ac  b           . + 4 + (0xAC << 2)
label_16e474:
    if (ctx->pc == 0x16E474u) {
        ctx->pc = 0x16E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E470u;
        // 0x16e474: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E478u;
        goto label_16e478;
    }
    ctx->pc = 0x16E470u;
    {
        const bool branch_taken_0x16e470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E470u;
        // 0x16e474: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e470) {
            ctx->pc = 0x16E724u;
            goto label_16e724;
        }
    }
    ctx->pc = 0x16E478u;
label_16e478:
    // 0x16e478: 0x10000016  b           . + 4 + (0x16 << 2)
label_16e47c:
    if (ctx->pc == 0x16E47Cu) {
        ctx->pc = 0x16E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E478u;
        // 0x16e47c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E480u;
        goto label_16e480;
    }
    ctx->pc = 0x16E478u;
    {
        const bool branch_taken_0x16e478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E478u;
        // 0x16e47c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e478) {
            ctx->pc = 0x16E4D4u;
            goto label_16e4d4;
        }
    }
    ctx->pc = 0x16E480u;
label_16e480:
    // 0x16e480: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x16e480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_16e484:
    // 0x16e484: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16e484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16e488:
    // 0x16e488: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16e488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_16e48c:
    // 0x16e48c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16e490:
    // 0x16e490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16e490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16e494:
    // 0x16e494: 0x84630080  lh          $v1, 0x80($v1)
    ctx->pc = 0x16e494u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_16e498:
    // 0x16e498: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
label_16e49c:
    if (ctx->pc == 0x16E49Cu) {
        ctx->pc = 0x16E4A0u;
        goto label_16e4a0;
    }
    ctx->pc = 0x16E498u;
    {
        const bool branch_taken_0x16e498 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16e498) {
            ctx->pc = 0x16E4D0u;
            goto label_16e4d0;
        }
    }
    ctx->pc = 0x16E4A0u;
label_16e4a0:
    // 0x16e4a0: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16e4a4:
    // 0x16e4a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16e4a8:
    // 0x16e4a8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16e4ac:
    // 0x16e4ac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e4b0:
    // 0x16e4b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e4b4:
    // 0x16e4b4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16e4b8:
    // 0x16e4b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e4bc:
    // 0x16e4bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16e4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e4c0:
    // 0x16e4c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16e4c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e4c4:
    // 0x16e4c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16e4c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16e4c8:
    // 0x16e4c8: 0x320f809  jalr        $t9
label_16e4cc:
    if (ctx->pc == 0x16E4CCu) {
        ctx->pc = 0x16E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4C8u;
        // 0x16e4cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E4D0u;
        goto label_16e4d0;
    }
    ctx->pc = 0x16E4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E4D0u);
        ctx->pc = 0x16E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4C8u;
        // 0x16e4cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E4C8u, 0x16E4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E4D0u;
label_16e4d0:
    // 0x16e4d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16e4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16e4d4:
    // 0x16e4d4: 0x0  nop
    ctx->pc = 0x16e4d4u;
    // NOP
label_16e4d8:
    // 0x16e4d8: 0x86230214  lh          $v1, 0x214($s1)
    ctx->pc = 0x16e4d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
label_16e4dc:
    // 0x16e4dc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16e4dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_16e4e0:
    // 0x16e4e0: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_16e4e4:
    if (ctx->pc == 0x16E4E4u) {
        ctx->pc = 0x16E4E8u;
        goto label_16e4e8;
    }
    ctx->pc = 0x16E4E0u;
    {
        const bool branch_taken_0x16e4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e4e0) {
            ctx->pc = 0x16E480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e480;
        }
    }
    ctx->pc = 0x16E4E8u;
label_16e4e8:
    // 0x16e4e8: 0x86230218  lh          $v1, 0x218($s1)
    ctx->pc = 0x16e4e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 536)));
label_16e4ec:
    // 0x16e4ec: 0x4610023  bgez        $v1, . + 4 + (0x23 << 2)
label_16e4f0:
    if (ctx->pc == 0x16E4F0u) {
        ctx->pc = 0x16E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4ECu;
        // 0x16e4f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E4F4u;
        goto label_16e4f4;
    }
    ctx->pc = 0x16E4ECu;
    {
        const bool branch_taken_0x16e4ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4ECu;
        // 0x16e4f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e4ec) {
            ctx->pc = 0x16E57Cu;
            goto label_16e57c;
        }
    }
    ctx->pc = 0x16E4F4u;
label_16e4f4:
    // 0x16e4f4: 0x10000019  b           . + 4 + (0x19 << 2)
label_16e4f8:
    if (ctx->pc == 0x16E4F8u) {
        ctx->pc = 0x16E4FCu;
        goto label_16e4fc;
    }
    ctx->pc = 0x16E4F4u;
    {
        const bool branch_taken_0x16e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e4f4) {
            ctx->pc = 0x16E55Cu;
            goto label_16e55c;
        }
    }
    ctx->pc = 0x16E4FCu;
label_16e4fc:
    // 0x16e4fc: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x16e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_16e500:
    // 0x16e500: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16e500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16e504:
    // 0x16e504: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16e504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_16e508:
    // 0x16e508: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16e508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16e50c:
    // 0x16e50c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16e510:
    // 0x16e510: 0x84650080  lh          $a1, 0x80($v1)
    ctx->pc = 0x16e510u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_16e514:
    // 0x16e514: 0x4a00010  bltz        $a1, . + 4 + (0x10 << 2)
label_16e518:
    if (ctx->pc == 0x16E518u) {
        ctx->pc = 0x16E51Cu;
        goto label_16e51c;
    }
    ctx->pc = 0x16E514u;
    {
        const bool branch_taken_0x16e514 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x16e514) {
            ctx->pc = 0x16E558u;
            goto label_16e558;
        }
    }
    ctx->pc = 0x16E51Cu;
label_16e51c:
    // 0x16e51c: 0x8f838608  lw          $v1, -0x79F8($gp)
    ctx->pc = 0x16e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16e520:
    // 0x16e520: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16e520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16e524:
    // 0x16e524: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16e524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16e528:
    // 0x16e528: 0xc046744  jal         func_119D10
label_16e52c:
    if (ctx->pc == 0x16E52Cu) {
        ctx->pc = 0x16E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E528u;
        // 0x16e52c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E530u;
        goto label_16e530;
    }
    ctx->pc = 0x16E528u;
    SET_GPR_U32(ctx, 31, 0x16E530u);
    ctx->pc = 0x16E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E528u;
    // 0x16e52c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x16E528u, 0x16E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E530u;
label_16e530:
    // 0x16e530: 0x8e260210  lw          $a2, 0x210($s1)
    ctx->pc = 0x16e530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_16e534:
    // 0x16e534: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16e534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16e538:
    // 0x16e538: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16e538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_16e53c:
    // 0x16e53c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x16e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16e540:
    // 0x16e540: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x16e540u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16e544:
    // 0x16e544: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x16e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_16e548:
    // 0x16e548: 0xa4600082  sh          $zero, 0x82($v1)
    ctx->pc = 0x16e548u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 130), (uint16_t)GPR_U32(ctx, 0));
label_16e54c:
    // 0x16e54c: 0x8e230210  lw          $v1, 0x210($s1)
    ctx->pc = 0x16e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_16e550:
    // 0x16e550: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16e550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_16e554:
    // 0x16e554: 0xa4640080  sh          $a0, 0x80($v1)
    ctx->pc = 0x16e554u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 4));
label_16e558:
    // 0x16e558: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16e558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16e55c:
    // 0x16e55c: 0x0  nop
    ctx->pc = 0x16e55cu;
    // NOP
label_16e560:
    // 0x16e560: 0x86230214  lh          $v1, 0x214($s1)
    ctx->pc = 0x16e560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
label_16e564:
    // 0x16e564: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16e564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_16e568:
    // 0x16e568: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_16e56c:
    if (ctx->pc == 0x16E56Cu) {
        ctx->pc = 0x16E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E568u;
        // 0x16e56c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E570u;
        goto label_16e570;
    }
    ctx->pc = 0x16E568u;
    {
        const bool branch_taken_0x16e568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E568u;
        // 0x16e56c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e568) {
            ctx->pc = 0x16E4FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e4fc;
        }
    }
    ctx->pc = 0x16E570u;
label_16e570:
    // 0x16e570: 0xa22301d3  sb          $v1, 0x1D3($s1)
    ctx->pc = 0x16e570u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 3));
label_16e574:
    // 0x16e574: 0xa6200216  sh          $zero, 0x216($s1)
    ctx->pc = 0x16e574u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 534), (uint16_t)GPR_U32(ctx, 0));
label_16e578:
    // 0x16e578: 0xa6200218  sh          $zero, 0x218($s1)
    ctx->pc = 0x16e578u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 536), (uint16_t)GPR_U32(ctx, 0));
label_16e57c:
    // 0x16e57c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e580:
    // 0x16e580: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16e580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16e584:
    // 0x16e584: 0x80840022  lb          $a0, 0x22($a0)
    ctx->pc = 0x16e584u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_16e588:
    // 0x16e588: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_16e58c:
    if (ctx->pc == 0x16E58Cu) {
        ctx->pc = 0x16E590u;
        goto label_16e590;
    }
    ctx->pc = 0x16E588u;
    {
        const bool branch_taken_0x16e588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16e588) {
            ctx->pc = 0x16E5C8u;
            goto label_16e5c8;
        }
    }
    ctx->pc = 0x16E590u;
label_16e590:
    // 0x16e590: 0x86240216  lh          $a0, 0x216($s1)
    ctx->pc = 0x16e590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 534)));
label_16e594:
    // 0x16e594: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x16e594u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_16e598:
    // 0x16e598: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
label_16e59c:
    if (ctx->pc == 0x16E59Cu) {
        ctx->pc = 0x16E5A0u;
        goto label_16e5a0;
    }
    ctx->pc = 0x16E598u;
    {
        const bool branch_taken_0x16e598 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e598) {
            ctx->pc = 0x16E720u;
            goto label_16e720;
        }
    }
    ctx->pc = 0x16E5A0u;
label_16e5a0:
    // 0x16e5a0: 0x86230214  lh          $v1, 0x214($s1)
    ctx->pc = 0x16e5a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
label_16e5a4:
    // 0x16e5a4: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x16e5a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_16e5a8:
    // 0x16e5a8: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
label_16e5ac:
    if (ctx->pc == 0x16E5ACu) {
        ctx->pc = 0x16E5B0u;
        goto label_16e5b0;
    }
    ctx->pc = 0x16E5A8u;
    {
        const bool branch_taken_0x16e5a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e5a8) {
            ctx->pc = 0x16E720u;
            goto label_16e720;
        }
    }
    ctx->pc = 0x16E5B0u;
label_16e5b0:
    // 0x16e5b0: 0x86240218  lh          $a0, 0x218($s1)
    ctx->pc = 0x16e5b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 536)));
label_16e5b4:
    // 0x16e5b4: 0x240307f8  addiu       $v1, $zero, 0x7F8
    ctx->pc = 0x16e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
label_16e5b8:
    // 0x16e5b8: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
label_16e5bc:
    if (ctx->pc == 0x16E5BCu) {
        ctx->pc = 0x16E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5B8u;
        // 0x16e5bc: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E5C0u;
        goto label_16e5c0;
    }
    ctx->pc = 0x16E5B8u;
    {
        const bool branch_taken_0x16e5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5B8u;
        // 0x16e5bc: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5b8) {
            ctx->pc = 0x16E720u;
            goto label_16e720;
        }
    }
    ctx->pc = 0x16E5C0u;
label_16e5c0:
    // 0x16e5c0: 0x10000057  b           . + 4 + (0x57 << 2)
label_16e5c4:
    if (ctx->pc == 0x16E5C4u) {
        ctx->pc = 0x16E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5C0u;
        // 0x16e5c4: 0xa6230218  sh          $v1, 0x218($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 536), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E5C8u;
        goto label_16e5c8;
    }
    ctx->pc = 0x16E5C0u;
    {
        const bool branch_taken_0x16e5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5C0u;
        // 0x16e5c4: 0xa6230218  sh          $v1, 0x218($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 536), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5c0) {
            ctx->pc = 0x16E720u;
            goto label_16e720;
        }
    }
    ctx->pc = 0x16E5C8u;
label_16e5c8:
    // 0x16e5c8: 0x86240216  lh          $a0, 0x216($s1)
    ctx->pc = 0x16e5c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 534)));
label_16e5cc:
    // 0x16e5cc: 0x86230214  lh          $v1, 0x214($s1)
    ctx->pc = 0x16e5ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
label_16e5d0:
    // 0x16e5d0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x16e5d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_16e5d4:
    // 0x16e5d4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_16e5d8:
    if (ctx->pc == 0x16E5D8u) {
        ctx->pc = 0x16E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5D4u;
        // 0x16e5d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E5DCu;
        goto label_16e5dc;
    }
    ctx->pc = 0x16E5D4u;
    {
        const bool branch_taken_0x16e5d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5D4u;
        // 0x16e5d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5d4) {
            ctx->pc = 0x16E5F4u;
            goto label_16e5f4;
        }
    }
    ctx->pc = 0x16E5DCu;
label_16e5dc:
    // 0x16e5dc: 0x86240218  lh          $a0, 0x218($s1)
    ctx->pc = 0x16e5dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 536)));
label_16e5e0:
    // 0x16e5e0: 0x240307f8  addiu       $v1, $zero, 0x7F8
    ctx->pc = 0x16e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
label_16e5e4:
    // 0x16e5e4: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_16e5e8:
    if (ctx->pc == 0x16E5E8u) {
        ctx->pc = 0x16E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5E4u;
        // 0x16e5e8: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E5ECu;
        goto label_16e5ec;
    }
    ctx->pc = 0x16E5E4u;
    {
        const bool branch_taken_0x16e5e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5E4u;
        // 0x16e5e8: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5e4) {
            ctx->pc = 0x16E5F0u;
            goto label_16e5f0;
        }
    }
    ctx->pc = 0x16E5ECu;
label_16e5ec:
    // 0x16e5ec: 0xa6230218  sh          $v1, 0x218($s1)
    ctx->pc = 0x16e5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 536), (uint16_t)GPR_U32(ctx, 3));
label_16e5f0:
    // 0x16e5f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16e5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e5f4:
    // 0x16e5f4: 0x10000045  b           . + 4 + (0x45 << 2)
label_16e5f8:
    if (ctx->pc == 0x16E5F8u) {
        ctx->pc = 0x16E5FCu;
        goto label_16e5fc;
    }
    ctx->pc = 0x16E5F4u;
    {
        const bool branch_taken_0x16e5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e5f4) {
            ctx->pc = 0x16E70Cu;
            goto label_16e70c;
        }
    }
    ctx->pc = 0x16E5FCu;
label_16e5fc:
    // 0x16e5fc: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x16e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_16e600:
    // 0x16e600: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16e600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16e604:
    // 0x16e604: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16e604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_16e608:
    // 0x16e608: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16e608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16e60c:
    // 0x16e60c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16e610:
    // 0x16e610: 0x84830080  lh          $v1, 0x80($a0)
    ctx->pc = 0x16e610u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 128)));
label_16e614:
    // 0x16e614: 0x460003b  bltz        $v1, . + 4 + (0x3B << 2)
label_16e618:
    if (ctx->pc == 0x16E618u) {
        ctx->pc = 0x16E61Cu;
        goto label_16e61c;
    }
    ctx->pc = 0x16E614u;
    {
        const bool branch_taken_0x16e614 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16e614) {
            ctx->pc = 0x16E704u;
            goto label_16e704;
        }
    }
    ctx->pc = 0x16E61Cu;
label_16e61c:
    // 0x16e61c: 0xc05bb78  jal         func_16EDE0
label_16e620:
    if (ctx->pc == 0x16E620u) {
        ctx->pc = 0x16E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E61Cu;
        // 0x16e620: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E624u;
        goto label_16e624;
    }
    ctx->pc = 0x16E61Cu;
    SET_GPR_U32(ctx, 31, 0x16E624u);
    ctx->pc = 0x16E620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E61Cu;
    // 0x16e620: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EDE0u, 0x16E61Cu, 0x16E624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E624u;
label_16e624:
    // 0x16e624: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x16e624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_16e628:
    // 0x16e628: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16e628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16e62c:
    // 0x16e62c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_16e630:
    // 0x16e630: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x16e630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_16e634:
    // 0x16e634: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x16e634u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16e638:
    // 0x16e638: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x16e638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_16e63c:
    // 0x16e63c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x16e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_16e640:
    // 0x16e640: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x16e640u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_16e644:
    // 0x16e644: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16e644u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16e648:
    // 0x16e648: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16e648u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_16e64c:
    // 0x16e64c: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x16e64cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16e650:
    // 0x16e650: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16e650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16e654:
    // 0x16e654: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16e654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16e658:
    // 0x16e658: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16e658u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_16e65c:
    // 0x16e65c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16e65cu;
    // VWAITQ (Q already resolved in this runtime)
label_16e660:
    // 0x16e660: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16e660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16e664:
    // 0x16e664: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16e664u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_16e668:
    // 0x16e668: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16e668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16e66c:
    // 0x16e66c: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x16e66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e670:
    // 0x16e670: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x16e670u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_16e674:
    // 0x16e674: 0x46000105  abs.s       $f4, $f0
    ctx->pc = 0x16e674u;
    ctx->f[4] = FPU_ABS_S(ctx->f[0]);
label_16e678:
    // 0x16e678: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16e678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16e67c:
    // 0x16e67c: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x16e67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16e680:
    // 0x16e680: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16e680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16e684:
    // 0x16e684: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16e684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16e688:
    // 0x16e688: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x16e688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e68c:
    // 0x16e68c: 0x46040881  sub.s       $f2, $f1, $f4
    ctx->pc = 0x16e68cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_16e690:
    // 0x16e690: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x16e690u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_16e694:
    // 0x16e694: 0x4602001c  madd.s      $f0, $f0, $f2
    ctx->pc = 0x16e694u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
label_16e698:
    // 0x16e698: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x16e698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_16e69c:
    // 0x16e69c: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x16e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_16e6a0:
    // 0x16e6a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_16e6a4:
    // 0x16e6a4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x16e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e6a8:
    // 0x16e6a8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x16e6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_16e6ac:
    // 0x16e6ac: 0x8e230210  lw          $v1, 0x210($s1)
    ctx->pc = 0x16e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_16e6b0:
    // 0x16e6b0: 0x8e220224  lw          $v0, 0x224($s1)
    ctx->pc = 0x16e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_16e6b4:
    // 0x16e6b4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_16e6b8:
    // 0x16e6b8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x16e6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e6bc:
    // 0x16e6bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16e6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e6c0:
    // 0x16e6c0: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x16e6c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_16e6c4:
    // 0x16e6c4: 0x4602001c  madd.s      $f0, $f0, $f2
    ctx->pc = 0x16e6c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
label_16e6c8:
    // 0x16e6c8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x16e6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_16e6cc:
    // 0x16e6cc: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x16e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_16e6d0:
    // 0x16e6d0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_16e6d4:
    // 0x16e6d4: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x16e6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e6d8:
    // 0x16e6d8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x16e6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e6dc:
    // 0x16e6dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16e6dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_16e6e0:
    // 0x16e6e0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x16e6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_16e6e4:
    // 0x16e6e4: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x16e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_16e6e8:
    // 0x16e6e8: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16e6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16e6ec:
    // 0x16e6ec: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x16e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16e6f0:
    // 0x16e6f0: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x16e6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_16e6f4:
    // 0x16e6f4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e6f8:
    // 0x16e6f8: 0x84c50080  lh          $a1, 0x80($a2)
    ctx->pc = 0x16e6f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 128)));
label_16e6fc:
    // 0x16e6fc: 0xc0466c4  jal         func_119B10
label_16e700:
    if (ctx->pc == 0x16E700u) {
        ctx->pc = 0x16E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E6FCu;
        // 0x16e700: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E704u;
        goto label_16e704;
    }
    ctx->pc = 0x16E6FCu;
    SET_GPR_U32(ctx, 31, 0x16E704u);
    ctx->pc = 0x16E700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E6FCu;
    // 0x16e700: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B10u, 0x16E6FCu, 0x16E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E704u;
label_16e704:
    // 0x16e704: 0x0  nop
    ctx->pc = 0x16e704u;
    // NOP
label_16e708:
    // 0x16e708: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16e708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16e70c:
    // 0x16e70c: 0x0  nop
    ctx->pc = 0x16e70cu;
    // NOP
label_16e710:
    // 0x16e710: 0x86230214  lh          $v1, 0x214($s1)
    ctx->pc = 0x16e710u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
label_16e714:
    // 0x16e714: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16e714u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_16e718:
    // 0x16e718: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
label_16e71c:
    if (ctx->pc == 0x16E71Cu) {
        ctx->pc = 0x16E720u;
        goto label_16e720;
    }
    ctx->pc = 0x16E718u;
    {
        const bool branch_taken_0x16e718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e718) {
            ctx->pc = 0x16E5FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e5fc;
        }
    }
    ctx->pc = 0x16E720u;
label_16e720:
    // 0x16e720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16e720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16e724:
    // 0x16e724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16e724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16e728:
    // 0x16e728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16e72c:
    // 0x16e72c: 0x3e00008  jr          $ra
label_16e730:
    if (ctx->pc == 0x16E730u) {
        ctx->pc = 0x16E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E72Cu;
        // 0x16e730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E734u;
        goto label_fallthrough_0x16e72c;
    }
    ctx->pc = 0x16E72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E72Cu;
        // 0x16e730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16e72c:
    ctx->pc = 0x16E734u;
}
