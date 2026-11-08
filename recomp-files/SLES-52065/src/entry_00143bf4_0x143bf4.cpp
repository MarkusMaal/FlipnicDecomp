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

// Function: entry_00143bf4
// Address: 0x143bf4 - 0x143c10
void entry_00143bf4_0x143bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143bf4_0x143bf4");
#endif

    switch (ctx->pc) {
        case 0x143c00u: goto label_143c00;
        default: break;
    }

    ctx->pc = 0x143bf4u;

label_143bf4:
    // 0x143bf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bf8: 0xc050f28  jal         func_143CA0
    ctx->pc = 0x143BF8u;
    SET_GPR_U32(ctx, 31, 0x143C00u);
    ctx->pc = 0x143BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143BF8u;
    // 0x143bfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143CA0u, 0x143BF8u, 0x143C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C00u;
label_143c00:
    // 0x143c00: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x143c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x143c04: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x143c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143c08: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x143C08u;
    {
        const bool branch_taken_0x143c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C08u;
        // 0x143c0c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c08) {
            ctx->pc = 0x143BF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143bf4;
        }
    }
    ctx->pc = 0x143C10u;
}
