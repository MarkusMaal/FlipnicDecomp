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

// Function: entry_00208f20
// Address: 0x208f20 - 0x208f40
void entry_00208f20_0x208f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208f20_0x208f20");
#endif

    ctx->pc = 0x208f20u;

    // 0x208f20: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x208f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x208f24: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208F24u;
    {
        const bool branch_taken_0x208f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x208f24) {
            ctx->pc = 0x208F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208F24u;
            // 0x208f28: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208F48u;
            return;
        }
    }
    ctx->pc = 0x208F2Cu;
    // 0x208f2c: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x208f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x208f30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208F30u;
    {
        const bool branch_taken_0x208f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F30u;
        // 0x208f34: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f30) {
            ctx->pc = 0x208F40u;
            return;
        }
    }
    ctx->pc = 0x208F38u;
    // 0x208f38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x208F38u;
    {
        const bool branch_taken_0x208f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F38u;
        // 0x208f3c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f38) {
            ctx->pc = 0x208F44u;
            return;
        }
    }
    ctx->pc = 0x208F40u;
}
