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

// Function: FUN_001fd750
// Address: 0x1fd750 - 0x1fd784
void FUN_001fd750_0x1fd750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fd750_0x1fd750");
#endif

    switch (ctx->pc) {
        case 0x1fd778u: goto label_1fd778;
        default: break;
    }

    ctx->pc = 0x1fd750u;

    // 0x1fd750: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fd750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fd754: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x1fd754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x1fd758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd75c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1fd75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fd760: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x1fd760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x1fd764: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x1fd764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x1fd768: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x1fd768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x1fd76c: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x1fd76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x1fd770: 0xc080e8c  jal         func_203A30
    ctx->pc = 0x1FD770u;
    SET_GPR_U32(ctx, 31, 0x1FD778u);
    ctx->pc = 0x1FD774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD770u;
    // 0x1fd774: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A30u, 0x1FD770u, 0x1FD778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD778u;
label_1fd778:
    // 0x1fd778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd77c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD77Cu;
        // 0x1fd780: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD784u;
}
