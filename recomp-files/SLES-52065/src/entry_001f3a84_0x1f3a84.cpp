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

// Function: entry_001f3a84
// Address: 0x1f3a84 - 0x1f3a8c
void entry_001f3a84_0x1f3a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3a84_0x1f3a84");
#endif

    ctx->pc = 0x1f3a84u;

    // 0x1f3a84: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1f3a84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f3a88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f3a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f3a8cu;
}
