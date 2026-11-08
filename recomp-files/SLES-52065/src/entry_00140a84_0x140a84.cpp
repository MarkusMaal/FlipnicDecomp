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

// Function: entry_00140a84
// Address: 0x140a84 - 0x140ab4
void entry_00140a84_0x140a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140a84_0x140a84");
#endif

    ctx->pc = 0x140a84u;

    // 0x140a84: 0x8fab0054  lw          $t3, 0x54($sp)
    ctx->pc = 0x140a84u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x140a88: 0x8faa0050  lw          $t2, 0x50($sp)
    ctx->pc = 0x140a88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140a8c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x140a8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x140a90: 0xafab0054  sw          $t3, 0x54($sp)
    ctx->pc = 0x140a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 11));
    // 0x140a94: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x140a94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140a98: 0x8d4c000c  lw          $t4, 0xC($t2)
    ctx->pc = 0x140a98u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x140a9c: 0x156c0005  bne         $t3, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x140A9Cu;
    {
        const bool branch_taken_0x140a9c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 12));
        if (branch_taken_0x140a9c) {
            ctx->pc = 0x140AB4u;
            return;
        }
    }
    ctx->pc = 0x140AA4u;
    // 0x140aa4: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x140aa4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x140aa8: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x140aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x140aac: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x140aacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x140ab0: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x140ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    ctx->pc = 0x140ab4u;
}
