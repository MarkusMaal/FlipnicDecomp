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

// Function: entry_001bc818
// Address: 0x1bc818 - 0x1bc854
void entry_001bc818_0x1bc818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc818_0x1bc818");
#endif

    switch (ctx->pc) {
        case 0x1bc824u: goto label_1bc824;
        case 0x1bc838u: goto label_1bc838;
        case 0x1bc848u: goto label_1bc848;
        default: break;
    }

    ctx->pc = 0x1bc818u;

    // 0x1bc818: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc81c: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x1BC81Cu;
    SET_GPR_U32(ctx, 31, 0x1BC824u);
    ctx->pc = 0x1BC820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC81Cu;
    // 0x1bc820: 0x24a511c8  addiu       $a1, $a1, 0x11C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1BC81Cu, 0x1BC824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC824u;
label_1bc824:
    // 0x1bc824: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC824u;
    {
        const bool branch_taken_0x1bc824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC824u;
        // 0x1bc828: 0x27a4017c  addiu       $a0, $sp, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc824) {
            ctx->pc = 0x1BC854u;
            return;
        }
    }
    ctx->pc = 0x1BC82Cu;
    // 0x1bc82c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1bc82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc830: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BC830u;
    SET_GPR_U32(ctx, 31, 0x1BC838u);
    ctx->pc = 0x1BC834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC830u;
    // 0x1bc834: 0x27a60178  addiu       $a2, $sp, 0x178 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BC830u, 0x1BC838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC838u;
label_1bc838:
    // 0x1bc838: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc83c: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x1bc83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1bc840: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1BC840u;
    SET_GPR_U32(ctx, 31, 0x1BC848u);
    ctx->pc = 0x1BC844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC840u;
    // 0x1bc844: 0x27a5017c  addiu       $a1, $sp, 0x17C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1BC840u, 0x1BC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC848u;
label_1bc848:
    // 0x1bc848: 0x27a4017c  addiu       $a0, $sp, 0x17C
    ctx->pc = 0x1bc848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x1bc84c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BC84Cu;
    SET_GPR_U32(ctx, 31, 0x1BC854u);
    ctx->pc = 0x1BC850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC84Cu;
    // 0x1bc850: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BC84Cu, 0x1BC854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC854u;
}
