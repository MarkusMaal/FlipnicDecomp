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

// Function: entry_00143f60
// Address: 0x143f60 - 0x143f80
void entry_00143f60_0x143f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143f60_0x143f60");
#endif

    switch (ctx->pc) {
        case 0x143f74u: goto label_143f74;
        default: break;
    }

    ctx->pc = 0x143f60u;

label_143f60:
    // 0x143f60: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x143f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x143f64: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x143f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x143f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f6c: 0xc050f28  jal         func_143CA0
    ctx->pc = 0x143F6Cu;
    SET_GPR_U32(ctx, 31, 0x143F74u);
    ctx->pc = 0x143F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F6Cu;
    // 0x143f70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143CA0u, 0x143F6Cu, 0x143F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F74u;
label_143f74:
    // 0x143f74: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x143f74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x143f78: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x143F78u;
    {
        const bool branch_taken_0x143f78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143f78) {
            ctx->pc = 0x143F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143f60;
        }
    }
    ctx->pc = 0x143F80u;
}
