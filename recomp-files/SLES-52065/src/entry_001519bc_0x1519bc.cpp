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

// Function: entry_001519bc
// Address: 0x1519bc - 0x1519d8
void entry_001519bc_0x1519bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001519bc_0x1519bc");
#endif

    switch (ctx->pc) {
        case 0x1519ccu: goto label_1519cc;
        default: break;
    }

    ctx->pc = 0x1519bcu;

label_1519bc:
    // 0x1519bc: 0x8e39000c  lw          $t9, 0xC($s1)
    ctx->pc = 0x1519bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1519c0:
    // 0x1519c0: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x1519c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_1519c4:
    // 0x1519c4: 0x320f809  jalr        $t9
label_1519c8:
    if (ctx->pc == 0x1519C8u) {
        ctx->pc = 0x1519C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519C4u;
        // 0x1519c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519CCu;
        goto label_1519cc;
    }
    ctx->pc = 0x1519C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1519CCu);
        ctx->pc = 0x1519C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519C4u;
        // 0x1519c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1519C4u, 0x1519CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1519CCu;
label_1519cc:
    // 0x1519cc: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1519ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1519d0:
    // 0x1519d0: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_1519d4:
    if (ctx->pc == 0x1519D4u) {
        ctx->pc = 0x1519D8u;
        goto label_fallthrough_0x1519d0;
    }
    ctx->pc = 0x1519D0u;
    {
        const bool branch_taken_0x1519d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1519d0) {
            ctx->pc = 0x1519BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1519bc;
        }
    }
label_fallthrough_0x1519d0:
    ctx->pc = 0x1519D8u;
}
