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

// Function: entry_001fe394
// Address: 0x1fe394 - 0x1fe3a8
void entry_001fe394_0x1fe394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe394_0x1fe394");
#endif

    ctx->pc = 0x1fe394u;

    // 0x1fe394: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1fe394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fe398: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FE398u;
    {
        const bool branch_taken_0x1fe398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE398u;
        // 0x1fe39c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe398) {
            ctx->pc = 0x1FE414u;
            return;
        }
    }
    ctx->pc = 0x1FE3A0u;
    // 0x1fe3a0: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x1fe3a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1fe3a4: 0x0  nop
    ctx->pc = 0x1fe3a4u;
    // NOP
    ctx->pc = 0x1fe3a8u;
}
