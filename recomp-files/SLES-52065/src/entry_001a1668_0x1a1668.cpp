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

// Function: entry_001a1668
// Address: 0x1a1668 - 0x1a1694
void entry_001a1668_0x1a1668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1668_0x1a1668");
#endif

    ctx->pc = 0x1a1668u;

    // 0x1a1668: 0x8f86838c  lw          $a2, -0x7C74($gp)
    ctx->pc = 0x1a1668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1a166c: 0x8f848318  lw          $a0, -0x7CE8($gp)
    ctx->pc = 0x1a166cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1a1670: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x1a1670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x1a1674: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1a1674u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a1678: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1a1678u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a167c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1a167cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a1680: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1680u;
    {
        const bool branch_taken_0x1a1680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1680u;
        // 0x1a1684: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1680) {
            ctx->pc = 0x1A1694u;
            return;
        }
    }
    ctx->pc = 0x1A1688u;
    // 0x1a1688: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1a1688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1a168c: 0x90272eb5  lbu         $a3, 0x2EB5($at)
    ctx->pc = 0x1a168cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x2B2EB5u));
    // 0x1a1690: 0x0  nop
    ctx->pc = 0x1a1690u;
    // NOP
    ctx->pc = 0x1a1694u;
}
