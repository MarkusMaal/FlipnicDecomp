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

// Function: entry_0013c950
// Address: 0x13c950 - 0x13c95c
void entry_0013c950_0x13c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c950_0x13c950");
#endif

    ctx->pc = 0x13c950u;

    // 0x13c950: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x13C950u;
    {
        const bool branch_taken_0x13c950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C950u;
        // 0x13c954: 0xae230184  sw          $v1, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c950) {
            ctx->pc = 0x13C9B0u;
            return;
        }
    }
    ctx->pc = 0x13C958u;
    // 0x13c958: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13c958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x13c95cu;
}
