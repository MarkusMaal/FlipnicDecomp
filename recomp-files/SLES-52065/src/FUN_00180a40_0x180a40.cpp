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

// Function: FUN_00180a40
// Address: 0x180a40 - 0x180a84
void FUN_00180a40_0x180a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180a40_0x180a40");
#endif

    switch (ctx->pc) {
        case 0x180a70u: goto label_180a70;
        default: break;
    }

    ctx->pc = 0x180a40u;

    // 0x180a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180a4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a50: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180A50u;
    {
        const bool branch_taken_0x180a50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x180A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A50u;
        // 0x180a54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a50) {
            ctx->pc = 0x180A74u;
            goto label_180a74;
        }
    }
    ctx->pc = 0x180A58u;
    // 0x180a58: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x180a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x180a5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x180a5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x180a60: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180A60u;
    {
        const bool branch_taken_0x180a60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x180a60) {
            ctx->pc = 0x180A70u;
            goto label_180a70;
        }
    }
    ctx->pc = 0x180A68u;
    // 0x180a68: 0xc0401a4  jal         func_100690
    ctx->pc = 0x180A68u;
    SET_GPR_U32(ctx, 31, 0x180A70u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x180A68u, 0x180A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180A70u;
label_180a70:
    // 0x180a70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180a74:
    // 0x180a74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x180A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A7Cu;
        // 0x180a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180A84u;
}
