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

// Function: entry_0019c6d0
// Address: 0x19c6d0 - 0x19c720
void entry_0019c6d0_0x19c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c6d0_0x19c6d0");
#endif

    ctx->pc = 0x19c6d0u;

    // 0x19c6d0: 0x8e0508e8  lw          $a1, 0x8E8($s0)
    ctx->pc = 0x19c6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x19c6d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c6d8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19c6dc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x19c6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19c6e0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x19c6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19c6e4: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x19c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x19c6e8: 0x8c8401fc  lw          $a0, 0x1FC($a0)
    ctx->pc = 0x19c6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
    // 0x19c6ec: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19C6ECu;
    {
        const bool branch_taken_0x19c6ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19c6ec) {
            ctx->pc = 0x19C720u;
            return;
        }
    }
    ctx->pc = 0x19C6F4u;
    // 0x19c6f4: 0xae0308ec  sw          $v1, 0x8EC($s0)
    ctx->pc = 0x19c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2284), GPR_U32(ctx, 3));
    // 0x19c6f8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19c6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c6fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19c700: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19c700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c704: 0x0  nop
    ctx->pc = 0x19c704u;
    // NOP
    // 0x19c708: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19c708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19c70c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19c70cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19c710: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c710u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19c714: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19c714u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19c718: 0x0  nop
    ctx->pc = 0x19c718u;
    // NOP
    // 0x19c71c: 0xae030900  sw          $v1, 0x900($s0)
    ctx->pc = 0x19c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2304), GPR_U32(ctx, 3));
    ctx->pc = 0x19c720u;
}
