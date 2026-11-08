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

// Function: entry_001d47c8
// Address: 0x1d47c8 - 0x1d47e8
void entry_001d47c8_0x1d47c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d47c8_0x1d47c8");
#endif

    ctx->pc = 0x1d47c8u;

    // 0x1d47c8: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D47C8u;
    {
        const bool branch_taken_0x1d47c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47C8u;
        // 0x1d47cc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47c8) {
            ctx->pc = 0x1D47E8u;
            return;
        }
    }
    ctx->pc = 0x1D47D0u;
    // 0x1d47d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d47d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d47d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d47d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d47d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D47D8u;
    {
        const bool branch_taken_0x1d47d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47D8u;
        // 0x1d47dc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47d8) {
            ctx->pc = 0x1D47E8u;
            return;
        }
    }
    ctx->pc = 0x1D47E0u;
    // 0x1d47e0: 0xc0750f2  jal         func_1D43C8
    ctx->pc = 0x1D47E0u;
    SET_GPR_U32(ctx, 31, 0x1D47E8u);
    ctx->pc = 0x1D47E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47E0u;
    // 0x1d47e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43C8u, 0x1D47E0u, 0x1D47E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47E8u;
}
