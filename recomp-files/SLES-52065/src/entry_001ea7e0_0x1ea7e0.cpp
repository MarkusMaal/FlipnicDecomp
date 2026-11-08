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

// Function: entry_001ea7e0
// Address: 0x1ea7e0 - 0x1ea7f4
void entry_001ea7e0_0x1ea7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea7e0_0x1ea7e0");
#endif

    ctx->pc = 0x1ea7e0u;

    // 0x1ea7e0: 0x32430080  andi        $v1, $s2, 0x80
    ctx->pc = 0x1ea7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
    // 0x1ea7e4: 0x1060fe03  beqz        $v1, . + 4 + (-0x1FD << 2)
    ctx->pc = 0x1EA7E4u;
    {
        const bool branch_taken_0x1ea7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea7e4) {
            ctx->pc = 0x1E9FF4u;
            return;
        }
    }
    ctx->pc = 0x1EA7ECu;
    // 0x1ea7ec: 0x1000fe01  b           . + 4 + (-0x1FF << 2)
    ctx->pc = 0x1EA7ECu;
    {
        const bool branch_taken_0x1ea7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7ECu;
        // 0x1ea7f0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7ec) {
            ctx->pc = 0x1E9FF4u;
            return;
        }
    }
    ctx->pc = 0x1EA7F4u;
}
