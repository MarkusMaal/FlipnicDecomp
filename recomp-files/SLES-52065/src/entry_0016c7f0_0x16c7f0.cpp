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

// Function: entry_0016c7f0
// Address: 0x16c7f0 - 0x16c828
void entry_0016c7f0_0x16c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c7f0_0x16c7f0");
#endif

    ctx->pc = 0x16c7f0u;

    // 0x16c7f0: 0xc621022c  lwc1        $f1, 0x22C($s1)
    ctx->pc = 0x16c7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c7f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16c7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c7f8: 0x0  nop
    ctx->pc = 0x16c7f8u;
    // NOP
    // 0x16c7fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16c7fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16c800: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16c800u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16c804: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16c804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16c808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16c808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c80c: 0x0  nop
    ctx->pc = 0x16c80cu;
    // NOP
    // 0x16c810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c814: 0x0  nop
    ctx->pc = 0x16c814u;
    // NOP
    // 0x16c818: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16C818u;
    {
        const bool branch_taken_0x16c818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c818) {
            ctx->pc = 0x16C828u;
            return;
        }
    }
    ctx->pc = 0x16C820u;
    // 0x16c820: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16C820u;
    {
        const bool branch_taken_0x16c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C820u;
        // 0x16c824: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c820) {
            ctx->pc = 0x16C830u;
            return;
        }
    }
    ctx->pc = 0x16C828u;
}
