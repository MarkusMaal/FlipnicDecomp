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

// Function: entry_001b5ebc
// Address: 0x1b5ebc - 0x1b5ed8
void entry_001b5ebc_0x1b5ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5ebc_0x1b5ebc");
#endif

    ctx->pc = 0x1b5ebcu;

label_1b5ebc:
    // 0x1b5ebc: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1b5ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1b5ec0:
    // 0x1b5ec0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1b5ec4:
    if (ctx->pc == 0x1B5EC4u) {
        ctx->pc = 0x1B5EC8u;
        goto label_1b5ec8;
    }
    ctx->pc = 0x1B5EC0u;
    {
        const bool branch_taken_0x1b5ec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ec0) {
            ctx->pc = 0x1B5ED8u;
            return;
        }
    }
    ctx->pc = 0x1B5EC8u;
label_1b5ec8:
    // 0x1b5ec8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b5ec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5ecc:
    // 0x1b5ecc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1b5eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1b5ed0:
    // 0x1b5ed0: 0x320f809  jalr        $t9
label_1b5ed4:
    if (ctx->pc == 0x1B5ED4u) {
        ctx->pc = 0x1B5ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5ED0u;
        // 0x1b5ed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5ED8u;
        goto label_fallthrough_0x1b5ed0;
    }
    ctx->pc = 0x1B5ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B5ED8u);
        ctx->pc = 0x1B5ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5ED0u;
        // 0x1b5ed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5ED0u, 0x1B5ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1b5ed0:
    ctx->pc = 0x1B5ED8u;
}
