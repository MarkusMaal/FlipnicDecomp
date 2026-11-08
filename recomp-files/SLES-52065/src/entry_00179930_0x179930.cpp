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

// Function: entry_00179930
// Address: 0x179930 - 0x179948
void entry_00179930_0x179930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179930_0x179930");
#endif

    ctx->pc = 0x179930u;

    // 0x179930: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x179930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x179934: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x179934u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x179938: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x179938u;
    {
        const bool branch_taken_0x179938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179938u;
        // 0x17993c: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179938) {
            ctx->pc = 0x179924u;
            return;
        }
    }
    ctx->pc = 0x179940u;
    // 0x179940: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x179940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x179944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x179948u;
}
