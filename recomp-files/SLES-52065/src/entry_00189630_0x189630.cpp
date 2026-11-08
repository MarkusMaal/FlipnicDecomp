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

// Function: entry_00189630
// Address: 0x189630 - 0x18966c
void entry_00189630_0x189630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189630_0x189630");
#endif

    ctx->pc = 0x189630u;

    // 0x189630: 0xc6810084  lwc1        $f1, 0x84($s4)
    ctx->pc = 0x189630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189634: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x189634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x189638: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18963c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x18963cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x189640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189644: 0x0  nop
    ctx->pc = 0x189644u;
    // NOP
    // 0x189648: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x189648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x18964c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18964cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189650: 0x0  nop
    ctx->pc = 0x189650u;
    // NOP
    // 0x189654: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x189654u;
    {
        const bool branch_taken_0x189654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189654) {
            ctx->pc = 0x18966Cu;
            return;
        }
    }
    ctx->pc = 0x18965Cu;
    // 0x18965c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18965cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189660: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x189664: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x189664u;
    {
        const bool branch_taken_0x189664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189664u;
        // 0x189668: 0xa3a300dc  sb          $v1, 0xDC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 220), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189664) {
            ctx->pc = 0x189688u;
            return;
        }
    }
    ctx->pc = 0x18966Cu;
}
