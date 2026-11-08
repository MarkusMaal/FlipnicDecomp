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

// Function: entry_001238b4
// Address: 0x1238b4 - 0x123910
void entry_001238b4_0x1238b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001238b4_0x1238b4");
#endif

    ctx->pc = 0x1238b4u;

    // 0x1238b4: 0x0  nop
    ctx->pc = 0x1238b4u;
    // NOP
    // 0x1238b8: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1238B8u;
    {
        const bool branch_taken_0x1238b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1238b8) {
            ctx->pc = 0x123910u;
            return;
        }
    }
    ctx->pc = 0x1238C0u;
    // 0x1238c0: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x1238c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1238c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1238c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1238c8: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x1238c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1238cc: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x1238ccu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1238d0: 0x14c5000f  bne         $a2, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1238D0u;
    {
        const bool branch_taken_0x1238d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1238d0) {
            ctx->pc = 0x123910u;
            return;
        }
    }
    ctx->pc = 0x1238D8u;
    // 0x1238d8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1238d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1238dc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1238dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1238e0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1238e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1238e4: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1238e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1238e8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1238e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1238ec: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1238ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x1238f0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1238f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1238f4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1238f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1238f8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1238f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1238fc: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x1238fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x123900: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x123900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x123904: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x123904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x123908: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x123908u;
    {
        const bool branch_taken_0x123908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123908u;
        // 0x12390c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123908) {
            ctx->pc = 0x123974u;
            return;
        }
    }
    ctx->pc = 0x123910u;
}
