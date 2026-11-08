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

// Function: entry_001c92c8
// Address: 0x1c92c8 - 0x1c9320
void entry_001c92c8_0x1c92c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c92c8_0x1c92c8");
#endif

    switch (ctx->pc) {
        case 0x1c92d4u: goto label_1c92d4;
        case 0x1c92e8u: goto label_1c92e8;
        default: break;
    }

    ctx->pc = 0x1c92c8u;

    // 0x1c92c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c92c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c92cc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C92CCu;
    SET_GPR_U32(ctx, 31, 0x1C92D4u);
    ctx->pc = 0x1C92D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C92CCu;
    // 0x1c92d0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C92CCu, 0x1C92D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C92D4u;
label_1c92d4:
    // 0x1c92d4: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c92d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c92d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c92d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c92dc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c92dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c92e0: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C92E0u;
    SET_GPR_U32(ctx, 31, 0x1C92E8u);
    ctx->pc = 0x1C92E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C92E0u;
    // 0x1c92e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C92E0u, 0x1C92E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C92E8u;
label_1c92e8:
    // 0x1c92e8: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c92e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c92ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c92f0: 0x8c24ca84  lw          $a0, -0x357C($at)
    ctx->pc = 0x1c92f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c92f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c92f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c92f8: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c92f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c92fc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C92FCu;
    {
        const bool branch_taken_0x1c92fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92FCu;
        // 0x1c9300: 0x8c842830  lw          $a0, 0x2830($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92fc) {
            ctx->pc = 0x1C9328u;
            return;
        }
    }
    ctx->pc = 0x1C9304u;
    // 0x1c9304: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c9304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9308: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9308u;
    {
        const bool branch_taken_0x1c9308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9308u;
        // 0x1c930c: 0x2486001e  addiu       $a2, $a0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9308) {
            ctx->pc = 0x1C9320u;
            return;
        }
    }
    ctx->pc = 0x1C9310u;
    // 0x1c9310: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9310u;
    {
        const bool branch_taken_0x1c9310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9310) {
            ctx->pc = 0x1C9320u;
            return;
        }
    }
    ctx->pc = 0x1C9318u;
    // 0x1c9318: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9318u;
    {
        const bool branch_taken_0x1c9318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9318u;
        // 0x1c931c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9318) {
            ctx->pc = 0x1C932Cu;
            return;
        }
    }
    ctx->pc = 0x1C9320u;
}
