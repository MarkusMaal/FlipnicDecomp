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

// Function: entry_001362ac
// Address: 0x1362ac - 0x1362bc
void entry_001362ac_0x1362ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001362ac_0x1362ac");
#endif

    ctx->pc = 0x1362acu;

    // 0x1362ac: 0x693823  subu        $a3, $v1, $t1
    ctx->pc = 0x1362acu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1362b0: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x1362b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1362b4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1362B4u;
    {
        const bool branch_taken_0x1362b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1362B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362B4u;
        // 0x1362b8: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362b4) {
            ctx->pc = 0x1362ECu;
            return;
        }
    }
    ctx->pc = 0x1362BCu;
}
