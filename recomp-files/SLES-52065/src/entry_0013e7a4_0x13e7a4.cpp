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

// Function: entry_0013e7a4
// Address: 0x13e7a4 - 0x13e7d0
void entry_0013e7a4_0x13e7a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e7a4_0x13e7a4");
#endif

    ctx->pc = 0x13e7a4u;

    // 0x13e7a4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x13E7A4u;
    {
        const bool branch_taken_0x13e7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e7a4) {
            ctx->pc = 0x13E7ECu;
            return;
        }
    }
    ctx->pc = 0x13E7ACu;
    // 0x13e7ac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13e7b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E7B0u;
    {
        const bool branch_taken_0x13e7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E7B0u;
        // 0x13e7b4: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e7b0) {
            ctx->pc = 0x13E7D0u;
            return;
        }
    }
    ctx->pc = 0x13E7B8u;
    // 0x13e7b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x13e7b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e7bc: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x13e7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e7c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13e7c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13e7c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13e7c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13e7c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13E7C8u;
    {
        const bool branch_taken_0x13e7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E7C8u;
        // 0x13e7cc: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e7c8) {
            ctx->pc = 0x13E7ECu;
            return;
        }
    }
    ctx->pc = 0x13E7D0u;
}
