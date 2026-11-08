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

// Function: entry_0013aeb4
// Address: 0x13aeb4 - 0x13aec4
void entry_0013aeb4_0x13aeb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013aeb4_0x13aeb4");
#endif

    ctx->pc = 0x13aeb4u;

    // 0x13aeb4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x13aeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x13aeb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13aeb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aebc: 0x93838094  lbu         $v1, -0x7F6C($gp)
    ctx->pc = 0x13aebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934676)));
    // 0x13aec0: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x13aec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x13aec4u;
}
