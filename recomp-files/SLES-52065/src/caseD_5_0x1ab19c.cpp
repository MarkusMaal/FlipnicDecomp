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

// Function: caseD_5
// Address: 0x1ab19c - 0x1ab1c0
void caseD_5_0x1ab19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1ab19c");
#endif

    switch (ctx->pc) {
        case 0x1ab1a8u: goto label_1ab1a8;
        case 0x1ab1b8u: goto label_1ab1b8;
        default: break;
    }

    ctx->pc = 0x1ab19cu;

    // 0x1ab19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab1a0: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AB1A0u;
    SET_GPR_U32(ctx, 31, 0x1AB1A8u);
    ctx->pc = 0x1AB1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1A0u;
    // 0x1ab1a4: 0xa28206d8  sb          $v0, 0x6D8($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1752), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AB1A0u, 0x1AB1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1A8u;
label_1ab1a8:
    // 0x1ab1a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab1ac: 0x240500c3  addiu       $a1, $zero, 0xC3
    ctx->pc = 0x1ab1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    // 0x1ab1b0: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AB1B0u;
    SET_GPR_U32(ctx, 31, 0x1AB1B8u);
    ctx->pc = 0x1AB1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1B0u;
    // 0x1ab1b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AB1B0u, 0x1AB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1B8u;
label_1ab1b8:
    // 0x1ab1b8: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AB1B8u;
    SET_GPR_U32(ctx, 31, 0x1AB1C0u);
    ctx->pc = 0x1AB1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1B8u;
    // 0x1ab1bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB1B8u, 0x1AB1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1C0u;
}
