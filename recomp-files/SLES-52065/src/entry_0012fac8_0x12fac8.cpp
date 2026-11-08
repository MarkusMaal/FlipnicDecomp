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

// Function: entry_0012fac8
// Address: 0x12fac8 - 0x12faec
void entry_0012fac8_0x12fac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fac8_0x12fac8");
#endif

    ctx->pc = 0x12fac8u;

    // 0x12fac8: 0x14620066  bne         $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x12FAC8u;
    {
        const bool branch_taken_0x12fac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FAC8u;
        // 0x12facc: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fac8) {
            ctx->pc = 0x12FC64u;
            return;
        }
    }
    ctx->pc = 0x12FAD0u;
    // 0x12fad0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12fad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12fad4: 0xa3a20370  sb          $v0, 0x370($sp)
    ctx->pc = 0x12fad4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 880), (uint8_t)GPR_U32(ctx, 2));
    // 0x12fad8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fadc: 0x113040  sll         $a2, $s1, 1
    ctx->pc = 0x12fadcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x12fae0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x12fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x12fae4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FAE4u;
    {
        const bool branch_taken_0x12fae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FAE4u;
        // 0x12fae8: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fae4) {
            ctx->pc = 0x12FB04u;
            return;
        }
    }
    ctx->pc = 0x12FAECu;
}
