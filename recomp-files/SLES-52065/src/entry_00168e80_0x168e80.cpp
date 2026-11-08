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

// Function: entry_00168e80
// Address: 0x168e80 - 0x168e98
void entry_00168e80_0x168e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168e80_0x168e80");
#endif

    ctx->pc = 0x168e80u;

    // 0x168e80: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x168E80u;
    {
        const bool branch_taken_0x168e80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E80u;
        // 0x168e84: 0x3c03002b  lui         $v1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e80) {
            ctx->pc = 0x168E98u;
            return;
        }
    }
    ctx->pc = 0x168E88u;
    // 0x168e88: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x168e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x168e8c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x168e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x168e90: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x168e90u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168e94: 0x0  nop
    ctx->pc = 0x168e94u;
    // NOP
    ctx->pc = 0x168e98u;
}
