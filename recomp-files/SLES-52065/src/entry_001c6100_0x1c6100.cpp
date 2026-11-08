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

// Function: entry_001c6100
// Address: 0x1c6100 - 0x1c6120
void entry_001c6100_0x1c6100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6100_0x1c6100");
#endif

    switch (ctx->pc) {
        case 0x1c6108u: goto label_1c6108;
        case 0x1c6118u: goto label_1c6118;
        default: break;
    }

    ctx->pc = 0x1c6100u;

    // 0x1c6100: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1C6100u;
    SET_GPR_U32(ctx, 31, 0x1C6108u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1C6100u, 0x1C6108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6108u;
label_1c6108:
    // 0x1c6108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c610c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c610cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c6110: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1C6110u;
    SET_GPR_U32(ctx, 31, 0x1C6118u);
    ctx->pc = 0x1C6114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6110u;
    // 0x1c6114: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1C6110u, 0x1C6118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6118u;
label_1c6118:
    // 0x1c6118: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1C6118u;
    {
        const bool branch_taken_0x1c6118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6118) {
            ctx->pc = 0x1C6240u;
            return;
        }
    }
    ctx->pc = 0x1C6120u;
}
