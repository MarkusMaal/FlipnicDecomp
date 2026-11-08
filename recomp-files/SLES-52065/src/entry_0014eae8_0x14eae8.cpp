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

// Function: entry_0014eae8
// Address: 0x14eae8 - 0x14eaf4
void entry_0014eae8_0x14eae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014eae8_0x14eae8");
#endif

    ctx->pc = 0x14eae8u;

    // 0x14eae8: 0x251082b  sltu        $at, $s2, $s1
    ctx->pc = 0x14eae8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14eaec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EAECu;
    {
        const bool branch_taken_0x14eaec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAECu;
        // 0x14eaf0: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eaec) {
            ctx->pc = 0x14EB10u;
            return;
        }
    }
    ctx->pc = 0x14EAF4u;
}
