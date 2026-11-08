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

// Function: entry_0014ede0
// Address: 0x14ede0 - 0x14edfc
void entry_0014ede0_0x14ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ede0_0x14ede0");
#endif

    switch (ctx->pc) {
        case 0x14edecu: goto label_14edec;
        default: break;
    }

    ctx->pc = 0x14ede0u;

label_14ede0:
    // 0x14ede0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14ede0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ede4: 0xc053bb0  jal         func_14EEC0
    ctx->pc = 0x14EDE4u;
    SET_GPR_U32(ctx, 31, 0x14EDECu);
    ctx->pc = 0x14EDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDE4u;
    // 0x14ede8: 0x2694fff0  addiu       $s4, $s4, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EEC0u, 0x14EDE4u, 0x14EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDECu;
label_14edec:
    // 0x14edec: 0x214082b  sltu        $at, $s0, $s4
    ctx->pc = 0x14edecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14edf0: 0x0  nop
    ctx->pc = 0x14edf0u;
    // NOP
    // 0x14edf4: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14EDF4u;
    {
        const bool branch_taken_0x14edf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14edf4) {
            ctx->pc = 0x14EDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ede0;
        }
    }
    ctx->pc = 0x14EDFCu;
}
