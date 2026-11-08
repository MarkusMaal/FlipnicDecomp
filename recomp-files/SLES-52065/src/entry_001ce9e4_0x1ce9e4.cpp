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

// Function: entry_001ce9e4
// Address: 0x1ce9e4 - 0x1cea00
void entry_001ce9e4_0x1ce9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce9e4_0x1ce9e4");
#endif

    switch (ctx->pc) {
        case 0x1ce9ecu: goto label_1ce9ec;
        default: break;
    }

    ctx->pc = 0x1ce9e4u;

    // 0x1ce9e4: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CE9E4u;
    SET_GPR_U32(ctx, 31, 0x1CE9ECu);
    ctx->pc = 0x1CE9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE9E4u;
    // 0x1ce9e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CE9E4u, 0x1CE9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9ECu;
label_1ce9ec:
    // 0x1ce9ec: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CE9ECu;
    {
        const bool branch_taken_0x1ce9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce9ec) {
            ctx->pc = 0x1CEA9Cu;
            return;
        }
    }
    ctx->pc = 0x1CE9F4u;
    // 0x1ce9f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ce9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce9f8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1CE9F8u;
    {
        const bool branch_taken_0x1ce9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9F8u;
        // 0x1ce9fc: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9f8) {
            ctx->pc = 0x1CEA9Cu;
            return;
        }
    }
    ctx->pc = 0x1CEA00u;
}
