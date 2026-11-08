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

// Function: entry_00193254
// Address: 0x193254 - 0x19326c
void entry_00193254_0x193254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193254_0x193254");
#endif

    switch (ctx->pc) {
        case 0x193264u: goto label_193264;
        default: break;
    }

    ctx->pc = 0x193254u;

label_193254:
    // 0x193254: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193258:
    // 0x193258: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x193258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_19325c:
    // 0x19325c: 0x320f809  jalr        $t9
label_193260:
    if (ctx->pc == 0x193260u) {
        ctx->pc = 0x193260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19325Cu;
        // 0x193260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193264u;
        goto label_193264;
    }
    ctx->pc = 0x19325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193264u);
        ctx->pc = 0x193260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19325Cu;
        // 0x193260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19325Cu, 0x193264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193264u;
label_193264:
    // 0x193264: 0x1000000b  b           . + 4 + (0xB << 2)
label_193268:
    if (ctx->pc == 0x193268u) {
        ctx->pc = 0x19326Cu;
        goto label_fallthrough_0x193264;
    }
    ctx->pc = 0x193264u;
    {
        const bool branch_taken_0x193264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193264) {
            ctx->pc = 0x193294u;
            return;
        }
    }
label_fallthrough_0x193264:
    ctx->pc = 0x19326Cu;
}
