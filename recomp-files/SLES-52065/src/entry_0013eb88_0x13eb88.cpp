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

// Function: entry_0013eb88
// Address: 0x13eb88 - 0x13ebb8
void entry_0013eb88_0x13eb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eb88_0x13eb88");
#endif

    ctx->pc = 0x13eb88u;

    // 0x13eb88: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x13eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13eb8c: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x13eb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eb90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13eb90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13eb94: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x13eb94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13eb98: 0x0  nop
    ctx->pc = 0x13eb98u;
    // NOP
    // 0x13eb9c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x13EB9Cu;
    {
        const bool branch_taken_0x13eb9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13eb9c) {
            ctx->pc = 0x13EBBCu;
            return;
        }
    }
    ctx->pc = 0x13EBA4u;
    // 0x13eba4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x13eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13eba8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EBA8u;
    {
        const bool branch_taken_0x13eba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eba8) {
            ctx->pc = 0x13EBB8u;
            return;
        }
    }
    ctx->pc = 0x13EBB0u;
    // 0x13ebb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13EBB0u;
    {
        const bool branch_taken_0x13ebb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBB0u;
        // 0x13ebb4: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebb0) {
            ctx->pc = 0x13EBBCu;
            return;
        }
    }
    ctx->pc = 0x13EBB8u;
}
