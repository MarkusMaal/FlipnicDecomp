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

// Function: entry_001dc9d4
// Address: 0x1dc9d4 - 0x1dca00
void entry_001dc9d4_0x1dc9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc9d4_0x1dc9d4");
#endif

    ctx->pc = 0x1dc9d4u;

    // 0x1dc9d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dc9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dc9d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dc9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dc9dc: 0x0  nop
    ctx->pc = 0x1dc9dcu;
    // NOP
    // 0x1dc9e0: 0x0  nop
    ctx->pc = 0x1dc9e0u;
    // NOP
    // 0x1dc9e4: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DC9E4u;
    {
        const bool branch_taken_0x1dc9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc9e4) {
            ctx->pc = 0x1DC9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC9E4u;
            // 0x1dc9e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC9C8u;
            return;
        }
    }
    ctx->pc = 0x1DC9ECu;
    // 0x1dc9ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1dc9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dc9f0: 0x0  nop
    ctx->pc = 0x1dc9f0u;
    // NOP
    // 0x1dc9f4: 0x5444fff4  bnel        $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DC9F4u;
    {
        const bool branch_taken_0x1dc9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1dc9f4) {
            ctx->pc = 0x1DC9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC9F4u;
            // 0x1dc9f8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC9C8u;
            return;
        }
    }
    ctx->pc = 0x1DC9FCu;
    // 0x1dc9fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1dca00u;
}
