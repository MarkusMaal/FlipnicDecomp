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

// Function: entry_0016ce90
// Address: 0x16ce90 - 0x16cef8
void entry_0016ce90_0x16ce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ce90_0x16ce90");
#endif

    ctx->pc = 0x16ce90u;

    // 0x16ce90: 0x8e2401d4  lw          $a0, 0x1D4($s1)
    ctx->pc = 0x16ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16ce94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16ce98: 0x1483006b  bne         $a0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x16CE98u;
    {
        const bool branch_taken_0x16ce98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE98u;
        // 0x16ce9c: 0x8e300230  lw          $s0, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce98) {
            ctx->pc = 0x16D048u;
            return;
        }
    }
    ctx->pc = 0x16CEA0u;
    // 0x16cea0: 0xc6210224  lwc1        $f1, 0x224($s1)
    ctx->pc = 0x16cea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cea4: 0x3c033e06  lui         $v1, 0x3E06
    ctx->pc = 0x16cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
    // 0x16cea8: 0xc6220228  lwc1        $f2, 0x228($s1)
    ctx->pc = 0x16cea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ceac: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x16ceacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x16ceb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ceb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ceb4: 0xc7848020  lwc1        $f4, -0x7FE0($gp)
    ctx->pc = 0x16ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16ceb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16cebc: 0x460208c3  div.s       $f3, $f1, $f2
    ctx->pc = 0x16cebcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x16cec0: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16cec0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x16cec4: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x16cec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x16cec8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x16cec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x16cecc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16ceccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16ced0: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x16ced0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x16ced4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16ced4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16ced8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16ced8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cedc: 0x0  nop
    ctx->pc = 0x16cedcu;
    // NOP
    // 0x16cee0: 0x45010059  bc1t        . + 4 + (0x59 << 2)
    ctx->pc = 0x16CEE0u;
    {
        const bool branch_taken_0x16cee0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CEE0u;
        // 0x16cee4: 0x80640023  lb          $a0, 0x23($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cee0) {
            ctx->pc = 0x16D048u;
            return;
        }
    }
    ctx->pc = 0x16CEE8u;
    // 0x16cee8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CEE8u;
    {
        const bool branch_taken_0x16cee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CEE8u;
        // 0x16ceec: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cee8) {
            ctx->pc = 0x16CEF8u;
            return;
        }
    }
    ctx->pc = 0x16CEF0u;
    // 0x16cef0: 0x14640055  bne         $v1, $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x16CEF0u;
    {
        const bool branch_taken_0x16cef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x16cef0) {
            ctx->pc = 0x16D048u;
            return;
        }
    }
    ctx->pc = 0x16CEF8u;
}
