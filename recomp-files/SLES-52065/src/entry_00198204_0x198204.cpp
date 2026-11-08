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

// Function: entry_00198204
// Address: 0x198204 - 0x198220
void entry_00198204_0x198204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198204_0x198204");
#endif

    ctx->pc = 0x198204u;

    // 0x198204: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x198204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x198208: 0x8c83067c  lw          $v1, 0x67C($a0)
    ctx->pc = 0x198208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1660)));
    // 0x19820c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19820Cu;
    {
        const bool branch_taken_0x19820c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19820c) {
            ctx->pc = 0x198220u;
            return;
        }
    }
    ctx->pc = 0x198214u;
    // 0x198214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198218: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x198218u;
    {
        const bool branch_taken_0x198218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198218u;
        // 0x19821c: 0xac83067c  sw          $v1, 0x67C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198218) {
            ctx->pc = 0x19824Cu;
            return;
        }
    }
    ctx->pc = 0x198220u;
}
