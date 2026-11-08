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

// Function: entry_0017bb60
// Address: 0x17bb60 - 0x17bb9c
void entry_0017bb60_0x17bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bb60_0x17bb60");
#endif

    switch (ctx->pc) {
        case 0x17bb74u: goto label_17bb74;
        case 0x17bb8cu: goto label_17bb8c;
        default: break;
    }

    ctx->pc = 0x17bb60u;

label_17bb60:
    // 0x17bb60: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x17bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17bb64:
    // 0x17bb64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17bb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bb68:
    // 0x17bb68: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x17bb68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_17bb6c:
    // 0x17bb6c: 0x320f809  jalr        $t9
label_17bb70:
    if (ctx->pc == 0x17BB70u) {
        ctx->pc = 0x17BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB6Cu;
        // 0x17bb70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BB74u;
        goto label_17bb74;
    }
    ctx->pc = 0x17BB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17BB74u);
        ctx->pc = 0x17BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB6Cu;
        // 0x17bb70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB6Cu, 0x17BB74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17BB74u;
label_17bb74:
    // 0x17bb74: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x17bb74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17bb78:
    // 0x17bb78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17bb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17bb7c:
    // 0x17bb7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17bb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17bb80:
    // 0x17bb80: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x17bb80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_17bb84:
    // 0x17bb84: 0x320f809  jalr        $t9
label_17bb88:
    if (ctx->pc == 0x17BB88u) {
        ctx->pc = 0x17BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB84u;
        // 0x17bb88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BB8Cu;
        goto label_17bb8c;
    }
    ctx->pc = 0x17BB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17BB8Cu);
        ctx->pc = 0x17BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB84u;
        // 0x17bb88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB84u, 0x17BB8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17BB8Cu;
label_17bb8c:
    // 0x17bb8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17bb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17bb90:
    // 0x17bb90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17bb94:
    // 0x17bb94: 0x3e00008  jr          $ra
label_17bb98:
    if (ctx->pc == 0x17BB98u) {
        ctx->pc = 0x17BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB94u;
        // 0x17bb98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BB9Cu;
        goto label_fallthrough_0x17bb94;
    }
    ctx->pc = 0x17BB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB94u;
        // 0x17bb98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17bb94:
    ctx->pc = 0x17BB9Cu;
}
