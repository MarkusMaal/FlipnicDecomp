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

// Function: entry_001718d4
// Address: 0x1718d4 - 0x171924
void entry_001718d4_0x1718d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001718d4_0x1718d4");
#endif

    ctx->pc = 0x1718d4u;

    // 0x1718d4: 0x0  nop
    ctx->pc = 0x1718d4u;
    // NOP
    // 0x1718d8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1718d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1718dc: 0x8b3021  addu        $a2, $a0, $t3
    ctx->pc = 0x1718dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1718e0: 0x84c40006  lh          $a0, 0x6($a2)
    ctx->pc = 0x1718e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1718e4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1718e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1718e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1718e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1718ec: 0x0  nop
    ctx->pc = 0x1718ecu;
    // NOP
    // 0x1718f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1718f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1718f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1718f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1718f8: 0x0  nop
    ctx->pc = 0x1718f8u;
    // NOP
    // 0x1718fc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1718FCu;
    {
        const bool branch_taken_0x1718fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1718fc) {
            ctx->pc = 0x171924u;
            return;
        }
    }
    ctx->pc = 0x171904u;
    // 0x171904: 0x84c40008  lh          $a0, 0x8($a2)
    ctx->pc = 0x171904u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x171908: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x171908u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17190c: 0x0  nop
    ctx->pc = 0x17190cu;
    // NOP
    // 0x171910: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x171914: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x171914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171918: 0x0  nop
    ctx->pc = 0x171918u;
    // NOP
    // 0x17191c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x17191Cu;
    {
        const bool branch_taken_0x17191c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17191c) {
            ctx->pc = 0x17193Cu;
            return;
        }
    }
    ctx->pc = 0x171924u;
}
