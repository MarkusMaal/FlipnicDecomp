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

// Function: entry_001f71d0
// Address: 0x1f71d0 - 0x1f71f8
void entry_001f71d0_0x1f71d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f71d0_0x1f71d0");
#endif

    switch (ctx->pc) {
        case 0x1f71d8u: goto label_1f71d8;
        default: break;
    }

    ctx->pc = 0x1f71d0u;

    // 0x1f71d0: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1F71D0u;
    SET_GPR_U32(ctx, 31, 0x1F71D8u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1F71D0u, 0x1F71D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F71D8u;
label_1f71d8:
    // 0x1f71d8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f71d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f71dc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f71dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f71e0: 0x8c901344  lw          $s0, 0x1344($a0)
    ctx->pc = 0x1f71e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x391344u));
    // 0x1f71e4: 0xac711348  sw          $s1, 0x1348($v1)
    ctx->pc = 0x1f71e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x391348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x391348u, _value); } while (0);
    // 0x1f71e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F71E8u;
    {
        const bool branch_taken_0x1f71e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F71ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71E8u;
        // 0x1f71ec: 0xac921344  sw          $s2, 0x1344($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4932), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71e8) {
            ctx->pc = 0x1F71F8u;
            return;
        }
    }
    ctx->pc = 0x1F71F0u;
    // 0x1f71f0: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1F71F0u;
    SET_GPR_U32(ctx, 31, 0x1F71F8u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1F71F0u, 0x1F71F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F71F8u;
}
