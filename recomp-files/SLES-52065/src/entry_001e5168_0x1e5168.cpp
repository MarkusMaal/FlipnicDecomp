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

// Function: entry_001e5168
// Address: 0x1e5168 - 0x1e5184
void entry_001e5168_0x1e5168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5168_0x1e5168");
#endif

    ctx->pc = 0x1e5168u;

    // 0x1e5168: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1e5168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1e516c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1e516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1e5170: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e5170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1e5174: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1e5174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1e5178: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e5178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e517c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e517cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1e5180: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e5180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x1e5184u;
}
