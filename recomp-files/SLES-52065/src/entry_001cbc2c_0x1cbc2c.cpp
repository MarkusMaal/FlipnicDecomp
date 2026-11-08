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

// Function: entry_001cbc2c
// Address: 0x1cbc2c - 0x1cbc40
void entry_001cbc2c_0x1cbc2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbc2c_0x1cbc2c");
#endif

    ctx->pc = 0x1cbc2cu;

    // 0x1cbc2c: 0x90631684  lbu         $v1, 0x1684($v1)
    ctx->pc = 0x1cbc2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5764)));
    // 0x1cbc30: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1cbc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1cbc34: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBC34u;
    {
        const bool branch_taken_0x1cbc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbc34) {
            ctx->pc = 0x1CBC40u;
            return;
        }
    }
    ctx->pc = 0x1CBC3Cu;
    // 0x1cbc3c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1cbc3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cbc40u;
}
