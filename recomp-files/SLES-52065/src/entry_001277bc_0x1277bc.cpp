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

// Function: entry_001277bc
// Address: 0x1277bc - 0x1277d8
void entry_001277bc_0x1277bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001277bc_0x1277bc");
#endif

    ctx->pc = 0x1277bcu;

label_1277bc:
    // 0x1277bc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1277bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1277c0:
    // 0x1277c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1277c4:
    if (ctx->pc == 0x1277C4u) {
        ctx->pc = 0x1277C8u;
        goto label_1277c8;
    }
    ctx->pc = 0x1277C0u;
    {
        const bool branch_taken_0x1277c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1277c0) {
            ctx->pc = 0x1277D8u;
            return;
        }
    }
    ctx->pc = 0x1277C8u;
label_1277c8:
    // 0x1277c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1277c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1277cc:
    // 0x1277cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1277ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1277d0:
    // 0x1277d0: 0x320f809  jalr        $t9
label_1277d4:
    if (ctx->pc == 0x1277D4u) {
        ctx->pc = 0x1277D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277D0u;
        // 0x1277d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1277D8u;
        goto label_fallthrough_0x1277d0;
    }
    ctx->pc = 0x1277D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1277D8u);
        ctx->pc = 0x1277D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277D0u;
        // 0x1277d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1277D0u, 0x1277D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1277d0:
    ctx->pc = 0x1277D8u;
}
