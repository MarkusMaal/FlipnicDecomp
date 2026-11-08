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

// Function: entry_001e1dc8
// Address: 0x1e1dc8 - 0x1e1e08
void entry_001e1dc8_0x1e1dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1dc8_0x1e1dc8");
#endif

    switch (ctx->pc) {
        case 0x1e1de8u: goto label_1e1de8;
        case 0x1e1e00u: goto label_1e1e00;
        default: break;
    }

    ctx->pc = 0x1e1dc8u;

    // 0x1e1dc8: 0x83828740  lb          $v0, -0x78C0($gp)
    ctx->pc = 0x1e1dc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936384)));
    // 0x1e1dcc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E1DCCu;
    {
        const bool branch_taken_0x1e1dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DCCu;
        // 0x1e1dd0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1dcc) {
            ctx->pc = 0x1E1E08u;
            return;
        }
    }
    ctx->pc = 0x1E1DD4u;
    // 0x1e1dd4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1e1dd8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1e1dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1e1ddc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1e1ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e1de0: 0xc0794c4  jal         func_1E5310
    ctx->pc = 0x1E1DE0u;
    SET_GPR_U32(ctx, 31, 0x1E1DE8u);
    ctx->pc = 0x1E1DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1DE0u;
    // 0x1e1de4: 0x2484b9d0  addiu       $a0, $a0, -0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5310u, 0x1E1DE0u, 0x1E1DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1DE8u;
label_1e1de8:
    // 0x1e1de8: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e1de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1e1dec: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e1decu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1e1df0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1df4: 0x24a51fb0  addiu       $a1, $a1, 0x1FB0
    ctx->pc = 0x1e1df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8112));
    // 0x1e1df8: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1E1DF8u;
    SET_GPR_U32(ctx, 31, 0x1E1E00u);
    ctx->pc = 0x1E1DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1DF8u;
    // 0x1e1dfc: 0x24c6b9b8  addiu       $a2, $a2, -0x4648 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1E1DF8u, 0x1E1E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E00u;
label_1e1e00:
    // 0x1e1e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1e04: 0xa3828740  sb          $v0, -0x78C0($gp)
    ctx->pc = 0x1e1e04u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936384), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1e1e08u;
}
