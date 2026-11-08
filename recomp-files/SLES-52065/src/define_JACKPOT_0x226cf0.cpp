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

// Function: define_JACKPOT
// Address: 0x226cf0 - 0x226d40
void define_JACKPOT_0x226cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_JACKPOT_0x226cf0");
#endif

    switch (ctx->pc) {
        case 0x226d1cu: goto label_226d1c;
        case 0x226d34u: goto label_226d34;
        default: break;
    }

    ctx->pc = 0x226cf0u;

    // 0x226cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226cf4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226cf8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226cfc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226d00: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x226d00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x226d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226d08: 0x2484d860  addiu       $a0, $a0, -0x27A0
    ctx->pc = 0x226d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957152));
    // 0x226d0c: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226d10: 0x24c600f8  addiu       $a2, $a2, 0xF8
    ctx->pc = 0x226d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 248));
    // 0x226d14: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226D14u;
    SET_GPR_U32(ctx, 31, 0x226D1Cu);
    ctx->pc = 0x226D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D14u;
    // 0x226d18: 0x24e78cc0  addiu       $a3, $a3, -0x7340 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226D14u, 0x226D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D1Cu;
label_226d1c:
    // 0x226d1c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226d20: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226d20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226d24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d28: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226d2c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226D2Cu;
    SET_GPR_U32(ctx, 31, 0x226D34u);
    ctx->pc = 0x226D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D2Cu;
    // 0x226d30: 0x24c6d850  addiu       $a2, $a2, -0x27B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226D2Cu, 0x226D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D34u;
label_226d34:
    // 0x226d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226d38: 0x3e00008  jr          $ra
    ctx->pc = 0x226D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D38u;
        // 0x226d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226D40u;
}
