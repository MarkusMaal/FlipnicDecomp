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

// Function: entry_001c617c
// Address: 0x1c617c - 0x1c619c
void entry_001c617c_0x1c617c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c617c_0x1c617c");
#endif

    ctx->pc = 0x1c617cu;

    // 0x1c617c: 0x8c24c688  lw          $a0, -0x3978($at)
    ctx->pc = 0x1c617cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952584)));
    // 0x1c6180: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c6180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c6184: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1c6184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x22C7F8u));
    // 0x1c6188: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6188u;
    {
        const bool branch_taken_0x1c6188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6188u;
        // 0x1c618c: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6188) {
            ctx->pc = 0x1C619Cu;
            return;
        }
    }
    ctx->pc = 0x1C6190u;
    // 0x1c6190: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1c6190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1c6194: 0x90232ebd  lbu         $v1, 0x2EBD($at)
    ctx->pc = 0x1c6194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EBDu));
    // 0x1c6198: 0x0  nop
    ctx->pc = 0x1c6198u;
    // NOP
    ctx->pc = 0x1c619cu;
}
