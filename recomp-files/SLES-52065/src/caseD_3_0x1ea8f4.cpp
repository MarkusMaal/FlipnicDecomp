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

// Function: caseD_3
// Address: 0x1ea8f4 - 0x1ea918
void caseD_3_0x1ea8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1ea8f4");
#endif

    switch (ctx->pc) {
        case 0x1ea900u: goto label_1ea900;
        case 0x1ea90cu: goto label_1ea90c;
        default: break;
    }

    ctx->pc = 0x1ea8f4u;

    // 0x1ea8f4: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea8f8: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA8F8u;
    SET_GPR_U32(ctx, 31, 0x1EA900u);
    ctx->pc = 0x1EA8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA8F8u;
    // 0x1ea8fc: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA8F8u, 0x1EA900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA900u;
label_1ea900:
    // 0x1ea900: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea904: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA904u;
    SET_GPR_U32(ctx, 31, 0x1EA90Cu);
    ctx->pc = 0x1EA908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA904u;
    // 0x1ea908: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA904u, 0x1EA90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA90Cu;
label_1ea90c:
    // 0x1ea90c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ea90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea910: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1EA910u;
    {
        const bool branch_taken_0x1ea910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA910u;
        // 0x1ea914: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea910) {
            ctx->pc = 0x1EAB14u;
            return;
        }
    }
    ctx->pc = 0x1EA918u;
}
