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

// Function: entry_00120e04
// Address: 0x120e04 - 0x120e18
void entry_00120e04_0x120e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120e04_0x120e04");
#endif

    ctx->pc = 0x120e04u;

    // 0x120e04: 0x0  nop
    ctx->pc = 0x120e04u;
    // NOP
    // 0x120e08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120e0c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x120E0Cu;
    {
        const bool branch_taken_0x120e0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x120e0c) {
            ctx->pc = 0x120E18u;
            return;
        }
    }
    ctx->pc = 0x120E14u;
    // 0x120e14: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x120e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x120e18u;
}
