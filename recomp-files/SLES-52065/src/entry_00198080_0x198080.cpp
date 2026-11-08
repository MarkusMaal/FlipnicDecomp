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

// Function: entry_00198080
// Address: 0x198080 - 0x198094
void entry_00198080_0x198080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198080_0x198080");
#endif

    ctx->pc = 0x198080u;

    // 0x198080: 0xaea00324  sw          $zero, 0x324($s5)
    ctx->pc = 0x198080u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 0));
    // 0x198084: 0xaea00678  sw          $zero, 0x678($s5)
    ctx->pc = 0x198084u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1656), GPR_U32(ctx, 0));
    // 0x198088: 0xaea00670  sw          $zero, 0x670($s5)
    ctx->pc = 0x198088u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 0));
    // 0x19808c: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x198090: 0x24510040  addiu       $s1, $v0, 0x40
    ctx->pc = 0x198090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x198094u;
}
