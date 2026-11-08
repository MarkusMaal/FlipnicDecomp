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

// Function: entry_0011d98c
// Address: 0x11d98c - 0x11d9b8
void entry_0011d98c_0x11d98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d98c_0x11d98c");
#endif

    switch (ctx->pc) {
        case 0x11d9a4u: goto label_11d9a4;
        default: break;
    }

    ctx->pc = 0x11d98cu;

    // 0x11d98c: 0x8e62052c  lw          $v0, 0x52C($s3)
    ctx->pc = 0x11d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1324)));
    // 0x11d990: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11d990u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11d994: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d998: 0x24c6e730  addiu       $a2, $a2, -0x18D0
    ctx->pc = 0x11d998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960944));
    // 0x11d99c: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11D99Cu;
    SET_GPR_U32(ctx, 31, 0x11D9A4u);
    ctx->pc = 0x11D9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D99Cu;
    // 0x11d9a0: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11D99Cu, 0x11D9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9A4u;
label_11d9a4:
    // 0x11d9a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d9a8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D9A8u;
    {
        const bool branch_taken_0x11d9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11d9a8) {
            ctx->pc = 0x11D9B8u;
            return;
        }
    }
    ctx->pc = 0x11D9B0u;
    // 0x11d9b0: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x11D9B0u;
    {
        const bool branch_taken_0x11d9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9B0u;
        // 0x11d9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9b0) {
            ctx->pc = 0x11DC78u;
            return;
        }
    }
    ctx->pc = 0x11D9B8u;
}
