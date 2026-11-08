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

// Function: entry_00189568
// Address: 0x189568 - 0x1895a4
void entry_00189568_0x189568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189568_0x189568");
#endif

    ctx->pc = 0x189568u;

    // 0x189568: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x189568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x18956c: 0xc6810038  lwc1        $f1, 0x38($s4)
    ctx->pc = 0x18956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189570: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x189574: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x189574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x189578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18957c: 0x0  nop
    ctx->pc = 0x18957cu;
    // NOP
    // 0x189580: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x189580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x189584: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x189584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189588: 0x0  nop
    ctx->pc = 0x189588u;
    // NOP
    // 0x18958c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18958Cu;
    {
        const bool branch_taken_0x18958c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18958c) {
            ctx->pc = 0x1895A4u;
            return;
        }
    }
    ctx->pc = 0x189594u;
    // 0x189594: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189594u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189598: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189598u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18959c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18959Cu;
    {
        const bool branch_taken_0x18959c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1895A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18959Cu;
        // 0x1895a0: 0xa3a300da  sb          $v1, 0xDA($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 218), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18959c) {
            ctx->pc = 0x1895C0u;
            return;
        }
    }
    ctx->pc = 0x1895A4u;
}
