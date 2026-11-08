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

// Function: entry_001be560
// Address: 0x1be560 - 0x1be57c
void entry_001be560_0x1be560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be560_0x1be560");
#endif

    switch (ctx->pc) {
        case 0x1be568u: goto label_1be568;
        case 0x1be570u: goto label_1be570;
        case 0x1be578u: goto label_1be578;
        default: break;
    }

    ctx->pc = 0x1be560u;

    // 0x1be560: 0xc06f9a0  jal         func_1BE680
    ctx->pc = 0x1BE560u;
    SET_GPR_U32(ctx, 31, 0x1BE568u);
    ctx->pc = 0x1BE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE680u, 0x1BE560u, 0x1BE568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE568u;
label_1be568:
    // 0x1be568: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BE568u;
    SET_GPR_U32(ctx, 31, 0x1BE570u);
    ctx->pc = 0x1BE56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE568u;
    // 0x1be56c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BE568u, 0x1BE570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE570u;
label_1be570:
    // 0x1be570: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE570u;
    SET_GPR_U32(ctx, 31, 0x1BE578u);
    ctx->pc = 0x1BE574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE570u;
    // 0x1be574: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE570u, 0x1BE578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE578u;
label_1be578:
    // 0x1be578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1be57cu;
}
