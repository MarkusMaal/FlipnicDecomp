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

// Function: entry_001af478
// Address: 0x1af478 - 0x1af4cc
void entry_001af478_0x1af478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af478_0x1af478");
#endif

    switch (ctx->pc) {
        case 0x1af484u: goto label_1af484;
        case 0x1af490u: goto label_1af490;
        case 0x1af4a8u: goto label_1af4a8;
        case 0x1af4b4u: goto label_1af4b4;
        default: break;
    }

    ctx->pc = 0x1af478u;

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
            return;
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
}
