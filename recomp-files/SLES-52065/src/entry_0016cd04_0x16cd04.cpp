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

// Function: entry_0016cd04
// Address: 0x16cd04 - 0x16cd34
void entry_0016cd04_0x16cd04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cd04_0x16cd04");
#endif

    ctx->pc = 0x16cd04u;

    // 0x16cd04: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x16cd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cd08: 0xc620022c  lwc1        $f0, 0x22C($s1)
    ctx->pc = 0x16cd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cd0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16cd0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16cd10: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16cd10u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16cd14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16cd18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16cd18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16cd1c: 0x0  nop
    ctx->pc = 0x16cd1cu;
    // NOP
    // 0x16cd20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16cd20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cd24: 0x0  nop
    ctx->pc = 0x16cd24u;
    // NOP
    // 0x16cd28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16CD28u;
    {
        const bool branch_taken_0x16cd28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD28u;
        // 0x16cd2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd28) {
            ctx->pc = 0x16CD34u;
            return;
        }
    }
    ctx->pc = 0x16CD30u;
    // 0x16cd30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16cd34u;
}
