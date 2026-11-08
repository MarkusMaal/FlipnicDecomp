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

// Function: entry_001c02c0
// Address: 0x1c02c0 - 0x1c02e0
void entry_001c02c0_0x1c02c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c02c0_0x1c02c0");
#endif

    switch (ctx->pc) {
        case 0x1c02c8u: goto label_1c02c8;
        default: break;
    }

    ctx->pc = 0x1c02c0u;

    // 0x1c02c0: 0xc073084  jal         func_1CC210
    ctx->pc = 0x1C02C0u;
    SET_GPR_U32(ctx, 31, 0x1C02C8u);
    ctx->pc = 0x1CC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC210u, 0x1C02C0u, 0x1C02C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02C8u;
label_1c02c8:
    // 0x1c02c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c02c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c02cc: 0x8c23f4f8  lw          $v1, -0xB08($at)
    ctx->pc = 0x1c02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1c02d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C02D0u;
    {
        const bool branch_taken_0x1c02d0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C02D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02D0u;
        // 0x1c02d4: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02d0) {
            ctx->pc = 0x1C02E0u;
            return;
        }
    }
    ctx->pc = 0x1C02D8u;
    // 0x1c02d8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c02dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c02dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1c02e0u;
}
