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

// Function: entry_0017cb10
// Address: 0x17cb10 - 0x17cb30
void entry_0017cb10_0x17cb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cb10_0x17cb10");
#endif

    ctx->pc = 0x17cb10u;

    // 0x17cb10: 0xc4810224  lwc1        $f1, 0x224($a0)
    ctx->pc = 0x17cb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cb14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cb14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cb18: 0x0  nop
    ctx->pc = 0x17cb18u;
    // NOP
    // 0x17cb1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17cb1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cb20: 0x0  nop
    ctx->pc = 0x17cb20u;
    // NOP
    // 0x17cb24: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17CB24u;
    {
        const bool branch_taken_0x17cb24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB24u;
        // 0x17cb28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb24) {
            ctx->pc = 0x17CB30u;
            return;
        }
    }
    ctx->pc = 0x17CB2Cu;
    // 0x17cb2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17cb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17cb30u;
}
