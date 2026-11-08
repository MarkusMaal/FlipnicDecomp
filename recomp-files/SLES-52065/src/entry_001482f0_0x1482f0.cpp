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

// Function: entry_001482f0
// Address: 0x1482f0 - 0x14832c
void entry_001482f0_0x1482f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001482f0_0x1482f0");
#endif

    switch (ctx->pc) {
        case 0x148314u: goto label_148314;
        default: break;
    }

    ctx->pc = 0x1482f0u;

    // 0x1482f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1482f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1482f4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1482f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1482f8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1482f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1482fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1482fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148300: 0x0  nop
    ctx->pc = 0x148300u;
    // NOP
    // 0x148304: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x148304u;
    {
        const bool branch_taken_0x148304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148304u;
        // 0x148308: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148304) {
            ctx->pc = 0x14832Cu;
            return;
        }
    }
    ctx->pc = 0x14830Cu;
    // 0x14830c: 0xc052118  jal         func_148460
    ctx->pc = 0x14830Cu;
    SET_GPR_U32(ctx, 31, 0x148314u);
    ctx->pc = 0x148310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14830Cu;
    // 0x148310: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148460u, 0x14830Cu, 0x148314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148314u;
label_148314:
    // 0x148314: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x148314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x148318: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x148318u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x14831c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x148320: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x148320u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x148324: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x148324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148328: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x148328u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x14832cu;
}
