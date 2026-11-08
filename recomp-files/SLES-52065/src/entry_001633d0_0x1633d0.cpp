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

// Function: entry_001633d0
// Address: 0x1633d0 - 0x1633ec
void entry_001633d0_0x1633d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001633d0_0x1633d0");
#endif

    ctx->pc = 0x1633d0u;

    // 0x1633d0: 0x920201f4  lbu         $v0, 0x1F4($s0)
    ctx->pc = 0x1633d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1633d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1633D4u;
    {
        const bool branch_taken_0x1633d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633D4u;
        // 0x1633d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633d4) {
            ctx->pc = 0x1633ECu;
            return;
        }
    }
    ctx->pc = 0x1633DCu;
    // 0x1633dc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1633dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1633e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1633e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1633e4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1633E4u;
    {
        const bool branch_taken_0x1633e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633E4u;
        // 0x1633e8: 0xa60301ea  sh          $v1, 0x1EA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 490), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633e4) {
            ctx->pc = 0x163508u;
            return;
        }
    }
    ctx->pc = 0x1633ECu;
}
