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

// Function: entry_001ec618
// Address: 0x1ec618 - 0x1ec62c
void entry_001ec618_0x1ec618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec618_0x1ec618");
#endif

    ctx->pc = 0x1ec618u;

    // 0x1ec618: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC618u;
    {
        const bool branch_taken_0x1ec618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC618u;
        // 0x1ec61c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec618) {
            ctx->pc = 0x1EC62Cu;
            return;
        }
    }
    ctx->pc = 0x1EC620u;
    // 0x1ec620: 0x8c43a3b8  lw          $v1, -0x5C48($v0)
    ctx->pc = 0x1ec620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943672)));
    // 0x1ec624: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC624u;
    {
        const bool branch_taken_0x1ec624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC624u;
        // 0x1ec628: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec624) {
            ctx->pc = 0x1EC634u;
            return;
        }
    }
    ctx->pc = 0x1EC62Cu;
}
