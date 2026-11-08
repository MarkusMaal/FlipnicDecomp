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

// Function: entry_0010258c
// Address: 0x10258c - 0x1025c4
void entry_0010258c_0x10258c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010258c_0x10258c");
#endif

    switch (ctx->pc) {
        case 0x1025a4u: goto label_1025a4;
        case 0x1025b4u: goto label_1025b4;
        default: break;
    }

    ctx->pc = 0x10258cu;

label_10258c:
    // 0x10258c: 0x8ea22c1c  lw          $v0, 0x2C1C($s5)
    ctx->pc = 0x10258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x102590: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x102590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x102594: 0x84520002  lh          $s2, 0x2($v0)
    ctx->pc = 0x102594u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x102598: 0x84530000  lh          $s3, 0x0($v0)
    ctx->pc = 0x102598u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10259c: 0xc05f58c  jal         func_17D630
    ctx->pc = 0x10259Cu;
    SET_GPR_U32(ctx, 31, 0x1025A4u);
    ctx->pc = 0x1025A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10259Cu;
    // 0x1025a0: 0x84510004  lh          $s1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x10259Cu, 0x1025A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1025A4u;
label_1025a4:
    // 0x1025a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1025a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1025a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025ac: 0xc05f768  jal         func_17DDA0
    ctx->pc = 0x1025ACu;
    SET_GPR_U32(ctx, 31, 0x1025B4u);
    ctx->pc = 0x1025B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1025ACu;
    // 0x1025b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DDA0u, 0x1025ACu, 0x1025B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1025B4u;
label_1025b4:
    // 0x1025b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1025b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1025b8: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x1025b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1025bc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1025BCu;
    {
        const bool branch_taken_0x1025bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1025C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025BCu;
        // 0x1025c0: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025bc) {
            ctx->pc = 0x10258Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10258c;
        }
    }
    ctx->pc = 0x1025C4u;
}
