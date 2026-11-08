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

// Function: entry_00116e50
// Address: 0x116e50 - 0x116e6c
void entry_00116e50_0x116e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e50_0x116e50");
#endif

    ctx->pc = 0x116e50u;

    // 0x116e50: 0x90ab0000  lbu         $t3, 0x0($a1)
    ctx->pc = 0x116e50u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x116e54: 0x11600005  beqz        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x116E54u;
    {
        const bool branch_taken_0x116e54 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x116e54) {
            ctx->pc = 0x116E6Cu;
            return;
        }
    }
    ctx->pc = 0x116E5Cu;
    // 0x116e5c: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x116e5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116e60: 0x316700ff  andi        $a3, $t3, 0xFF
    ctx->pc = 0x116e60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x116e64: 0x10e6fff8  beq         $a3, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x116E64u;
    {
        const bool branch_taken_0x116e64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x116e64) {
            ctx->pc = 0x116E48u;
            return;
        }
    }
    ctx->pc = 0x116E6Cu;
}
