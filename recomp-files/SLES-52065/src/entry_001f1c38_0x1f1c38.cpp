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

// Function: entry_001f1c38
// Address: 0x1f1c38 - 0x1f1c48
void entry_001f1c38_0x1f1c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1c38_0x1f1c38");
#endif

    ctx->pc = 0x1f1c38u;

    // 0x1f1c38: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f1c38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1c3c: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f1c3cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f1c40: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f1c40u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f1c44: 0xae510c10  sw          $s1, 0xC10($s2)
    ctx->pc = 0x1f1c44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
    ctx->pc = 0x1f1c48u;
}
