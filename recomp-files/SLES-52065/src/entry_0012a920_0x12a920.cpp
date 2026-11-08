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

// Function: entry_0012a920
// Address: 0x12a920 - 0x12a944
void entry_0012a920_0x12a920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a920_0x12a920");
#endif

    ctx->pc = 0x12a920u;

    // 0x12a920: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x12a920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x12a924: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12a924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a928: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x12a928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a92c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12a92cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a930: 0x0  nop
    ctx->pc = 0x12a930u;
    // NOP
    // 0x12a934: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12A934u;
    {
        const bool branch_taken_0x12a934 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A934u;
        // 0x12a938: 0x3c033c23  lui         $v1, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a934) {
            ctx->pc = 0x12A944u;
            return;
        }
    }
    ctx->pc = 0x12A93Cu;
    // 0x12a93c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x12a93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x12a940: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x12a940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    ctx->pc = 0x12a944u;
}
