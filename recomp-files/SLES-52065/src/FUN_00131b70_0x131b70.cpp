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

// Function: FUN_00131b70
// Address: 0x131b70 - 0x131ba4
void FUN_00131b70_0x131b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131b70_0x131b70");
#endif

    switch (ctx->pc) {
        case 0x131b84u: goto label_131b84;
        default: break;
    }

    ctx->pc = 0x131b70u;

    // 0x131b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131b74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131b7c: 0xc04c6a8  jal         func_131AA0
    ctx->pc = 0x131B7Cu;
    SET_GPR_U32(ctx, 31, 0x131B84u);
    ctx->pc = 0x131B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131B7Cu;
    // 0x131b80: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131AA0u, 0x131B7Cu, 0x131B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131B84u;
label_131b84:
    // 0x131b84: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x131b84u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131b88: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x131b88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x131b8c: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x131b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x131b90: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x131b90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x131b94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x131B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B9Cu;
        // 0x131ba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131BA4u;
}
