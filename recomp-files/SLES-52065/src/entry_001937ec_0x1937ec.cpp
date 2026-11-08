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

// Function: entry_001937ec
// Address: 0x1937ec - 0x193804
void entry_001937ec_0x1937ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001937ec_0x1937ec");
#endif

    switch (ctx->pc) {
        case 0x1937fcu: goto label_1937fc;
        default: break;
    }

    ctx->pc = 0x1937ecu;

label_1937ec:
    // 0x1937ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1937ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1937f0:
    // 0x1937f0: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1937f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1937f4:
    // 0x1937f4: 0x320f809  jalr        $t9
label_1937f8:
    if (ctx->pc == 0x1937F8u) {
        ctx->pc = 0x1937F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937F4u;
        // 0x1937f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1937FCu;
        goto label_1937fc;
    }
    ctx->pc = 0x1937F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1937FCu);
        ctx->pc = 0x1937F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937F4u;
        // 0x1937f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1937F4u, 0x1937FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1937FCu;
label_1937fc:
    // 0x1937fc: 0x100000bb  b           . + 4 + (0xBB << 2)
label_193800:
    if (ctx->pc == 0x193800u) {
        ctx->pc = 0x193804u;
        goto label_fallthrough_0x1937fc;
    }
    ctx->pc = 0x1937FCu;
    {
        const bool branch_taken_0x1937fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1937fc) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
label_fallthrough_0x1937fc:
    ctx->pc = 0x193804u;
}
