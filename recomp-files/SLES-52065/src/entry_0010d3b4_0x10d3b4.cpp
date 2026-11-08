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

// Function: entry_0010d3b4
// Address: 0x10d3b4 - 0x10d3c0
void entry_0010d3b4_0x10d3b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d3b4_0x10d3b4");
#endif

    ctx->pc = 0x10d3b4u;

    // 0x10d3b4: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10D3B4u;
    {
        const bool branch_taken_0x10d3b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10d3b4) {
            ctx->pc = 0x10D3C0u;
            return;
        }
    }
    ctx->pc = 0x10D3BCu;
    // 0x10d3bc: 0xa620024e  sh          $zero, 0x24E($s1)
    ctx->pc = 0x10d3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x10d3c0u;
}
