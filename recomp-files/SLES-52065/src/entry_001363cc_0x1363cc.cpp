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

// Function: entry_001363cc
// Address: 0x1363cc - 0x1363dc
void entry_001363cc_0x1363cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001363cc_0x1363cc");
#endif

    ctx->pc = 0x1363ccu;

    // 0x1363cc: 0x0  nop
    ctx->pc = 0x1363ccu;
    // NOP
    // 0x1363d0: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x1363d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1363d4: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x1363D4u;
    {
        const bool branch_taken_0x1363d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1363D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363D4u;
        // 0x1363d8: 0x3c011fff  lui         $at, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363d4) {
            ctx->pc = 0x1363ACu;
            return;
        }
    }
    ctx->pc = 0x1363DCu;
}
