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

// Function: entry_00128d10
// Address: 0x128d10 - 0x128d44
void entry_00128d10_0x128d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128d10_0x128d10");
#endif

    ctx->pc = 0x128d10u;

    // 0x128d10: 0x1051804  sllv        $v1, $a1, $t0
    ctx->pc = 0x128d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
    // 0x128d14: 0x2a31824  and         $v1, $s5, $v1
    ctx->pc = 0x128d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
    // 0x128d18: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x128D18u;
    {
        const bool branch_taken_0x128d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D18u;
        // 0x128d1c: 0xdd1821  addu        $v1, $a2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d18) {
            ctx->pc = 0x128D50u;
            return;
        }
    }
    ctx->pc = 0x128D20u;
    // 0x128d20: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128D20u;
    {
        const bool branch_taken_0x128d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D20u;
        // 0x128d24: 0xc4620090  lwc1        $f2, 0x90($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d20) {
            ctx->pc = 0x128D44u;
            return;
        }
    }
    ctx->pc = 0x128D28u;
    // 0x128d28: 0x2863821  addu        $a3, $s4, $a2
    ctx->pc = 0x128d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x128d2c: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x128d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x128d30: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x128d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128d34: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x128d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128d38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x128d38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x128d3c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x128d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x128d40: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x128d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    ctx->pc = 0x128d44u;
}
