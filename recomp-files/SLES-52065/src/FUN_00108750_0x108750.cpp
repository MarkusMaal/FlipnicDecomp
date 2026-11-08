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

// Function: FUN_00108750
// Address: 0x108750 - 0x108778
void FUN_00108750_0x108750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00108750_0x108750");
#endif

    switch (ctx->pc) {
        case 0x108764u: goto label_108764;
        default: break;
    }

    ctx->pc = 0x108750u;

    // 0x108750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x108758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x108758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10875c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x10875Cu;
    SET_GPR_U32(ctx, 31, 0x108764u);
    ctx->pc = 0x108760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10875Cu;
    // 0x108760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x10875Cu, 0x108764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108764u;
label_108764:
    // 0x108764: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x108764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x108768: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10876c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10876cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108770: 0x3e00008  jr          $ra
    ctx->pc = 0x108770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108770u;
        // 0x108774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108778u;
}
