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

// Function: entry_00165e70
// Address: 0x165e70 - 0x165e94
void entry_00165e70_0x165e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165e70_0x165e70");
#endif

    ctx->pc = 0x165e70u;

    // 0x165e70: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x165e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x165e74: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x165e74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x165e78: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x165E78u;
    {
        const bool branch_taken_0x165e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E78u;
        // 0x165e7c: 0x80c6006c  lb          $a2, 0x6C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e78) {
            ctx->pc = 0x165E94u;
            return;
        }
    }
    ctx->pc = 0x165E80u;
    // 0x165e80: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x165e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x165e84: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x165e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x165e88: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x165e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x165e8c: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x165e8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165e90: 0x0  nop
    ctx->pc = 0x165e90u;
    // NOP
    ctx->pc = 0x165e94u;
}
