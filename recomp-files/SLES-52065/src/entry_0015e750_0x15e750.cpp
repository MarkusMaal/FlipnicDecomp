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

// Function: entry_0015e750
// Address: 0x15e750 - 0x15e76c
void entry_0015e750_0x15e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e750_0x15e750");
#endif

    ctx->pc = 0x15e750u;

    // 0x15e750: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15e750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15e754: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15e754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15e758: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x15e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x15e75c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x15e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x15e760: 0x2a030009  slti        $v1, $s0, 0x9
    ctx->pc = 0x15e760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x15e764: 0x1460ff60  bnez        $v1, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x15E764u;
    {
        const bool branch_taken_0x15e764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e764) {
            ctx->pc = 0x15E4E8u;
            return;
        }
    }
    ctx->pc = 0x15E76Cu;
}
