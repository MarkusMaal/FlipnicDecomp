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

// Function: entry_0011c5e0
// Address: 0x11c5e0 - 0x11c600
void entry_0011c5e0_0x11c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c5e0_0x11c5e0");
#endif

    ctx->pc = 0x11c5e0u;

    // 0x11c5e0: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x11c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11c5e4: 0x3c01000f  lui         $at, 0xF
    ctx->pc = 0x11c5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15 << 16));
    // 0x11c5e8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x11c5e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x11c5ec: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C5ECu;
    {
        const bool branch_taken_0x11c5ec = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5ECu;
        // 0x11c5f0: 0x811824  and         $v1, $a0, $at (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5ec) {
            ctx->pc = 0x11C600u;
            return;
        }
    }
    ctx->pc = 0x11C5F4u;
    // 0x11c5f4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11C5F4u;
    {
        const bool branch_taken_0x11c5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c5f4) {
            ctx->pc = 0x11C600u;
            return;
        }
    }
    ctx->pc = 0x11C5FCu;
    // 0x11c5fc: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x11c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    ctx->pc = 0x11c600u;
}
