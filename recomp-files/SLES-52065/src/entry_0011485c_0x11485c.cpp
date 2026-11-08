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

// Function: entry_0011485c
// Address: 0x11485c - 0x11489c
void entry_0011485c_0x11485c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011485c_0x11485c");
#endif

    ctx->pc = 0x11485cu;

    // 0x11485c: 0x46004c8  bltz        $v1, . + 4 + (0x4C8 << 2)
    ctx->pc = 0x11485Cu;
    {
        const bool branch_taken_0x11485c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x11485c) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x114864u;
    // 0x114864: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x114864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114868: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x114868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x11486c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11486cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114870: 0x0  nop
    ctx->pc = 0x114870u;
    // NOP
    // 0x114874: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114878: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x114878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11487c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11487cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x114880: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x114880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x114884: 0x0  nop
    ctx->pc = 0x114884u;
    // NOP
    // 0x114888: 0xae420268  sw          $v0, 0x268($s2)
    ctx->pc = 0x114888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 2));
    // 0x11488c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x11488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x114890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x114894: 0x100004ba  b           . + 4 + (0x4BA << 2)
    ctx->pc = 0x114894u;
    {
        const bool branch_taken_0x114894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114894u;
        // 0x114898: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114894) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x11489Cu;
}
