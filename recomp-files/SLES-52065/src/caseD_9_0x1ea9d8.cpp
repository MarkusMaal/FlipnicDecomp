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

// Function: caseD_9
// Address: 0x1ea9d8 - 0x1eaa14
void caseD_9_0x1ea9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1ea9d8");
#endif

    switch (ctx->pc) {
        case 0x1ea9e4u: goto label_1ea9e4;
        case 0x1ea9f0u: goto label_1ea9f0;
        case 0x1ea9fcu: goto label_1ea9fc;
        case 0x1eaa08u: goto label_1eaa08;
        default: break;
    }

    ctx->pc = 0x1ea9d8u;

    // 0x1ea9d8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea9dc: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA9DCu;
    SET_GPR_U32(ctx, 31, 0x1EA9E4u);
    ctx->pc = 0x1EA9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA9DCu;
    // 0x1ea9e0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA9DCu, 0x1EA9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9E4u;
label_1ea9e4:
    // 0x1ea9e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9e8: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA9E8u;
    SET_GPR_U32(ctx, 31, 0x1EA9F0u);
    ctx->pc = 0x1EA9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA9E8u;
    // 0x1ea9ec: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA9E8u, 0x1EA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9F0u;
label_1ea9f0:
    // 0x1ea9f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9f4: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EA9F4u;
    SET_GPR_U32(ctx, 31, 0x1EA9FCu);
    ctx->pc = 0x1EA9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA9F4u;
    // 0x1ea9f8: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA9F4u, 0x1EA9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9FCu;
label_1ea9fc:
    // 0x1ea9fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa00: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAA00u;
    SET_GPR_U32(ctx, 31, 0x1EAA08u);
    ctx->pc = 0x1EAA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA00u;
    // 0x1eaa04: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAA00u, 0x1EAA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA08u;
label_1eaa08:
    // 0x1eaa08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1eaa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1eaa0c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1EAA0Cu;
    {
        const bool branch_taken_0x1eaa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA0Cu;
        // 0x1eaa10: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa0c) {
            ctx->pc = 0x1EAB14u;
            return;
        }
    }
    ctx->pc = 0x1EAA14u;
}
