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

// Function: FUN_001464e0
// Address: 0x1464e0 - 0x146524
void FUN_001464e0_0x1464e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001464e0_0x1464e0");
#endif

    switch (ctx->pc) {
        case 0x146510u: goto label_146510;
        default: break;
    }

    ctx->pc = 0x1464e0u;

    // 0x1464e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1464e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1464e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1464e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1464e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1464e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1464ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1464ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1464F0u;
    {
        const bool branch_taken_0x1464f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1464F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1464F0u;
        // 0x1464f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464f0) {
            ctx->pc = 0x146514u;
            goto label_146514;
        }
    }
    ctx->pc = 0x1464F8u;
    // 0x1464f8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1464f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1464fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1464fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x146500: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146500u;
    {
        const bool branch_taken_0x146500 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x146500) {
            ctx->pc = 0x146510u;
            goto label_146510;
        }
    }
    ctx->pc = 0x146508u;
    // 0x146508: 0xc0401a4  jal         func_100690
    ctx->pc = 0x146508u;
    SET_GPR_U32(ctx, 31, 0x146510u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x146508u, 0x146510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146510u;
label_146510:
    // 0x146510: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x146510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_146514:
    // 0x146514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146518: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14651c: 0x3e00008  jr          $ra
    ctx->pc = 0x14651Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14651Cu;
        // 0x146520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14651Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146524u;
}
