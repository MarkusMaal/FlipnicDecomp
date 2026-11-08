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

// Function: entry_00202624
// Address: 0x202624 - 0x20262c
void entry_00202624_0x202624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202624_0x202624");
#endif

    ctx->pc = 0x202624u;

    // 0x202624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x202624u;
    {
        const bool branch_taken_0x202624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202624u;
        // 0x202628: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202624) {
            ctx->pc = 0x202630u;
            return;
        }
    }
    ctx->pc = 0x20262Cu;
}
