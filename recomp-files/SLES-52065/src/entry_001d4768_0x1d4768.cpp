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

// Function: entry_001d4768
// Address: 0x1d4768 - 0x1d47a0
void entry_001d4768_0x1d4768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4768_0x1d4768");
#endif

    ctx->pc = 0x1d4768u;

    // 0x1d4768: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x1d4768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1d476c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1d476cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d4770: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d4770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4774: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d477c: 0x30c40010  andi        $a0, $a2, 0x10
    ctx->pc = 0x1d477cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x1d4780: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d4780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d4784: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d4788: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4788u;
    {
        const bool branch_taken_0x1d4788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4788u;
        // 0x1d478c: 0x8c4300a0  lw          $v1, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4788) {
            ctx->pc = 0x1D47A0u;
            return;
        }
    }
    ctx->pc = 0x1D4790u;
    // 0x1d4790: 0x5068000d  beql        $v1, $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D4790u;
    {
        const bool branch_taken_0x1d4790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x1d4790) {
            ctx->pc = 0x1D4794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4790u;
            // 0x1d4794: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D47C8u;
            return;
        }
    }
    ctx->pc = 0x1D4798u;
    // 0x1d4798: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D4798u;
    {
        const bool branch_taken_0x1d4798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4798) {
            ctx->pc = 0x1D47C8u;
            return;
        }
    }
    ctx->pc = 0x1D47A0u;
}
