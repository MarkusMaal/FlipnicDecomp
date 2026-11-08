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

// Function: entry_001cdfc4
// Address: 0x1cdfc4 - 0x1cdfd8
void entry_001cdfc4_0x1cdfc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdfc4_0x1cdfc4");
#endif

    ctx->pc = 0x1cdfc4u;

    // 0x1cdfc4: 0x92a3006c  lbu         $v1, 0x6C($s5)
    ctx->pc = 0x1cdfc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x1cdfc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdfcc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CDFCCu;
    {
        const bool branch_taken_0x1cdfcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CDFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFCCu;
        // 0x1cdfd0: 0x24160005  addiu       $s6, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdfcc) {
            ctx->pc = 0x1CDFD8u;
            return;
        }
    }
    ctx->pc = 0x1CDFD4u;
    // 0x1cdfd4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1cdfd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cdfd8u;
}
