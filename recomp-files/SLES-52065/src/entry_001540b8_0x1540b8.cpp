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

// Function: entry_001540b8
// Address: 0x1540b8 - 0x1540dc
void entry_001540b8_0x1540b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001540b8_0x1540b8");
#endif

    ctx->pc = 0x1540b8u;

    // 0x1540b8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1540b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1540bc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1540bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1540c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1540c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1540c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1540c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1540c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1540c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1540cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1540ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1540d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1540d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1540d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1540D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1540D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540D4u;
        // 0x1540d8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1540D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1540DCu;
}
