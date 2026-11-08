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

// Function: entry_001bb388
// Address: 0x1bb388 - 0x1bb3a0
void entry_001bb388_0x1bb388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb388_0x1bb388");
#endif

    switch (ctx->pc) {
        case 0x1bb390u: goto label_1bb390;
        case 0x1bb398u: goto label_1bb398;
        default: break;
    }

    ctx->pc = 0x1bb388u;

    // 0x1bb388: 0xc06ed10  jal         func_1BB440
    ctx->pc = 0x1BB388u;
    SET_GPR_U32(ctx, 31, 0x1BB390u);
    ctx->pc = 0x1BB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB440u, 0x1BB388u, 0x1BB390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB390u;
label_1bb390:
    // 0x1bb390: 0xc06ed0c  jal         func_1BB430
    ctx->pc = 0x1BB390u;
    SET_GPR_U32(ctx, 31, 0x1BB398u);
    ctx->pc = 0x1BB394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB390u;
    // 0x1bb394: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB430u, 0x1BB390u, 0x1BB398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB398u;
label_1bb398:
    // 0x1bb398: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB398u;
    SET_GPR_U32(ctx, 31, 0x1BB3A0u);
    ctx->pc = 0x1BB39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB398u;
    // 0x1bb39c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB398u, 0x1BB3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3A0u;
}
