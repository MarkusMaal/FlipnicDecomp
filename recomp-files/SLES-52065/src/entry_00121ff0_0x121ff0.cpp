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

// Function: entry_00121ff0
// Address: 0x121ff0 - 0x122010
void entry_00121ff0_0x121ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121ff0_0x121ff0");
#endif

    switch (ctx->pc) {
        case 0x121ff8u: goto label_121ff8;
        case 0x122004u: goto label_122004;
        default: break;
    }

    ctx->pc = 0x121ff0u;

    // 0x121ff0: 0xc048608  jal         func_121820
    ctx->pc = 0x121FF0u;
    SET_GPR_U32(ctx, 31, 0x121FF8u);
    ctx->pc = 0x121FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121FF0u;
    // 0x121ff4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121820u, 0x121FF0u, 0x121FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121FF8u;
label_121ff8:
    // 0x121ff8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x121ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x121ffc: 0xc048604  jal         func_121810
    ctx->pc = 0x121FFCu;
    SET_GPR_U32(ctx, 31, 0x122004u);
    ctx->pc = 0x122000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121FFCu;
    // 0x122000: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121810u, 0x121FFCu, 0x122004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122004u;
label_122004:
    // 0x122004: 0xafb10058  sw          $s1, 0x58($sp)
    ctx->pc = 0x122004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 17));
    // 0x122008: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x122008u;
    {
        const bool branch_taken_0x122008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122008u;
        // 0x12200c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122008) {
            ctx->pc = 0x1220A0u;
            return;
        }
    }
    ctx->pc = 0x122010u;
}
