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

// Function: FUN_001f4360
// Address: 0x1f4360 - 0x1f43a8
void FUN_001f4360_0x1f4360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f4360_0x1f4360");
#endif

    switch (ctx->pc) {
        case 0x1f4378u: goto label_1f4378;
        default: break;
    }

    ctx->pc = 0x1f4360u;

    // 0x1f4360: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x1f4360u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x1f4364: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f4364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f4368: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f4368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f436c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F436Cu;
    {
        const bool branch_taken_0x1f436c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F436Cu;
        // 0x1f4370: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f436c) {
            ctx->pc = 0x1F439Cu;
            goto label_1f439c;
        }
    }
    ctx->pc = 0x1F4374u;
    // 0x1f4374: 0x0  nop
    ctx->pc = 0x1f4374u;
    // NOP
label_1f4378:
    // 0x1f4378: 0x42000039  di
    ctx->pc = 0x1f4378u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x1f437c: 0x40f  sync.p
    ctx->pc = 0x1f437cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1f4380: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1f4380u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1f4384: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f4384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1f4388: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f4388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f438c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F438Cu;
    {
        const bool branch_taken_0x1f438c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f438c) {
            ctx->pc = 0x1F4378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4378;
        }
    }
    ctx->pc = 0x1F4394u;
    // 0x1f4394: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4394u;
        // 0x1f4398: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F439Cu;
label_1f439c:
    // 0x1f439c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f439cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F43A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F43A0u;
        // 0x1f43a4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F43A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F43A8u;
}
