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

// Function: entry_00161b78
// Address: 0x161b78 - 0x161b84
void entry_00161b78_0x161b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161b78_0x161b78");
#endif

    ctx->pc = 0x161b78u;

    // 0x161b78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x161b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161b7c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x161B7Cu;
    {
        const bool branch_taken_0x161b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B7Cu;
        // 0x161b80: 0xa6030220  sh          $v1, 0x220($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b7c) {
            ctx->pc = 0x161C04u;
            return;
        }
    }
    ctx->pc = 0x161B84u;
}
