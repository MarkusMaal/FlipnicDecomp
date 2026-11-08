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

// Function: entry_0012bc34
// Address: 0x12bc34 - 0x12bc6c
void entry_0012bc34_0x12bc34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bc34_0x12bc34");
#endif

    ctx->pc = 0x12bc34u;

    // 0x12bc34: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x12bc34u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12bc38: 0x8c890014  lw          $t1, 0x14($a0)
    ctx->pc = 0x12bc38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12bc3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12bc3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12bc40: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x12bc40u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x12bc44: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x12bc44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x12bc48: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12bc48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12bc4c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x12bc4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x12bc50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12bc50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12bc54: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x12bc54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x12bc58: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BC58u;
    {
        const bool branch_taken_0x12bc58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC58u;
        // 0x12bc5c: 0x460009c1  sub.s       $f7, $f1, $f0 (Delay Slot)
        ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc58) {
            ctx->pc = 0x12BC6Cu;
            return;
        }
    }
    ctx->pc = 0x12BC60u;
    // 0x12bc60: 0x1251821  addu        $v1, $t1, $a1
    ctx->pc = 0x12bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x12bc64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12BC64u;
    {
        const bool branch_taken_0x12bc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC64u;
        // 0x12bc68: 0xc460fffc  lwc1        $f0, -0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc64) {
            ctx->pc = 0x12BC8Cu;
            return;
        }
    }
    ctx->pc = 0x12BC6Cu;
}
