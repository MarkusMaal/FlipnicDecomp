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

// Function: entry_001a0298
// Address: 0x1a0298 - 0x1a02b4
void entry_001a0298_0x1a0298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0298_0x1a0298");
#endif

    ctx->pc = 0x1a0298u;

label_1a0298:
    // 0x1a0298: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1a029c:
    if (ctx->pc == 0x1A029Cu) {
        ctx->pc = 0x1A02A0u;
        goto label_1a02a0;
    }
    ctx->pc = 0x1A0298u;
    {
        const bool branch_taken_0x1a0298 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0298) {
            ctx->pc = 0x1A02B4u;
            return;
        }
    }
    ctx->pc = 0x1A02A0u;
label_1a02a0:
    // 0x1a02a0: 0x8e59031c  lw          $t9, 0x31C($s2)
    ctx->pc = 0x1a02a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
label_1a02a4:
    // 0x1a02a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a02a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a02a8:
    // 0x1a02a8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a02a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a02ac:
    // 0x1a02ac: 0x320f809  jalr        $t9
label_1a02b0:
    if (ctx->pc == 0x1A02B0u) {
        ctx->pc = 0x1A02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02ACu;
        // 0x1a02b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A02B4u;
        goto label_fallthrough_0x1a02ac;
    }
    ctx->pc = 0x1A02ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A02B4u);
        ctx->pc = 0x1A02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02ACu;
        // 0x1a02b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A02ACu, 0x1A02B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a02ac:
    ctx->pc = 0x1A02B4u;
}
