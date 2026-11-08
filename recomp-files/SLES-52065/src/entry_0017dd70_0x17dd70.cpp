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

// Function: entry_0017dd70
// Address: 0x17dd70 - 0x17dd98
void entry_0017dd70_0x17dd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dd70_0x17dd70");
#endif

    ctx->pc = 0x17dd70u;

    // 0x17dd70: 0xac85101c  sw          $a1, 0x101C($a0)
    ctx->pc = 0x17dd70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4124), GPR_U32(ctx, 5));
    // 0x17dd74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17dd78: 0x14e30007  bne         $a3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17DD78u;
    {
        const bool branch_taken_0x17dd78 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x17DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD78u;
        // 0x17dd7c: 0xac861020  sw          $a2, 0x1020($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4128), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd78) {
            ctx->pc = 0x17DD98u;
            return;
        }
    }
    ctx->pc = 0x17DD80u;
    // 0x17dd80: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x17dd80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x17dd84: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x17dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17dd88: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x17dd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17dd8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17dd90: 0x8c67001c  lw          $a3, 0x1C($v1)
    ctx->pc = 0x17dd90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x17dd94: 0x0  nop
    ctx->pc = 0x17dd94u;
    // NOP
    ctx->pc = 0x17dd98u;
}
