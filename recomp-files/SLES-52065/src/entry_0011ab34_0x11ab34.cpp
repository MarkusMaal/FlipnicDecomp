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

// Function: entry_0011ab34
// Address: 0x11ab34 - 0x11ab58
void entry_0011ab34_0x11ab34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ab34_0x11ab34");
#endif

    switch (ctx->pc) {
        case 0x11ab48u: goto label_11ab48;
        default: break;
    }

    ctx->pc = 0x11ab34u;

label_11ab34:
    // 0x11ab34: 0x0  nop
    ctx->pc = 0x11ab34u;
    // NOP
    // 0x11ab38: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x11ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x11ab3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ab3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab40: 0xc07cd32  jal         func_1F34C8
    ctx->pc = 0x11AB40u;
    SET_GPR_U32(ctx, 31, 0x11AB48u);
    ctx->pc = 0x11AB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB40u;
    // 0x11ab44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34C8u, 0x11AB40u, 0x11AB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB48u;
label_11ab48:
    // 0x11ab48: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11AB48u;
    {
        const bool branch_taken_0x11ab48 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11ab48) {
            ctx->pc = 0x11AB34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ab34;
        }
    }
    ctx->pc = 0x11AB50u;
    // 0x11ab50: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x11ab50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x11ab54: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11ab54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x11ab58u;
}
