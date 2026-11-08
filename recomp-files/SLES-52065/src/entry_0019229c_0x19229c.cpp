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

// Function: entry_0019229c
// Address: 0x19229c - 0x1922b0
void entry_0019229c_0x19229c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019229c_0x19229c");
#endif

    ctx->pc = 0x19229cu;

    // 0x19229c: 0x0  nop
    ctx->pc = 0x19229cu;
    // NOP
    // 0x1922a0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1922a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1922a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1922a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1922a8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1922A8u;
    {
        const bool branch_taken_0x1922a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1922ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922A8u;
        // 0x1922ac: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922a8) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1922B0u;
}
