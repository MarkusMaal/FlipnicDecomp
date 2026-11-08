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

// Function: entry_0019ed1c
// Address: 0x19ed1c - 0x19ed6c
void entry_0019ed1c_0x19ed1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ed1c_0x19ed1c");
#endif

    ctx->pc = 0x19ed1cu;

    // 0x19ed1c: 0x8e8206a0  lw          $v0, 0x6A0($s4)
    ctx->pc = 0x19ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1696)));
    // 0x19ed20: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x19ED20u;
    {
        const bool branch_taken_0x19ed20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed20) {
            ctx->pc = 0x19EE6Cu;
            return;
        }
    }
    ctx->pc = 0x19ED28u;
    // 0x19ed28: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19ED28u;
    {
        const bool branch_taken_0x19ed28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed28) {
            ctx->pc = 0x19ED6Cu;
            return;
        }
    }
    ctx->pc = 0x19ED30u;
    // 0x19ed30: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19ed30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ed34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19ed38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19ed38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ed3c: 0x0  nop
    ctx->pc = 0x19ed3cu;
    // NOP
    // 0x19ed40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ed40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19ed44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ed44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19ed48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19ed48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19ed4c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19ed4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19ed50: 0x0  nop
    ctx->pc = 0x19ed50u;
    // NOP
    // 0x19ed54: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19ed58: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x19ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ed5c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ed60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19ed64: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19ed68: 0xae82069c  sw          $v0, 0x69C($s4)
    ctx->pc = 0x19ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1692), GPR_U32(ctx, 2));
    ctx->pc = 0x19ed6cu;
}
