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

// Function: entry_0017f400
// Address: 0x17f400 - 0x17f418
void entry_0017f400_0x17f400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f400_0x17f400");
#endif

    switch (ctx->pc) {
        case 0x17f408u: goto label_17f408;
        case 0x17f410u: goto label_17f410;
        default: break;
    }

    ctx->pc = 0x17f400u;

    // 0x17f400: 0xc05fd5c  jal         func_17F570
    ctx->pc = 0x17F400u;
    SET_GPR_U32(ctx, 31, 0x17F408u);
    ctx->pc = 0x17F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F570u, 0x17F400u, 0x17F408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F408u;
label_17f408:
    // 0x17f408: 0xc05fd58  jal         func_17F560
    ctx->pc = 0x17F408u;
    SET_GPR_U32(ctx, 31, 0x17F410u);
    ctx->pc = 0x17F40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F408u;
    // 0x17f40c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F560u, 0x17F408u, 0x17F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F410u;
label_17f410:
    // 0x17f410: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F410u;
    SET_GPR_U32(ctx, 31, 0x17F418u);
    ctx->pc = 0x17F414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F410u;
    // 0x17f414: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F410u, 0x17F418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F418u;
}
