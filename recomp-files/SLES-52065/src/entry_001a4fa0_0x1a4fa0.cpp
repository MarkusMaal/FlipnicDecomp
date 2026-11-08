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

// Function: entry_001a4fa0
// Address: 0x1a4fa0 - 0x1a4fd8
void entry_001a4fa0_0x1a4fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4fa0_0x1a4fa0");
#endif

    ctx->pc = 0x1a4fa0u;

    // 0x1a4fa0: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1a4fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4fa4: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1A4FA4u;
    {
        const bool branch_taken_0x1a4fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4fa4) {
            ctx->pc = 0x1A50CCu;
            return;
        }
    }
    ctx->pc = 0x1A4FACu;
    // 0x1a4fac: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x1a4facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1a4fb0: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1A4FB0u;
    {
        const bool branch_taken_0x1a4fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4fb0) {
            ctx->pc = 0x1A50B4u;
            return;
        }
    }
    ctx->pc = 0x1A4FB8u;
    // 0x1a4fb8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1a4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a4fbc: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1A4FBCu;
    {
        const bool branch_taken_0x1a4fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4fbc) {
            ctx->pc = 0x1A5078u;
            return;
        }
    }
    ctx->pc = 0x1A4FC4u;
    // 0x1a4fc4: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x1a4fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1a4fc8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4FC8u;
    {
        const bool branch_taken_0x1a4fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4fc8) {
            ctx->pc = 0x1A4FD8u;
            return;
        }
    }
    ctx->pc = 0x1A4FD0u;
    // 0x1a4fd0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1A4FD0u;
    {
        const bool branch_taken_0x1a4fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4fd0) {
            ctx->pc = 0x1A50CCu;
            return;
        }
    }
    ctx->pc = 0x1A4FD8u;
}
