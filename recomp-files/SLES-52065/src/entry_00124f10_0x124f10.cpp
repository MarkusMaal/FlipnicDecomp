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

// Function: entry_00124f10
// Address: 0x124f10 - 0x124f30
void entry_00124f10_0x124f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124f10_0x124f10");
#endif

    ctx->pc = 0x124f10u;

    // 0x124f10: 0x92830021  lbu         $v1, 0x21($s4)
    ctx->pc = 0x124f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 33)));
    // 0x124f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124f18: 0xae23008c  sw          $v1, 0x8C($s1)
    ctx->pc = 0x124f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
    // 0x124f1c: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x124f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x124f20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124F20u;
    {
        const bool branch_taken_0x124f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x124F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F20u;
        // 0x124f24: 0x26950010  addiu       $s5, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f20) {
            ctx->pc = 0x124F30u;
            return;
        }
    }
    ctx->pc = 0x124F28u;
    // 0x124f28: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x124F28u;
    {
        const bool branch_taken_0x124f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F28u;
        // 0x124f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f28) {
            ctx->pc = 0x125024u;
            return;
        }
    }
    ctx->pc = 0x124F30u;
}
