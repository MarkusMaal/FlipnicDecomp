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

// Function: entry_001ca3fc
// Address: 0x1ca3fc - 0x1ca42c
void entry_001ca3fc_0x1ca3fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca3fc_0x1ca3fc");
#endif

    switch (ctx->pc) {
        case 0x1ca408u: goto label_1ca408;
        case 0x1ca410u: goto label_1ca410;
        case 0x1ca420u: goto label_1ca420;
        case 0x1ca428u: goto label_1ca428;
        default: break;
    }

    ctx->pc = 0x1ca3fcu;

    // 0x1ca3fc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ca3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ca400: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA400u;
    SET_GPR_U32(ctx, 31, 0x1CA408u);
    ctx->pc = 0x1CA404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA400u;
    // 0x1ca404: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA400u, 0x1CA408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA408u;
label_1ca408:
    // 0x1ca408: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA408u;
    SET_GPR_U32(ctx, 31, 0x1CA410u);
    ctx->pc = 0x1CA40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA408u;
    // 0x1ca40c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA408u, 0x1CA410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA410u;
label_1ca410:
    // 0x1ca410: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1ca410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1ca414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca418: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA418u;
    SET_GPR_U32(ctx, 31, 0x1CA420u);
    ctx->pc = 0x1CA41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA418u;
    // 0x1ca41c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA418u, 0x1CA420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA420u;
label_1ca420:
    // 0x1ca420: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA420u;
    SET_GPR_U32(ctx, 31, 0x1CA428u);
    ctx->pc = 0x1CA424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA420u;
    // 0x1ca424: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA420u, 0x1CA428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA428u;
label_1ca428:
    // 0x1ca428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ca428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1ca42cu;
}
