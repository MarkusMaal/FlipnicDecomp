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

// Function: entry_001542b4
// Address: 0x1542b4 - 0x1542dc
void entry_001542b4_0x1542b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001542b4_0x1542b4");
#endif

    ctx->pc = 0x1542b4u;

    // 0x1542b4: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1542b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1542b8: 0x0  nop
    ctx->pc = 0x1542b8u;
    // NOP
    // 0x1542bc: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x1542bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1542c0: 0x0  nop
    ctx->pc = 0x1542c0u;
    // NOP
    // 0x1542c4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1542C4u;
    {
        const bool branch_taken_0x1542c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1542C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542C4u;
        // 0x1542c8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542c4) {
            ctx->pc = 0x1542DCu;
            return;
        }
    }
    ctx->pc = 0x1542CCu;
    // 0x1542cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1542ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1542d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1542d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1542d4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1542D4u;
    {
        const bool branch_taken_0x1542d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1542d4) {
            ctx->pc = 0x1543D0u;
            return;
        }
    }
    ctx->pc = 0x1542DCu;
}
