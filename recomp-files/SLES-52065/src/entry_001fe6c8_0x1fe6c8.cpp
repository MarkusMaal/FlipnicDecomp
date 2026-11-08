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

// Function: entry_001fe6c8
// Address: 0x1fe6c8 - 0x1fe6d4
void entry_001fe6c8_0x1fe6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe6c8_0x1fe6c8");
#endif

    ctx->pc = 0x1fe6c8u;

    // 0x1fe6c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fe6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe6cc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1fe6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1fe6d0: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x1fe6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1fe6d4u;
}
