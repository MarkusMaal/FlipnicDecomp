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

// Function: entry_001e78a0
// Address: 0x1e78a0 - 0x1e78cc
void entry_001e78a0_0x1e78a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e78a0_0x1e78a0");
#endif

    ctx->pc = 0x1e78a0u;

    // 0x1e78a0: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1e78a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e78a4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1e78a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e78a8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e78a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e78ac: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x1e78acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e78b0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e78b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e78b4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E78B4u;
    {
        const bool branch_taken_0x1e78b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E78B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78B4u;
        // 0x1e78b8: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78b4) {
            ctx->pc = 0x1E78CCu;
            return;
        }
    }
    ctx->pc = 0x1E78BCu;
    // 0x1e78bc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e78bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e78c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e78c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E78C4u;
    {
        const bool branch_taken_0x1e78c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E78C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78C4u;
        // 0x1e78c8: 0x1024023  subu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78c4) {
            ctx->pc = 0x1E78D4u;
            return;
        }
    }
    ctx->pc = 0x1E78CCu;
}
