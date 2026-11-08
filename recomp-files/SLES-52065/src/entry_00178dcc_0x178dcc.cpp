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

// Function: entry_00178dcc
// Address: 0x178dcc - 0x178dfc
void entry_00178dcc_0x178dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178dcc_0x178dcc");
#endif

    ctx->pc = 0x178dccu;

    // 0x178dcc: 0x0  nop
    ctx->pc = 0x178dccu;
    // NOP
    // 0x178dd0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x178dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x178dd4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x178dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x178dd8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x178DD8u;
    {
        const bool branch_taken_0x178dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DD8u;
        // 0x178ddc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178dd8) {
            ctx->pc = 0x178D38u;
            return;
        }
    }
    ctx->pc = 0x178DE0u;
    // 0x178de0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x178de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178de4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x178de4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178de8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x178de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x178dec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x178decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178df0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x178df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178df4: 0x3e00008  jr          $ra
    ctx->pc = 0x178DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DF4u;
        // 0x178df8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178DFCu;
}
