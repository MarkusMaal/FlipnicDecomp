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

// Function: entry_0016d1d0
// Address: 0x16d1d0 - 0x16d210
void entry_0016d1d0_0x16d1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d1d0_0x16d1d0");
#endif

    ctx->pc = 0x16d1d0u;

    // 0x16d1d0: 0xc4a101c0  lwc1        $f1, 0x1C0($a1)
    ctx->pc = 0x16d1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d1d4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16d1d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16d1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16d1dc: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x16d1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16d1e0: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x16d1e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x16d1e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16d1e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16d1e8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x16d1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16d1ec: 0x0  nop
    ctx->pc = 0x16d1ecu;
    // NOP
    // 0x16d1f0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x16D1F0u;
    {
        const bool branch_taken_0x16d1f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1F0u;
        // 0x16d1f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1f0) {
            ctx->pc = 0x16D210u;
            return;
        }
    }
    ctx->pc = 0x16D1F8u;
    // 0x16d1f8: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x16d1f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x16d1fc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x16d1fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16d200: 0x0  nop
    ctx->pc = 0x16d200u;
    // NOP
    // 0x16d204: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16D204u;
    {
        const bool branch_taken_0x16d204 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D204u;
        // 0x16d208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d204) {
            ctx->pc = 0x16D210u;
            return;
        }
    }
    ctx->pc = 0x16D20Cu;
    // 0x16d20c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x16d210u;
}
