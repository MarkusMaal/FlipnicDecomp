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

// Function: entry_0013c994
// Address: 0x13c994 - 0x13c9a0
void entry_0013c994_0x13c994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c994_0x13c994");
#endif

    ctx->pc = 0x13c994u;

    // 0x13c994: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13c994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13c998: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13C998u;
    {
        const bool branch_taken_0x13c998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C998u;
        // 0x13c99c: 0xae220184  sw          $v0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c998) {
            ctx->pc = 0x13C9B0u;
            return;
        }
    }
    ctx->pc = 0x13C9A0u;
}
