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

// Function: entry_0016e1fc
// Address: 0x16e1fc - 0x16e21c
void entry_0016e1fc_0x16e1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e1fc_0x16e1fc");
#endif

    ctx->pc = 0x16e1fcu;

    // 0x16e1fc: 0xa6420214  sh          $v0, 0x214($s2)
    ctx->pc = 0x16e1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 532), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e200: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x16e200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16e204: 0x80620024  lb          $v0, 0x24($v1)
    ctx->pc = 0x16e204u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x16e208: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E208u;
    {
        const bool branch_taken_0x16e208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e208) {
            ctx->pc = 0x16E21Cu;
            return;
        }
    }
    ctx->pc = 0x16E210u;
    // 0x16e210: 0x90620024  lbu         $v0, 0x24($v1)
    ctx->pc = 0x16e210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x16e214: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16E214u;
    {
        const bool branch_taken_0x16e214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E214u;
        // 0x16e218: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e214) {
            ctx->pc = 0x16E220u;
            return;
        }
    }
    ctx->pc = 0x16E21Cu;
}
