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

// Function: entry_00143140
// Address: 0x143140 - 0x143160
void entry_00143140_0x143140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143140_0x143140");
#endif

    ctx->pc = 0x143140u;

    // 0x143140: 0x8e03fffc  lw          $v1, -0x4($s0)
    ctx->pc = 0x143140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x143144: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x143144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x143148: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x143148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14314c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x14314cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x143150: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x143150u;
    {
        const bool branch_taken_0x143150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143150) {
            ctx->pc = 0x143160u;
            return;
        }
    }
    ctx->pc = 0x143158u;
    // 0x143158: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143158u;
    {
        const bool branch_taken_0x143158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143158u;
        // 0x14315c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143158) {
            ctx->pc = 0x143174u;
            return;
        }
    }
    ctx->pc = 0x143160u;
}
