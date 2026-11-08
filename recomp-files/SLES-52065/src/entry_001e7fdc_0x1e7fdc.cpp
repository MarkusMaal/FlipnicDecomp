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

// Function: entry_001e7fdc
// Address: 0x1e7fdc - 0x1e7ffc
void entry_001e7fdc_0x1e7fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7fdc_0x1e7fdc");
#endif

    ctx->pc = 0x1e7fdcu;

    // 0x1e7fdc: 0x0  nop
    ctx->pc = 0x1e7fdcu;
    // NOP
    // 0x1e7fe0: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x1e7fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e7fe4: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1e7fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1e7fe8: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1e7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1e7fec: 0xa4302b  sltu        $a2, $a1, $a0
    ctx->pc = 0x1e7fecu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e7ff0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e7ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e7ff4: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E7FF4u;
    {
        const bool branch_taken_0x1e7ff4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FF4u;
        // 0x1e7ff8: 0xaea70000  sw          $a3, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ff4) {
            ctx->pc = 0x1E7FB4u;
            return;
        }
    }
    ctx->pc = 0x1E7FFCu;
}
