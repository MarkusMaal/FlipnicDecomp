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

// Function: entry_001462c4
// Address: 0x1462c4 - 0x1462e8
void entry_001462c4_0x1462c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001462c4_0x1462c4");
#endif

    ctx->pc = 0x1462c4u;

    // 0x1462c4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1462c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1462c8: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x1462c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1462cc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1462CCu;
    {
        const bool branch_taken_0x1462cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1462cc) {
            ctx->pc = 0x1462E8u;
            return;
        }
    }
    ctx->pc = 0x1462D4u;
    // 0x1462d4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1462d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1462d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1462d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1462dc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1462dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1462e0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1462E0u;
    {
        const bool branch_taken_0x1462e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1462E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1462E0u;
        // 0x1462e4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462e0) {
            ctx->pc = 0x146354u;
            return;
        }
    }
    ctx->pc = 0x1462E8u;
}
