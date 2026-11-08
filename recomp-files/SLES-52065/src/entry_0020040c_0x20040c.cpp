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

// Function: entry_0020040c
// Address: 0x20040c - 0x200420
void entry_0020040c_0x20040c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020040c_0x20040c");
#endif

    ctx->pc = 0x20040cu;

    // 0x20040c: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x20040cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x200410: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x200410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x200414: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x200414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x200418: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x200418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20041c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x20041cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    ctx->pc = 0x200420u;
}
