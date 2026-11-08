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

// Function: FUN_0018fd90
// Address: 0x18fd90 - 0x18fde8
void FUN_0018fd90_0x18fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018fd90_0x18fd90");
#endif

    switch (ctx->pc) {
        case 0x18fd90u: goto label_18fd90;
        case 0x18fd94u: goto label_18fd94;
        case 0x18fd98u: goto label_18fd98;
        case 0x18fd9cu: goto label_18fd9c;
        case 0x18fda0u: goto label_18fda0;
        case 0x18fda4u: goto label_18fda4;
        case 0x18fda8u: goto label_18fda8;
        case 0x18fdacu: goto label_18fdac;
        case 0x18fdb0u: goto label_18fdb0;
        case 0x18fdb4u: goto label_18fdb4;
        case 0x18fdb8u: goto label_18fdb8;
        case 0x18fdbcu: goto label_18fdbc;
        case 0x18fdc0u: goto label_18fdc0;
        case 0x18fdc4u: goto label_18fdc4;
        case 0x18fdc8u: goto label_18fdc8;
        case 0x18fdccu: goto label_18fdcc;
        case 0x18fdd0u: goto label_18fdd0;
        case 0x18fdd4u: goto label_18fdd4;
        case 0x18fdd8u: goto label_18fdd8;
        case 0x18fddcu: goto label_18fddc;
        case 0x18fde0u: goto label_18fde0;
        case 0x18fde4u: goto label_18fde4;
        default: break;
    }

    ctx->pc = 0x18fd90u;

label_18fd90:
    // 0x18fd90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18fd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18fd94:
    // 0x18fd94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18fd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18fd98:
    // 0x18fd98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18fd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18fd9c:
    // 0x18fd9c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x18fd9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18fda0:
    // 0x18fda0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_18fda4:
    if (ctx->pc == 0x18FDA4u) {
        ctx->pc = 0x18FDA8u;
        goto label_18fda8;
    }
    ctx->pc = 0x18FDA0u;
    {
        const bool branch_taken_0x18fda0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fda0) {
            ctx->pc = 0x18FDD8u;
            goto label_18fdd8;
        }
    }
    ctx->pc = 0x18FDA8u;
label_18fda8:
    // 0x18fda8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x18fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18fdac:
    // 0x18fdac: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_18fdb0:
    if (ctx->pc == 0x18FDB0u) {
        ctx->pc = 0x18FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDACu;
        // 0x18fdb0: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FDB4u;
        goto label_18fdb4;
    }
    ctx->pc = 0x18FDACu;
    {
        const bool branch_taken_0x18fdac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDACu;
        // 0x18fdb0: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdac) {
            ctx->pc = 0x18FDCCu;
            goto label_18fdcc;
        }
    }
    ctx->pc = 0x18FDB4u;
label_18fdb4:
    // 0x18fdb4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_18fdb8:
    if (ctx->pc == 0x18FDB8u) {
        ctx->pc = 0x18FDBCu;
        goto label_18fdbc;
    }
    ctx->pc = 0x18FDB4u;
    {
        const bool branch_taken_0x18fdb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fdb4) {
            ctx->pc = 0x18FDCCu;
            goto label_18fdcc;
        }
    }
    ctx->pc = 0x18FDBCu;
label_18fdbc:
    // 0x18fdbc: 0x8c99031c  lw          $t9, 0x31C($a0)
    ctx->pc = 0x18fdbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 796)));
label_18fdc0:
    // 0x18fdc0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x18fdc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_18fdc4:
    // 0x18fdc4: 0x320f809  jalr        $t9
label_18fdc8:
    if (ctx->pc == 0x18FDC8u) {
        ctx->pc = 0x18FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDC4u;
        // 0x18fdc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FDCCu;
        goto label_18fdcc;
    }
    ctx->pc = 0x18FDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FDCCu);
        ctx->pc = 0x18FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDC4u;
        // 0x18fdc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FDC4u, 0x18FDCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FDCCu;
label_18fdcc:
    // 0x18fdcc: 0x0  nop
    ctx->pc = 0x18fdccu;
    // NOP
label_18fdd0:
    // 0x18fdd0: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_18fdd4:
    if (ctx->pc == 0x18FDD4u) {
        ctx->pc = 0x18FDD8u;
        goto label_18fdd8;
    }
    ctx->pc = 0x18FDD0u;
    {
        const bool branch_taken_0x18fdd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fdd0) {
            ctx->pc = 0x18FDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fda8;
        }
    }
    ctx->pc = 0x18FDD8u;
label_18fdd8:
    // 0x18fdd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18fdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18fddc:
    // 0x18fddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18fddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18fde0:
    // 0x18fde0: 0x3e00008  jr          $ra
label_18fde4:
    if (ctx->pc == 0x18FDE4u) {
        ctx->pc = 0x18FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDE0u;
        // 0x18fde4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FDE8u;
        goto label_fallthrough_0x18fde0;
    }
    ctx->pc = 0x18FDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDE0u;
        // 0x18fde4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18fde0:
    ctx->pc = 0x18FDE8u;
}
