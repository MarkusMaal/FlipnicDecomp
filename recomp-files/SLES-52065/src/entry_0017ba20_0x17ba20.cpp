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

// Function: entry_0017ba20
// Address: 0x17ba20 - 0x17ba5c
void entry_0017ba20_0x17ba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ba20_0x17ba20");
#endif

    switch (ctx->pc) {
        case 0x17ba34u: goto label_17ba34;
        case 0x17ba4cu: goto label_17ba4c;
        default: break;
    }

    ctx->pc = 0x17ba20u;

label_17ba20:
    // 0x17ba20: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x17ba20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17ba24:
    // 0x17ba24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17ba24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17ba28:
    // 0x17ba28: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x17ba28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_17ba2c:
    // 0x17ba2c: 0x320f809  jalr        $t9
label_17ba30:
    if (ctx->pc == 0x17BA30u) {
        ctx->pc = 0x17BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA2Cu;
        // 0x17ba30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA34u;
        goto label_17ba34;
    }
    ctx->pc = 0x17BA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17BA34u);
        ctx->pc = 0x17BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA2Cu;
        // 0x17ba30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BA2Cu, 0x17BA34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17BA34u;
label_17ba34:
    // 0x17ba34: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x17ba34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17ba38:
    // 0x17ba38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ba38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17ba3c:
    // 0x17ba3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ba3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17ba40:
    // 0x17ba40: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x17ba40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_17ba44:
    // 0x17ba44: 0x320f809  jalr        $t9
label_17ba48:
    if (ctx->pc == 0x17BA48u) {
        ctx->pc = 0x17BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA44u;
        // 0x17ba48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA4Cu;
        goto label_17ba4c;
    }
    ctx->pc = 0x17BA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17BA4Cu);
        ctx->pc = 0x17BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA44u;
        // 0x17ba48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BA44u, 0x17BA4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17BA4Cu;
label_17ba4c:
    // 0x17ba4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ba4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17ba50:
    // 0x17ba50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ba50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17ba54:
    // 0x17ba54: 0x3e00008  jr          $ra
label_17ba58:
    if (ctx->pc == 0x17BA58u) {
        ctx->pc = 0x17BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA54u;
        // 0x17ba58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA5Cu;
        goto label_fallthrough_0x17ba54;
    }
    ctx->pc = 0x17BA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA54u;
        // 0x17ba58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17ba54:
    ctx->pc = 0x17BA5Cu;
}
