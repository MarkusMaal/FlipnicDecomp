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

// Function: entry_0020369c
// Address: 0x20369c - 0x2036ac
void entry_0020369c_0x20369c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020369c_0x20369c");
#endif

    ctx->pc = 0x20369cu;

    // 0x20369c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20369cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2036a0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2036a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2036a4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2036A4u;
    {
        const bool branch_taken_0x2036a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2036A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036A4u;
        // 0x2036a8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036a4) {
            ctx->pc = 0x203678u;
            return;
        }
    }
    ctx->pc = 0x2036ACu;
}
