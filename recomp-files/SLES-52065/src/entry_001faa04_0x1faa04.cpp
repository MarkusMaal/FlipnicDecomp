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

// Function: entry_001faa04
// Address: 0x1faa04 - 0x1faa18
void entry_001faa04_0x1faa04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faa04_0x1faa04");
#endif

    ctx->pc = 0x1faa04u;

    // 0x1faa04: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1faa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1faa08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1faa08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1faa0c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1faa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1faa10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1faa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1faa14: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1faa14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    ctx->pc = 0x1faa18u;
}
