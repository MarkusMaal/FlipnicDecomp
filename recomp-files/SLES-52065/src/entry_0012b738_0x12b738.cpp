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

// Function: entry_0012b738
// Address: 0x12b738 - 0x12b784
void entry_0012b738_0x12b738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b738_0x12b738");
#endif

    switch (ctx->pc) {
        case 0x12b744u: goto label_12b744;
        default: break;
    }

    ctx->pc = 0x12b738u;

label_12b738:
    // 0x12b738: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x12b738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x12b73c: 0xc04aa68  jal         func_12A9A0
    ctx->pc = 0x12B73Cu;
    SET_GPR_U32(ctx, 31, 0x12B744u);
    ctx->pc = 0x12B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B73Cu;
    // 0x12b740: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9A0u, 0x12B73Cu, 0x12B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B744u;
label_12b744:
    // 0x12b744: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x12b744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x12b748: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12b748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12b74c: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x12b74cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
    // 0x12b750: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x12b750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12b754: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12B754u;
    {
        const bool branch_taken_0x12b754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B754u;
        // 0x12b758: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b754) {
            ctx->pc = 0x12B738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b738;
        }
    }
    ctx->pc = 0x12B75Cu;
    // 0x12b75c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x12b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12b760: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x12b760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12b764: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B764u;
    {
        const bool branch_taken_0x12b764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B764u;
        // 0x12b768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b764) {
            ctx->pc = 0x12B788u;
            return;
        }
    }
    ctx->pc = 0x12B76Cu;
    // 0x12b76c: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x12b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x12b770: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B770u;
    {
        const bool branch_taken_0x12b770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12b770) {
            ctx->pc = 0x12B784u;
            return;
        }
    }
    ctx->pc = 0x12B778u;
    // 0x12b778: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12b77c: 0x10430039  beq         $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x12B77Cu;
    {
        const bool branch_taken_0x12b77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12b77c) {
            ctx->pc = 0x12B864u;
            return;
        }
    }
    ctx->pc = 0x12B784u;
}
