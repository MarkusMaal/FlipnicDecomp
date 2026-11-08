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

// Function: entry_0016af00
// Address: 0x16af00 - 0x16af18
void entry_0016af00_0x16af00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016af00_0x16af00");
#endif

    ctx->pc = 0x16af00u;

    // 0x16af00: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x16af00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x16af04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AF04u;
    {
        const bool branch_taken_0x16af04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF04u;
        // 0x16af08: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af04) {
            ctx->pc = 0x16AF18u;
            return;
        }
    }
    ctx->pc = 0x16AF0Cu;
    // 0x16af0c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x16af0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x16af10: 0x90262eb5  lbu         $a2, 0x2EB5($at)
    ctx->pc = 0x16af10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x2B2EB5u));
    // 0x16af14: 0x0  nop
    ctx->pc = 0x16af14u;
    // NOP
    ctx->pc = 0x16af18u;
}
