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

// Function: entry_001c5a78
// Address: 0x1c5a78 - 0x1c5ab4
void entry_001c5a78_0x1c5a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5a78_0x1c5a78");
#endif

    ctx->pc = 0x1c5a78u;

    // 0x1c5a78: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1c5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1c5a7c: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x1c5a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5a80: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1c5a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1c5a84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5a88: 0x0  nop
    ctx->pc = 0x1c5a88u;
    // NOP
    // 0x1c5a8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5a90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c5a90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c5a94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c5a94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c5a98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c5a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c5a9c: 0x0  nop
    ctx->pc = 0x1c5a9cu;
    // NOP
    // 0x1c5aa0: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x1c5aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    // 0x1c5aa4: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x1c5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x1c5aa8: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5AA8u;
    {
        const bool branch_taken_0x1c5aa8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1C5AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AA8u;
        // 0x1c5aac: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5aa8) {
            ctx->pc = 0x1C5AB4u;
            return;
        }
    }
    ctx->pc = 0x1C5AB0u;
    // 0x1c5ab0: 0xae800058  sw          $zero, 0x58($s4)
    ctx->pc = 0x1c5ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 0));
    ctx->pc = 0x1c5ab4u;
}
