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

// Function: entry_0017e960
// Address: 0x17e960 - 0x17e974
void entry_0017e960_0x17e960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e960_0x17e960");
#endif

    ctx->pc = 0x17e960u;

    // 0x17e960: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17e960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e964: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E964u;
    {
        const bool branch_taken_0x17e964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e964) {
            ctx->pc = 0x17E974u;
            return;
        }
    }
    ctx->pc = 0x17E96Cu;
    // 0x17e96c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E96Cu;
    {
        const bool branch_taken_0x17e96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E96Cu;
        // 0x17e970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e96c) {
            ctx->pc = 0x17E97Cu;
            return;
        }
    }
    ctx->pc = 0x17E974u;
}
