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

// Function: entry_0018f678
// Address: 0x18f678 - 0x18f690
void entry_0018f678_0x18f678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f678_0x18f678");
#endif

    ctx->pc = 0x18f678u;

    // 0x18f678: 0x8e230318  lw          $v1, 0x318($s1)
    ctx->pc = 0x18f678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    // 0x18f67c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f680: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F680u;
    {
        const bool branch_taken_0x18f680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F680u;
        // 0x18f684: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f680) {
            ctx->pc = 0x18F690u;
            return;
        }
    }
    ctx->pc = 0x18F688u;
    // 0x18f688: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x18f688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x18f68c: 0xae220318  sw          $v0, 0x318($s1)
    ctx->pc = 0x18f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 792), GPR_U32(ctx, 2));
    ctx->pc = 0x18f690u;
}
