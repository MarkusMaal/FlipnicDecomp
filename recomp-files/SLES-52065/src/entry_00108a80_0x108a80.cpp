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

// Function: entry_00108a80
// Address: 0x108a80 - 0x108aa8
void entry_00108a80_0x108a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108a80_0x108a80");
#endif

    ctx->pc = 0x108a80u;

    // 0x108a80: 0x8ea62c1c  lw          $a2, 0x2C1C($s5)
    ctx->pc = 0x108a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x108a84: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x108a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x108a88: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x108a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x108a8c: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x108a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x108a90: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x108a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x108a94: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x108a94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108a98: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x108a98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x108a9c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x108A9Cu;
    {
        const bool branch_taken_0x108a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A9Cu;
        // 0x108aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a9c) {
            ctx->pc = 0x108AA8u;
            return;
        }
    }
    ctx->pc = 0x108AA4u;
    // 0x108aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x108aa8u;
}
