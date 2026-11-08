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

// Function: entry_0011d7c4
// Address: 0x11d7c4 - 0x11d7f0
void entry_0011d7c4_0x11d7c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d7c4_0x11d7c4");
#endif

    switch (ctx->pc) {
        case 0x11d7dcu: goto label_11d7dc;
        default: break;
    }

    ctx->pc = 0x11d7c4u;

    // 0x11d7c4: 0x8e620524  lw          $v0, 0x524($s3)
    ctx->pc = 0x11d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1316)));
    // 0x11d7c8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11d7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11d7cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7d0: 0x24c6e770  addiu       $a2, $a2, -0x1890
    ctx->pc = 0x11d7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961008));
    // 0x11d7d4: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11D7D4u;
    SET_GPR_U32(ctx, 31, 0x11D7DCu);
    ctx->pc = 0x11D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7D4u;
    // 0x11d7d8: 0x552821  addu        $a1, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11D7D4u, 0x11D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7DCu;
label_11d7dc:
    // 0x11d7dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d7e0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D7E0u;
    {
        const bool branch_taken_0x11d7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11d7e0) {
            ctx->pc = 0x11D7F0u;
            return;
        }
    }
    ctx->pc = 0x11D7E8u;
    // 0x11d7e8: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x11D7E8u;
    {
        const bool branch_taken_0x11d7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7E8u;
        // 0x11d7ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7e8) {
            ctx->pc = 0x11DC78u;
            return;
        }
    }
    ctx->pc = 0x11D7F0u;
}
