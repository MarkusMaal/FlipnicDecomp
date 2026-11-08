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

// Function: entry_00165ee0
// Address: 0x165ee0 - 0x165f04
void entry_00165ee0_0x165ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165ee0_0x165ee0");
#endif

    ctx->pc = 0x165ee0u;

    // 0x165ee0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x165ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x165ee4: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x165ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x165ee8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x165EE8u;
    {
        const bool branch_taken_0x165ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165EE8u;
        // 0x165eec: 0x80c6006c  lb          $a2, 0x6C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ee8) {
            ctx->pc = 0x165F04u;
            return;
        }
    }
    ctx->pc = 0x165EF0u;
    // 0x165ef0: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x165ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x165ef4: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x165ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x165ef8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x165ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x165efc: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x165efcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165f00: 0x0  nop
    ctx->pc = 0x165f00u;
    // NOP
    ctx->pc = 0x165f04u;
}
