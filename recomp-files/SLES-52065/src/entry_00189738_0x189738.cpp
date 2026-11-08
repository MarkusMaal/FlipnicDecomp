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

// Function: entry_00189738
// Address: 0x189738 - 0x189774
void entry_00189738_0x189738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189738_0x189738");
#endif

    ctx->pc = 0x189738u;

    // 0x189738: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x189738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x18973c: 0xc6810090  lwc1        $f1, 0x90($s4)
    ctx->pc = 0x18973cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189740: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x189744: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x189744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x189748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18974c: 0x0  nop
    ctx->pc = 0x18974cu;
    // NOP
    // 0x189750: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x189750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x189754: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x189754u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189758: 0x0  nop
    ctx->pc = 0x189758u;
    // NOP
    // 0x18975c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18975Cu;
    {
        const bool branch_taken_0x18975c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18975c) {
            ctx->pc = 0x189774u;
            return;
        }
    }
    ctx->pc = 0x189764u;
    // 0x189764: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189764u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189768: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18976c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18976Cu;
    {
        const bool branch_taken_0x18976c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18976Cu;
        // 0x189770: 0xa3a300df  sb          $v1, 0xDF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18976c) {
            ctx->pc = 0x189790u;
            return;
        }
    }
    ctx->pc = 0x189774u;
}
