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

// Function: entry_00168e08
// Address: 0x168e08 - 0x168e24
void entry_00168e08_0x168e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168e08_0x168e08");
#endif

    ctx->pc = 0x168e08u;

    // 0x168e08: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x168E08u;
    {
        const bool branch_taken_0x168e08 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E08u;
        // 0x168e0c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e08) {
            ctx->pc = 0x168E24u;
            return;
        }
    }
    ctx->pc = 0x168E10u;
    // 0x168e10: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x168e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x168e14: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x168e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x168e18: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x168e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x168e1c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x168e1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168e20: 0x0  nop
    ctx->pc = 0x168e20u;
    // NOP
    ctx->pc = 0x168e24u;
}
