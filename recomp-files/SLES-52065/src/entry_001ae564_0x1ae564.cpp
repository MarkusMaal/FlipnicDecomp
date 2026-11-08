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

// Function: entry_001ae564
// Address: 0x1ae564 - 0x1ae578
void entry_001ae564_0x1ae564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae564_0x1ae564");
#endif

    ctx->pc = 0x1ae564u;

    // 0x1ae564: 0x0  nop
    ctx->pc = 0x1ae564u;
    // NOP
    // 0x1ae568: 0x8e8206c8  lw          $v0, 0x6C8($s4)
    ctx->pc = 0x1ae568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1736)));
    // 0x1ae56c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE56Cu;
    {
        const bool branch_taken_0x1ae56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE56Cu;
        // 0x1ae570: 0x26020024  addiu       $v0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae56c) {
            ctx->pc = 0x1AE578u;
            return;
        }
    }
    ctx->pc = 0x1AE574u;
    // 0x1ae574: 0xae8206c8  sw          $v0, 0x6C8($s4)
    ctx->pc = 0x1ae574u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1736), GPR_U32(ctx, 2));
    ctx->pc = 0x1ae578u;
}
