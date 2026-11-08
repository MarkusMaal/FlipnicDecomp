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

// Function: entry_00122064
// Address: 0x122064 - 0x122098
void entry_00122064_0x122064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122064_0x122064");
#endif

    switch (ctx->pc) {
        case 0x122074u: goto label_122074;
        case 0x122080u: goto label_122080;
        case 0x122090u: goto label_122090;
        default: break;
    }

    ctx->pc = 0x122064u;

    // 0x122064: 0x0  nop
    ctx->pc = 0x122064u;
    // NOP
    // 0x122068: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x122068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x12206c: 0xc048958  jal         func_122560
    ctx->pc = 0x12206Cu;
    SET_GPR_U32(ctx, 31, 0x122074u);
    ctx->pc = 0x122070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12206Cu;
    // 0x122070: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122560u, 0x12206Cu, 0x122074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122074u;
label_122074:
    // 0x122074: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x122074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x122078: 0xc048a20  jal         func_122880
    ctx->pc = 0x122078u;
    SET_GPR_U32(ctx, 31, 0x122080u);
    ctx->pc = 0x12207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122078u;
    // 0x12207c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122880u, 0x122078u, 0x122080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122080u;
label_122080:
    // 0x122080: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x122080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x122084: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x122084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x122088: 0xc048974  jal         func_1225D0
    ctx->pc = 0x122088u;
    SET_GPR_U32(ctx, 31, 0x122090u);
    ctx->pc = 0x12208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122088u;
    // 0x12208c: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x122088u, 0x122090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122090u;
label_122090:
    // 0x122090: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x122090u;
    {
        const bool branch_taken_0x122090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122090) {
            ctx->pc = 0x1220A0u;
            return;
        }
    }
    ctx->pc = 0x122098u;
}
