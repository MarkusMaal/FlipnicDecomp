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

// Function: entry_001437cc
// Address: 0x1437cc - 0x1437dc
void entry_001437cc_0x1437cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001437cc_0x1437cc");
#endif

    ctx->pc = 0x1437ccu;

    // 0x1437cc: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1437ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1437d0: 0x285082b  sltu        $at, $s4, $a1
    ctx->pc = 0x1437d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1437d4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1437D4u;
    {
        const bool branch_taken_0x1437d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1437d4) {
            ctx->pc = 0x14380Cu;
            return;
        }
    }
    ctx->pc = 0x1437DCu;
}
