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

// Function: entry_0011b94c
// Address: 0x11b94c - 0x11b960
void entry_0011b94c_0x11b94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b94c_0x11b94c");
#endif

    switch (ctx->pc) {
        case 0x11b95cu: goto label_11b95c;
        default: break;
    }

    ctx->pc = 0x11b94cu;

    // 0x11b94c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11b950: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11b950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11b954: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11B954u;
    SET_GPR_U32(ctx, 31, 0x11B95Cu);
    ctx->pc = 0x11B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B954u;
    // 0x11b958: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11B954u, 0x11B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B95Cu;
label_11b95c:
    // 0x11b95c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11b95cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11b960u;
}
