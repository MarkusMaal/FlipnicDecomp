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

// Function: entry_00143eac
// Address: 0x143eac - 0x143ebc
void entry_00143eac_0x143eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143eac_0x143eac");
#endif

    ctx->pc = 0x143eacu;

    // 0x143eac: 0x2083023  subu        $a2, $s0, $t0
    ctx->pc = 0x143eacu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x143eb0: 0xd0082b  sltu        $at, $a2, $s0
    ctx->pc = 0x143eb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x143eb4: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x143EB4u;
    {
        const bool branch_taken_0x143eb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EB4u;
        // 0x143eb8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143eb4) {
            ctx->pc = 0x143F24u;
            return;
        }
    }
    ctx->pc = 0x143EBCu;
}
