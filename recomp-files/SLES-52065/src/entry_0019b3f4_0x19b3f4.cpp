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

// Function: entry_0019b3f4
// Address: 0x19b3f4 - 0x19b414
void entry_0019b3f4_0x19b3f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b3f4_0x19b3f4");
#endif

    ctx->pc = 0x19b3f4u;

    // 0x19b3f4: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x19b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x19b3f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b3fc: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19B3FCu;
    {
        const bool branch_taken_0x19b3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b3fc) {
            ctx->pc = 0x19B430u;
            return;
        }
    }
    ctx->pc = 0x19B404u;
    // 0x19b404: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B404u;
    {
        const bool branch_taken_0x19b404 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x19b404) {
            ctx->pc = 0x19B414u;
            return;
        }
    }
    ctx->pc = 0x19B40Cu;
    // 0x19b40c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19B40Cu;
    {
        const bool branch_taken_0x19b40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B40Cu;
        // 0x19b410: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b40c) {
            ctx->pc = 0x19B430u;
            return;
        }
    }
    ctx->pc = 0x19B414u;
}
