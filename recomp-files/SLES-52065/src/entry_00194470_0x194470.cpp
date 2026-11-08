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

// Function: entry_00194470
// Address: 0x194470 - 0x194488
void entry_00194470_0x194470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194470_0x194470");
#endif

    ctx->pc = 0x194470u;

    // 0x194470: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x194470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x194474: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x194474u;
    {
        const bool branch_taken_0x194474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194474) {
            ctx->pc = 0x194440u;
            return;
        }
    }
    ctx->pc = 0x19447Cu;
    // 0x19447c: 0xae80032c  sw          $zero, 0x32C($s4)
    ctx->pc = 0x19447cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 812), GPR_U32(ctx, 0));
    // 0x194480: 0x1000063c  b           . + 4 + (0x63C << 2)
    ctx->pc = 0x194480u;
    {
        const bool branch_taken_0x194480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194480u;
        // 0x194484: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194480) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x194488u;
}
