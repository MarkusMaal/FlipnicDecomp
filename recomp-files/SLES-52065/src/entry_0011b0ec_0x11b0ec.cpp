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

// Function: entry_0011b0ec
// Address: 0x11b0ec - 0x11b0f8
void entry_0011b0ec_0x11b0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b0ec_0x11b0ec");
#endif

    switch (ctx->pc) {
        case 0x11b0f4u: goto label_11b0f4;
        default: break;
    }

    ctx->pc = 0x11b0ecu;

    // 0x11b0ec: 0xc080702  jal         func_201C08
    ctx->pc = 0x11B0ECu;
    SET_GPR_U32(ctx, 31, 0x11B0F4u);
    ctx->pc = 0x11B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0ECu;
    // 0x11b0f0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11B0ECu, 0x11B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0F4u;
label_11b0f4:
    // 0x11b0f4: 0x263200f8  addiu       $s2, $s1, 0xF8
    ctx->pc = 0x11b0f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
    ctx->pc = 0x11b0f8u;
}
