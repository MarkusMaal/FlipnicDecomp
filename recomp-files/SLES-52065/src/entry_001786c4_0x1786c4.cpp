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

// Function: entry_001786c4
// Address: 0x1786c4 - 0x1786f4
void entry_001786c4_0x1786c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001786c4_0x1786c4");
#endif

    ctx->pc = 0x1786c4u;

    // 0x1786c4: 0x0  nop
    ctx->pc = 0x1786c4u;
    // NOP
    // 0x1786c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1786c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1786cc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1786ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1786d0: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1786D0u;
    {
        const bool branch_taken_0x1786d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1786d0) {
            ctx->pc = 0x178634u;
            return;
        }
    }
    ctx->pc = 0x1786D8u;
    // 0x1786d8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1786d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1786dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1786dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1786e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1786e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1786e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1786e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1786e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1786e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1786ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1786ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1786F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786ECu;
        // 0x1786f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1786ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1786F4u;
}
