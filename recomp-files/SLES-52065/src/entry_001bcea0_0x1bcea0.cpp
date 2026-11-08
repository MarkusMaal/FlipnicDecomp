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

// Function: entry_001bcea0
// Address: 0x1bcea0 - 0x1bcec4
void entry_001bcea0_0x1bcea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcea0_0x1bcea0");
#endif

    switch (ctx->pc) {
        case 0x1bceb0u: goto label_1bceb0;
        default: break;
    }

    ctx->pc = 0x1bcea0u;

    // 0x1bcea0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1bcea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bcea4: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1bcea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bcea8: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1BCEA8u;
    SET_GPR_U32(ctx, 31, 0x1BCEB0u);
    ctx->pc = 0x1BCEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCEA8u;
    // 0x1bceac: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1BCEA8u, 0x1BCEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEB0u;
label_1bceb0:
    // 0x1bceb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCEB0u;
    {
        const bool branch_taken_0x1bceb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEB0u;
        // 0x1bceb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bceb0) {
            ctx->pc = 0x1BCEC4u;
            return;
        }
    }
    ctx->pc = 0x1BCEB8u;
    // 0x1bceb8: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x1bceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1bcebc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bcebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bcec0: 0xaea2007c  sw          $v0, 0x7C($s5)
    ctx->pc = 0x1bcec0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 2));
    ctx->pc = 0x1bcec4u;
}
