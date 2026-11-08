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

// Function: entry_00109644
// Address: 0x109644 - 0x109664
void entry_00109644_0x109644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109644_0x109644");
#endif

    switch (ctx->pc) {
        case 0x109654u: goto label_109654;
        default: break;
    }

    ctx->pc = 0x109644u;

label_109644:
    // 0x109644: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x109644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109648:
    // 0x109648: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x109648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_10964c:
    // 0x10964c: 0x320f809  jalr        $t9
label_109650:
    if (ctx->pc == 0x109650u) {
        ctx->pc = 0x109654u;
        goto label_109654;
    }
    ctx->pc = 0x10964Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109654u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10964Cu, 0x109654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109654u;
label_109654:
    // 0x109654: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_109658:
    if (ctx->pc == 0x109658u) {
        ctx->pc = 0x10965Cu;
        goto label_10965c;
    }
    ctx->pc = 0x109654u;
    {
        const bool branch_taken_0x109654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109654) {
            ctx->pc = 0x109664u;
            return;
        }
    }
    ctx->pc = 0x10965Cu;
label_10965c:
    // 0x10965c: 0x10000008  b           . + 4 + (0x8 << 2)
label_109660:
    if (ctx->pc == 0x109660u) {
        ctx->pc = 0x109660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10965Cu;
        // 0x109660: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109664u;
        goto label_fallthrough_0x10965c;
    }
    ctx->pc = 0x10965Cu;
    {
        const bool branch_taken_0x10965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10965Cu;
        // 0x109660: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10965c) {
            ctx->pc = 0x109680u;
            return;
        }
    }
label_fallthrough_0x10965c:
    ctx->pc = 0x109664u;
}
