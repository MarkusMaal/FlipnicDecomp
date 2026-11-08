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

// Function: entry_001878c0
// Address: 0x1878c0 - 0x1878e0
void entry_001878c0_0x1878c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001878c0_0x1878c0");
#endif

    ctx->pc = 0x1878c0u;

    // 0x1878c0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1878c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1878c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1878c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1878c8: 0x0  nop
    ctx->pc = 0x1878c8u;
    // NOP
    // 0x1878cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1878CCu;
    {
        const bool branch_taken_0x1878cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1878D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878CCu;
        // 0x1878d0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878cc) {
            ctx->pc = 0x1878E0u;
            return;
        }
    }
    ctx->pc = 0x1878D4u;
    // 0x1878d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1878d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1878d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1878D8u;
    {
        const bool branch_taken_0x1878d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878D8u;
        // 0x1878dc: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878d8) {
            ctx->pc = 0x1878ECu;
            return;
        }
    }
    ctx->pc = 0x1878E0u;
}
