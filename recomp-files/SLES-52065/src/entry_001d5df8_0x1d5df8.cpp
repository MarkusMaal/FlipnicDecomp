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

// Function: entry_001d5df8
// Address: 0x1d5df8 - 0x1d5e18
void entry_001d5df8_0x1d5df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5df8_0x1d5df8");
#endif

    switch (ctx->pc) {
        case 0x1d5e08u: goto label_1d5e08;
        default: break;
    }

    ctx->pc = 0x1d5df8u;

label_1d5df8:
    // 0x1d5df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d5dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e00: 0xc07751c  jal         func_1DD470
    ctx->pc = 0x1D5E00u;
    SET_GPR_U32(ctx, 31, 0x1D5E08u);
    ctx->pc = 0x1D5E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E00u;
    // 0x1d5e04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD470u, 0x1D5E00u, 0x1D5E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E08u;
label_1d5e08:
    // 0x1d5e08: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5E08u;
    {
        const bool branch_taken_0x1d5e08 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5e08) {
            ctx->pc = 0x1D5E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5E08u;
            // 0x1d5e0c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5df8;
        }
    }
    ctx->pc = 0x1D5E10u;
    // 0x1d5e10: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x1D5E10u;
    {
        const bool branch_taken_0x1d5e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e10) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5E18u;
}
