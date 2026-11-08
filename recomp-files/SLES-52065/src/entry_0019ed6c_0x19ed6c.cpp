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

// Function: entry_0019ed6c
// Address: 0x19ed6c - 0x19edb8
void entry_0019ed6c_0x19ed6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ed6c_0x19ed6c");
#endif

    ctx->pc = 0x19ed6cu;

    // 0x19ed6c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19ed70: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x19ed70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
    // 0x19ed74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19ED74u;
    {
        const bool branch_taken_0x19ed74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed74) {
            ctx->pc = 0x19EDB8u;
            return;
        }
    }
    ctx->pc = 0x19ED7Cu;
    // 0x19ed7c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ed80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19ed84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19ed84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ed88: 0x0  nop
    ctx->pc = 0x19ed88u;
    // NOP
    // 0x19ed8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ed8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19ed90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ed90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19ed94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19ed94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19ed98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19ed98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19ed9c: 0x0  nop
    ctx->pc = 0x19ed9cu;
    // NOP
    // 0x19eda0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19eda4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x19eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19eda8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19edac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19edacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19edb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19edb4: 0xae82069c  sw          $v0, 0x69C($s4)
    ctx->pc = 0x19edb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1692), GPR_U32(ctx, 2));
    ctx->pc = 0x19edb8u;
}
