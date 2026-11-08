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

// Function: FUN_0017b740
// Address: 0x17b740 - 0x17b770
void FUN_0017b740_0x17b740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017b740_0x17b740");
#endif

    switch (ctx->pc) {
        case 0x17b754u: goto label_17b754;
        default: break;
    }

    ctx->pc = 0x17b740u;

    // 0x17b740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b74c: 0xc0596a0  jal         func_165A80
    ctx->pc = 0x17B74Cu;
    SET_GPR_U32(ctx, 31, 0x17B754u);
    ctx->pc = 0x17B750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B74Cu;
    // 0x17b750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A80u, 0x17B74Cu, 0x17B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B754u;
label_17b754:
    // 0x17b754: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17b754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b758: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17b758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b75c: 0xa064002b  sb          $a0, 0x2B($v1)
    ctx->pc = 0x17b75cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 4));
    // 0x17b760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b768: 0x3e00008  jr          $ra
    ctx->pc = 0x17B768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B768u;
        // 0x17b76c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B770u;
}
