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

// Function: entry_00201fc4
// Address: 0x201fc4 - 0x201fd8
void entry_00201fc4_0x201fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201fc4_0x201fc4");
#endif

    ctx->pc = 0x201fc4u;

    // 0x201fc4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x201FC4u;
    {
        const bool branch_taken_0x201fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FC4u;
        // 0x201fc8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fc4) {
            ctx->pc = 0x202000u;
            return;
        }
    }
    ctx->pc = 0x201FCCu;
    // 0x201fcc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x201FCCu;
    {
        const bool branch_taken_0x201fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FCCu;
        // 0x201fd0: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fcc) {
            ctx->pc = 0x201FF4u;
            return;
        }
    }
    ctx->pc = 0x201FD4u;
    // 0x201fd4: 0x0  nop
    ctx->pc = 0x201fd4u;
    // NOP
    ctx->pc = 0x201fd8u;
}
