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

// Function: entry_001aed2c
// Address: 0x1aed2c - 0x1aed64
void entry_001aed2c_0x1aed2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aed2c_0x1aed2c");
#endif

    switch (ctx->pc) {
        case 0x1aed34u: goto label_1aed34;
        case 0x1aed44u: goto label_1aed44;
        case 0x1aed4cu: goto label_1aed4c;
        case 0x1aed5cu: goto label_1aed5c;
        default: break;
    }

    ctx->pc = 0x1aed2cu;

    // 0x1aed2c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AED2Cu;
    SET_GPR_U32(ctx, 31, 0x1AED34u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AED2Cu, 0x1AED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED34u;
label_1aed34:
    // 0x1aed34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aed34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed38: 0x240500ba  addiu       $a1, $zero, 0xBA
    ctx->pc = 0x1aed38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x1aed3c: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AED3Cu;
    SET_GPR_U32(ctx, 31, 0x1AED44u);
    ctx->pc = 0x1AED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED3Cu;
    // 0x1aed40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AED3Cu, 0x1AED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED44u;
label_1aed44:
    // 0x1aed44: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AED44u;
    SET_GPR_U32(ctx, 31, 0x1AED4Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AED44u, 0x1AED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED4Cu;
label_1aed4c:
    // 0x1aed4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aed4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed50: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x1aed50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x1aed54: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AED54u;
    SET_GPR_U32(ctx, 31, 0x1AED5Cu);
    ctx->pc = 0x1AED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED54u;
    // 0x1aed58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AED54u, 0x1AED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED5Cu;
label_1aed5c:
    // 0x1aed5c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AED5Cu;
    SET_GPR_U32(ctx, 31, 0x1AED64u);
    ctx->pc = 0x1AED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED5Cu;
    // 0x1aed60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AED5Cu, 0x1AED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED64u;
}
