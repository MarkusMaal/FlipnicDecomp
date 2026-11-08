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

// Function: entry_0012bd3c
// Address: 0x12bd3c - 0x12bd50
void entry_0012bd3c_0x12bd3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bd3c_0x12bd3c");
#endif

    ctx->pc = 0x12bd3cu;

    // 0x12bd3c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12bd40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12bd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12bd44: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x12bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12bd48: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x12bd48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x12bd4c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x12bd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->pc = 0x12bd50u;
}
