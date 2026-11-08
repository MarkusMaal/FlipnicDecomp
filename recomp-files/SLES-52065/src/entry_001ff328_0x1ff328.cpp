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

// Function: entry_001ff328
// Address: 0x1ff328 - 0x1ff338
void entry_001ff328_0x1ff328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff328_0x1ff328");
#endif

    ctx->pc = 0x1ff328u;

    // 0x1ff328: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x1ff328u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff32c: 0x4c4821  addu        $t1, $v0, $t4
    ctx->pc = 0x1ff32cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1ff330: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1ff330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff334: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x1ff334u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    ctx->pc = 0x1ff338u;
}
