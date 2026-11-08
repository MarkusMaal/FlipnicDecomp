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

// Function: entry_002048dc
// Address: 0x2048dc - 0x204920
void entry_002048dc_0x2048dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002048dc_0x2048dc");
#endif

    switch (ctx->pc) {
        case 0x204918u: goto label_204918;
        default: break;
    }

    ctx->pc = 0x2048dcu;

    // 0x2048dc: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2048dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2048e0: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x2048e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2048e4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2048e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2048e8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2048e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2048ec: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2048ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2048f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2048f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2048f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2048f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2048f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2048f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2048fc: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2048fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204900: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x204900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x204904: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204904u;
    {
        const bool branch_taken_0x204904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204904u;
        // 0x204908: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204904) {
            ctx->pc = 0x204920u;
            return;
        }
    }
    ctx->pc = 0x20490Cu;
    // 0x20490c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x20490cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204910: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204910u;
    SET_GPR_U32(ctx, 31, 0x204918u);
    ctx->pc = 0x204914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204910u;
    // 0x204914: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204910u, 0x204918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204918u;
label_204918:
    // 0x204918: 0x14400197  bnez        $v0, . + 4 + (0x197 << 2)
    ctx->pc = 0x204918u;
    {
        const bool branch_taken_0x204918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204918u;
        // 0x20491c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204918) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x204920u;
}
