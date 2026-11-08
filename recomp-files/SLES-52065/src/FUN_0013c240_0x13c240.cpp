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

// Function: FUN_0013c240
// Address: 0x13c240 - 0x13c268
void FUN_0013c240_0x13c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013c240_0x13c240");
#endif

    switch (ctx->pc) {
        case 0x13c25cu: goto label_13c25c;
        default: break;
    }

    ctx->pc = 0x13c240u;

    // 0x13c240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c248: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x13c248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13c24c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C24Cu;
    {
        const bool branch_taken_0x13c24c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c24c) {
            ctx->pc = 0x13C25Cu;
            goto label_13c25c;
        }
    }
    ctx->pc = 0x13C254u;
    // 0x13c254: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13C254u;
    SET_GPR_U32(ctx, 31, 0x13C25Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13C254u, 0x13C25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C25Cu;
label_13c25c:
    // 0x13c25c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c260: 0x3e00008  jr          $ra
    ctx->pc = 0x13C260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C260u;
        // 0x13c264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C268u;
}
