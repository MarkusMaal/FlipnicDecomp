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

// Function: entry_00170e20
// Address: 0x170e20 - 0x170e60
void entry_00170e20_0x170e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170e20_0x170e20");
#endif

    ctx->pc = 0x170e20u;

    // 0x170e20: 0xc6010258  lwc1        $f1, 0x258($s0)
    ctx->pc = 0x170e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170e24: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x170e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x170e28: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x170e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x170e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170e30: 0x0  nop
    ctx->pc = 0x170e30u;
    // NOP
    // 0x170e34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170e34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170e38: 0x0  nop
    ctx->pc = 0x170e38u;
    // NOP
    // 0x170e3c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x170E3Cu;
    {
        const bool branch_taken_0x170e3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x170E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E3Cu;
        // 0x170e40: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e3c) {
            ctx->pc = 0x170E60u;
            return;
        }
    }
    ctx->pc = 0x170E44u;
    // 0x170e44: 0x0  nop
    ctx->pc = 0x170e44u;
    // NOP
    // 0x170e48: 0x0  nop
    ctx->pc = 0x170e48u;
    // NOP
    // 0x170e4c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x170e4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x170e50: 0x0  nop
    ctx->pc = 0x170e50u;
    // NOP
    // 0x170e54: 0x0  nop
    ctx->pc = 0x170e54u;
    // NOP
    // 0x170e58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x170E58u;
    {
        const bool branch_taken_0x170e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170e58) {
            ctx->pc = 0x170E64u;
            return;
        }
    }
    ctx->pc = 0x170E60u;
}
