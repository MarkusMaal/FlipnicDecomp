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

// Function: entry_00204184
// Address: 0x204184 - 0x204194
void entry_00204184_0x204184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204184_0x204184");
#endif

    ctx->pc = 0x204184u;

    // 0x204184: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204184u;
    {
        const bool branch_taken_0x204184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204184u;
        // 0x204188: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204184) {
            ctx->pc = 0x204194u;
            return;
        }
    }
    ctx->pc = 0x20418Cu;
    // 0x20418c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20418Cu;
    {
        const bool branch_taken_0x20418c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20418Cu;
        // 0x204190: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20418c) {
            ctx->pc = 0x204198u;
            return;
        }
    }
    ctx->pc = 0x204194u;
}
