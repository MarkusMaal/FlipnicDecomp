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

// Function: entry_0014aaac
// Address: 0x14aaac - 0x14aaf0
void entry_0014aaac_0x14aaac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aaac_0x14aaac");
#endif

    ctx->pc = 0x14aaacu;

    // 0x14aaac: 0x0  nop
    ctx->pc = 0x14aaacu;
    // NOP
    // 0x14aab0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14aab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14aab4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14aab8: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x14aab8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x14aabc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14aac0: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x14aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14aac4: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14aac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14aac8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14aacc: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14AACCu;
    {
        const bool branch_taken_0x14aacc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AACCu;
        // 0x14aad0: 0x27b70768  addiu       $s7, $sp, 0x768 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aacc) {
            ctx->pc = 0x14AB10u;
            return;
        }
    }
    ctx->pc = 0x14AAD4u;
    // 0x14aad4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x14aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14aad8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14aadc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14aae0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AAE0u;
    {
        const bool branch_taken_0x14aae0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAE0u;
        // 0x14aae4: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aae0) {
            ctx->pc = 0x14AAF0u;
            return;
        }
    }
    ctx->pc = 0x14AAE8u;
    // 0x14aae8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14aaec: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x14aaecu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x14aaf0u;
}
