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

// Function: entry_00120d84
// Address: 0x120d84 - 0x120d98
void entry_00120d84_0x120d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120d84_0x120d84");
#endif

    ctx->pc = 0x120d84u;

    // 0x120d84: 0x0  nop
    ctx->pc = 0x120d84u;
    // NOP
    // 0x120d88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120d8c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x120D8Cu;
    {
        const bool branch_taken_0x120d8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x120d8c) {
            ctx->pc = 0x120D98u;
            return;
        }
    }
    ctx->pc = 0x120D94u;
    // 0x120d94: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x120d94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x120d98u;
}
