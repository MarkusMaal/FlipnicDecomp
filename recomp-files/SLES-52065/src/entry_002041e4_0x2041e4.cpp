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

// Function: entry_002041e4
// Address: 0x2041e4 - 0x2041f8
void entry_002041e4_0x2041e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002041e4_0x2041e4");
#endif

    ctx->pc = 0x2041e4u;

    // 0x2041e4: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x2041e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x2041e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2041E8u;
    {
        const bool branch_taken_0x2041e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041E8u;
        // 0x2041ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041e8) {
            ctx->pc = 0x2041F8u;
            return;
        }
    }
    ctx->pc = 0x2041F0u;
    // 0x2041f0: 0x37c20002  ori         $v0, $fp, 0x2
    ctx->pc = 0x2041f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
    // 0x2041f4: 0x50f00b  movn        $fp, $v0, $s0
    ctx->pc = 0x2041f4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
    ctx->pc = 0x2041f8u;
}
