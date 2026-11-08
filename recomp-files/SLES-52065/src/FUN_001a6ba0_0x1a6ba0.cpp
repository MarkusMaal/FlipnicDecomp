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

// Function: FUN_001a6ba0
// Address: 0x1a6ba0 - 0x1a6be8
void FUN_001a6ba0_0x1a6ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6ba0_0x1a6ba0");
#endif

    switch (ctx->pc) {
        case 0x1a6ba0u: goto label_1a6ba0;
        case 0x1a6ba4u: goto label_1a6ba4;
        case 0x1a6ba8u: goto label_1a6ba8;
        case 0x1a6bacu: goto label_1a6bac;
        case 0x1a6bb0u: goto label_1a6bb0;
        case 0x1a6bb4u: goto label_1a6bb4;
        case 0x1a6bb8u: goto label_1a6bb8;
        case 0x1a6bbcu: goto label_1a6bbc;
        case 0x1a6bc0u: goto label_1a6bc0;
        case 0x1a6bc4u: goto label_1a6bc4;
        case 0x1a6bc8u: goto label_1a6bc8;
        case 0x1a6bccu: goto label_1a6bcc;
        case 0x1a6bd0u: goto label_1a6bd0;
        case 0x1a6bd4u: goto label_1a6bd4;
        case 0x1a6bd8u: goto label_1a6bd8;
        case 0x1a6bdcu: goto label_1a6bdc;
        case 0x1a6be0u: goto label_1a6be0;
        case 0x1a6be4u: goto label_1a6be4;
        default: break;
    }

    ctx->pc = 0x1a6ba0u;

label_1a6ba0:
    // 0x1a6ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a6ba4:
    // 0x1a6ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a6ba8:
    // 0x1a6ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a6ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a6bac:
    // 0x1a6bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6bb0:
    // 0x1a6bb0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a6bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6bb4:
    // 0x1a6bb4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1a6bb8:
    if (ctx->pc == 0x1A6BB8u) {
        ctx->pc = 0x1A6BBCu;
        goto label_1a6bbc;
    }
    ctx->pc = 0x1A6BB4u;
    {
        const bool branch_taken_0x1a6bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6bb4) {
            ctx->pc = 0x1A6BD8u;
            goto label_1a6bd8;
        }
    }
    ctx->pc = 0x1A6BBCu;
label_1a6bbc:
    // 0x1a6bbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6bbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6bc0:
    // 0x1a6bc0: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1a6bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1a6bc4:
    // 0x1a6bc4: 0x320f809  jalr        $t9
label_1a6bc8:
    if (ctx->pc == 0x1A6BC8u) {
        ctx->pc = 0x1A6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BC4u;
        // 0x1a6bc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6BCCu;
        goto label_1a6bcc;
    }
    ctx->pc = 0x1A6BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6BCCu);
        ctx->pc = 0x1A6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BC4u;
        // 0x1a6bc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6BC4u, 0x1A6BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6BCCu;
label_1a6bcc:
    // 0x1a6bcc: 0xc04be08  jal         func_12F820
label_1a6bd0:
    if (ctx->pc == 0x1A6BD0u) {
        ctx->pc = 0x1A6BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BCCu;
        // 0x1a6bd0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6BD4u;
        goto label_1a6bd4;
    }
    ctx->pc = 0x1A6BCCu;
    SET_GPR_U32(ctx, 31, 0x1A6BD4u);
    ctx->pc = 0x1A6BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BCCu;
    // 0x1a6bd0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x1A6BCCu, 0x1A6BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BD4u;
label_1a6bd4:
    // 0x1a6bd4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a6bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1a6bd8:
    // 0x1a6bd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a6bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6bdc:
    // 0x1a6bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6be0:
    // 0x1a6be0: 0x3e00008  jr          $ra
label_1a6be4:
    if (ctx->pc == 0x1A6BE4u) {
        ctx->pc = 0x1A6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BE0u;
        // 0x1a6be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6BE8u;
        goto label_fallthrough_0x1a6be0;
    }
    ctx->pc = 0x1A6BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BE0u;
        // 0x1a6be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a6be0:
    ctx->pc = 0x1A6BE8u;
}
