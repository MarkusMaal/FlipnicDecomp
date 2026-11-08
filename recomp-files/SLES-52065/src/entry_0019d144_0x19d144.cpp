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

// Function: entry_0019d144
// Address: 0x19d144 - 0x19d154
void entry_0019d144_0x19d144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d144_0x19d144");
#endif

    ctx->pc = 0x19d144u;

    // 0x19d144: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x19d148: 0xaea007f4  sw          $zero, 0x7F4($s5)
    ctx->pc = 0x19d148u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2036), GPR_U32(ctx, 0));
    // 0x19d14c: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x19d14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x19d150: 0xaea00670  sw          $zero, 0x670($s5)
    ctx->pc = 0x19d150u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 0));
    ctx->pc = 0x19d154u;
}
