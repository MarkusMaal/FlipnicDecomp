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

// Function: entry_00171bc4
// Address: 0x171bc4 - 0x171bfc
void entry_00171bc4_0x171bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171bc4_0x171bc4");
#endif

    ctx->pc = 0x171bc4u;

    // 0x171bc4: 0x0  nop
    ctx->pc = 0x171bc4u;
    // NOP
    // 0x171bc8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x171bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x171bcc: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x171bccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x171bd0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x171bd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x171bd4: 0x1460ff36  bnez        $v1, . + 4 + (-0xCA << 2)
    ctx->pc = 0x171BD4u;
    {
        const bool branch_taken_0x171bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171bd4) {
            ctx->pc = 0x1718B0u;
            return;
        }
    }
    ctx->pc = 0x171BDCu;
    // 0x171bdc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x171bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x171be0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x171be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x171be4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x171be4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171be8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x171be8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171bec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x171becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171bf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x171bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x171BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BF4u;
        // 0x171bf8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171BFCu;
}
