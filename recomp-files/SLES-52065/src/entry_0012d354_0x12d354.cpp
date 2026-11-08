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

// Function: entry_0012d354
// Address: 0x12d354 - 0x12d364
void entry_0012d354_0x12d354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d354_0x12d354");
#endif

    ctx->pc = 0x12d354u;

    // 0x12d354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d358: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x12D358u;
    {
        const bool branch_taken_0x12d358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D358u;
        // 0x12d35c: 0xa2230010  sb          $v1, 0x10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d358) {
            ctx->pc = 0x12D750u;
            return;
        }
    }
    ctx->pc = 0x12D360u;
    // 0x12d360: 0x3c04c360  lui         $a0, 0xC360
    ctx->pc = 0x12d360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50016 << 16));
    ctx->pc = 0x12d364u;
}
