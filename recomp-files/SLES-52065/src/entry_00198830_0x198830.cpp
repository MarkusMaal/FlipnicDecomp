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

// Function: entry_00198830
// Address: 0x198830 - 0x198840
void entry_00198830_0x198830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198830_0x198830");
#endif

    ctx->pc = 0x198830u;

    // 0x198830: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x198830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198834: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x198834u;
    {
        const bool branch_taken_0x198834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198834u;
        // 0x198838: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198834) {
            ctx->pc = 0x198888u;
            return;
        }
    }
    ctx->pc = 0x19883Cu;
    // 0x19883c: 0x2b09021  addu        $s2, $s5, $s0
    ctx->pc = 0x19883cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->pc = 0x198840u;
}
