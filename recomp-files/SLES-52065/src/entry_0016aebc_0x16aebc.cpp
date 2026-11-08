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

// Function: entry_0016aebc
// Address: 0x16aebc - 0x16aee0
void entry_0016aebc_0x16aebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016aebc_0x16aebc");
#endif

    ctx->pc = 0x16aebcu;

    // 0x16aebc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16aebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16aec0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16aec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16aec4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16aec8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16aec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16aecc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16aeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16aed0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16aed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16aed4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16aed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16aed8: 0x3e00008  jr          $ra
    ctx->pc = 0x16AED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AED8u;
        // 0x16aedc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AEE0u;
}
