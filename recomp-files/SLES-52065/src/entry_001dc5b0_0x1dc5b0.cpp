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

// Function: entry_001dc5b0
// Address: 0x1dc5b0 - 0x1dc5d8
void entry_001dc5b0_0x1dc5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc5b0_0x1dc5b0");
#endif

    ctx->pc = 0x1dc5b0u;

    // 0x1dc5b0: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x1dc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x1dc5b4: 0x54520008  bnel        $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC5B4u;
    {
        const bool branch_taken_0x1dc5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1dc5b4) {
            ctx->pc = 0x1DC5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC5B4u;
            // 0x1dc5b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC5D8u;
            return;
        }
    }
    ctx->pc = 0x1DC5BCu;
    // 0x1dc5bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dc5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc5c0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1dc5c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1dc5c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC5C4u;
    {
        const bool branch_taken_0x1dc5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc5c4) {
            ctx->pc = 0x1DC5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC5C4u;
            // 0x1dc5c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC5D8u;
            return;
        }
    }
    ctx->pc = 0x1DC5CCu;
    // 0x1dc5cc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1dc5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc5d0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1dc5d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc5d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1dc5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1dc5d8u;
}
