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

// Function: entry_001b18b4
// Address: 0x1b18b4 - 0x1b18d8
void entry_001b18b4_0x1b18b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b18b4_0x1b18b4");
#endif

    ctx->pc = 0x1b18b4u;

    // 0x1b18b4: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x1b18b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1b18b8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1b18b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b18bc: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B18BCu;
    {
        const bool branch_taken_0x1b18bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18BCu;
        // 0x1b18c0: 0x240a0080  addiu       $t2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18bc) {
            ctx->pc = 0x1B18F8u;
            return;
        }
    }
    ctx->pc = 0x1B18C4u;
    // 0x1b18c4: 0xb1202a  slt         $a0, $a1, $s1
    ctx->pc = 0x1b18c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b18c8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B18C8u;
    {
        const bool branch_taken_0x1b18c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b18c8) {
            ctx->pc = 0x1B18D8u;
            return;
        }
    }
    ctx->pc = 0x1B18D0u;
    // 0x1b18d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B18D0u;
    {
        const bool branch_taken_0x1b18d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b18d0) {
            ctx->pc = 0x1B18F4u;
            return;
        }
    }
    ctx->pc = 0x1B18D8u;
}
