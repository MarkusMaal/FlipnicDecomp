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

// Function: entry_0016b780
// Address: 0x16b780 - 0x16b7ac
void entry_0016b780_0x16b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b780_0x16b780");
#endif

    ctx->pc = 0x16b780u;

    // 0x16b780: 0xc6210290  lwc1        $f1, 0x290($s1)
    ctx->pc = 0x16b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b784: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16b784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b788: 0x0  nop
    ctx->pc = 0x16b788u;
    // NOP
    // 0x16b78c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16b78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b790: 0x0  nop
    ctx->pc = 0x16b790u;
    // NOP
    // 0x16b794: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16B794u;
    {
        const bool branch_taken_0x16b794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B794u;
        // 0x16b798: 0x3c023f35  lui         $v0, 0x3F35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16181 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b794) {
            ctx->pc = 0x16B7ACu;
            return;
        }
    }
    ctx->pc = 0x16B79Cu;
    // 0x16b79c: 0x3c02bf35  lui         $v0, 0xBF35
    ctx->pc = 0x16b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48949 << 16));
    // 0x16b7a0: 0x344204f3  ori         $v0, $v0, 0x4F3
    ctx->pc = 0x16b7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1267);
    // 0x16b7a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B7A4u;
    {
        const bool branch_taken_0x16b7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7A4u;
        // 0x16b7a8: 0xae220290  sw          $v0, 0x290($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b7a4) {
            ctx->pc = 0x16B7B4u;
            return;
        }
    }
    ctx->pc = 0x16B7ACu;
}
