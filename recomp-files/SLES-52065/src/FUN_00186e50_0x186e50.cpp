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

// Function: FUN_00186e50
// Address: 0x186e50 - 0x186e90
void FUN_00186e50_0x186e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00186e50_0x186e50");
#endif

    switch (ctx->pc) {
        case 0x186e68u: goto label_186e68;
        case 0x186e84u: goto label_186e84;
        default: break;
    }

    ctx->pc = 0x186e50u;

    // 0x186e50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x186e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186e54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186e58: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x186e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x186e5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186e60: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x186E60u;
    SET_GPR_U32(ctx, 31, 0x186E68u);
    ctx->pc = 0x186E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186E60u;
    // 0x186e64: 0x248494b0  addiu       $a0, $a0, -0x6B50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x186E60u, 0x186E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E68u;
label_186e68:
    // 0x186e68: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x186e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x186e6c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x186e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x186e70: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x186e70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x186e74: 0x248495f0  addiu       $a0, $a0, -0x6A10
    ctx->pc = 0x186e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940144));
    // 0x186e78: 0x24a594f0  addiu       $a1, $a1, -0x6B10
    ctx->pc = 0x186e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939888));
    // 0x186e7c: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x186E7Cu;
    SET_GPR_U32(ctx, 31, 0x186E84u);
    ctx->pc = 0x186E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186E7Cu;
    // 0x186e80: 0x24c69470  addiu       $a2, $a2, -0x6B90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x186E7Cu, 0x186E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E84u;
label_186e84:
    // 0x186e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186e88: 0x3e00008  jr          $ra
    ctx->pc = 0x186E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E88u;
        // 0x186e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186E90u;
}
