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

// Function: entry_001ffc38
// Address: 0x1ffc38 - 0x1ffc4c
void entry_001ffc38_0x1ffc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffc38_0x1ffc38");
#endif

    ctx->pc = 0x1ffc38u;

    // 0x1ffc38: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1ffc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1ffc3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ffc3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ffc40: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1ffc40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x1ffc44: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1ffc44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x1ffc48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ffc48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ffc4cu;
}
