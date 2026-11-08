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

// Function: entry_001f3ee8
// Address: 0x1f3ee8 - 0x1f3f10
void entry_001f3ee8_0x1f3ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3ee8_0x1f3ee8");
#endif

    switch (ctx->pc) {
        case 0x1f3f00u: goto label_1f3f00;
        default: break;
    }

    ctx->pc = 0x1f3ee8u;

label_1f3ee8:
    // 0x1f3ee8: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1f3ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3eec: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1f3eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f3ef0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1f3ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f3ef4: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1f3ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f3ef8: 0xc07cf44  jal         func_1F3D10
    ctx->pc = 0x1F3EF8u;
    SET_GPR_U32(ctx, 31, 0x1F3F00u);
    ctx->pc = 0x1F3EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3EF8u;
    // 0x1f3efc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3D10u, 0x1F3EF8u, 0x1F3F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F00u;
label_1f3f00:
    // 0x1f3f00: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1f3f00u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1f3f04: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1f3f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f3f08: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F3F08u;
    {
        const bool branch_taken_0x1f3f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f08) {
            ctx->pc = 0x1F3F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3F08u;
            // 0x1f3f0c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3ee8;
        }
    }
    ctx->pc = 0x1F3F10u;
}
