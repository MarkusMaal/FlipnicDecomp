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

// Function: entry_0019c658
// Address: 0x19c658 - 0x19c664
void entry_0019c658_0x19c658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c658_0x19c658");
#endif

    ctx->pc = 0x19c658u;

    // 0x19c658: 0xae000900  sw          $zero, 0x900($s0)
    ctx->pc = 0x19c658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2304), GPR_U32(ctx, 0));
    // 0x19c65c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x19C65Cu;
    {
        const bool branch_taken_0x19c65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C65Cu;
        // 0x19c660: 0xae0308ec  sw          $v1, 0x8EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c65c) {
            ctx->pc = 0x19C720u;
            return;
        }
    }
    ctx->pc = 0x19C664u;
}
