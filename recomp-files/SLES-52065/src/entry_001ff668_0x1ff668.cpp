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

// Function: entry_001ff668
// Address: 0x1ff668 - 0x1ff674
void entry_001ff668_0x1ff668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff668_0x1ff668");
#endif

    ctx->pc = 0x1ff668u;

    // 0x1ff668: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ff668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ff66c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff66cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ff670: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ff670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x1ff674u;
}
