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

// Function: entry_002069fc
// Address: 0x2069fc - 0x206a18
void entry_002069fc_0x2069fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002069fc_0x2069fc");
#endif

    switch (ctx->pc) {
        case 0x206a04u: goto label_206a04;
        default: break;
    }

    ctx->pc = 0x2069fcu;

    // 0x2069fc: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x2069FCu;
    SET_GPR_U32(ctx, 31, 0x206A04u);
    ctx->pc = 0x206A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2069FCu;
    // 0x206a00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x2069FCu, 0x206A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A04u;
label_206a04:
    // 0x206a04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x206a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206a08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x206a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206a0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206a10: 0x3e00008  jr          $ra
    ctx->pc = 0x206A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A10u;
        // 0x206a14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206A18u;
}
