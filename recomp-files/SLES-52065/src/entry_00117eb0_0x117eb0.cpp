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

// Function: entry_00117eb0
// Address: 0x117eb0 - 0x117ecc
void entry_00117eb0_0x117eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117eb0_0x117eb0");
#endif

    switch (ctx->pc) {
        case 0x117ebcu: goto label_117ebc;
        default: break;
    }

    ctx->pc = 0x117eb0u;

    // 0x117eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117eb4: 0xc045fcc  jal         func_117F30
    ctx->pc = 0x117EB4u;
    SET_GPR_U32(ctx, 31, 0x117EBCu);
    ctx->pc = 0x117EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117EB4u;
    // 0x117eb8: 0xaf90839c  sw          $s0, -0x7C64($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935452), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117F30u, 0x117EB4u, 0x117EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EBCu;
label_117ebc:
    // 0x117ebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117ec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x117ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x117EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EC4u;
        // 0x117ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117ECCu;
}
