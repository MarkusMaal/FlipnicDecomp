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

// Function: entry_00204024
// Address: 0x204024 - 0x204030
void entry_00204024_0x204024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204024_0x204024");
#endif

    ctx->pc = 0x204024u;

    // 0x204024: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x204024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x204028: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x204028u;
    {
        const bool branch_taken_0x204028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204028u;
        // 0x20402c: 0x52a821  addu        $s5, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204028) {
            ctx->pc = 0x204054u;
            return;
        }
    }
    ctx->pc = 0x204030u;
}
