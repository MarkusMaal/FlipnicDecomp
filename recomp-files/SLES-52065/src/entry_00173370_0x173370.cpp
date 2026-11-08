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

// Function: entry_00173370
// Address: 0x173370 - 0x1733b8
void entry_00173370_0x173370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173370_0x173370");
#endif

    ctx->pc = 0x173370u;

    // 0x173370: 0x883021  addu        $a2, $a0, $t0
    ctx->pc = 0x173370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x173374: 0x8cc300a0  lw          $v1, 0xA0($a2)
    ctx->pc = 0x173374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x173378: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x173378u;
    {
        const bool branch_taken_0x173378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173378) {
            ctx->pc = 0x1733BCu;
            return;
        }
    }
    ctx->pc = 0x173380u;
    // 0x173380: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x173380u;
    {
        const bool branch_taken_0x173380 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x173380) {
            ctx->pc = 0x1733B8u;
            return;
        }
    }
    ctx->pc = 0x173388u;
    // 0x173388: 0xc7808020  lwc1        $f0, -0x7FE0($gp)
    ctx->pc = 0x173388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17338c: 0x24c3009c  addiu       $v1, $a2, 0x9C
    ctx->pc = 0x17338cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 156));
    // 0x173390: 0xc4c2009c  lwc1        $f2, 0x9C($a2)
    ctx->pc = 0x173390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x173394: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x173394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x173398: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x173398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17339c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x17339cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1733a0: 0x0  nop
    ctx->pc = 0x1733a0u;
    // NOP
    // 0x1733a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1733A4u;
    {
        const bool branch_taken_0x1733a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1733A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733A4u;
        // 0x1733a8: 0xe4c0009c  swc1        $f0, 0x9C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733a4) {
            ctx->pc = 0x1733BCu;
            return;
        }
    }
    ctx->pc = 0x1733ACu;
    // 0x1733ac: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1733acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1733b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1733B0u;
    {
        const bool branch_taken_0x1733b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1733B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733B0u;
        // 0x1733b4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733b0) {
            ctx->pc = 0x1733BCu;
            return;
        }
    }
    ctx->pc = 0x1733B8u;
}
