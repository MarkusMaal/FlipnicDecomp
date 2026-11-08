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

// Function: entry_00188038
// Address: 0x188038 - 0x188050
void entry_00188038_0x188038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188038_0x188038");
#endif

    ctx->pc = 0x188038u;

    // 0x188038: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x188038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x18803c: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18803Cu;
    {
        const bool branch_taken_0x18803c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x18803c) {
            ctx->pc = 0x188050u;
            return;
        }
    }
    ctx->pc = 0x188044u;
    // 0x188044: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x188044u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x188048: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188048u;
    {
        const bool branch_taken_0x188048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x188048) {
            ctx->pc = 0x188064u;
            return;
        }
    }
    ctx->pc = 0x188050u;
}
