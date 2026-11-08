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

// Function: entry_001aa5e0
// Address: 0x1aa5e0 - 0x1aa60c
void entry_001aa5e0_0x1aa5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa5e0_0x1aa5e0");
#endif

    ctx->pc = 0x1aa5e0u;

    // 0x1aa5e0: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1aa5e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aa5e4: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1AA5E4u;
    {
        const bool branch_taken_0x1aa5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa5e4) {
            ctx->pc = 0x1AA68Cu;
            return;
        }
    }
    ctx->pc = 0x1AA5ECu;
    // 0x1aa5ec: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1aa5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1aa5f0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AA5F0u;
    {
        const bool branch_taken_0x1aa5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa5f0) {
            ctx->pc = 0x1AA640u;
            return;
        }
    }
    ctx->pc = 0x1AA5F8u;
    // 0x1aa5f8: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x1aa5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x1aa5fc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA5FCu;
    {
        const bool branch_taken_0x1aa5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa5fc) {
            ctx->pc = 0x1AA60Cu;
            return;
        }
    }
    ctx->pc = 0x1AA604u;
    // 0x1aa604: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1AA604u;
    {
        const bool branch_taken_0x1aa604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa604) {
            ctx->pc = 0x1AA68Cu;
            return;
        }
    }
    ctx->pc = 0x1AA60Cu;
}
