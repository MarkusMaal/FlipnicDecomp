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

// Function: entry_001a204c
// Address: 0x1a204c - 0x1a2074
void entry_001a204c_0x1a204c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a204c_0x1a204c");
#endif

    ctx->pc = 0x1a204cu;

label_1a204c:
    // 0x1a204c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a204cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a2050: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1a2050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a2054: 0x0  nop
    ctx->pc = 0x1a2054u;
    // NOP
    // 0x1a2058: 0x0  nop
    ctx->pc = 0x1a2058u;
    // NOP
    // 0x1a205c: 0x0  nop
    ctx->pc = 0x1a205cu;
    // NOP
    // 0x1a2060: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A2060u;
    {
        const bool branch_taken_0x1a2060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2060) {
            ctx->pc = 0x1A204Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a204c;
        }
    }
    ctx->pc = 0x1A2068u;
    // 0x1a2068: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x1a2068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a206c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A206Cu;
    {
        const bool branch_taken_0x1a206c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a206c) {
            ctx->pc = 0x1A2090u;
            return;
        }
    }
    ctx->pc = 0x1A2074u;
}
