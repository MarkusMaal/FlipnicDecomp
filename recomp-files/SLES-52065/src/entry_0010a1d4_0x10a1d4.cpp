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

// Function: entry_0010a1d4
// Address: 0x10a1d4 - 0x10a1f0
void entry_0010a1d4_0x10a1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a1d4_0x10a1d4");
#endif

    switch (ctx->pc) {
        case 0x10a1e0u: goto label_10a1e0;
        default: break;
    }

    ctx->pc = 0x10a1d4u;

label_10a1d4:
    // 0x10a1d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1d8: 0xc0426e0  jal         func_109B80
    ctx->pc = 0x10A1D8u;
    SET_GPR_U32(ctx, 31, 0x10A1E0u);
    ctx->pc = 0x10A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A1D8u;
    // 0x10a1dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B80u, 0x10A1D8u, 0x10A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A1E0u;
label_10a1e0:
    // 0x10a1e0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A1E0u;
    {
        const bool branch_taken_0x10a1e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10a1e0) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x10A1E8u;
    // 0x10a1e8: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x10A1E8u;
    {
        const bool branch_taken_0x10a1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A1E8u;
        // 0x10a1ec: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1e8) {
            ctx->pc = 0x10A1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a1d4;
        }
    }
    ctx->pc = 0x10A1F0u;
}
