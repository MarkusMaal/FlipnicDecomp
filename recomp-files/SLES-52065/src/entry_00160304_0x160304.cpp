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

// Function: entry_00160304
// Address: 0x160304 - 0x160320
void entry_00160304_0x160304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160304_0x160304");
#endif

    ctx->pc = 0x160304u;

label_160304:
    // 0x160304: 0x0  nop
    ctx->pc = 0x160304u;
    // NOP
label_160308:
    // 0x160308: 0x8c8201d4  lw          $v0, 0x1D4($a0)
    ctx->pc = 0x160308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_16030c:
    // 0x16030c: 0xac820210  sw          $v0, 0x210($a0)
    ctx->pc = 0x16030cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 528), GPR_U32(ctx, 2));
label_160310:
    // 0x160310: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x160310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_160314:
    // 0x160314: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x160314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_160318:
    // 0x160318: 0x320f809  jalr        $t9
label_16031c:
    if (ctx->pc == 0x16031Cu) {
        ctx->pc = 0x16031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160318u;
        // 0x16031c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160320u;
        goto label_fallthrough_0x160318;
    }
    ctx->pc = 0x160318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x160320u);
        ctx->pc = 0x16031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160318u;
        // 0x16031c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160318u, 0x160320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x160318:
    ctx->pc = 0x160320u;
}
