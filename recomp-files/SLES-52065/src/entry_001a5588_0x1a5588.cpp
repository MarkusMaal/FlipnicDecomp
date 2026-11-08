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

// Function: entry_001a5588
// Address: 0x1a5588 - 0x1a55d8
void entry_001a5588_0x1a5588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5588_0x1a5588");
#endif

    ctx->pc = 0x1a5588u;

    // 0x1a5588: 0x8e050738  lw          $a1, 0x738($s0)
    ctx->pc = 0x1a5588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
    // 0x1a558c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a558cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5590: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a5590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a5594: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1a5594u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a5598: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1a5598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a559c: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x1a559cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x1a55a0: 0x8c8401fc  lw          $a0, 0x1FC($a0)
    ctx->pc = 0x1a55a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
    // 0x1a55a4: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A55A4u;
    {
        const bool branch_taken_0x1a55a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a55a4) {
            ctx->pc = 0x1A55D8u;
            return;
        }
    }
    ctx->pc = 0x1A55ACu;
    // 0x1a55ac: 0xae03073c  sw          $v1, 0x73C($s0)
    ctx->pc = 0x1a55acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 3));
    // 0x1a55b0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a55b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a55b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1a55b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1a55b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a55b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a55bc: 0x0  nop
    ctx->pc = 0x1a55bcu;
    // NOP
    // 0x1a55c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a55c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a55c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a55c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a55c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a55c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a55cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a55ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a55d0: 0x0  nop
    ctx->pc = 0x1a55d0u;
    // NOP
    // 0x1a55d4: 0xae03074c  sw          $v1, 0x74C($s0)
    ctx->pc = 0x1a55d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1868), GPR_U32(ctx, 3));
    ctx->pc = 0x1a55d8u;
}
