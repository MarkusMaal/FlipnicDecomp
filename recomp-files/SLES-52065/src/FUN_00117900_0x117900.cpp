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

// Function: FUN_00117900
// Address: 0x117900 - 0x117954
void FUN_00117900_0x117900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117900_0x117900");
#endif

    switch (ctx->pc) {
        case 0x117914u: goto label_117914;
        case 0x11792cu: goto label_11792c;
        case 0x117938u: goto label_117938;
        default: break;
    }

    ctx->pc = 0x117900u;

    // 0x117900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117904: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x117904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11790c: 0xc082b0a  jal         func_20AC28
    ctx->pc = 0x11790Cu;
    SET_GPR_U32(ctx, 31, 0x117914u);
    ctx->pc = 0x117910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11790Cu;
    // 0x117910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC28u, 0x11790Cu, 0x117914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117914u;
label_117914:
    // 0x117914: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x117914u;
    {
        const bool branch_taken_0x117914 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x117918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117914u;
        // 0x117918: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117914) {
            ctx->pc = 0x117930u;
            goto label_117930;
        }
    }
    ctx->pc = 0x11791Cu;
    // 0x11791c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x11791cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x117920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x117920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117924: 0xc0458ec  jal         func_1163B0
    ctx->pc = 0x117924u;
    SET_GPR_U32(ctx, 31, 0x11792Cu);
    ctx->pc = 0x117928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117924u;
    // 0x117928: 0x2484e580  addiu       $a0, $a0, -0x1A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1163B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1163B0u, 0x117924u, 0x11792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11792Cu;
label_11792c:
    // 0x11792c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11792cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117930:
    // 0x117930: 0xc082ae4  jal         func_20AB90
    ctx->pc = 0x117930u;
    SET_GPR_U32(ctx, 31, 0x117938u);
    ctx->pc = 0x20AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AB90u, 0x117930u, 0x117938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117938u;
label_117938:
    // 0x117938: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x117938u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11793c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x11793cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x117940: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x117940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x117944: 0xaf838340  sw          $v1, -0x7CC0($gp)
    ctx->pc = 0x117944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935360), GPR_U32(ctx, 3));
    // 0x117948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11794c: 0x3e00008  jr          $ra
    ctx->pc = 0x11794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11794Cu;
        // 0x117950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11794Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117954u;
}
