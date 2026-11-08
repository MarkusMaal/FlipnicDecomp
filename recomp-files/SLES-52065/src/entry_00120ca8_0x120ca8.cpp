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

// Function: entry_00120ca8
// Address: 0x120ca8 - 0x120cbc
void entry_00120ca8_0x120ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120ca8_0x120ca8");
#endif

    ctx->pc = 0x120ca8u;

    // 0x120ca8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x120ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x120cac: 0x1603001e  bne         $s0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x120CACu;
    {
        const bool branch_taken_0x120cac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x120CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CACu;
        // 0x120cb0: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120cac) {
            ctx->pc = 0x120D28u;
            return;
        }
    }
    ctx->pc = 0x120CB4u;
    // 0x120cb4: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x120CB4u;
    {
        const bool branch_taken_0x120cb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CB4u;
        // 0x120cb8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120cb4) {
            ctx->pc = 0x120D28u;
            return;
        }
    }
    ctx->pc = 0x120CBCu;
}
