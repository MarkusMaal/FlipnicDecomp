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

// Function: entry_0015ab84
// Address: 0x15ab84 - 0x15abb0
void entry_0015ab84_0x15ab84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ab84_0x15ab84");
#endif

    switch (ctx->pc) {
        case 0x15ab9cu: goto label_15ab9c;
        default: break;
    }

    ctx->pc = 0x15ab84u;

    // 0x15ab84: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15ab84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15ab88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ab88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15ab8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x15ab90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ab90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab94: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x15AB94u;
    SET_GPR_U32(ctx, 31, 0x15AB9Cu);
    ctx->pc = 0x15AB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB94u;
    // 0x15ab98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x15AB94u, 0x15AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB9Cu;
label_15ab9c:
    // 0x15ab9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ab9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15aba0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15aba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15aba4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15aba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15aba8: 0x3e00008  jr          $ra
    ctx->pc = 0x15ABA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABA8u;
        // 0x15abac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ABA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ABB0u;
}
