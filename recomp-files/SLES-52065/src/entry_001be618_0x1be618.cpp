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

// Function: entry_001be618
// Address: 0x1be618 - 0x1be634
void entry_001be618_0x1be618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be618_0x1be618");
#endif

    switch (ctx->pc) {
        case 0x1be620u: goto label_1be620;
        case 0x1be628u: goto label_1be628;
        case 0x1be630u: goto label_1be630;
        default: break;
    }

    ctx->pc = 0x1be618u;

    // 0x1be618: 0xc06f9a0  jal         func_1BE680
    ctx->pc = 0x1BE618u;
    SET_GPR_U32(ctx, 31, 0x1BE620u);
    ctx->pc = 0x1BE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE680u, 0x1BE618u, 0x1BE620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE620u;
label_1be620:
    // 0x1be620: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BE620u;
    SET_GPR_U32(ctx, 31, 0x1BE628u);
    ctx->pc = 0x1BE624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE620u;
    // 0x1be624: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BE620u, 0x1BE628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE628u;
label_1be628:
    // 0x1be628: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE628u;
    SET_GPR_U32(ctx, 31, 0x1BE630u);
    ctx->pc = 0x1BE62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE628u;
    // 0x1be62c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE628u, 0x1BE630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE630u;
label_1be630:
    // 0x1be630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1be634u;
}
