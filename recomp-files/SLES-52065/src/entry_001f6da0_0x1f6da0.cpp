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

// Function: entry_001f6da0
// Address: 0x1f6da0 - 0x1f6ddc
void entry_001f6da0_0x1f6da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6da0_0x1f6da0");
#endif

    switch (ctx->pc) {
        case 0x1f6dacu: goto label_1f6dac;
        case 0x1f6dd4u: goto label_1f6dd4;
        default: break;
    }

    ctx->pc = 0x1f6da0u;

    // 0x1f6da0: 0x8c44bb28  lw          $a0, -0x44D8($v0)
    ctx->pc = 0x1f6da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949672)));
    // 0x1f6da4: 0xc07ad94  jal         func_1EB650
    ctx->pc = 0x1F6DA4u;
    SET_GPR_U32(ctx, 31, 0x1F6DACu);
    ctx->pc = 0x1EB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB650u, 0x1F6DA4u, 0x1F6DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DACu;
label_1f6dac:
    // 0x1f6dac: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f6dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f6db0: 0x8c62bb14  lw          $v0, -0x44EC($v1)
    ctx->pc = 0x1f6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21BB14u));
    // 0x1f6db4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6DB4u;
    {
        const bool branch_taken_0x1f6db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DB4u;
        // 0x1f6db8: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6db4) {
            ctx->pc = 0x1F6DDCu;
            return;
        }
    }
    ctx->pc = 0x1F6DBCu;
    // 0x1f6dbc: 0x8c431340  lw          $v1, 0x1340($v0)
    ctx->pc = 0x1f6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4928)));
    // 0x1f6dc0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6DC0u;
    {
        const bool branch_taken_0x1f6dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DC0u;
        // 0x1f6dc4: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6dc0) {
            ctx->pc = 0x1F6DDCu;
            return;
        }
    }
    ctx->pc = 0x1F6DC8u;
    // 0x1f6dc8: 0x8c44bb20  lw          $a0, -0x44E0($v0)
    ctx->pc = 0x1f6dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949664)));
    // 0x1f6dcc: 0xc07ad94  jal         func_1EB650
    ctx->pc = 0x1F6DCCu;
    SET_GPR_U32(ctx, 31, 0x1F6DD4u);
    ctx->pc = 0x1EB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB650u, 0x1F6DCCu, 0x1F6DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DD4u;
label_1f6dd4:
    // 0x1f6dd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6DD4u;
    {
        const bool branch_taken_0x1f6dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6dd4) {
            ctx->pc = 0x1F6DE4u;
            return;
        }
    }
    ctx->pc = 0x1F6DDCu;
}
