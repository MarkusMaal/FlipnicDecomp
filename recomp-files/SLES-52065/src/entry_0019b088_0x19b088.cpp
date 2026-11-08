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

// Function: entry_0019b088
// Address: 0x19b088 - 0x19b0b8
void entry_0019b088_0x19b088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b088_0x19b088");
#endif

    ctx->pc = 0x19b088u;

    // 0x19b088: 0x8e22067c  lw          $v0, 0x67C($s1)
    ctx->pc = 0x19b088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
    // 0x19b08c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19b090: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19b094: 0xac400680  sw          $zero, 0x680($v0)
    ctx->pc = 0x19b094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1664), GPR_U32(ctx, 0));
    // 0x19b098: 0x8e22067c  lw          $v0, 0x67C($s1)
    ctx->pc = 0x19b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
    // 0x19b09c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19b0a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19b0a4: 0xac5206c0  sw          $s2, 0x6C0($v0)
    ctx->pc = 0x19b0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1728), GPR_U32(ctx, 18));
    // 0x19b0a8: 0x8e22067c  lw          $v0, 0x67C($s1)
    ctx->pc = 0x19b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
    // 0x19b0ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b0b0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19B0B0u;
    {
        const bool branch_taken_0x19b0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0B0u;
        // 0x19b0b4: 0xae22067c  sw          $v0, 0x67C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0b0) {
            ctx->pc = 0x19B124u;
            return;
        }
    }
    ctx->pc = 0x19B0B8u;
}
