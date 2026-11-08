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

// Function: entry_0016cd34
// Address: 0x16cd34 - 0x16cd68
void entry_0016cd34_0x16cd34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cd34_0x16cd34");
#endif

    switch (ctx->pc) {
        case 0x16cd60u: goto label_16cd60;
        default: break;
    }

    ctx->pc = 0x16cd34u;

label_16cd34:
    // 0x16cd34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cd38:
    // 0x16cd38: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
label_16cd3c:
    if (ctx->pc == 0x16CD3Cu) {
        ctx->pc = 0x16CD40u;
        goto label_16cd40;
    }
    ctx->pc = 0x16CD38u;
    {
        const bool branch_taken_0x16cd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x16cd38) {
            ctx->pc = 0x16CD84u;
            return;
        }
    }
    ctx->pc = 0x16CD40u;
label_16cd40:
    // 0x16cd40: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x16cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_16cd44:
    // 0x16cd44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_16cd48:
    if (ctx->pc == 0x16CD48u) {
        ctx->pc = 0x16CD4Cu;
        goto label_16cd4c;
    }
    ctx->pc = 0x16CD44u;
    {
        const bool branch_taken_0x16cd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cd44) {
            ctx->pc = 0x16CD68u;
            return;
        }
    }
    ctx->pc = 0x16CD4Cu;
label_16cd4c:
    // 0x16cd4c: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cd4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cd50:
    // 0x16cd50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cd54:
    // 0x16cd54: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16cd54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16cd58:
    // 0x16cd58: 0x320f809  jalr        $t9
label_16cd5c:
    if (ctx->pc == 0x16CD5Cu) {
        ctx->pc = 0x16CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD58u;
        // 0x16cd5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD60u;
        goto label_16cd60;
    }
    ctx->pc = 0x16CD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CD60u);
        ctx->pc = 0x16CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD58u;
        // 0x16cd5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CD58u, 0x16CD60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CD60u;
label_16cd60:
    // 0x16cd60: 0x1000002a  b           . + 4 + (0x2A << 2)
label_16cd64:
    if (ctx->pc == 0x16CD64u) {
        ctx->pc = 0x16CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD60u;
        // 0x16cd64: 0x8e230230  lw          $v1, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD68u;
        goto label_fallthrough_0x16cd60;
    }
    ctx->pc = 0x16CD60u;
    {
        const bool branch_taken_0x16cd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD60u;
        // 0x16cd64: 0x8e230230  lw          $v1, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd60) {
            ctx->pc = 0x16CE0Cu;
            return;
        }
    }
label_fallthrough_0x16cd60:
    ctx->pc = 0x16CD68u;
}
