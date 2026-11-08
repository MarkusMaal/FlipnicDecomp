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

// Function: entry_001c606c
// Address: 0x1c606c - 0x1c6084
void entry_001c606c_0x1c606c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c606c_0x1c606c");
#endif

    switch (ctx->pc) {
        case 0x1c6074u: goto label_1c6074;
        default: break;
    }

    ctx->pc = 0x1c606cu;

    // 0x1c606c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1C606Cu;
    SET_GPR_U32(ctx, 31, 0x1C6074u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1C606Cu, 0x1C6074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6074u;
label_1c6074:
    // 0x1c6074: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6078: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c6078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c607c: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1C607Cu;
    SET_GPR_U32(ctx, 31, 0x1C6084u);
    ctx->pc = 0x1C6080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C607Cu;
    // 0x1c6080: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1C607Cu, 0x1C6084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6084u;
}
