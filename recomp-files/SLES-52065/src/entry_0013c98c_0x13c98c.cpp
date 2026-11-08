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

// Function: entry_0013c98c
// Address: 0x13c98c - 0x13c994
void entry_0013c98c_0x13c98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c98c_0x13c98c");
#endif

    ctx->pc = 0x13c98cu;

    // 0x13c98c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13C98Cu;
    {
        const bool branch_taken_0x13c98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C98Cu;
        // 0x13c990: 0xae240184  sw          $a0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c98c) {
            ctx->pc = 0x13C9B0u;
            return;
        }
    }
    ctx->pc = 0x13C994u;
}
