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

// Function: FUN_00119460
// Address: 0x119460 - 0x119554
void FUN_00119460_0x119460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119460_0x119460");
#endif

    switch (ctx->pc) {
        case 0x119460u: goto label_119460;
        case 0x119464u: goto label_119464;
        case 0x119468u: goto label_119468;
        case 0x11946cu: goto label_11946c;
        case 0x119470u: goto label_119470;
        case 0x119474u: goto label_119474;
        case 0x119478u: goto label_119478;
        case 0x11947cu: goto label_11947c;
        case 0x119480u: goto label_119480;
        case 0x119484u: goto label_119484;
        case 0x119488u: goto label_119488;
        case 0x11948cu: goto label_11948c;
        case 0x119490u: goto label_119490;
        case 0x119494u: goto label_119494;
        case 0x119498u: goto label_119498;
        case 0x11949cu: goto label_11949c;
        case 0x1194a0u: goto label_1194a0;
        case 0x1194a4u: goto label_1194a4;
        case 0x1194a8u: goto label_1194a8;
        case 0x1194acu: goto label_1194ac;
        case 0x1194b0u: goto label_1194b0;
        case 0x1194b4u: goto label_1194b4;
        case 0x1194b8u: goto label_1194b8;
        case 0x1194bcu: goto label_1194bc;
        case 0x1194c0u: goto label_1194c0;
        case 0x1194c4u: goto label_1194c4;
        case 0x1194c8u: goto label_1194c8;
        case 0x1194ccu: goto label_1194cc;
        case 0x1194d0u: goto label_1194d0;
        case 0x1194d4u: goto label_1194d4;
        case 0x1194d8u: goto label_1194d8;
        case 0x1194dcu: goto label_1194dc;
        case 0x1194e0u: goto label_1194e0;
        case 0x1194e4u: goto label_1194e4;
        case 0x1194e8u: goto label_1194e8;
        case 0x1194ecu: goto label_1194ec;
        case 0x1194f0u: goto label_1194f0;
        case 0x1194f4u: goto label_1194f4;
        case 0x1194f8u: goto label_1194f8;
        case 0x1194fcu: goto label_1194fc;
        case 0x119500u: goto label_119500;
        case 0x119504u: goto label_119504;
        case 0x119508u: goto label_119508;
        case 0x11950cu: goto label_11950c;
        case 0x119510u: goto label_119510;
        case 0x119514u: goto label_119514;
        case 0x119518u: goto label_119518;
        case 0x11951cu: goto label_11951c;
        case 0x119520u: goto label_119520;
        case 0x119524u: goto label_119524;
        case 0x119528u: goto label_119528;
        case 0x11952cu: goto label_11952c;
        case 0x119530u: goto label_119530;
        case 0x119534u: goto label_119534;
        case 0x119538u: goto label_119538;
        case 0x11953cu: goto label_11953c;
        case 0x119540u: goto label_119540;
        case 0x119544u: goto label_119544;
        case 0x119548u: goto label_119548;
        case 0x11954cu: goto label_11954c;
        case 0x119550u: goto label_119550;
        default: break;
    }

    ctx->pc = 0x119460u;

label_119460:
    // 0x119460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x119460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_119464:
    // 0x119464: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x119464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_119468:
    // 0x119468: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x119468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_11946c:
    // 0x11946c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11946cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_119470:
    // 0x119470: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x119470u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_119474:
    // 0x119474: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x119474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_119478:
    // 0x119478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x119478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11947c:
    // 0x11947c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x11947cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_119480:
    // 0x119480: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x119480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_119484:
    // 0x119484: 0x90710020  lbu         $s1, 0x20($v1)
    ctx->pc = 0x119484u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_119488:
    // 0x119488: 0x90630023  lbu         $v1, 0x23($v1)
    ctx->pc = 0x119488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_11948c:
    // 0x11948c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_119490:
    if (ctx->pc == 0x119490u) {
        ctx->pc = 0x119490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11948Cu;
        // 0x119490: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119494u;
        goto label_119494;
    }
    ctx->pc = 0x11948Cu;
    {
        const bool branch_taken_0x11948c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x119490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11948Cu;
        // 0x119490: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11948c) {
            ctx->pc = 0x119498u;
            goto label_119498;
        }
    }
    ctx->pc = 0x119494u;
label_119494:
    // 0x119494: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x119494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119498:
    // 0x119498: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x119498u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_11949c:
    // 0x11949c: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
label_1194a0:
    if (ctx->pc == 0x1194A0u) {
        ctx->pc = 0x1194A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11949Cu;
        // 0x1194a0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1194A4u;
        goto label_1194a4;
    }
    ctx->pc = 0x11949Cu;
    {
        const bool branch_taken_0x11949c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11949Cu;
        // 0x1194a0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11949c) {
            ctx->pc = 0x119538u;
            goto label_119538;
        }
    }
    ctx->pc = 0x1194A4u;
label_1194a4:
    // 0x1194a4: 0xc040168  jal         func_1005A0
label_1194a8:
    if (ctx->pc == 0x1194A8u) {
        ctx->pc = 0x1194A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194A4u;
        // 0x1194a8: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1194ACu;
        goto label_1194ac;
    }
    ctx->pc = 0x1194A4u;
    SET_GPR_U32(ctx, 31, 0x1194ACu);
    ctx->pc = 0x1194A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194A4u;
    // 0x1194a8: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1194A4u, 0x1194ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194ACu;
