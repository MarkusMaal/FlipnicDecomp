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

// Function: entry_001c0234
// Address: 0x1c0234 - 0x1c0248
void entry_001c0234_0x1c0234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0234_0x1c0234");
#endif

    switch (ctx->pc) {
        case 0x1c023cu: goto label_1c023c;
        default: break;
    }

    ctx->pc = 0x1c0234u;

    // 0x1c0234: 0xc07307c  jal         func_1CC1F0
    ctx->pc = 0x1C0234u;
    SET_GPR_U32(ctx, 31, 0x1C023Cu);
    ctx->pc = 0x1C0238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0234u;
    // 0x1c0238: 0x8c24f4f0  lw          $a0, -0xB10($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1F0u, 0x1C0234u, 0x1C023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C023Cu;
label_1c023c:
    // 0x1c023c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c023cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0240: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0240u;
    {
        const bool branch_taken_0x1c0240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0240u;
        // 0x1c0244: 0x8c22f4f0  lw          $v0, -0xB10($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0240) {
            ctx->pc = 0x1C025Cu;
            return;
        }
    }
    ctx->pc = 0x1C0248u;
}
