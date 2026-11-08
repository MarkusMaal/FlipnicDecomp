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

// Function: FUN_001af3f0
// Address: 0x1af3f0 - 0x1af4e4
void FUN_001af3f0_0x1af3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af3f0_0x1af3f0");
#endif

    switch (ctx->pc) {
        case 0x1af420u: goto label_1af420;
        case 0x1af44cu: goto label_1af44c;
        case 0x1af478u: goto label_1af478;
        case 0x1af484u: goto label_1af484;
        case 0x1af490u: goto label_1af490;
        case 0x1af4a8u: goto label_1af4a8;
        case 0x1af4b4u: goto label_1af4b4;
        case 0x1af4ccu: goto label_1af4cc;
        default: break;
    }

    ctx->pc = 0x1af3f0u;

    // 0x1af3f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af3f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af3f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af3fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1af400: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af404: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1AF404u;
    {
        const bool branch_taken_0x1af404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF404u;
        // 0x1af408: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af404) {
            ctx->pc = 0x1AF4CCu;
            goto label_1af4cc;
        }
    }
    ctx->pc = 0x1AF40Cu;
    // 0x1af40c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1af40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1af410: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1af410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af414: 0x2442b800  addiu       $v0, $v0, -0x4800
    ctx->pc = 0x1af414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948864));
    // 0x1af418: 0xc04c9a0  jal         func_132680
    ctx->pc = 0x1AF418u;
    SET_GPR_U32(ctx, 31, 0x1AF420u);
    ctx->pc = 0x1AF41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF418u;
    // 0x1af41c: 0xae02031c  sw          $v0, 0x31C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132680u, 0x1AF418u, 0x1AF420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF420u;
label_1af420:
    // 0x1af420: 0x260407ac  addiu       $a0, $s0, 0x7AC
    ctx->pc = 0x1af420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1964));
    // 0x1af424: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF424u;
    {
        const bool branch_taken_0x1af424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF424u;
        // 0x1af428: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af424) {
            ctx->pc = 0x1AF44Cu;
            goto label_1af44c;
        }
    }
    ctx->pc = 0x1AF42Cu;
    // 0x1af42c: 0x2442b460  addiu       $v0, $v0, -0x4BA0
    ctx->pc = 0x1af42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947936));
    // 0x1af430: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF430u;
    {
        const bool branch_taken_0x1af430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF430u;
        // 0x1af434: 0xae0207b8  sw          $v0, 0x7B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af430) {
            ctx->pc = 0x1AF44Cu;
            goto label_1af44c;
        }
    }
    ctx->pc = 0x1AF438u;
    // 0x1af438: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1af438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1af43c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af440: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1af440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1af444: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1AF444u;
    SET_GPR_U32(ctx, 31, 0x1AF44Cu);
    ctx->pc = 0x1AF448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF444u;
    // 0x1af448: 0xae0207b8  sw          $v0, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1AF444u, 0x1AF44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF44Cu;
label_1af44c:
    // 0x1af44c: 0x26040790  addiu       $a0, $s0, 0x790
    ctx->pc = 0x1af44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1936));
    // 0x1af450: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF450u;
    {
        const bool branch_taken_0x1af450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF450u;
        // 0x1af454: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af450) {
            ctx->pc = 0x1AF478u;
            goto label_1af478;
        }
    }
    ctx->pc = 0x1AF458u;
    // 0x1af458: 0x2442b790  addiu       $v0, $v0, -0x4870
    ctx->pc = 0x1af458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948752));
    // 0x1af45c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF45Cu;
    {
        const bool branch_taken_0x1af45c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF45Cu;
        // 0x1af460: 0xae02079c  sw          $v0, 0x79C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1948), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af45c) {
            ctx->pc = 0x1AF478u;
            goto label_1af478;
        }
    }
    ctx->pc = 0x1AF464u;
    // 0x1af464: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1af464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1af468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af46c: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1af46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1af470: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1AF470u;
    SET_GPR_U32(ctx, 31, 0x1AF478u);
    ctx->pc = 0x1AF474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF470u;
    // 0x1af474: 0xae02079c  sw          $v0, 0x79C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1948), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1AF470u, 0x1AF478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF478u;
label_1af478:
    // 0x1af478: 0x260406f0  addiu       $a0, $s0, 0x6F0
    ctx->pc = 0x1af478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
    // 0x1af47c: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1AF47Cu;
    SET_GPR_U32(ctx, 31, 0x1AF484u);
    ctx->pc = 0x1AF480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF47Cu;
    // 0x1af480: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1AF47Cu, 0x1AF484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF484u;
label_1af484:
    // 0x1af484: 0x260406d0  addiu       $a0, $s0, 0x6D0
    ctx->pc = 0x1af484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x1af488: 0xc069aa8  jal         func_1A6AA0
    ctx->pc = 0x1AF488u;
    SET_GPR_U32(ctx, 31, 0x1AF490u);
    ctx->pc = 0x1AF48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF488u;
    // 0x1af48c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AA0u, 0x1AF488u, 0x1AF490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF490u;
label_1af490:
    // 0x1af490: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1af490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1af494: 0x26040670  addiu       $a0, $s0, 0x670
    ctx->pc = 0x1af494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    // 0x1af498: 0x24a5e260  addiu       $a1, $a1, -0x1DA0
    ctx->pc = 0x1af498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959712));
    // 0x1af49c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1af49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1af4a0: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x1AF4A0u;
    SET_GPR_U32(ctx, 31, 0x1AF4A8u);
    ctx->pc = 0x1AF4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4A0u;
    // 0x1af4a4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x1AF4A0u, 0x1AF4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4A8u;
label_1af4a8:
    // 0x1af4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4ac: 0xc064324  jal         func_190C90
    ctx->pc = 0x1AF4ACu;
    SET_GPR_U32(ctx, 31, 0x1AF4B4u);
    ctx->pc = 0x1AF4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4ACu;
    // 0x1af4b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1AF4ACu, 0x1AF4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4B4u;
label_1af4b4:
    // 0x1af4b4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1af4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1af4b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1af4b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1af4bc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF4BCu;
    {
        const bool branch_taken_0x1af4bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4BCu;
        // 0x1af4c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af4bc) {
            ctx->pc = 0x1AF4D0u;
            goto label_1af4d0;
        }
    }
    ctx->pc = 0x1AF4C4u;
    // 0x1af4c4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1AF4C4u;
    SET_GPR_U32(ctx, 31, 0x1AF4CCu);
    ctx->pc = 0x1AF4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4C4u;
    // 0x1af4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1AF4C4u, 0x1AF4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4CCu;
label_1af4cc:
    // 0x1af4cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af4ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af4d0:
    // 0x1af4d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af4d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af4d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4DCu;
        // 0x1af4e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF4E4u;
}
