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

// Function: entry_0016c79c
// Address: 0x16c79c - 0x16c7c8
void entry_0016c79c_0x16c79c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c79c_0x16c79c");
#endif

    ctx->pc = 0x16c79cu;

    // 0x16c79c: 0xc620022c  lwc1        $f0, 0x22C($s1)
    ctx->pc = 0x16c79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c7a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16c7a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16c7a4: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16c7a4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16c7a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16c7ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16c7acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c7b0: 0x0  nop
    ctx->pc = 0x16c7b0u;
    // NOP
    // 0x16c7b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c7b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c7b8: 0x0  nop
    ctx->pc = 0x16c7b8u;
    // NOP
    // 0x16c7bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16C7BCu;
    {
        const bool branch_taken_0x16c7bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7BCu;
        // 0x16c7c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c7bc) {
            ctx->pc = 0x16C7C8u;
            return;
        }
    }
    ctx->pc = 0x16C7C4u;
    // 0x16c7c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16c7c8u;
}
