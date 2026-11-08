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

// Function: entry_001744b4
// Address: 0x1744b4 - 0x1744c8
void entry_001744b4_0x1744b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001744b4_0x1744b4");
#endif

    ctx->pc = 0x1744b4u;

    // 0x1744b4: 0x0  nop
    ctx->pc = 0x1744b4u;
    // NOP
    // 0x1744b8: 0x2e62000c  sltiu       $v0, $s3, 0xC
    ctx->pc = 0x1744b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1744bc: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1744BCu;
    {
        const bool branch_taken_0x1744bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1744bc) {
            ctx->pc = 0x1743BCu;
            return;
        }
    }
    ctx->pc = 0x1744C4u;
    // 0x1744c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1744c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1744c8u;
}
