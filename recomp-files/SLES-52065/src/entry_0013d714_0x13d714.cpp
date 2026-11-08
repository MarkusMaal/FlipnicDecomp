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

// Function: entry_0013d714
// Address: 0x13d714 - 0x13d71c
void entry_0013d714_0x13d714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d714_0x13d714");
#endif

    ctx->pc = 0x13d714u;

    // 0x13d714: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x13D714u;
    {
        const bool branch_taken_0x13d714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D714u;
        // 0x13d718: 0xae200184  sw          $zero, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d714) {
            ctx->pc = 0x13D840u;
            return;
        }
    }
    ctx->pc = 0x13D71Cu;
}
