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

// Function: entry_0010d7d0
// Address: 0x10d7d0 - 0x10d800
void entry_0010d7d0_0x10d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d7d0_0x10d7d0");
#endif

    ctx->pc = 0x10d7d0u;

    // 0x10d7d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10d7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d7d4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x10d7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x10d7d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10d7d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d7dc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x10d7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x10d7e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10d7e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d7e4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x10d7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10d7e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10d7e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d7ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x10d7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10d7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7F0u;
        // 0x10d7f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D7F8u;
    // 0x10d7f8: 0x0  nop
    ctx->pc = 0x10d7f8u;
    // NOP
    // 0x10d7fc: 0x0  nop
    ctx->pc = 0x10d7fcu;
    // NOP
    ctx->pc = 0x10d800u;
}
