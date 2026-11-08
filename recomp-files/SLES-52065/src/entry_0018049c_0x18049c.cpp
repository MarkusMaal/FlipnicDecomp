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

// Function: entry_0018049c
// Address: 0x18049c - 0x1804cc
void entry_0018049c_0x18049c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018049c_0x18049c");
#endif

    switch (ctx->pc) {
        case 0x1804b4u: goto label_1804b4;
        default: break;
    }

    ctx->pc = 0x18049cu;

    // 0x18049c: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x18049cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1804a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1804a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1804a4: 0x8e470068  lw          $a3, 0x68($s2)
    ctx->pc = 0x1804a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1804a8: 0x8e480044  lw          $t0, 0x44($s2)
    ctx->pc = 0x1804a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1804ac: 0xc0607bc  jal         func_181EF0
    ctx->pc = 0x1804ACu;
    SET_GPR_U32(ctx, 31, 0x1804B4u);
    ctx->pc = 0x1804B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1804ACu;
    // 0x1804b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181EF0u, 0x1804ACu, 0x1804B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1804B4u;
label_1804b4:
    // 0x1804b4: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x1804b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1804b8: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x1804b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1804bc: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1804bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1804c0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1804C0u;
    {
        const bool branch_taken_0x1804c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1804C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804C0u;
        // 0x1804c4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804c0) {
            ctx->pc = 0x1804CCu;
            return;
        }
    }
    ctx->pc = 0x1804C8u;
    // 0x1804c8: 0xaf83865c  sw          $v1, -0x79A4($gp)
    ctx->pc = 0x1804c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
    ctx->pc = 0x1804ccu;
}
