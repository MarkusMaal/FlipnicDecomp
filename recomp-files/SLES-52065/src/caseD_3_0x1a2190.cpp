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

// Function: caseD_3
// Address: 0x1a2190 - 0x1a219c
void caseD_3_0x1a2190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1a2190");
#endif

    ctx->pc = 0x1a2190u;

    // 0x1a2190: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1a2190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a2194: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A2194u;
    {
        const bool branch_taken_0x1a2194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2194u;
        // 0x1a2198: 0xae830c7c  sw          $v1, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2194) {
            ctx->pc = 0x1A21CCu;
            return;
        }
    }
    ctx->pc = 0x1A219Cu;
}
