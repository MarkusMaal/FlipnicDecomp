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

// Function: entry_001a2d08
// Address: 0x1a2d08 - 0x1a2d20
void entry_001a2d08_0x1a2d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2d08_0x1a2d08");
#endif

    ctx->pc = 0x1a2d08u;

label_1a2d08:
    // 0x1a2d08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a2d0c:
    if (ctx->pc == 0x1A2D0Cu) {
        ctx->pc = 0x1A2D10u;
        goto label_1a2d10;
    }
    ctx->pc = 0x1A2D08u;
    {
        const bool branch_taken_0x1a2d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d08) {
            ctx->pc = 0x1A2D20u;
            return;
        }
    }
    ctx->pc = 0x1A2D10u;
label_1a2d10:
    // 0x1a2d10: 0x8c99031c  lw          $t9, 0x31C($a0)
    ctx->pc = 0x1a2d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 796)));
label_1a2d14:
    // 0x1a2d14: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a2d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a2d18:
    // 0x1a2d18: 0x320f809  jalr        $t9
label_1a2d1c:
    if (ctx->pc == 0x1A2D1Cu) {
        ctx->pc = 0x1A2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D18u;
        // 0x1a2d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D20u;
        goto label_fallthrough_0x1a2d18;
    }
    ctx->pc = 0x1A2D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A2D20u);
        ctx->pc = 0x1A2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D18u;
        // 0x1a2d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D18u, 0x1A2D20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a2d18:
    ctx->pc = 0x1A2D20u;
}
