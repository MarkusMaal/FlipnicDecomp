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

// Function: FUN_00199eb0
// Address: 0x199eb0 - 0x199ee4
void FUN_00199eb0_0x199eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00199eb0_0x199eb0");
#endif

    switch (ctx->pc) {
        case 0x199ec4u: goto label_199ec4;
        default: break;
    }

    ctx->pc = 0x199eb0u;

    // 0x199eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199eb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x199eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x199eb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x199ebc: 0xc045c98  jal         func_117260
    ctx->pc = 0x199EBCu;
    SET_GPR_U32(ctx, 31, 0x199EC4u);
    ctx->pc = 0x199EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199EBCu;
    // 0x199ec0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x199EBCu, 0x199EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199EC4u;
label_199ec4:
    // 0x199ec4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x199ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x199ec8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ecc: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x199eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x199ed0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x199ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x199ed4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x199ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199ed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199edc: 0x3e00008  jr          $ra
    ctx->pc = 0x199EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EDCu;
        // 0x199ee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199EE4u;
}
