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

// Function: entry_001f0cdc
// Address: 0x1f0cdc - 0x1f0cf8
void entry_001f0cdc_0x1f0cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0cdc_0x1f0cdc");
#endif

    ctx->pc = 0x1f0cdcu;

    // 0x1f0cdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ce0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f0ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f0ce4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F0CE4u;
    {
        const bool branch_taken_0x1f0ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CE4u;
        // 0x1f0ce8: 0xa262040c  sb          $v0, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ce4) {
            ctx->pc = 0x1F0D1Cu;
            return;
        }
    }
    ctx->pc = 0x1F0CECu;
    // 0x1f0cec: 0x2666040c  addiu       $a2, $s3, 0x40C
    ctx->pc = 0x1f0cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1036));
    // 0x1f0cf0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f0cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f0cf4: 0x0  nop
    ctx->pc = 0x1f0cf4u;
    // NOP
    ctx->pc = 0x1f0cf8u;
}
