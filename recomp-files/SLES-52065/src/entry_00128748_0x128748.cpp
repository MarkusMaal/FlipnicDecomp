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

// Function: entry_00128748
// Address: 0x128748 - 0x128778
void entry_00128748_0x128748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128748_0x128748");
#endif

    ctx->pc = 0x128748u;

    // 0x128748: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x128748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12874c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x12874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128750: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x128750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128754: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x128754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x128758: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x128758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12875c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x12875cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x128760: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x128760u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128764: 0x0  nop
    ctx->pc = 0x128764u;
    // NOP
    // 0x128768: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x128768u;
    {
        const bool branch_taken_0x128768 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128768u;
        // 0x12876c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128768) {
            ctx->pc = 0x128778u;
            return;
        }
    }
    ctx->pc = 0x128770u;
    // 0x128770: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x128770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x128774: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x128774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    ctx->pc = 0x128778u;
}
