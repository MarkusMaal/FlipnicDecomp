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

// Function: entry_00104fec
// Address: 0x104fec - 0x105020
void entry_00104fec_0x104fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104fec_0x104fec");
#endif

    switch (ctx->pc) {
        case 0x104ff4u: goto label_104ff4;
        default: break;
    }

    ctx->pc = 0x104fecu;

label_104fec:
    // 0x104fec: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x104FECu;
    SET_GPR_U32(ctx, 31, 0x104FF4u);
    ctx->pc = 0x104FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104FECu;
    // 0x104ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x104FECu, 0x104FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FF4u;
label_104ff4:
    // 0x104ff4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x104ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x104ff8: 0x26100410  addiu       $s0, $s0, 0x410
    ctx->pc = 0x104ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x104ffc: 0x24622300  addiu       $v0, $v1, 0x2300
    ctx->pc = 0x104ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8960));
    // 0x105000: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x105000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x105004: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x105004u;
    {
        const bool branch_taken_0x105004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105004) {
            ctx->pc = 0x104FECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104fec;
        }
    }
    ctx->pc = 0x10500Cu;
    // 0x10500c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10500cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105010: 0x24428170  addiu       $v0, $v0, -0x7E90
    ctx->pc = 0x105010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934896));
    // 0x105014: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x105014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x105018: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x105018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x10501c: 0x0  nop
    ctx->pc = 0x10501cu;
    // NOP
    ctx->pc = 0x105020u;
}
