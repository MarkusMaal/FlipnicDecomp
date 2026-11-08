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

// Function: entry_002050e0
// Address: 0x2050e0 - 0x2050f4
void entry_002050e0_0x2050e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002050e0_0x2050e0");
#endif

    switch (ctx->pc) {
        case 0x2050ecu: goto label_2050ec;
        default: break;
    }

    ctx->pc = 0x2050e0u;

    // 0x2050e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2050e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2050e4: 0xc082178  jal         func_2085E0
    ctx->pc = 0x2050E4u;
    SET_GPR_U32(ctx, 31, 0x2050ECu);
    ctx->pc = 0x2050E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2050E4u;
    // 0x2050e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x2050E4u, 0x2050ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050ECu;
label_2050ec:
    // 0x2050ec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2050ECu;
    {
        const bool branch_taken_0x2050ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2050ec) {
            ctx->pc = 0x2050F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2050ECu;
            // 0x2050f0: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2050F4u;
            return;
        }
    }
    ctx->pc = 0x2050F4u;
}