label_1194ac:
    // 0x1194ac: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1194acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_1194b0:
    // 0x1194b0: 0xc040168  jal         func_1005A0
label_1194b4:
    if (ctx->pc == 0x1194B4u) {
        ctx->pc = 0x1194B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194B0u;
        // 0x1194b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1194B8u;
        goto label_1194b8;
    }
    ctx->pc = 0x1194B0u;
    SET_GPR_U32(ctx, 31, 0x1194B8u);
    ctx->pc = 0x1194B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194B0u;
    // 0x1194b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1194B0u, 0x1194B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194B8u;
label_1194b8:
    // 0x1194b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1194b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1194bc:
    // 0x1194bc: 0x620001b  bltz        $s1, . + 4 + (0x1B << 2)
label_1194c0:
    if (ctx->pc == 0x1194C0u) {
        ctx->pc = 0x1194C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194BCu;
        // 0x1194c0: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1194C4u;
        goto label_1194c4;
    }
    ctx->pc = 0x1194BCu;
    {
        const bool branch_taken_0x1194bc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1194C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194BCu;
        // 0x1194c0: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194bc) {
            ctx->pc = 0x11952Cu;
            goto label_11952c;
        }
    }
    ctx->pc = 0x1194C4u;
label_1194c4:
    // 0x1194c4: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x1194c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1194c8:
    // 0x1194c8: 0xc04c0e0  jal         func_130380
label_1194cc:
    if (ctx->pc == 0x1194CCu) {
        ctx->pc = 0x1194CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194C8u;
        // 0x1194cc: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1194D0u;
        goto label_1194d0;
    }
    ctx->pc = 0x1194C8u;
    SET_GPR_U32(ctx, 31, 0x1194D0u);
    ctx->pc = 0x1194CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194C8u;
    // 0x1194cc: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x1194C8u, 0x1194D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194D0u;
label_1194d0:
    // 0x1194d0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1194d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1194d4:
    // 0x1194d4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1194d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1194d8:
    // 0x1194d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1194d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1194dc:
    // 0x1194dc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1194dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1194e0:
    // 0x1194e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1194e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1194e4:
    // 0x1194e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1194e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1194e8:
    // 0x1194e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1194e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1194ec:
    // 0x1194ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1194ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1194f0:
    // 0x1194f0: 0x320f809  jalr        $t9
label_1194f4:
    if (ctx->pc == 0x1194F4u) {
        ctx->pc = 0x1194F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194F0u;
        // 0x1194f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1194F8u;
        goto label_1194f8;
    }
    ctx->pc = 0x1194F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1194F8u);
        ctx->pc = 0x1194F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194F0u;
        // 0x1194f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1194F0u, 0x1194F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1194F8u;
label_1194f8:
    // 0x1194f8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1194f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1194fc:
    // 0x1194fc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1194fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_119500:
    // 0x119500: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119504:
    // 0x119504: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119508:
    // 0x119508: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x119508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_11950c:
    // 0x11950c: 0x320f809  jalr        $t9
label_119510:
    if (ctx->pc == 0x119510u) {
        ctx->pc = 0x119510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11950Cu;
        // 0x119510: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119514u;
        goto label_119514;
    }
    ctx->pc = 0x11950Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119514u);
        ctx->pc = 0x119510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11950Cu;
        // 0x119510: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11950Cu, 0x119514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119514u;
label_119514:
    // 0x119514: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x119514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_119518:
    // 0x119518: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x119518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_11951c:
    // 0x11951c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x11951cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_119520:
    // 0x119520: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x119520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_119524:
    // 0x119524: 0x621ffe8  bgez        $s1, . + 4 + (-0x18 << 2)
label_119528:
    if (ctx->pc == 0x119528u) {
        ctx->pc = 0x119528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119524u;
        // 0x119528: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11952Cu;
        goto label_11952c;
    }
    ctx->pc = 0x119524u;
    {
        const bool branch_taken_0x119524 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x119528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119524u;
        // 0x119528: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119524) {
            ctx->pc = 0x1194C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1194c8;
        }
    }
    ctx->pc = 0x11952Cu;
label_11952c:
    // 0x11952c: 0x0  nop
    ctx->pc = 0x11952cu;
    // NOP
label_119530:
    // 0x119530: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x119530u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
label_119534:
    // 0x119534: 0xa6600002  sh          $zero, 0x2($s3)
    ctx->pc = 0x119534u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
label_119538:
    // 0x119538: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x119538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11953c:
    // 0x11953c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11953cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_119540:
    // 0x119540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x119540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_119544:
    // 0x119544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x119544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_119548:
    // 0x119548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11954c:
    // 0x11954c: 0x3e00008  jr          $ra
label_119550:
    if (ctx->pc == 0x119550u) {
        ctx->pc = 0x119550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11954Cu;
        // 0x119550: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119554u;
        goto label_fallthrough_0x11954c;
    }
    ctx->pc = 0x11954Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11954Cu;
        // 0x119550: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11954Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11954c:
    ctx->pc = 0x119554u;
}
