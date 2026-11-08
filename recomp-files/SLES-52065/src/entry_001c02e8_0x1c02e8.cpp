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

// Function: entry_001c02e8
// Address: 0x1c02e8 - 0x1c0300
void entry_001c02e8_0x1c02e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c02e8_0x1c02e8");
#endif

    switch (ctx->pc) {
        case 0x1c02f0u: goto label_1c02f0;
        default: break;
    }

    ctx->pc = 0x1c02e8u;

    // 0x1c02e8: 0xc073084  jal         func_1CC210
    ctx->pc = 0x1C02E8u;
    SET_GPR_U32(ctx, 31, 0x1C02F0u);
    ctx->pc = 0x1C02ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02E8u;
    // 0x1c02ec: 0x8c24f4f0  lw          $a0, -0xB10($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC210u, 0x1C02E8u, 0x1C02F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02F0u;
label_1c02f0:
    // 0x1c02f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c02f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c02f4: 0x8c22f4f0  lw          $v0, -0xB10($at)
    ctx->pc = 0x1c02f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F4F0u));
    // 0x1c02f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C02F8u;
    {
        const bool branch_taken_0x1c02f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02F8u;
        // 0x1c02fc: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02f8) {
            ctx->pc = 0x1C0304u;
            return;
        }
    }
    ctx->pc = 0x1C0300u;
}
