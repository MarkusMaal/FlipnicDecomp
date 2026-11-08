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

// Function: entry_0014c0f4
// Address: 0x14c0f4 - 0x14c118
void entry_0014c0f4_0x14c0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c0f4_0x14c0f4");
#endif

    ctx->pc = 0x14c0f4u;

    // 0x14c0f4: 0x0  nop
    ctx->pc = 0x14c0f4u;
    // NOP
    // 0x14c0f8: 0x8e6300b8  lw          $v1, 0xB8($s3)
    ctx->pc = 0x14c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x14c0fc: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x14c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x14c100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c108: 0x1602fff7  bne         $s0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14C108u;
    {
        const bool branch_taken_0x14c108 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c108) {
            ctx->pc = 0x14C0E8u;
            return;
        }
    }
    ctx->pc = 0x14C110u;
    // 0x14c110: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14C110u;
    {
        const bool branch_taken_0x14c110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C110u;
        // 0x14c114: 0x8e7000c8  lw          $s0, 0xC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c110) {
            ctx->pc = 0x14C14Cu;
            return;
        }
    }
    ctx->pc = 0x14C118u;
}
