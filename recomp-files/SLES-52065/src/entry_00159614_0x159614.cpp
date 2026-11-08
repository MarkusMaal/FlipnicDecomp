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

// Function: entry_00159614
// Address: 0x159614 - 0x159640
void entry_00159614_0x159614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159614_0x159614");
#endif

    switch (ctx->pc) {
        case 0x15962cu: goto label_15962c;
        default: break;
    }

    ctx->pc = 0x159614u;

    // 0x159614: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x159614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x159618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15961c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15961cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x159620: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x159620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159624: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x159624u;
    SET_GPR_U32(ctx, 31, 0x15962Cu);
    ctx->pc = 0x159628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159624u;
    // 0x159628: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x159624u, 0x15962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15962Cu;
label_15962c:
    // 0x15962c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15962cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159630: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x159630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x159634: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x159634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159638: 0x3e00008  jr          $ra
    ctx->pc = 0x159638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159638u;
        // 0x15963c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159640u;
}
