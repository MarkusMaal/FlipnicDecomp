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

// Function: entry_001ed388
// Address: 0x1ed388 - 0x1ed3a0
void entry_001ed388_0x1ed388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed388_0x1ed388");
#endif

    ctx->pc = 0x1ed388u;

label_1ed388:
    // 0x1ed388: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
label_1ed38c:
    if (ctx->pc == 0x1ED38Cu) {
        ctx->pc = 0x1ED38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED388u;
        // 0x1ed38c: 0x3c150022  lui         $s5, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED390u;
        goto label_1ed390;
    }
    ctx->pc = 0x1ED388u;
    {
        const bool branch_taken_0x1ed388 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1ED38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED388u;
        // 0x1ed38c: 0x3c150022  lui         $s5, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed388) {
            ctx->pc = 0x1ED3A0u;
            return;
        }
    }
    ctx->pc = 0x1ED390u;
label_1ed390:
    // 0x1ed390: 0x11882f  dsubu       $s1, $zero, $s1
    ctx->pc = 0x1ed390u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) - GPR_U64(ctx, 17));
label_1ed394:
    // 0x1ed394: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed398:
    // 0x1ed398: 0x40f809  jalr        $v0
label_1ed39c:
    if (ctx->pc == 0x1ED39Cu) {
        ctx->pc = 0x1ED39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED398u;
        // 0x1ed39c: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED3A0u;
        goto label_fallthrough_0x1ed398;
    }
    ctx->pc = 0x1ED398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED3A0u);
        ctx->pc = 0x1ED39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED398u;
        // 0x1ed39c: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED398u, 0x1ED3A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ed398:
    ctx->pc = 0x1ED3A0u;
}
