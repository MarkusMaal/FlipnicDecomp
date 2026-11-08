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

// Function: entry_001895c0
// Address: 0x1895c0 - 0x1895fc
void entry_001895c0_0x1895c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001895c0_0x1895c0");
#endif

    ctx->pc = 0x1895c0u;

    // 0x1895c0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1895c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1895c4: 0xc681003c  lwc1        $f1, 0x3C($s4)
    ctx->pc = 0x1895c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1895c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1895c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1895cc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1895ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1895d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1895d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1895d4: 0x0  nop
    ctx->pc = 0x1895d4u;
    // NOP
    // 0x1895d8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1895d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1895dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1895dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1895e0: 0x0  nop
    ctx->pc = 0x1895e0u;
    // NOP
    // 0x1895e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1895E4u;
    {
        const bool branch_taken_0x1895e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1895e4) {
            ctx->pc = 0x1895FCu;
            return;
        }
    }
    ctx->pc = 0x1895ECu;
    // 0x1895ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1895ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1895f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1895f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1895f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1895F4u;
    {
        const bool branch_taken_0x1895f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1895F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895F4u;
        // 0x1895f8: 0xa3a300db  sb          $v1, 0xDB($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 219), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895f4) {
            ctx->pc = 0x189618u;
            return;
        }
    }
    ctx->pc = 0x1895FCu;
}
