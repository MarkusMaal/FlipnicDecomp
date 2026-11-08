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

// Function: entry_0011e110
// Address: 0x11e110 - 0x11e13c
void entry_0011e110_0x11e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e110_0x11e110");
#endif

    switch (ctx->pc) {
        case 0x11e118u: goto label_11e118;
        case 0x11e120u: goto label_11e120;
        case 0x11e128u: goto label_11e128;
        default: break;
    }

    ctx->pc = 0x11e110u;

    // 0x11e110: 0xc040150  jal         func_100540
    ctx->pc = 0x11E110u;
    SET_GPR_U32(ctx, 31, 0x11E118u);
    ctx->pc = 0x11E114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E110u;
    // 0x11e114: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E110u, 0x11E118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E118u;
label_11e118:
    // 0x11e118: 0xc040150  jal         func_100540
    ctx->pc = 0x11E118u;
    SET_GPR_U32(ctx, 31, 0x11E120u);
    ctx->pc = 0x11E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E118u;
    // 0x11e11c: 0x8e0400c8  lw          $a0, 0xC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E118u, 0x11E120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E120u;
label_11e120:
    // 0x11e120: 0xc040150  jal         func_100540
    ctx->pc = 0x11E120u;
    SET_GPR_U32(ctx, 31, 0x11E128u);
    ctx->pc = 0x11E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E120u;
    // 0x11e124: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E120u, 0x11E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E128u;
label_11e128:
    // 0x11e128: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x11e128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x11e12c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E12Cu;
    {
        const bool branch_taken_0x11e12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e12c) {
            ctx->pc = 0x11E13Cu;
            return;
        }
    }
    ctx->pc = 0x11E134u;
    // 0x11e134: 0xc040150  jal         func_100540
    ctx->pc = 0x11E134u;
    SET_GPR_U32(ctx, 31, 0x11E13Cu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E134u, 0x11E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E13Cu;
}
