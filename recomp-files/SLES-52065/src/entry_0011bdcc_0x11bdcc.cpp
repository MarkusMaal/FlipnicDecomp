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

// Function: entry_0011bdcc
// Address: 0x11bdcc - 0x11bde8
void entry_0011bdcc_0x11bdcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bdcc_0x11bdcc");
#endif

    ctx->pc = 0x11bdccu;

label_11bdcc:
    // 0x11bdcc: 0x0  nop
    ctx->pc = 0x11bdccu;
    // NOP
    // 0x11bdd0: 0x8ca40038  lw          $a0, 0x38($a1)
    ctx->pc = 0x11bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x11bdd4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BDD4u;
    {
        const bool branch_taken_0x11bdd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bdd4) {
            ctx->pc = 0x11BDE8u;
            return;
        }
    }
    ctx->pc = 0x11BDDCu;
    // 0x11bddc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x11bddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bde0: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x11BDE0u;
    {
        const bool branch_taken_0x11bde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDE0u;
        // 0x11bde4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bde0) {
            ctx->pc = 0x11BDCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bdcc;
        }
    }
    ctx->pc = 0x11BDE8u;
}
