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

// Function: FUN_001836f0
// Address: 0x1836f0 - 0x183734
void FUN_001836f0_0x1836f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001836f0_0x1836f0");
#endif

    switch (ctx->pc) {
        case 0x183720u: goto label_183720;
        default: break;
    }

    ctx->pc = 0x1836f0u;

    // 0x1836f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1836f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1836f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1836f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1836f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1836f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1836fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1836fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183700: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x183700u;
    {
        const bool branch_taken_0x183700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x183704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183700u;
        // 0x183704: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183700) {
            ctx->pc = 0x183724u;
            goto label_183724;
        }
    }
    ctx->pc = 0x183708u;
    // 0x183708: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x183708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x18370c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18370cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x183710: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183710u;
    {
        const bool branch_taken_0x183710 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x183710) {
            ctx->pc = 0x183720u;
            goto label_183720;
        }
    }
    ctx->pc = 0x183718u;
    // 0x183718: 0xc0401a4  jal         func_100690
    ctx->pc = 0x183718u;
    SET_GPR_U32(ctx, 31, 0x183720u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x183718u, 0x183720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183720u;
label_183720:
    // 0x183720: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x183720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_183724:
    // 0x183724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18372c: 0x3e00008  jr          $ra
    ctx->pc = 0x18372Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18372Cu;
        // 0x183730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18372Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183734u;
}
