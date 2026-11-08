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

// Function: entry_0014e2b4
// Address: 0x14e2b4 - 0x14e304
void entry_0014e2b4_0x14e2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e2b4_0x14e2b4");
#endif

    switch (ctx->pc) {
        case 0x14e2c4u: goto label_14e2c4;
        case 0x14e2d0u: goto label_14e2d0;
        case 0x14e2d8u: goto label_14e2d8;
        case 0x14e2f0u: goto label_14e2f0;
        default: break;
    }

    ctx->pc = 0x14e2b4u;

    // 0x14e2b4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E2B4u;
    {
        const bool branch_taken_0x14e2b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2B4u;
        // 0x14e2b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2b4) {
            ctx->pc = 0x14E304u;
            return;
        }
    }
    ctx->pc = 0x14E2BCu;
    // 0x14e2bc: 0xc053a00  jal         func_14E800
    ctx->pc = 0x14E2BCu;
    SET_GPR_U32(ctx, 31, 0x14E2C4u);
    ctx->pc = 0x14E2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2BCu;
    // 0x14e2c0: 0xafb000c8  sw          $s0, 0xC8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E800u, 0x14E2BCu, 0x14E2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2C4u;
label_14e2c4:
    // 0x14e2c4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x14e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x14e2c8: 0xc0539f8  jal         func_14E7E0
    ctx->pc = 0x14E2C8u;
    SET_GPR_U32(ctx, 31, 0x14E2D0u);
    ctx->pc = 0x14E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2C8u;
    // 0x14e2cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7E0u, 0x14E2C8u, 0x14E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2D0u;
label_14e2d0:
    // 0x14e2d0: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E2D0u;
    SET_GPR_U32(ctx, 31, 0x14E2D8u);
    ctx->pc = 0x14E2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2D0u;
    // 0x14e2d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E2D0u, 0x14E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2D8u;
label_14e2d8:
    // 0x14e2d8: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x14e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x14e2dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14e2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e2e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e2e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e2e8: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E2E8u;
    SET_GPR_U32(ctx, 31, 0x14E2F0u);
    ctx->pc = 0x14E2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2E8u;
    // 0x14e2ec: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E2E8u, 0x14E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2F0u;
label_14e2f0:
    // 0x14e2f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e2f4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x14e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x14e2f8: 0x83a700c4  lb          $a3, 0xC4($sp)
    ctx->pc = 0x14e2f8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x14e2fc: 0xc053ad0  jal         func_14EB40
    ctx->pc = 0x14E2FCu;
    SET_GPR_U32(ctx, 31, 0x14E304u);
    ctx->pc = 0x14E300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2FCu;
    // 0x14e300: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EB40u, 0x14E2FCu, 0x14E304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E304u;
}
