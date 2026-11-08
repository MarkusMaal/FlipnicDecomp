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

// Function: entry_0014dcdc
// Address: 0x14dcdc - 0x14dcfc
void entry_0014dcdc_0x14dcdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dcdc_0x14dcdc");
#endif

    ctx->pc = 0x14dcdcu;

    // 0x14dcdc: 0x0  nop
    ctx->pc = 0x14dcdcu;
    // NOP
    // 0x14dce0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14dce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14dce4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x14dce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x14dce8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14dce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14dcec: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x14dcecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14dcf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14dcf4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DCF4u;
    {
        const bool branch_taken_0x14dcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCF4u;
        // 0x14dcf8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dcf4) {
            ctx->pc = 0x14DCCCu;
            return;
        }
    }
    ctx->pc = 0x14DCFCu;
}
