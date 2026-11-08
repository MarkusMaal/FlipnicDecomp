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

// Function: entry_0011d090
// Address: 0x11d090 - 0x11d0bc
void entry_0011d090_0x11d090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d090_0x11d090");
#endif

    switch (ctx->pc) {
        case 0x11d098u: goto label_11d098;
        default: break;
    }

    ctx->pc = 0x11d090u;

    // 0x11d090: 0xc075314  jal         func_1D4C50
    ctx->pc = 0x11D090u;
    SET_GPR_U32(ctx, 31, 0x11D098u);
    ctx->pc = 0x11D094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D090u;
    // 0x11d094: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4C50u, 0x11D090u, 0x11D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D098u;
label_11d098:
    // 0x11d098: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x11d098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x11d09c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x11D09Cu;
    {
        const bool branch_taken_0x11d09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d09c) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11D0A4u;
    // 0x11d0a4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x11d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x11d0a8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D0A8u;
    {
        const bool branch_taken_0x11d0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d0a8) {
            ctx->pc = 0x11D0BCu;
            return;
        }
    }
    ctx->pc = 0x11D0B0u;
    // 0x11d0b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11d0b4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x11D0B4u;
    {
        const bool branch_taken_0x11d0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D0B4u;
        // 0x11d0b8: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0b4) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11D0BCu;
}
