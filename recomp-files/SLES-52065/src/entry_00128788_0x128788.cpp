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

// Function: entry_00128788
// Address: 0x128788 - 0x128798
void entry_00128788_0x128788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128788_0x128788");
#endif

    ctx->pc = 0x128788u;

    // 0x128788: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128788u;
    {
        const bool branch_taken_0x128788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128788u;
        // 0x12878c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128788) {
            ctx->pc = 0x128798u;
            return;
        }
    }
    ctx->pc = 0x128790u;
    // 0x128790: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x128790u;
    {
        const bool branch_taken_0x128790 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x128790) {
            ctx->pc = 0x1287A4u;
            return;
        }
    }
    ctx->pc = 0x128798u;
}
