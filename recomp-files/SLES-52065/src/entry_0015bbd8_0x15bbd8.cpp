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

// Function: entry_0015bbd8
// Address: 0x15bbd8 - 0x15bc08
void entry_0015bbd8_0x15bbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bbd8_0x15bbd8");
#endif

    switch (ctx->pc) {
        case 0x15bbf4u: goto label_15bbf4;
        default: break;
    }

    ctx->pc = 0x15bbd8u;

label_15bbd8:
    // 0x15bbd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bbdc:
    // 0x15bbdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15bbe0:
    // 0x15bbe0: 0xa22201d3  sb          $v0, 0x1D3($s1)
    ctx->pc = 0x15bbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 2));
label_15bbe4:
    // 0x15bbe4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x15bbe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_15bbe8:
    // 0x15bbe8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x15bbe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_15bbec:
    // 0x15bbec: 0x320f809  jalr        $t9
label_15bbf0:
    if (ctx->pc == 0x15BBF0u) {
        ctx->pc = 0x15BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBECu;
        // 0x15bbf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBF4u;
        goto label_15bbf4;
    }
    ctx->pc = 0x15BBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15BBF4u);
        ctx->pc = 0x15BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBECu;
        // 0x15bbf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BBECu, 0x15BBF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BBF4u;
label_15bbf4:
    // 0x15bbf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15bbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15bbf8:
    // 0x15bbf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bbf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15bbfc:
    // 0x15bbfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bbfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15bc00:
    // 0x15bc00: 0x3e00008  jr          $ra
label_15bc04:
    if (ctx->pc == 0x15BC04u) {
        ctx->pc = 0x15BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC00u;
        // 0x15bc04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC08u;
        goto label_fallthrough_0x15bc00;
    }
    ctx->pc = 0x15BC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC00u;
        // 0x15bc04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15bc00:
    ctx->pc = 0x15BC08u;
}
