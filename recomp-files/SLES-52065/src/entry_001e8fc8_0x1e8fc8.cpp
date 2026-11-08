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

// Function: entry_001e8fc8
// Address: 0x1e8fc8 - 0x1e8fe0
void entry_001e8fc8_0x1e8fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8fc8_0x1e8fc8");
#endif

    switch (ctx->pc) {
        case 0x1e8fd0u: goto label_1e8fd0;
        default: break;
    }

    ctx->pc = 0x1e8fc8u;

label_1e8fc8:
    // 0x1e8fc8: 0x2a0f809  jalr        $s5
label_1e8fcc:
    if (ctx->pc == 0x1E8FCCu) {
        ctx->pc = 0x1E8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FC8u;
        // 0x1e8fcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8FD0u;
        goto label_1e8fd0;
    }
    ctx->pc = 0x1E8FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1E8FD0u);
        ctx->pc = 0x1E8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FC8u;
        // 0x1e8fcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8FC8u, 0x1E8FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8FD0u;
label_1e8fd0:
    // 0x1e8fd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e8fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e8fd4:
    // 0x1e8fd4: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x1e8fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_1e8fd8:
    // 0x1e8fd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e8fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e8fdc:
    // 0x1e8fdc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e8fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1e8fe0u;
}
