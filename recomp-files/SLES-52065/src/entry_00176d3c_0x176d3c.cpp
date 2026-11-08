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

// Function: entry_00176d3c
// Address: 0x176d3c - 0x176d7c
void entry_00176d3c_0x176d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176d3c_0x176d3c");
#endif

    ctx->pc = 0x176d3cu;

    // 0x176d3c: 0x0  nop
    ctx->pc = 0x176d3cu;
    // NOP
    // 0x176d40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x176d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x176d44: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x176d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x176d48: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x176D48u;
    {
        const bool branch_taken_0x176d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176d48) {
            ctx->pc = 0x176CBCu;
            return;
        }
    }
    ctx->pc = 0x176D50u;
    // 0x176d50: 0x8e020c20  lw          $v0, 0xC20($s0)
    ctx->pc = 0x176d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3104)));
    // 0x176d54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x176d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x176d58: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x176d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x176d5c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x176d5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176d60: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x176d60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176d64: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x176d64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176d68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x176d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176d6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x176d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176d70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176d74: 0x3e00008  jr          $ra
    ctx->pc = 0x176D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D74u;
        // 0x176d78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176D7Cu;
}
