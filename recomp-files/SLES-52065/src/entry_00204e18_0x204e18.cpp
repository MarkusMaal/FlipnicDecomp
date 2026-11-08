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

// Function: entry_00204e18
// Address: 0x204e18 - 0x204e28
void entry_00204e18_0x204e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204e18_0x204e18");
#endif

    ctx->pc = 0x204e18u;

    // 0x204e18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204e1c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x204e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x204e20: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x204e20u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204e24: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x204e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x204e28u;
}
