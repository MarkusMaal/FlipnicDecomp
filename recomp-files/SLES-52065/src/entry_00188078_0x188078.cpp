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

// Function: entry_00188078
// Address: 0x188078 - 0x188090
void entry_00188078_0x188078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188078_0x188078");
#endif

    ctx->pc = 0x188078u;

    // 0x188078: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x188078u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18807c: 0x14a0ffea  bnez        $a1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x18807Cu;
    {
        const bool branch_taken_0x18807c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x18807c) {
            ctx->pc = 0x188028u;
            return;
        }
    }
    ctx->pc = 0x188084u;
    // 0x188084: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x188084u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x188088: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x188088u;
    {
        const bool branch_taken_0x188088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x188088) {
            ctx->pc = 0x188028u;
            return;
        }
    }
    ctx->pc = 0x188090u;
}
