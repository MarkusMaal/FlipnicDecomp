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

// Function: entry_001f48a0
// Address: 0x1f48a0 - 0x1f48e8
void entry_001f48a0_0x1f48a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f48a0_0x1f48a0");
#endif

    switch (ctx->pc) {
        case 0x1f48b4u: goto label_1f48b4;
        case 0x1f48c0u: goto label_1f48c0;
        case 0x1f48d8u: goto label_1f48d8;
        default: break;
    }

    ctx->pc = 0x1f48a0u;

label_1f48a0:
    // 0x1f48a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f48a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f48a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f48a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f48ac: 0xc07d1ea  jal         func_1F47A8
    ctx->pc = 0x1F48ACu;
    SET_GPR_U32(ctx, 31, 0x1F48B4u);
    ctx->pc = 0x1F48B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48ACu;
    // 0x1f48b0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F47A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F47A8u, 0x1F48ACu, 0x1F48B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48B4u;
label_1f48b4:
    // 0x1f48b4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1f48b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1f48b8: 0xc080748  jal         func_201D20
    ctx->pc = 0x1F48B8u;
    SET_GPR_U32(ctx, 31, 0x1F48C0u);
    ctx->pc = 0x1F48BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48B8u;
    // 0x1f48bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1F48B8u, 0x1F48C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48C0u;
label_1f48c0:
    // 0x1f48c0: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1f48c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f48c4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f48c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f48c8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1f48c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f48cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f48ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48d0: 0xc07d1ea  jal         func_1F47A8
    ctx->pc = 0x1F48D0u;
    SET_GPR_U32(ctx, 31, 0x1F48D8u);
    ctx->pc = 0x1F48D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48D0u;
    // 0x1f48d4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F47A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F47A8u, 0x1F48D0u, 0x1F48D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48D8u;
label_1f48d8:
    // 0x1f48d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f48d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f48dc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f48dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f48e0: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F48E0u;
    {
        const bool branch_taken_0x1f48e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48E0u;
        // 0x1f48e4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f48e0) {
            ctx->pc = 0x1F48A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f48a0;
        }
    }
    ctx->pc = 0x1F48E8u;
}
