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

// Function: entry_00193c6c
// Address: 0x193c6c - 0x193c98
void entry_00193c6c_0x193c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193c6c_0x193c6c");
#endif

    ctx->pc = 0x193c6cu;

    // 0x193c6c: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x193C6Cu;
    {
        const bool branch_taken_0x193c6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x193C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C6Cu;
        // 0x193c70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c6c) {
            ctx->pc = 0x193D3Cu;
            return;
        }
    }
    ctx->pc = 0x193C74u;
    // 0x193c74: 0x10a30031  beq         $a1, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x193C74u;
    {
        const bool branch_taken_0x193c74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x193c74) {
            ctx->pc = 0x193D3Cu;
            return;
        }
    }
    ctx->pc = 0x193C7Cu;
    // 0x193c7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x193c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193c80: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x193C80u;
    {
        const bool branch_taken_0x193c80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x193c80) {
            ctx->pc = 0x193C98u;
            return;
        }
    }
    ctx->pc = 0x193C88u;
    // 0x193c88: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x193C88u;
    {
        const bool branch_taken_0x193c88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x193c88) {
            ctx->pc = 0x193C98u;
            return;
        }
    }
    ctx->pc = 0x193C90u;
    // 0x193c90: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x193C90u;
    {
        const bool branch_taken_0x193c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C90u;
        // 0x193c94: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c90) {
            ctx->pc = 0x193DD8u;
            return;
        }
    }
    ctx->pc = 0x193C98u;
}
