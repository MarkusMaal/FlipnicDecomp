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

// Function: entry_00187fe0
// Address: 0x187fe0 - 0x187ff8
void entry_00187fe0_0x187fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187fe0_0x187fe0");
#endif

    ctx->pc = 0x187fe0u;

    // 0x187fe0: 0x92470000  lbu         $a3, 0x0($s2)
    ctx->pc = 0x187fe0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187fe4: 0x14e0ffe9  bnez        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x187FE4u;
    {
        const bool branch_taken_0x187fe4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x187fe4) {
            ctx->pc = 0x187F8Cu;
            return;
        }
    }
    ctx->pc = 0x187FECu;
    // 0x187fec: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x187fecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x187ff0: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x187FF0u;
    {
        const bool branch_taken_0x187ff0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x187ff0) {
            ctx->pc = 0x187F8Cu;
            return;
        }
    }
    ctx->pc = 0x187FF8u;
}
