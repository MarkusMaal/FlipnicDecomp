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

// Function: entry_001fcce8
// Address: 0x1fcce8 - 0x1fcd10
void entry_001fcce8_0x1fcce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcce8_0x1fcce8");
#endif

    switch (ctx->pc) {
        case 0x1fccf0u: goto label_1fccf0;
        default: break;
    }

    ctx->pc = 0x1fcce8u;

    // 0x1fcce8: 0xc07ffc0  jal         func_1FFF00
    ctx->pc = 0x1FCCE8u;
    SET_GPR_U32(ctx, 31, 0x1FCCF0u);
    ctx->pc = 0x1FCCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCCE8u;
    // 0x1fccec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF00u, 0x1FCCE8u, 0x1FCCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCCF0u;
label_1fccf0:
    // 0x1fccf0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1fccf4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1fccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fccf8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1fccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fccfc: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1fccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1fcd00: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1fcd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1fcd04: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1fcd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1fcd08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCD08u;
    {
        const bool branch_taken_0x1fcd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD08u;
        // 0x1fcd0c: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd08) {
            ctx->pc = 0x1FCD18u;
            return;
        }
    }
    ctx->pc = 0x1FCD10u;
}
