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

// Function: entry_00182360
// Address: 0x182360 - 0x18239c
void entry_00182360_0x182360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182360_0x182360");
#endif

    ctx->pc = 0x182360u;

    // 0x182360: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182364: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x182364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182368: 0x0  nop
    ctx->pc = 0x182368u;
    // NOP
    // 0x18236c: 0x460e0842  mul.s       $f1, $f1, $f14
    ctx->pc = 0x18236cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x182370: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x182370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x182374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182378: 0x0  nop
    ctx->pc = 0x182378u;
    // NOP
    // 0x18237c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18237cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182380: 0x0  nop
    ctx->pc = 0x182380u;
    // NOP
    // 0x182384: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x182384u;
    {
        const bool branch_taken_0x182384 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182384u;
        // 0x182388: 0xa0238bb1  sb          $v1, -0x744F($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294937521), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182384) {
            ctx->pc = 0x18239Cu;
            return;
        }
    }
    ctx->pc = 0x18238Cu;
    // 0x18238c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18238cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x182390: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x182390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x182394: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x182394u;
    {
        const bool branch_taken_0x182394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182394u;
        // 0x182398: 0x3c024300  lui         $v0, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182394) {
            ctx->pc = 0x1823B8u;
            return;
        }
    }
    ctx->pc = 0x18239Cu;
}
