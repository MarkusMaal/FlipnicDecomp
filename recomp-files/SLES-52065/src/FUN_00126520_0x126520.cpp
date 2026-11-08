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

// Function: FUN_00126520
// Address: 0x126520 - 0x126544
void FUN_00126520_0x126520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00126520_0x126520");
#endif

    ctx->pc = 0x126520u;

    // 0x126520: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x126520u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126524: 0x7c830070  sq          $v1, 0x70($a0)
    ctx->pc = 0x126524u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 3));
    // 0x126528: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x126528u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12652c: 0x7c830080  sq          $v1, 0x80($a0)
    ctx->pc = 0x12652cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 3));
    // 0x126530: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x126530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126534: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x126534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x126538: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x126538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12653c: 0x3e00008  jr          $ra
    ctx->pc = 0x12653Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12653Cu;
        // 0x126540: 0xe4800090  swc1        $f0, 0x90($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12653Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126544u;
}
