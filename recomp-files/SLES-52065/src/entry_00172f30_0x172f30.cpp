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

// Function: entry_00172f30
// Address: 0x172f30 - 0x172f44
void entry_00172f30_0x172f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172f30_0x172f30");
#endif

    ctx->pc = 0x172f30u;

    // 0x172f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172f34: 0xae226020  sw          $v0, 0x6020($s1)
    ctx->pc = 0x172f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24608), GPR_U32(ctx, 2));
    // 0x172f38: 0x8e226014  lw          $v0, 0x6014($s1)
    ctx->pc = 0x172f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24596)));
    // 0x172f3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x172f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x172f40: 0xae226014  sw          $v0, 0x6014($s1)
    ctx->pc = 0x172f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
    ctx->pc = 0x172f44u;
}
