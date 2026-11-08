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

// Function: FUN_00185c80
// Address: 0x185c80 - 0x185cc4
void FUN_00185c80_0x185c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00185c80_0x185c80");
#endif

    switch (ctx->pc) {
        case 0x185cb0u: goto label_185cb0;
        default: break;
    }

    ctx->pc = 0x185c80u;

    // 0x185c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x185c84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x185c88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x185c8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c90: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x185C90u;
    {
        const bool branch_taken_0x185c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C90u;
        // 0x185c94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c90) {
            ctx->pc = 0x185CB4u;
            goto label_185cb4;
        }
    }
    ctx->pc = 0x185C98u;
    // 0x185c98: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x185c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x185c9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x185c9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x185ca0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185CA0u;
    {
        const bool branch_taken_0x185ca0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x185ca0) {
            ctx->pc = 0x185CB0u;
            goto label_185cb0;
        }
    }
    ctx->pc = 0x185CA8u;
    // 0x185ca8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x185CA8u;
    SET_GPR_U32(ctx, 31, 0x185CB0u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x185CA8u, 0x185CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185CB0u;
label_185cb0:
    // 0x185cb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x185cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185cb4:
    // 0x185cb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x185CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CBCu;
        // 0x185cc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185CC4u;
}
