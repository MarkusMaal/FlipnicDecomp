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

// Function: entry_001219a0
// Address: 0x1219a0 - 0x1219e8
void entry_001219a0_0x1219a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001219a0_0x1219a0");
#endif

    switch (ctx->pc) {
        case 0x1219a8u: goto label_1219a8;
        default: break;
    }

    ctx->pc = 0x1219a0u;

    // 0x1219a0: 0xc048604  jal         func_121810
    ctx->pc = 0x1219A0u;
    SET_GPR_U32(ctx, 31, 0x1219A8u);
    ctx->pc = 0x1219A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219A0u;
    // 0x1219a4: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121810u, 0x1219A0u, 0x1219A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219A8u;
label_1219a8:
    // 0x1219a8: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1219a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1219ac: 0x1462ffdf  bne         $v1, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1219ACu;
    {
        const bool branch_taken_0x1219ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1219ac) {
            ctx->pc = 0x12192Cu;
            return;
        }
    }
    ctx->pc = 0x1219B4u;
    // 0x1219b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1219b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1219b8: 0x1242008b  beq         $s2, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1219B8u;
    {
        const bool branch_taken_0x1219b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1219BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219B8u;
        // 0x1219bc: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219b8) {
            ctx->pc = 0x121BE8u;
            return;
        }
    }
    ctx->pc = 0x1219C0u;
    // 0x1219c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1219c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1219c4: 0x1242005d  beq         $s2, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1219C4u;
    {
        const bool branch_taken_0x1219c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1219C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219C4u;
        // 0x1219c8: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219c4) {
            ctx->pc = 0x121B3Cu;
            return;
        }
    }
    ctx->pc = 0x1219CCu;
    // 0x1219cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1219ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1219d0: 0x1242002f  beq         $s2, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1219D0u;
    {
        const bool branch_taken_0x1219d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1219D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219D0u;
        // 0x1219d4: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219d0) {
            ctx->pc = 0x121A90u;
            return;
        }
    }
    ctx->pc = 0x1219D8u;
    // 0x1219d8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1219D8u;
    {
        const bool branch_taken_0x1219d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1219DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219D8u;
        // 0x1219dc: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219d8) {
            ctx->pc = 0x1219E8u;
            return;
        }
    }
    ctx->pc = 0x1219E0u;
    // 0x1219e0: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x1219E0u;
    {
        const bool branch_taken_0x1219e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1219E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219E0u;
        // 0x1219e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219e0) {
            ctx->pc = 0x121C90u;
            return;
        }
    }
    ctx->pc = 0x1219E8u;
}
