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

// Function: entry_001aaec4
// Address: 0x1aaec4 - 0x1aaef0
void entry_001aaec4_0x1aaec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaec4_0x1aaec4");
#endif

    switch (ctx->pc) {
        case 0x1aaed8u: goto label_1aaed8;
        default: break;
    }

    ctx->pc = 0x1aaec4u;

    // 0x1aaec4: 0x0  nop
    ctx->pc = 0x1aaec4u;
    // NOP
    // 0x1aaec8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1aaec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1aaecc: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1aaeccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1aaed0: 0xc057040  jal         func_15C100
    ctx->pc = 0x1AAED0u;
    SET_GPR_U32(ctx, 31, 0x1AAED8u);
    ctx->pc = 0x1AAED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAED0u;
    // 0x1aaed4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AAED0u, 0x1AAED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAED8u;
label_1aaed8:
    // 0x1aaed8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aaed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1aaedc: 0x2912021  addu        $a0, $s4, $s1
    ctx->pc = 0x1aaedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1aaee0: 0x2631002c  addiu       $s1, $s1, 0x2C
    ctx->pc = 0x1aaee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x1aaee4: 0xac830674  sw          $v1, 0x674($a0)
    ctx->pc = 0x1aaee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1652), GPR_U32(ctx, 3));
    // 0x1aaee8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1AAEE8u;
    {
        const bool branch_taken_0x1aaee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEE8u;
        // 0x1aaeec: 0xac820678  sw          $v0, 0x678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaee8) {
            ctx->pc = 0x1AAF40u;
            return;
        }
    }
    ctx->pc = 0x1AAEF0u;
}
