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

// Function: entry_0014c750
// Address: 0x14c750 - 0x14c78c
void entry_0014c750_0x14c750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c750_0x14c750");
#endif

    ctx->pc = 0x14c750u;

    // 0x14c750: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x14c750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x14c754: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x14c754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x14c758: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14c758u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14c75c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x14C75Cu;
    {
        const bool branch_taken_0x14c75c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c75c) {
            ctx->pc = 0x14C7B0u;
            return;
        }
    }
    ctx->pc = 0x14C764u;
    // 0x14c764: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x14c764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x14c768: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14c768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14c76c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14c770: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14c770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14c774: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14c778: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x14c778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14c77c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14c780: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c784: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14C784u;
    {
        const bool branch_taken_0x14c784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C784u;
        // 0x14c788: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c784) {
            ctx->pc = 0x14C7A4u;
            return;
        }
    }
    ctx->pc = 0x14C78Cu;
}
