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

// Function: entry_00208f54
// Address: 0x208f54 - 0x208f6c
void entry_00208f54_0x208f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208f54_0x208f54");
#endif

    switch (ctx->pc) {
        case 0x208f5cu: goto label_208f5c;
        default: break;
    }

    ctx->pc = 0x208f54u;

    // 0x208f54: 0xc082238  jal         func_2088E0
    ctx->pc = 0x208F54u;
    SET_GPR_U32(ctx, 31, 0x208F5Cu);
    ctx->pc = 0x2088E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2088E0u, 0x208F54u, 0x208F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F5Cu;
label_208f5c:
    // 0x208f5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x208f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x208f60: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x208f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x208f64: 0x3e00008  jr          $ra
    ctx->pc = 0x208F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F64u;
        // 0x208f68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208F6Cu;
}
