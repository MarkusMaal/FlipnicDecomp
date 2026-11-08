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

// Function: entry_001f3f8c
// Address: 0x1f3f8c - 0x1f3fa0
void entry_001f3f8c_0x1f3f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3f8c_0x1f3f8c");
#endif

    ctx->pc = 0x1f3f8cu;

    // 0x1f3f8c: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1f3f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1f3f90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F3F90u;
    {
        const bool branch_taken_0x1f3f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F90u;
        // 0x1f3f94: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f90) {
            ctx->pc = 0x1F3FC8u;
            return;
        }
    }
    ctx->pc = 0x1F3F98u;
    // 0x1f3f98: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x1f3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
    // 0x1f3f9c: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1f3f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    ctx->pc = 0x1f3fa0u;
}
