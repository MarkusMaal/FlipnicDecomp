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

// Function: entry_001a9000
// Address: 0x1a9000 - 0x1a902c
void entry_001a9000_0x1a9000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9000_0x1a9000");
#endif

    ctx->pc = 0x1a9000u;

    // 0x1a9000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a9000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9004: 0x12230011  beq         $s1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A9004u;
    {
        const bool branch_taken_0x1a9004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a9004) {
            ctx->pc = 0x1A904Cu;
            return;
        }
    }
    ctx->pc = 0x1A900Cu;
    // 0x1a900c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9010: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9010u;
    {
        const bool branch_taken_0x1a9010 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9010) {
            ctx->pc = 0x1A9038u;
            return;
        }
    }
    ctx->pc = 0x1A9018u;
    // 0x1a9018: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a9018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a901c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A901Cu;
    {
        const bool branch_taken_0x1a901c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a901c) {
            ctx->pc = 0x1A902Cu;
            return;
        }
    }
    ctx->pc = 0x1A9024u;
    // 0x1a9024: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A9024u;
    {
        const bool branch_taken_0x1a9024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9024) {
            ctx->pc = 0x1A9068u;
            return;
        }
    }
    ctx->pc = 0x1A902Cu;
}
