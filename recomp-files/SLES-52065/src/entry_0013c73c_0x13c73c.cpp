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

// Function: entry_0013c73c
// Address: 0x13c73c - 0x13c74c
void entry_0013c73c_0x13c73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c73c_0x13c73c");
#endif

    switch (ctx->pc) {
        case 0x13c748u: goto label_13c748;
        default: break;
    }

    ctx->pc = 0x13c73cu;

    // 0x13c73c: 0x0  nop
    ctx->pc = 0x13c73cu;
    // NOP
    // 0x13c740: 0xc0509bc  jal         func_1426F0
    ctx->pc = 0x13C740u;
    SET_GPR_U32(ctx, 31, 0x13C748u);
    ctx->pc = 0x13C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C740u;
    // 0x13c744: 0x266400b0  addiu       $a0, $s3, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1426F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1426F0u, 0x13C740u, 0x13C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C748u;
label_13c748:
    // 0x13c748: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13c748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x13c74cu;
}
