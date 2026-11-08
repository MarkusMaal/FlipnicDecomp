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

// Function: FUN_001b8110
// Address: 0x1b8110 - 0x1b8180
void FUN_001b8110_0x1b8110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8110_0x1b8110");
#endif

    switch (ctx->pc) {
        case 0x1b813cu: goto label_1b813c;
        case 0x1b8148u: goto label_1b8148;
        case 0x1b8158u: goto label_1b8158;
        case 0x1b8160u: goto label_1b8160;
        default: break;
    }

    ctx->pc = 0x1b8110u;

    // 0x1b8110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b8110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b8114: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b8114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b8118: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b8118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b811c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b811cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b8120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8124: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1b8124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1b8128: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b8128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b812c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8130: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1b8130u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8134: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1B8134u;
    SET_GPR_U32(ctx, 31, 0x1B813Cu);
    ctx->pc = 0x1B8138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8134u;
    // 0x1b8138: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1B8134u, 0x1B813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B813Cu;
label_1b813c:
    // 0x1b813c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8140: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8140u;
    {
        const bool branch_taken_0x1b8140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8140u;
        // 0x1b8144: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8140) {
            ctx->pc = 0x1B8158u;
            goto label_1b8158;
        }
    }
    ctx->pc = 0x1B8148u;
label_1b8148:
    // 0x1b8148: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1b8148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b814c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1b814cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1b8150: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B8150u;
    SET_GPR_U32(ctx, 31, 0x1B8158u);
    ctx->pc = 0x1B8154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8150u;
    // 0x1b8154: 0xa0500008  sb          $s0, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B8150u, 0x1B8158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8158u;
label_1b8158:
    // 0x1b8158: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B8158u;
    SET_GPR_U32(ctx, 31, 0x1B8160u);
    ctx->pc = 0x1B815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8158u;
    // 0x1b815c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B8158u, 0x1B8160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8160u;
label_1b8160:
    // 0x1b8160: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1b8160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1b8164: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B8164u;
    {
        const bool branch_taken_0x1b8164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8164) {
            ctx->pc = 0x1B8148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8148;
        }
    }
    ctx->pc = 0x1B816Cu;
    // 0x1b816c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b816cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8178: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8178u;
        // 0x1b817c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8180u;
}
