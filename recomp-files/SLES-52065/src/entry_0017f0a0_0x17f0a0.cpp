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

// Function: entry_0017f0a0
// Address: 0x17f0a0 - 0x17f0c0
void entry_0017f0a0_0x17f0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f0a0_0x17f0a0");
#endif

    ctx->pc = 0x17f0a0u;

    // 0x17f0a0: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x17f0a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f0a4: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x17f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x17f0a8: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x17f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x17f0ac: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17f0acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17f0b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F0B0u;
    {
        const bool branch_taken_0x17f0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f0b0) {
            ctx->pc = 0x17F0C0u;
            return;
        }
    }
    ctx->pc = 0x17F0B8u;
    // 0x17f0b8: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x17f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x17f0bc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17f0bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x17f0c0u;
}
