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

// Function: entry_001e8980
// Address: 0x1e8980 - 0x1e89b4
void entry_001e8980_0x1e8980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8980_0x1e8980");
#endif

    ctx->pc = 0x1e8980u;

    // 0x1e8980: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1e8980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1e8984: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1e8984u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e8988: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1e8988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1e898c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1e898cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e8990: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e8990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e8994: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x1e8994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e8998: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e8998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e899c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E899Cu;
    {
        const bool branch_taken_0x1e899c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E899Cu;
        // 0x1e89a0: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e899c) {
            ctx->pc = 0x1E89B4u;
            return;
        }
    }
    ctx->pc = 0x1E89A4u;
    // 0x1e89a4: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1e89a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1e89a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e89a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E89ACu;
    {
        const bool branch_taken_0x1e89ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E89B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89ACu;
        // 0x1e89b0: 0x1024023  subu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89ac) {
            ctx->pc = 0x1E89BCu;
            return;
        }
    }
    ctx->pc = 0x1E89B4u;
}
