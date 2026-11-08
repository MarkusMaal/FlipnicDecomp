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

// Function: entry_00177c4c
// Address: 0x177c4c - 0x177c80
void entry_00177c4c_0x177c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177c4c_0x177c4c");
#endif

    ctx->pc = 0x177c4cu;

    // 0x177c4c: 0x0  nop
    ctx->pc = 0x177c4cu;
    // NOP
    // 0x177c50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x177c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x177c54: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x177c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177c58: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x177C58u;
    {
        const bool branch_taken_0x177c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C58u;
        // 0x177c5c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c58) {
            ctx->pc = 0x177A9Cu;
            return;
        }
    }
    ctx->pc = 0x177C60u;
    // 0x177c60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x177c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x177c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177c68: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x177c68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177c6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x177c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x177c70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x177c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177c74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x177c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177c78: 0x3e00008  jr          $ra
    ctx->pc = 0x177C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C78u;
        // 0x177c7c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177C80u;
}
