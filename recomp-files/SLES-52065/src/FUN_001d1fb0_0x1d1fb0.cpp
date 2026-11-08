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

// Function: FUN_001d1fb0
// Address: 0x1d1fb0 - 0x1d1ff4
void FUN_001d1fb0_0x1d1fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1fb0_0x1d1fb0");
#endif

    switch (ctx->pc) {
        case 0x1d1fd0u: goto label_1d1fd0;
        case 0x1d1fe0u: goto label_1d1fe0;
        default: break;
    }

    ctx->pc = 0x1d1fb0u;

    // 0x1d1fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d1fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1fbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1fc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1fc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d1fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1fc8: 0xc074af0  jal         func_1D2BC0
    ctx->pc = 0x1D1FC8u;
    SET_GPR_U32(ctx, 31, 0x1D1FD0u);
    ctx->pc = 0x1D1FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1FC8u;
    // 0x1d1fcc: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2BC0u, 0x1D1FC8u, 0x1D1FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1FD0u;
label_1d1fd0:
    // 0x1d1fd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1fd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d1fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1fd8: 0xc074800  jal         func_1D2000
    ctx->pc = 0x1D1FD8u;
    SET_GPR_U32(ctx, 31, 0x1D1FE0u);
    ctx->pc = 0x1D1FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1FD8u;
    // 0x1d1fdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2000u, 0x1D1FD8u, 0x1D1FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1FE0u;
label_1d1fe0:
    // 0x1d1fe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1fec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FECu;
        // 0x1d1ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1FF4u;
}
