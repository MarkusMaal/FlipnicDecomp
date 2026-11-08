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

// Function: entry_001bb320
// Address: 0x1bb320 - 0x1bb33c
void entry_001bb320_0x1bb320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb320_0x1bb320");
#endif

    switch (ctx->pc) {
        case 0x1bb328u: goto label_1bb328;
        case 0x1bb330u: goto label_1bb330;
        case 0x1bb338u: goto label_1bb338;
        default: break;
    }

    ctx->pc = 0x1bb320u;

    // 0x1bb320: 0xc06ed10  jal         func_1BB440
    ctx->pc = 0x1BB320u;
    SET_GPR_U32(ctx, 31, 0x1BB328u);
    ctx->pc = 0x1BB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB440u, 0x1BB320u, 0x1BB328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB328u;
label_1bb328:
    // 0x1bb328: 0xc06ed0c  jal         func_1BB430
    ctx->pc = 0x1BB328u;
    SET_GPR_U32(ctx, 31, 0x1BB330u);
    ctx->pc = 0x1BB32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB328u;
    // 0x1bb32c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB430u, 0x1BB328u, 0x1BB330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB330u;
label_1bb330:
    // 0x1bb330: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB330u;
    SET_GPR_U32(ctx, 31, 0x1BB338u);
    ctx->pc = 0x1BB334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB330u;
    // 0x1bb334: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB330u, 0x1BB338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB338u;
label_1bb338:
    // 0x1bb338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bb33cu;
}
