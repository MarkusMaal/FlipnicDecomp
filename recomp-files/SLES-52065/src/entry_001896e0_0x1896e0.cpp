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

// Function: entry_001896e0
// Address: 0x1896e0 - 0x18971c
void entry_001896e0_0x1896e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001896e0_0x1896e0");
#endif

    ctx->pc = 0x1896e0u;

    // 0x1896e0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1896e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1896e4: 0xc681008c  lwc1        $f1, 0x8C($s4)
    ctx->pc = 0x1896e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1896e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1896e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1896ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1896ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1896f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1896f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1896f4: 0x0  nop
    ctx->pc = 0x1896f4u;
    // NOP
    // 0x1896f8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1896f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1896fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1896fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189700: 0x0  nop
    ctx->pc = 0x189700u;
    // NOP
    // 0x189704: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x189704u;
    {
        const bool branch_taken_0x189704 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189704) {
            ctx->pc = 0x18971Cu;
            return;
        }
    }
    ctx->pc = 0x18970Cu;
    // 0x18970c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18970cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189710: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x189714: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x189714u;
    {
        const bool branch_taken_0x189714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189714u;
        // 0x189718: 0xa3a300de  sb          $v1, 0xDE($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 222), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189714) {
            ctx->pc = 0x189738u;
            return;
        }
    }
    ctx->pc = 0x18971Cu;
}
