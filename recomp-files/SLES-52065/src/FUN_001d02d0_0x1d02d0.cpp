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

// Function: FUN_001d02d0
// Address: 0x1d02d0 - 0x1d0314
void FUN_001d02d0_0x1d02d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d02d0_0x1d02d0");
#endif

    switch (ctx->pc) {
        case 0x1d02f0u: goto label_1d02f0;
        case 0x1d0304u: goto label_1d0304;
        default: break;
    }

    ctx->pc = 0x1d02d0u;

    // 0x1d02d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d02d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d02d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d02d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d02d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d02d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d02dc: 0x24a59960  addiu       $a1, $a1, -0x66A0
    ctx->pc = 0x1d02dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941024));
    // 0x1d02e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d02e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d02e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d02e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d02e8: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1D02E8u;
    SET_GPR_U32(ctx, 31, 0x1D02F0u);
    ctx->pc = 0x1D02ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D02E8u;
    // 0x1d02ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1D02E8u, 0x1D02F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D02F0u;
label_1d02f0:
    // 0x1d02f0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d02f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d02f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d02f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d02f8: 0x24a599a0  addiu       $a1, $a1, -0x6660
    ctx->pc = 0x1d02f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941088));
    // 0x1d02fc: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1D02FCu;
    SET_GPR_U32(ctx, 31, 0x1D0304u);
    ctx->pc = 0x1D0300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D02FCu;
    // 0x1d0300: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1D02FCu, 0x1D0304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0304u;
label_1d0304:
    // 0x1d0304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d030c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D030Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D030Cu;
        // 0x1d0310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D030Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0314u;
}
