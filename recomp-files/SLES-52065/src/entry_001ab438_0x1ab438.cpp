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

// Function: entry_001ab438
// Address: 0x1ab438 - 0x1ab480
void entry_001ab438_0x1ab438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab438_0x1ab438");
#endif

    switch (ctx->pc) {
        case 0x1ab440u: goto label_1ab440;
        case 0x1ab454u: goto label_1ab454;
        case 0x1ab464u: goto label_1ab464;
        case 0x1ab478u: goto label_1ab478;
        default: break;
    }

    ctx->pc = 0x1ab438u;

    // 0x1ab438: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1AB438u;
    SET_GPR_U32(ctx, 31, 0x1AB440u);
    ctx->pc = 0x1AB43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB438u;
    // 0x1ab43c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1AB438u, 0x1AB440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB440u;
label_1ab440:
    // 0x1ab440: 0x8e8206e0  lw          $v0, 0x6E0($s4)
    ctx->pc = 0x1ab440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1760)));
    // 0x1ab444: 0x268406f0  addiu       $a0, $s4, 0x6F0
    ctx->pc = 0x1ab444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
    // 0x1ab448: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ab44c: 0xc069afc  jal         func_1A6BF0
    ctx->pc = 0x1AB44Cu;
    SET_GPR_U32(ctx, 31, 0x1AB454u);
    ctx->pc = 0x1AB450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB44Cu;
    // 0x1ab450: 0xae8206e0  sw          $v0, 0x6E0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1760), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AB44Cu, 0x1AB454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB454u;
label_1ab454:
    // 0x1ab454: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1AB454u;
    {
        const bool branch_taken_0x1ab454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB454u;
        // 0x1ab458: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab454) {
            ctx->pc = 0x1AB684u;
            return;
        }
    }
    ctx->pc = 0x1AB45Cu;
    // 0x1ab45c: 0xc069ae8  jal         func_1A6BA0
    ctx->pc = 0x1AB45Cu;
    SET_GPR_U32(ctx, 31, 0x1AB464u);
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AB45Cu, 0x1AB464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB464u;
label_1ab464:
    // 0x1ab464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab468: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ab468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab46c: 0xa28206d9  sb          $v0, 0x6D9($s4)
    ctx->pc = 0x1ab46cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1753), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ab470: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AB470u;
    SET_GPR_U32(ctx, 31, 0x1AB478u);
    ctx->pc = 0x1AB474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB470u;
    // 0x1ab474: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AB470u, 0x1AB478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB478u;
label_1ab478:
    // 0x1ab478: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1AB478u;
    {
        const bool branch_taken_0x1ab478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab478) {
            ctx->pc = 0x1AB684u;
            return;
        }
    }
    ctx->pc = 0x1AB480u;
}
