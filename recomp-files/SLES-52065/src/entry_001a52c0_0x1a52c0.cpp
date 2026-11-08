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

// Function: entry_001a52c0
// Address: 0x1a52c0 - 0x1a52e8
void entry_001a52c0_0x1a52c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a52c0_0x1a52c0");
#endif

    switch (ctx->pc) {
        case 0x1a52d8u: goto label_1a52d8;
        default: break;
    }

    ctx->pc = 0x1a52c0u;

    // 0x1a52c0: 0x8e640750  lw          $a0, 0x750($s3)
    ctx->pc = 0x1a52c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
    // 0x1a52c4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A52C4u;
    {
        const bool branch_taken_0x1a52c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a52c4) {
            ctx->pc = 0x1A52E8u;
            return;
        }
    }
    ctx->pc = 0x1A52CCu;
    // 0x1a52cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a52ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a52d0: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1A52D0u;
    SET_GPR_U32(ctx, 31, 0x1A52D8u);
    ctx->pc = 0x1A52D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52D0u;
    // 0x1a52d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A52D0u, 0x1A52D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52D8u;
label_1a52d8:
    // 0x1a52d8: 0x8e640750  lw          $a0, 0x750($s3)
    ctx->pc = 0x1a52d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
    // 0x1a52dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a52dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a52e0: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1A52E0u;
    SET_GPR_U32(ctx, 31, 0x1A52E8u);
    ctx->pc = 0x1A52E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52E0u;
    // 0x1a52e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A52E0u, 0x1A52E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52E8u;
}
