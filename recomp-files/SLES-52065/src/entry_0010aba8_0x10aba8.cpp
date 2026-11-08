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

// Function: entry_0010aba8
// Address: 0x10aba8 - 0x10abe8
void entry_0010aba8_0x10aba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010aba8_0x10aba8");
#endif

    switch (ctx->pc) {
        case 0x10abc0u: goto label_10abc0;
        default: break;
    }

    ctx->pc = 0x10aba8u;

label_10aba8:
    // 0x10aba8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x10aba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_10abac:
    // 0x10abac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10abacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10abb0:
    // 0x10abb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10abb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10abb4:
    // 0x10abb4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x10abb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10abb8:
    // 0x10abb8: 0x320f809  jalr        $t9
label_10abbc:
    if (ctx->pc == 0x10ABBCu) {
        ctx->pc = 0x10ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABB8u;
        // 0x10abbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABC0u;
        goto label_10abc0;
    }
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10ABC0u);
        ctx->pc = 0x10ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABB8u;
        // 0x10abbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ABB8u, 0x10ABC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10ABC0u;
label_10abc0:
    // 0x10abc0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x10abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_10abc4:
    // 0x10abc4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x10abc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10abc8:
    // 0x10abc8: 0xa064002b  sb          $a0, 0x2B($v1)
    ctx->pc = 0x10abc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 4));
label_10abcc:
    // 0x10abcc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10abccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10abd0:
    // 0x10abd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10abd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10abd4:
    // 0x10abd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10abd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10abd8:
    // 0x10abd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10abd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10abdc:
    // 0x10abdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10abdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10abe0:
    // 0x10abe0: 0x3e00008  jr          $ra
label_10abe4:
    if (ctx->pc == 0x10ABE4u) {
        ctx->pc = 0x10ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABE0u;
        // 0x10abe4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABE8u;
        goto label_fallthrough_0x10abe0;
    }
    ctx->pc = 0x10ABE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABE0u;
        // 0x10abe4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ABE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10abe0:
    ctx->pc = 0x10ABE8u;
}
