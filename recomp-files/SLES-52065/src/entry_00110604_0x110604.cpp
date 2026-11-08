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

// Function: entry_00110604
// Address: 0x110604 - 0x110628
void entry_00110604_0x110604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110604_0x110604");
#endif

    ctx->pc = 0x110604u;

    // 0x110604: 0x0  nop
    ctx->pc = 0x110604u;
    // NOP
    // 0x110608: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x110608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x11060c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11060cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110610: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x110610u;
    {
        const bool branch_taken_0x110610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110610) {
            ctx->pc = 0x1105D4u;
            return;
        }
    }
    ctx->pc = 0x110618u;
    // 0x110618: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11061c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11061cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110620: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x110620u;
    {
        const bool branch_taken_0x110620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110620u;
        // 0x110624: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110620) {
            ctx->pc = 0x110924u;
            return;
        }
    }
    ctx->pc = 0x110628u;
}
