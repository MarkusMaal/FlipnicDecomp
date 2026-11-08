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

// Function: entry_0010c820
// Address: 0x10c820 - 0x10c82c
void entry_0010c820_0x10c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c820_0x10c820");
#endif

    ctx->pc = 0x10c820u;

    // 0x10c820: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C820u;
    {
        const bool branch_taken_0x10c820 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10c820) {
            ctx->pc = 0x10C82Cu;
            return;
        }
    }
    ctx->pc = 0x10C828u;
    // 0x10c828: 0xa620024e  sh          $zero, 0x24E($s1)
    ctx->pc = 0x10c828u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x10c82cu;
}
