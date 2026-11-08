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

// Function: entry_00194634
// Address: 0x194634 - 0x194644
void entry_00194634_0x194634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194634_0x194634");
#endif

    ctx->pc = 0x194634u;

    // 0x194634: 0x0  nop
    ctx->pc = 0x194634u;
    // NOP
    // 0x194638: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x194638u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
    // 0x19463c: 0x100005cd  b           . + 4 + (0x5CD << 2)
    ctx->pc = 0x19463Cu;
    {
        const bool branch_taken_0x19463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19463Cu;
        // 0x194640: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19463c) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x194644u;
}
