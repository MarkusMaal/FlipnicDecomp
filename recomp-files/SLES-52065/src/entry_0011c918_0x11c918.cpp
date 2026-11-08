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

// Function: entry_0011c918
// Address: 0x11c918 - 0x11c938
void entry_0011c918_0x11c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c918_0x11c918");
#endif

    switch (ctx->pc) {
        case 0x11c920u: goto label_11c920;
        case 0x11c928u: goto label_11c928;
        default: break;
    }

    ctx->pc = 0x11c918u;

    // 0x11c918: 0xc0752ba  jal         func_1D4AE8
    ctx->pc = 0x11C918u;
    SET_GPR_U32(ctx, 31, 0x11C920u);
    ctx->pc = 0x11C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C918u;
    // 0x11c91c: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AE8u, 0x11C918u, 0x11C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C920u;
label_11c920:
    // 0x11c920: 0xc075314  jal         func_1D4C50
    ctx->pc = 0x11C920u;
    SET_GPR_U32(ctx, 31, 0x11C928u);
    ctx->pc = 0x11C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C920u;
    // 0x11c924: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4C50u, 0x11C920u, 0x11C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C928u;
label_11c928:
    // 0x11c928: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x11c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x11c92c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c930: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x11C930u;
    {
        const bool branch_taken_0x11c930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C930u;
        // 0x11c934: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c930) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11C938u;
}
