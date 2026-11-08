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

// Function: define_AIR_HOCKEY_MAN
// Address: 0x227530 - 0x227580
void define_AIR_HOCKEY_MAN_0x227530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_AIR_HOCKEY_MAN_0x227530");
#endif

    switch (ctx->pc) {
        case 0x22755cu: goto label_22755c;
        case 0x227574u: goto label_227574;
        default: break;
    }

    ctx->pc = 0x227530u;

    // 0x227530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227534: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x227534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x227538: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x227538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22753c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x22753cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x227540: 0x3c07001b  lui         $a3, 0x1B
    ctx->pc = 0x227540u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27 << 16));
    // 0x227544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227548: 0x2484e060  addiu       $a0, $a0, -0x1FA0
    ctx->pc = 0x227548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959200));
    // 0x22754c: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x22754cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x227550: 0x24c60858  addiu       $a2, $a2, 0x858
    ctx->pc = 0x227550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2136));
    // 0x227554: 0xc064028  jal         func_1900A0
    ctx->pc = 0x227554u;
    SET_GPR_U32(ctx, 31, 0x22755Cu);
    ctx->pc = 0x227558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227554u;
    // 0x227558: 0x24e794e0  addiu       $a3, $a3, -0x6B20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x227554u, 0x22755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22755Cu;
label_22755c:
    // 0x22755c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x22755cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x227560: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x227560u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x227564: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227568: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x227568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x22756c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x22756Cu;
    SET_GPR_U32(ctx, 31, 0x227574u);
    ctx->pc = 0x227570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22756Cu;
    // 0x227570: 0x24c6e050  addiu       $a2, $a2, -0x1FB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x22756Cu, 0x227574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227574u;
label_227574:
    // 0x227574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227578: 0x3e00008  jr          $ra
    ctx->pc = 0x227578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227578u;
        // 0x22757c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227580u;
}
