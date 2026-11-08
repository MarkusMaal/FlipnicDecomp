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

// Function: entry_001a119c
// Address: 0x1a119c - 0x1a11d4
void entry_001a119c_0x1a119c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a119c_0x1a119c");
#endif

    ctx->pc = 0x1a119cu;

    // 0x1a119c: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1a119cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a11a0: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A11A0u;
    {
        const bool branch_taken_0x1a11a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11a0) {
            ctx->pc = 0x1A1238u;
            return;
        }
    }
    ctx->pc = 0x1A11A8u;
    // 0x1a11a8: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1a11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1a11ac: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A11ACu;
    {
        const bool branch_taken_0x1a11ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a11ac) {
            ctx->pc = 0x1A1230u;
            return;
        }
    }
    ctx->pc = 0x1A11B4u;
    // 0x1a11b4: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x1a11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1a11b8: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A11B8u;
    {
        const bool branch_taken_0x1a11b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a11b8) {
            ctx->pc = 0x1A1214u;
            return;
        }
    }
    ctx->pc = 0x1A11C0u;
    // 0x1a11c0: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x1a11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1a11c4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A11C4u;
    {
        const bool branch_taken_0x1a11c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a11c4) {
            ctx->pc = 0x1A11D4u;
            return;
        }
    }
    ctx->pc = 0x1A11CCu;
    // 0x1a11cc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1A11CCu;
    {
        const bool branch_taken_0x1a11cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11cc) {
            ctx->pc = 0x1A1238u;
            return;
        }
    }
    ctx->pc = 0x1A11D4u;
}
