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

// Function: entry_00110c74
// Address: 0x110c74 - 0x110c98
void entry_00110c74_0x110c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110c74_0x110c74");
#endif

    ctx->pc = 0x110c74u;

    // 0x110c74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x110C74u;
    {
        const bool branch_taken_0x110c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110c74) {
            ctx->pc = 0x110C98u;
            return;
        }
    }
    ctx->pc = 0x110C7Cu;
    // 0x110c7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110c80: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x110c80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x110c84: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x110C84u;
    {
        const bool branch_taken_0x110c84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x110c84) {
            ctx->pc = 0x110C98u;
            return;
        }
    }
    ctx->pc = 0x110C8Cu;
    // 0x110c8c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x110c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x110c90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x110c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x110c94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x110c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x110c98u;
}
