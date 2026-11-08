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

// Function: entry_00123478
// Address: 0x123478 - 0x12349c
void entry_00123478_0x123478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123478_0x123478");
#endif

    ctx->pc = 0x123478u;

    // 0x123478: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x123478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12347c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12347cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x123480: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x123480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x123484: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123484u;
    {
        const bool branch_taken_0x123484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123484) {
            ctx->pc = 0x12349Cu;
            return;
        }
    }
    ctx->pc = 0x12348Cu;
    // 0x12348c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x12348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123490: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x123490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x123494: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x123494u;
    {
        const bool branch_taken_0x123494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123494u;
        // 0x123498: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123494) {
            ctx->pc = 0x1234B0u;
            return;
        }
    }
    ctx->pc = 0x12349Cu;
}
