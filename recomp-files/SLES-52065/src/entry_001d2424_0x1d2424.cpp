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

// Function: entry_001d2424
// Address: 0x1d2424 - 0x1d2478
void entry_001d2424_0x1d2424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2424_0x1d2424");
#endif

    switch (ctx->pc) {
        case 0x1d2470u: goto label_1d2470;
        default: break;
    }

    ctx->pc = 0x1d2424u;

    // 0x1d2424: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d2424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d2428: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d2428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d242c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d242cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2430: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2434: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d2434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2438: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d2438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d243c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1d243cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d2440: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x1d2440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x1d2444: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d2444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d2448: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d2448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d244c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1d244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d2450: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x1d2450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x1d2454: 0x8c24fef8  lw          $a0, -0x108($at)
    ctx->pc = 0x1d2454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967032)));
    // 0x1d2458: 0x148300b4  bne         $a0, $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1D2458u;
    {
        const bool branch_taken_0x1d2458 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d2458) {
            ctx->pc = 0x1D272Cu;
            return;
        }
    }
    ctx->pc = 0x1D2460u;
    // 0x1d2460: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d2460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d2464: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d2464u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d2468: 0xc046c14  jal         func_11B050
    ctx->pc = 0x1D2468u;
    SET_GPR_U32(ctx, 31, 0x1D2470u);
    ctx->pc = 0x1D246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2468u;
    // 0x1d246c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x1D2468u, 0x1D2470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2470u;
label_1d2470:
    // 0x1d2470: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1D2470u;
    {
        const bool branch_taken_0x1d2470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2470u;
        // 0x1d2474: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2470) {
            ctx->pc = 0x1D2730u;
            return;
        }
    }
    ctx->pc = 0x1D2478u;
}
