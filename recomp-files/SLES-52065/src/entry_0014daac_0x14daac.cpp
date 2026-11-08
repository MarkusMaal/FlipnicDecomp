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

// Function: entry_0014daac
// Address: 0x14daac - 0x14dabc
void entry_0014daac_0x14daac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014daac_0x14daac");
#endif

    ctx->pc = 0x14daacu;

    // 0x14daac: 0x693823  subu        $a3, $v1, $t1
    ctx->pc = 0x14daacu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x14dab0: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x14dab0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14dab4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14DAB4u;
    {
        const bool branch_taken_0x14dab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAB4u;
        // 0x14dab8: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dab4) {
            ctx->pc = 0x14DAECu;
            return;
        }
    }
    ctx->pc = 0x14DABCu;
}
