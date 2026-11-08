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

// Function: entry_001c9330
// Address: 0x1c9330 - 0x1c937c
void entry_001c9330_0x1c9330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9330_0x1c9330");
#endif

    switch (ctx->pc) {
        case 0x1c933cu: goto label_1c933c;
        default: break;
    }

    ctx->pc = 0x1c9330u;

    // 0x1c9330: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c9330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c9334: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9334u;
    SET_GPR_U32(ctx, 31, 0x1C933Cu);
    ctx->pc = 0x1C9338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9334u;
    // 0x1c9338: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9334u, 0x1C933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C933Cu;
label_1c933c:
    // 0x1c933c: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c933cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c9340: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9344: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c9344u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c9348: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c9348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c934c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C934Cu;
    {
        const bool branch_taken_0x1c934c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C934Cu;
        // 0x1c9350: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c934c) {
            ctx->pc = 0x1C9398u;
            return;
        }
    }
    ctx->pc = 0x1C9354u;
    // 0x1c9354: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c9354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9358: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9358u;
    {
        const bool branch_taken_0x1c9358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9358) {
            ctx->pc = 0x1C937Cu;
            return;
        }
    }
    ctx->pc = 0x1C9360u;
    // 0x1c9360: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c9360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9364: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9364u;
    {
        const bool branch_taken_0x1c9364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9364) {
            ctx->pc = 0x1C937Cu;
            return;
        }
    }
    ctx->pc = 0x1C936Cu;
    // 0x1c936c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C936Cu;
    {
        const bool branch_taken_0x1c936c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c936c) {
            ctx->pc = 0x1C937Cu;
            return;
        }
    }
    ctx->pc = 0x1C9374u;
    // 0x1c9374: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9374u;
    {
        const bool branch_taken_0x1c9374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9374) {
            ctx->pc = 0x1C9394u;
            return;
        }
    }
    ctx->pc = 0x1C937Cu;
}
