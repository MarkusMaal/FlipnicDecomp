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

// Function: FUN_00129470
// Address: 0x129470 - 0x1294a4
void FUN_00129470_0x129470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00129470_0x129470");
#endif

    switch (ctx->pc) {
        case 0x129484u: goto label_129484;
        default: break;
    }

    ctx->pc = 0x129470u;

    // 0x129470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x129470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x129474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x129474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x129478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x129478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12947c: 0xc0497a0  jal         func_125E80
    ctx->pc = 0x12947Cu;
    SET_GPR_U32(ctx, 31, 0x129484u);
    ctx->pc = 0x129480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12947Cu;
    // 0x129480: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E80u, 0x12947Cu, 0x129484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129484u;
label_129484:
    // 0x129484: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x129484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x129488: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x129488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12948c: 0x24638a60  addiu       $v1, $v1, -0x75A0
    ctx->pc = 0x12948cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937184));
    // 0x129490: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x129490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x129494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x129494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12949c: 0x3e00008  jr          $ra
    ctx->pc = 0x12949Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1294A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12949Cu;
        // 0x1294a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12949Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1294A4u;
}
