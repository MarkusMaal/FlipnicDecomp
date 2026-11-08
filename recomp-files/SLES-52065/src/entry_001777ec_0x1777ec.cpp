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

// Function: entry_001777ec
// Address: 0x1777ec - 0x17781c
void entry_001777ec_0x1777ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001777ec_0x1777ec");
#endif

    ctx->pc = 0x1777ecu;

    // 0x1777ec: 0x0  nop
    ctx->pc = 0x1777ecu;
    // NOP
    // 0x1777f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1777f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1777f4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1777f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1777f8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1777F8u;
    {
        const bool branch_taken_0x1777f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1777f8) {
            ctx->pc = 0x177758u;
            return;
        }
    }
    ctx->pc = 0x177800u;
    // 0x177800: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x177800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x177804: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x177804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x177808: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x177808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17780c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17780cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177810: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x177810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177814: 0x3e00008  jr          $ra
    ctx->pc = 0x177814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177814u;
        // 0x177818: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17781Cu;
}
