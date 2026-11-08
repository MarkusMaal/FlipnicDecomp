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

// Function: entry_001e2554
// Address: 0x1e2554 - 0x1e2580
void entry_001e2554_0x1e2554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2554_0x1e2554");
#endif

    ctx->pc = 0x1e2554u;

    // 0x1e2554: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1e2554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1e2558: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1e2558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1e255c: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x1e255cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e2560: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e2560u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e2564: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2564u;
    {
        const bool branch_taken_0x1e2564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2564u;
        // 0x1e2568: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2564) {
            ctx->pc = 0x1E2580u;
            return;
        }
    }
    ctx->pc = 0x1E256Cu;
    // 0x1e256c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e2570: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1e2570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x1e2574: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e2574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e2578: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2578u;
    {
        const bool branch_taken_0x1e2578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2578u;
        // 0x1e257c: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2578) {
            ctx->pc = 0x1E2594u;
            return;
        }
    }
    ctx->pc = 0x1E2580u;
}
