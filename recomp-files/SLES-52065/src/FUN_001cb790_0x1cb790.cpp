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

// Function: FUN_001cb790
// Address: 0x1cb790 - 0x1cb7cc
void FUN_001cb790_0x1cb790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cb790_0x1cb790");
#endif

    switch (ctx->pc) {
        case 0x1cb7a4u: goto label_1cb7a4;
        default: break;
    }

    ctx->pc = 0x1cb790u;

    // 0x1cb790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cb79c: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1CB79Cu;
    SET_GPR_U32(ctx, 31, 0x1CB7A4u);
    ctx->pc = 0x1CB7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB79Cu;
    // 0x1cb7a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1CB79Cu, 0x1CB7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7A4u;
label_1cb7a4:
    // 0x1cb7a4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1cb7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1cb7a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cb7a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7ac: 0x2463bd70  addiu       $v1, $v1, -0x4290
    ctx->pc = 0x1cb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950256));
    // 0x1cb7b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cb7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1cb7b4: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x1cb7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb7b8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1cb7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1cb7bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb7c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7C4u;
        // 0x1cb7c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB7CCu;
}
