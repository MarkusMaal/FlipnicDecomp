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

// Function: FUN_00106180
// Address: 0x106180 - 0x1061cc
void FUN_00106180_0x106180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106180_0x106180");
#endif

    switch (ctx->pc) {
        case 0x106194u: goto label_106194;
        default: break;
    }

    ctx->pc = 0x106180u;

    // 0x106180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10618c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10618Cu;
    SET_GPR_U32(ctx, 31, 0x106194u);
    ctx->pc = 0x106190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10618Cu;
    // 0x106190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10618Cu, 0x106194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106194u;
label_106194:
    // 0x106194: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x106194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x106198: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10619c: 0x24637cf0  addiu       $v1, $v1, 0x7CF0
    ctx->pc = 0x10619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31984));
    // 0x1061a0: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x1061a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x1061a4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1061a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1061a8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1061a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1061ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1061acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1061b0: 0x24637f90  addiu       $v1, $v1, 0x7F90
    ctx->pc = 0x1061b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32656));
    // 0x1061b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1061b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061b8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1061b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1061bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1061bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1061c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1061c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1061c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1061C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1061C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061C4u;
        // 0x1061c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1061C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1061CCu;
}
