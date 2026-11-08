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

// Function: entry_001ad6f8
// Address: 0x1ad6f8 - 0x1ad708
void entry_001ad6f8_0x1ad6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad6f8_0x1ad6f8");
#endif

    ctx->pc = 0x1ad6f8u;

    // 0x1ad6f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ad6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ad6fc: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1ad6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ad700: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1AD700u;
    {
        const bool branch_taken_0x1ad700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD700u;
        // 0x1ad704: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad700) {
            ctx->pc = 0x1AD66Cu;
            return;
        }
    }
    ctx->pc = 0x1AD708u;
}
