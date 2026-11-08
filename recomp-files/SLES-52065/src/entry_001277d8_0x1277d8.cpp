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

// Function: entry_001277d8
// Address: 0x1277d8 - 0x1277f4
void entry_001277d8_0x1277d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001277d8_0x1277d8");
#endif

    ctx->pc = 0x1277d8u;

label_1277d8:
    // 0x1277d8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1277d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1277dc:
    // 0x1277dc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1277e0:
    if (ctx->pc == 0x1277E0u) {
        ctx->pc = 0x1277E4u;
        goto label_1277e4;
    }
    ctx->pc = 0x1277DCu;
    {
        const bool branch_taken_0x1277dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1277dc) {
            ctx->pc = 0x1277F4u;
            return;
        }
    }
    ctx->pc = 0x1277E4u;
label_1277e4:
    // 0x1277e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1277e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1277e8:
    // 0x1277e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1277e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1277ec:
    // 0x1277ec: 0x320f809  jalr        $t9
label_1277f0:
    if (ctx->pc == 0x1277F0u) {
        ctx->pc = 0x1277F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277ECu;
        // 0x1277f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1277F4u;
        goto label_fallthrough_0x1277ec;
    }
    ctx->pc = 0x1277ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1277F4u);
        ctx->pc = 0x1277F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277ECu;
        // 0x1277f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1277ECu, 0x1277F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1277ec:
    ctx->pc = 0x1277F4u;
}
