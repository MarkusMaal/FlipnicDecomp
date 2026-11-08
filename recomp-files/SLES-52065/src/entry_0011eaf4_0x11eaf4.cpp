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

// Function: entry_0011eaf4
// Address: 0x11eaf4 - 0x11eb04
void entry_0011eaf4_0x11eaf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eaf4_0x11eaf4");
#endif

    ctx->pc = 0x11eaf4u;

    // 0x11eaf4: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x11eaf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x11eaf8: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x11EAF8u;
    {
        const bool branch_taken_0x11eaf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAF8u;
        // 0x11eafc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eaf8) {
            ctx->pc = 0x11EC24u;
            return;
        }
    }
    ctx->pc = 0x11EB00u;
    // 0x11eb00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11eb00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11eb04u;
}
