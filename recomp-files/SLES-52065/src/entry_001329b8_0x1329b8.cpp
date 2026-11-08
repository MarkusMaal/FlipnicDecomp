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

// Function: entry_001329b8
// Address: 0x1329b8 - 0x132a00
void entry_001329b8_0x1329b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001329b8_0x1329b8");
#endif

    switch (ctx->pc) {
        case 0x1329c4u: goto label_1329c4;
        case 0x1329dcu: goto label_1329dc;
        case 0x1329e4u: goto label_1329e4;
        case 0x1329ecu: goto label_1329ec;
        default: break;
    }

    ctx->pc = 0x1329b8u;

label_1329b8:
    // 0x1329b8: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1329b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1329bc: 0xc04018c  jal         func_100630
    ctx->pc = 0x1329BCu;
    SET_GPR_U32(ctx, 31, 0x1329C4u);
    ctx->pc = 0x1329C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1329BCu;
    // 0x1329c0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1329BCu, 0x1329C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329C4u;
label_1329c4:
    // 0x1329c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1329c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1329c8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1329c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1329cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1329CCu;
    {
        const bool branch_taken_0x1329cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1329D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329CCu;
        // 0x1329d0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329cc) {
            ctx->pc = 0x1329B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1329b8;
        }
    }
    ctx->pc = 0x1329D4u;
    // 0x1329d4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1329D4u;
    SET_GPR_U32(ctx, 31, 0x1329DCu);
    ctx->pc = 0x1329D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1329D4u;
    // 0x1329d8: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1329D4u, 0x1329DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329DCu;
label_1329dc:
    // 0x1329dc: 0xc04018c  jal         func_100630
    ctx->pc = 0x1329DCu;
    SET_GPR_U32(ctx, 31, 0x1329E4u);
    ctx->pc = 0x1329E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1329DCu;
    // 0x1329e0: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1329DCu, 0x1329E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329E4u;
label_1329e4:
    // 0x1329e4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1329E4u;
    SET_GPR_U32(ctx, 31, 0x1329ECu);
    ctx->pc = 0x1329E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1329E4u;
    // 0x1329e8: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1329E4u, 0x1329ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329ECu;
label_1329ec:
    // 0x1329ec: 0x8e6400a4  lw          $a0, 0xA4($s3)
    ctx->pc = 0x1329ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
    // 0x1329f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1329F0u;
    {
        const bool branch_taken_0x1329f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1329f0) {
            ctx->pc = 0x132A00u;
            return;
        }
    }
    ctx->pc = 0x1329F8u;
    // 0x1329f8: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x1329F8u;
    SET_GPR_U32(ctx, 31, 0x132A00u);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x1329F8u, 0x132A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A00u;
}
