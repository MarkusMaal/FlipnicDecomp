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

// Function: entry_0017474c
// Address: 0x17474c - 0x174788
void entry_0017474c_0x17474c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017474c_0x17474c");
#endif

    ctx->pc = 0x17474cu;

    // 0x17474c: 0x0  nop
    ctx->pc = 0x17474cu;
    // NOP
    // 0x174750: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x174750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x174754: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x174754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x174758: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x174758u;
    {
        const bool branch_taken_0x174758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174758u;
        // 0x17475c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174758) {
            ctx->pc = 0x1746B8u;
            return;
        }
    }
    ctx->pc = 0x174760u;
    // 0x174760: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x174760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174764: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x174764u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174768: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x174768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17476c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17476cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174770: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x174770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x174774: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x174774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174778: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x174778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17477c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17477cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174780: 0x3e00008  jr          $ra
    ctx->pc = 0x174780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174780u;
        // 0x174784: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174788u;
}
