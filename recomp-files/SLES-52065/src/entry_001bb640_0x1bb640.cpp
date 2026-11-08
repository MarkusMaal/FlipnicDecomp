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

// Function: entry_001bb640
// Address: 0x1bb640 - 0x1bb664
void entry_001bb640_0x1bb640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb640_0x1bb640");
#endif

    switch (ctx->pc) {
        case 0x1bb648u: goto label_1bb648;
        case 0x1bb654u: goto label_1bb654;
        case 0x1bb65cu: goto label_1bb65c;
        default: break;
    }

    ctx->pc = 0x1bb640u;

    // 0x1bb640: 0xc06edcc  jal         func_1BB730
    ctx->pc = 0x1BB640u;
    SET_GPR_U32(ctx, 31, 0x1BB648u);
    ctx->pc = 0x1BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB730u, 0x1BB640u, 0x1BB648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB648u;
label_1bb648:
    // 0x1bb648: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x1bb648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1bb64c: 0xc06e1bc  jal         func_1B86F0
    ctx->pc = 0x1BB64Cu;
    SET_GPR_U32(ctx, 31, 0x1BB654u);
    ctx->pc = 0x1BB650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB64Cu;
    // 0x1bb650: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B86F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B86F0u, 0x1BB64Cu, 0x1BB654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB654u;
label_1bb654:
    // 0x1bb654: 0xc06edc8  jal         func_1BB720
    ctx->pc = 0x1BB654u;
    SET_GPR_U32(ctx, 31, 0x1BB65Cu);
    ctx->pc = 0x1BB658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB654u;
    // 0x1bb658: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB720u, 0x1BB654u, 0x1BB65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB65Cu;
label_1bb65c:
    // 0x1bb65c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB65Cu;
    SET_GPR_U32(ctx, 31, 0x1BB664u);
    ctx->pc = 0x1BB660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB65Cu;
    // 0x1bb660: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB65Cu, 0x1BB664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB664u;
}
