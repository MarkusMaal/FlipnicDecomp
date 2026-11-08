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

// Function: entry_0015d55c
// Address: 0x15d55c - 0x15d58c
void entry_0015d55c_0x15d55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d55c_0x15d55c");
#endif

    ctx->pc = 0x15d55cu;

    // 0x15d55c: 0x8ec22c1c  lw          $v0, 0x2C1C($s6)
    ctx->pc = 0x15d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11292)));
    // 0x15d560: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x15d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x15d564: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x15d564u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x15d568: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x15d568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x15d56c: 0x8443000c  lh          $v1, 0xC($v0)
    ctx->pc = 0x15d56cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15d570: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15d570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15d574: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x15d574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d578: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x15d578u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d57c: 0x2629021  addu        $s2, $s3, $v0
    ctx->pc = 0x15d57cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x15d580: 0x272082a  slt         $at, $s3, $s2
    ctx->pc = 0x15d580u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x15d584: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x15D584u;
    {
        const bool branch_taken_0x15d584 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D584u;
        // 0x15d588: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d584) {
            ctx->pc = 0x15D5C8u;
            return;
        }
    }
    ctx->pc = 0x15D58Cu;
}
