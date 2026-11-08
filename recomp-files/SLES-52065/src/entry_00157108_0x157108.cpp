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

// Function: entry_00157108
// Address: 0x157108 - 0x157114
void entry_00157108_0x157108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157108_0x157108");
#endif

    ctx->pc = 0x157108u;

    // 0x157108: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x157108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15710c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15710cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x157110: 0xac600280  sw          $zero, 0x280($v1)
    ctx->pc = 0x157110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 0));
    ctx->pc = 0x157114u;
}
