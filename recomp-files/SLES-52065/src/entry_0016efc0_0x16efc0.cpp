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

// Function: entry_0016efc0
// Address: 0x16efc0 - 0x16efe8
void entry_0016efc0_0x16efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016efc0_0x16efc0");
#endif

    ctx->pc = 0x16efc0u;

    // 0x16efc0: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x16efc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16efc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16efc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16efc8: 0x0  nop
    ctx->pc = 0x16efc8u;
    // NOP
    // 0x16efcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16efccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16efd0: 0x0  nop
    ctx->pc = 0x16efd0u;
    // NOP
    // 0x16efd4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16EFD4u;
    {
        const bool branch_taken_0x16efd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFD4u;
        // 0x16efd8: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16efd4) {
            ctx->pc = 0x16EFE8u;
            return;
        }
    }
    ctx->pc = 0x16EFDCu;
    // 0x16efdc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x16efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x16efe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16EFE0u;
    {
        const bool branch_taken_0x16efe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFE0u;
        // 0x16efe4: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16efe0) {
            ctx->pc = 0x16EFECu;
            return;
        }
    }
    ctx->pc = 0x16EFE8u;
}
