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

// Function: entry_001e8614
// Address: 0x1e8614 - 0x1e8630
void entry_001e8614_0x1e8614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8614_0x1e8614");
#endif

    ctx->pc = 0x1e8614u;

    // 0x1e8614: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1e8614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e8618: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1e8618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e861c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1e861cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e8620: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1e8620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e8624: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x1e8624u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e8628: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8628u;
    {
        const bool branch_taken_0x1e8628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8628) {
            ctx->pc = 0x1E8650u;
            return;
        }
    }
    ctx->pc = 0x1E8630u;
}
