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

// Function: entry_001367d0
// Address: 0x1367d0 - 0x1367ec
void entry_001367d0_0x1367d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001367d0_0x1367d0");
#endif

    ctx->pc = 0x1367d0u;

label_1367d0:
    // 0x1367d0: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x1367d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1367d4:
    // 0x1367d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1367d8:
    if (ctx->pc == 0x1367D8u) {
        ctx->pc = 0x1367DCu;
        goto label_1367dc;
    }
    ctx->pc = 0x1367D4u;
    {
        const bool branch_taken_0x1367d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1367d4) {
            ctx->pc = 0x1367ECu;
            return;
        }
    }
    ctx->pc = 0x1367DCu;
label_1367dc:
    // 0x1367dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1367dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1367e0:
    // 0x1367e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1367e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1367e4:
    // 0x1367e4: 0x320f809  jalr        $t9
label_1367e8:
    if (ctx->pc == 0x1367E8u) {
        ctx->pc = 0x1367E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367E4u;
        // 0x1367e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1367ECu;
        goto label_fallthrough_0x1367e4;
    }
    ctx->pc = 0x1367E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1367ECu);
        ctx->pc = 0x1367E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367E4u;
        // 0x1367e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1367E4u, 0x1367ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1367e4:
    ctx->pc = 0x1367ECu;
}
