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

// Function: entry_001fe2f0
// Address: 0x1fe2f0 - 0x1fe310
void entry_001fe2f0_0x1fe2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe2f0_0x1fe2f0");
#endif

    ctx->pc = 0x1fe2f0u;

    // 0x1fe2f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE2F0u;
    {
        const bool branch_taken_0x1fe2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2F0u;
        // 0x1fe2f4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2f0) {
            ctx->pc = 0x1FE314u;
            return;
        }
    }
    ctx->pc = 0x1FE2F8u;
    // 0x1fe2f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fe2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fe2fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE2FCu;
    {
        const bool branch_taken_0x1fe2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2FCu;
        // 0x1fe300: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2fc) {
            ctx->pc = 0x1FE318u;
            return;
        }
    }
    ctx->pc = 0x1FE304u;
    // 0x1fe304: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1fe304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fe308: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1fe308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fe30c: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x1fe30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    ctx->pc = 0x1fe310u;
}
