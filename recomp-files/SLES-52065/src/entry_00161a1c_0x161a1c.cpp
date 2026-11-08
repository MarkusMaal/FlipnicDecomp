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

// Function: entry_00161a1c
// Address: 0x161a1c - 0x161a44
void entry_00161a1c_0x161a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161a1c_0x161a1c");
#endif

    ctx->pc = 0x161a1cu;

    // 0x161a1c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x161a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x161a20: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x161a20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x161a24: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x161a24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x161a28: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x161a28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161a2c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x161a2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161a30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x161a30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161a34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x161a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161a38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x161a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x161A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A3Cu;
        // 0x161a40: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161A44u;
}
