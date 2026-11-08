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

// Function: entry_001823b8
// Address: 0x1823b8 - 0x1823f4
void entry_001823b8_0x1823b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001823b8_0x1823b8");
#endif

    ctx->pc = 0x1823b8u;

    // 0x1823b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1823b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1823bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1823bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1823c0: 0x0  nop
    ctx->pc = 0x1823c0u;
    // NOP
    // 0x1823c4: 0x460f0842  mul.s       $f1, $f1, $f15
    ctx->pc = 0x1823c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x1823c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1823c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1823cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1823ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1823d0: 0x0  nop
    ctx->pc = 0x1823d0u;
    // NOP
    // 0x1823d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1823d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1823d8: 0x0  nop
    ctx->pc = 0x1823d8u;
    // NOP
    // 0x1823dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1823DCu;
    {
        const bool branch_taken_0x1823dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1823E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823DCu;
        // 0x1823e0: 0xa0238bb2  sb          $v1, -0x744E($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294937522), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823dc) {
            ctx->pc = 0x1823F4u;
            return;
        }
    }
    ctx->pc = 0x1823E4u;
    // 0x1823e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1823e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1823e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1823e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1823ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1823ECu;
    {
        const bool branch_taken_0x1823ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1823ec) {
            ctx->pc = 0x18240Cu;
            return;
        }
    }
    ctx->pc = 0x1823F4u;
}
