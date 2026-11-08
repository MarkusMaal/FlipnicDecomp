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

// Function: entry_0015d478
// Address: 0x15d478 - 0x15d4b0
void entry_0015d478_0x15d478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d478_0x15d478");
#endif

    ctx->pc = 0x15d478u;

    // 0x15d478: 0x18c00016  blez        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x15D478u;
    {
        const bool branch_taken_0x15d478 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x15d478) {
            ctx->pc = 0x15D4D4u;
            return;
        }
    }
    ctx->pc = 0x15D480u;
    // 0x15d480: 0x8ec32c1c  lw          $v1, 0x2C1C($s6)
    ctx->pc = 0x15d480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11292)));
    // 0x15d484: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x15d484u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15d488: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15d488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15d48c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15d490: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15d490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15d494: 0x9063003f  lbu         $v1, 0x3F($v1)
    ctx->pc = 0x15d494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
    // 0x15d498: 0x1643000e  bne         $s2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x15D498u;
    {
        const bool branch_taken_0x15d498 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d498) {
            ctx->pc = 0x15D4D4u;
            return;
        }
    }
    ctx->pc = 0x15D4A0u;
    // 0x15d4a0: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D4A0u;
    {
        const bool branch_taken_0x15d4a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4A0u;
        // 0x15d4a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4a0) {
            ctx->pc = 0x15D4B0u;
            return;
        }
    }
    ctx->pc = 0x15D4A8u;
    // 0x15d4a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15D4A8u;
    {
        const bool branch_taken_0x15d4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4A8u;
        // 0x15d4ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4a8) {
            ctx->pc = 0x15D4BCu;
            return;
        }
    }
    ctx->pc = 0x15D4B0u;
}
