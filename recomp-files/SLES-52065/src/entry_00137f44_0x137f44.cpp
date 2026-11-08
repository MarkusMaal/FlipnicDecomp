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

// Function: entry_00137f44
// Address: 0x137f44 - 0x137f60
void entry_00137f44_0x137f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137f44_0x137f44");
#endif

    ctx->pc = 0x137f44u;

    // 0x137f44: 0x0  nop
    ctx->pc = 0x137f44u;
    // NOP
    // 0x137f48: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x137f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x137f4c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x137f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x137f50: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x137F50u;
    {
        const bool branch_taken_0x137f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137f50) {
            ctx->pc = 0x137F18u;
            return;
        }
    }
    ctx->pc = 0x137F58u;
    // 0x137f58: 0xaeb00004  sw          $s0, 0x4($s5)
    ctx->pc = 0x137f58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
    // 0x137f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x137f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x137f60u;
}
