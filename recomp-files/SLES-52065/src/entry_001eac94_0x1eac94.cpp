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

// Function: entry_001eac94
// Address: 0x1eac94 - 0x1eacf4
void entry_001eac94_0x1eac94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eac94_0x1eac94");
#endif

    switch (ctx->pc) {
        case 0x1eac9cu: goto label_1eac9c;
        case 0x1eacb0u: goto label_1eacb0;
        case 0x1eacbcu: goto label_1eacbc;
        default: break;
    }

    ctx->pc = 0x1eac94u;

label_1eac94:
    // 0x1eac94: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAC94u;
    SET_GPR_U32(ctx, 31, 0x1EAC9Cu);
    ctx->pc = 0x1EAC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAC94u;
    // 0x1eac98: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAC94u, 0x1EAC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC9Cu;
label_1eac9c:
    // 0x1eac9c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1eac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1eaca0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EACA0u;
    {
        const bool branch_taken_0x1eaca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACA0u;
        // 0x1eaca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaca0) {
            ctx->pc = 0x1EACF4u;
            return;
        }
    }
    ctx->pc = 0x1EACA8u;
    // 0x1eaca8: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EACA8u;
    SET_GPR_U32(ctx, 31, 0x1EACB0u);
    ctx->pc = 0x1EACACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EACA8u;
    // 0x1eacac: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EACA8u, 0x1EACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EACB0u;
label_1eacb0:
    // 0x1eacb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eacb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eacb4: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EACB4u;
    SET_GPR_U32(ctx, 31, 0x1EACBCu);
    ctx->pc = 0x1EACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EACB4u;
    // 0x1eacb8: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EACB4u, 0x1EACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EACBCu;
label_1eacbc:
    // 0x1eacbc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1eacbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1eacc0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1eacc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1eacc4: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1eacc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1eacc8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EACC8u;
    {
        const bool branch_taken_0x1eacc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACC8u;
        // 0x1eaccc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eacc8) {
            ctx->pc = 0x1EACF4u;
            return;
        }
    }
    ctx->pc = 0x1EACD0u;
    // 0x1eacd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eacd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eacd4: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1eacd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1eacd8: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x1eacd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1eacdc: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1EACDCu;
    {
        const bool branch_taken_0x1eacdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eacdc) {
            ctx->pc = 0x1EAC94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eac94;
        }
    }
    ctx->pc = 0x1EACE4u;
    // 0x1eace4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1eace4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1eace8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1eace8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1eacec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1eacecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1eacf0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1eacf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1eacf4u;
}
