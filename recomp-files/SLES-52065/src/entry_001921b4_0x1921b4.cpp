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

// Function: entry_001921b4
// Address: 0x1921b4 - 0x1921d4
void entry_001921b4_0x1921b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001921b4_0x1921b4");
#endif

    ctx->pc = 0x1921b4u;

    // 0x1921b4: 0x0  nop
    ctx->pc = 0x1921b4u;
    // NOP
    // 0x1921b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1921B8u;
    {
        const bool branch_taken_0x1921b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1921b8) {
            ctx->pc = 0x1921D4u;
            return;
        }
    }
    ctx->pc = 0x1921C0u;
    // 0x1921c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1921c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1921c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1921c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1921c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1921c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1921cc: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1921CCu;
    {
        const bool branch_taken_0x1921cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1921D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921CCu;
        // 0x1921d0: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1921cc) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1921D4u;
}
