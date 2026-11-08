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

// Function: entry_001f3e80
// Address: 0x1f3e80 - 0x1f3ea8
void entry_001f3e80_0x1f3e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3e80_0x1f3e80");
#endif

    switch (ctx->pc) {
        case 0x1f3e98u: goto label_1f3e98;
        default: break;
    }

    ctx->pc = 0x1f3e80u;

label_1f3e80:
    // 0x1f3e80: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1f3e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e84: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1f3e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f3e88: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1f3e88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f3e8c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1f3e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f3e90: 0xc07cf44  jal         func_1F3D10
    ctx->pc = 0x1F3E90u;
    SET_GPR_U32(ctx, 31, 0x1F3E98u);
    ctx->pc = 0x1F3E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E90u;
    // 0x1f3e94: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3D10u, 0x1F3E90u, 0x1F3E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E98u;
label_1f3e98:
    // 0x1f3e98: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1f3e98u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1f3e9c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1f3e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f3ea0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F3EA0u;
    {
        const bool branch_taken_0x1f3ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ea0) {
            ctx->pc = 0x1F3EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3EA0u;
            // 0x1f3ea4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3e80;
        }
    }
    ctx->pc = 0x1F3EA8u;
}
