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

// Function: entry_00197c4c
// Address: 0x197c4c - 0x197c70
void entry_00197c4c_0x197c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197c4c_0x197c4c");
#endif

    ctx->pc = 0x197c4cu;

    // 0x197c4c: 0x0  nop
    ctx->pc = 0x197c4cu;
    // NOP
    // 0x197c50: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x197c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x197c54: 0x11260006  beq         $t1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x197C54u;
    {
        const bool branch_taken_0x197c54 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 6));
        if (branch_taken_0x197c54) {
            ctx->pc = 0x197C70u;
            return;
        }
    }
    ctx->pc = 0x197C5Cu;
    // 0x197c5c: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x197c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x197c60: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x197c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x197c64: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x197c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x197c68: 0x14c0003b  bnez        $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x197C68u;
    {
        const bool branch_taken_0x197c68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x197c68) {
            ctx->pc = 0x197D58u;
            return;
        }
    }
    ctx->pc = 0x197C70u;
}
