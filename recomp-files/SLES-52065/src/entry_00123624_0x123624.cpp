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

// Function: entry_00123624
// Address: 0x123624 - 0x123648
void entry_00123624_0x123624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123624_0x123624");
#endif

    ctx->pc = 0x123624u;

    // 0x123624: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x123624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x123628: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x123628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x12362c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x123630: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x123630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x123634: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x123634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x123638: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x123638u;
    {
        const bool branch_taken_0x123638 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123638u;
        // 0x12363c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123638) {
            ctx->pc = 0x123648u;
            return;
        }
    }
    ctx->pc = 0x123640u;
    // 0x123640: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123640u;
    {
        const bool branch_taken_0x123640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123640u;
        // 0x123644: 0xaeb00000  sw          $s0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123640) {
            ctx->pc = 0x12364Cu;
            return;
        }
    }
    ctx->pc = 0x123648u;
}
