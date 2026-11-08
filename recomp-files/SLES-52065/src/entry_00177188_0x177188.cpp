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

// Function: entry_00177188
// Address: 0x177188 - 0x177198
void entry_00177188_0x177188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177188_0x177188");
#endif

    ctx->pc = 0x177188u;

    // 0x177188: 0x2e62001c  sltiu       $v0, $s3, 0x1C
    ctx->pc = 0x177188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x17718c: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x17718Cu;
    {
        const bool branch_taken_0x17718c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17718c) {
            ctx->pc = 0x177058u;
            return;
        }
    }
    ctx->pc = 0x177194u;
    // 0x177194: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x177194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x177198u;
}
