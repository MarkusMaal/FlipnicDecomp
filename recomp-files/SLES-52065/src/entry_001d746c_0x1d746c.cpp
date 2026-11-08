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

// Function: entry_001d746c
// Address: 0x1d746c - 0x1d7488
void entry_001d746c_0x1d746c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d746c_0x1d746c");
#endif

    ctx->pc = 0x1d746cu;

    // 0x1d746c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1d746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1d7470: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7470u;
    {
        const bool branch_taken_0x1d7470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d7470) {
            ctx->pc = 0x1D7488u;
            return;
        }
    }
    ctx->pc = 0x1D7478u;
    // 0x1d7478: 0x92c2000f  lbu         $v0, 0xF($s6)
    ctx->pc = 0x1d7478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 15)));
    // 0x1d747c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1d747cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1d7480: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D7480u;
    {
        const bool branch_taken_0x1d7480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7480) {
            ctx->pc = 0x1D74C0u;
            return;
        }
    }
    ctx->pc = 0x1D7488u;
}
