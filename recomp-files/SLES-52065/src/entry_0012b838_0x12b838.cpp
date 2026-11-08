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

// Function: entry_0012b838
// Address: 0x12b838 - 0x12b84c
void entry_0012b838_0x12b838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b838_0x12b838");
#endif

    ctx->pc = 0x12b838u;

    // 0x12b838: 0x15240004  bne         $t1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B838u;
    {
        const bool branch_taken_0x12b838 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 4));
        if (branch_taken_0x12b838) {
            ctx->pc = 0x12B84Cu;
            return;
        }
    }
    ctx->pc = 0x12B840u;
    // 0x12b840: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x12b840u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12b844: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12B844u;
    {
        const bool branch_taken_0x12b844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B844u;
        // 0x12b848: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b844) {
            ctx->pc = 0x12B864u;
            return;
        }
    }
    ctx->pc = 0x12B84Cu;
}
