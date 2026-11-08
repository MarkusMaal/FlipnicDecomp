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

// Function: entry_001e88f0
// Address: 0x1e88f0 - 0x1e891c
void entry_001e88f0_0x1e88f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e88f0_0x1e88f0");
#endif

    ctx->pc = 0x1e88f0u;

    // 0x1e88f0: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1e88f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e88f4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1e88f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e88f8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e88f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e88fc: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x1e88fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e8900: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e8900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e8904: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8904u;
    {
        const bool branch_taken_0x1e8904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8904u;
        // 0x1e8908: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8904) {
            ctx->pc = 0x1E891Cu;
            return;
        }
    }
    ctx->pc = 0x1E890Cu;
    // 0x1e890c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e890cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e8910: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e8910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8914: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8914u;
    {
        const bool branch_taken_0x1e8914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8914u;
        // 0x1e8918: 0x1024023  subu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8914) {
            ctx->pc = 0x1E8924u;
            return;
        }
    }
    ctx->pc = 0x1E891Cu;
}
