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

// Function: entry_00135380
// Address: 0x135380 - 0x135394
void entry_00135380_0x135380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135380_0x135380");
#endif

    switch (ctx->pc) {
        case 0x135388u: goto label_135388;
        case 0x135390u: goto label_135390;
        default: break;
    }

    ctx->pc = 0x135380u;

    // 0x135380: 0xc061bf0  jal         func_186FC0
    ctx->pc = 0x135380u;
    SET_GPR_U32(ctx, 31, 0x135388u);
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x135380u, 0x135388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135388u;
label_135388:
    // 0x135388: 0xc061b50  jal         func_186D40
    ctx->pc = 0x135388u;
    SET_GPR_U32(ctx, 31, 0x135390u);
    ctx->pc = 0x13538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135388u;
    // 0x13538c: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x135388u, 0x135390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135390u;
label_135390:
    // 0x135390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x135390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135394u;
}
