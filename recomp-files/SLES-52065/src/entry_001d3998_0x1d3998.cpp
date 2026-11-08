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

// Function: entry_001d3998
// Address: 0x1d3998 - 0x1d39e0
void entry_001d3998_0x1d3998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3998_0x1d3998");
#endif

    ctx->pc = 0x1d3998u;

    // 0x1d3998: 0x8e27023c  lw          $a3, 0x23C($s1)
    ctx->pc = 0x1d3998u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x1d399c: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x1d399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x1d39a0: 0xf33018  mult        $a2, $a3, $s3
    ctx->pc = 0x1d39a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d39a4: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x1d39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1d39a8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1d39a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d39ac: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1d39acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1d39b0: 0x8e250234  lw          $a1, 0x234($s1)
    ctx->pc = 0x1d39b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1d39b4: 0x30840040  andi        $a0, $a0, 0x40
    ctx->pc = 0x1d39b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x1d39b8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1d39b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1d39bc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1d39bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d39c0: 0xae25001c  sw          $a1, 0x1C($s1)
    ctx->pc = 0x1d39c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 5));
    // 0x1d39c4: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x1d39c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x1d39c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D39C8u;
    {
        const bool branch_taken_0x1d39c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39C8u;
        // 0x1d39cc: 0xae270024  sw          $a3, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39c8) {
            ctx->pc = 0x1D39E0u;
            return;
        }
    }
    ctx->pc = 0x1D39D0u;
    // 0x1d39d0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1d39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d39d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D39D4u;
    {
        const bool branch_taken_0x1d39d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D39D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39D4u;
        // 0x1d39d8: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39d4) {
            ctx->pc = 0x1D39E8u;
            return;
        }
    }
    ctx->pc = 0x1D39DCu;
    // 0x1d39dc: 0x0  nop
    ctx->pc = 0x1d39dcu;
    // NOP
    ctx->pc = 0x1d39e0u;
}
