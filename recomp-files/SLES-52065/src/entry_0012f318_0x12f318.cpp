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

// Function: entry_0012f318
// Address: 0x12f318 - 0x12f354
void entry_0012f318_0x12f318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f318_0x12f318");
#endif

    switch (ctx->pc) {
        case 0x12f32cu: goto label_12f32c;
        default: break;
    }

    ctx->pc = 0x12f318u;

    // 0x12f318: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x12f318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12f31c: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x12f31cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12f320: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12f320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12f324: 0xc04c790  jal         func_131E40
    ctx->pc = 0x12F324u;
    SET_GPR_U32(ctx, 31, 0x12F32Cu);
    ctx->pc = 0x12F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F324u;
    // 0x12f328: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E40u, 0x12F324u, 0x12F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F32Cu;
label_12f32c:
    // 0x12f32c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x12F32Cu;
    {
        const bool branch_taken_0x12f32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f32c) {
            ctx->pc = 0x12F2C4u;
            return;
        }
    }
    ctx->pc = 0x12F334u;
    // 0x12f334: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f338: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f33c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x12f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x12f340: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12f340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f344: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x12f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12f348: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12F348u;
    {
        const bool branch_taken_0x12f348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f348) {
            ctx->pc = 0x12F354u;
            return;
        }
    }
    ctx->pc = 0x12F350u;
    // 0x12f350: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x12f350u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x12f354u;
}
