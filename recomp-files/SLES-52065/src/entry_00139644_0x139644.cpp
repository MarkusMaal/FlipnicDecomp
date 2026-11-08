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

// Function: entry_00139644
// Address: 0x139644 - 0x139668
void entry_00139644_0x139644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139644_0x139644");
#endif

    ctx->pc = 0x139644u;

    // 0x139644: 0x0  nop
    ctx->pc = 0x139644u;
    // NOP
    // 0x139648: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x139648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13964c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13964cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139650: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x139650u;
    {
        const bool branch_taken_0x139650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x139654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139650u;
        // 0x139654: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139650) {
            ctx->pc = 0x139668u;
            return;
        }
    }
    ctx->pc = 0x139658u;
    // 0x139658: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x139658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x13965c: 0xae820084  sw          $v0, 0x84($s4)
    ctx->pc = 0x13965cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
    // 0x139660: 0x8e820088  lw          $v0, 0x88($s4)
    ctx->pc = 0x139660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x139664: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x139664u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
    ctx->pc = 0x139668u;
}
