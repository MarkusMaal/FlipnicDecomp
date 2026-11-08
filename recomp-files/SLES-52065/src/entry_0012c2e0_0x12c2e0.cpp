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

// Function: entry_0012c2e0
// Address: 0x12c2e0 - 0x12c30c
void entry_0012c2e0_0x12c2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c2e0_0x12c2e0");
#endif

    ctx->pc = 0x12c2e0u;

    // 0x12c2e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12c2e4: 0x1073004  sllv        $a2, $a3, $t0
    ctx->pc = 0x12c2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 8) & 0x1F));
    // 0x12c2e8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x12c2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x12c2ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12C2ECu;
    {
        const bool branch_taken_0x12c2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2ECu;
        // 0x12c2f0: 0x2093021  addu        $a2, $s0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2ec) {
            ctx->pc = 0x12C324u;
            return;
        }
    }
    ctx->pc = 0x12C2F4u;
    // 0x12c2f4: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x12c2f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x12c2f8: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C2F8u;
    {
        const bool branch_taken_0x12c2f8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2F8u;
        // 0x12c2fc: 0x24ca0004  addiu       $t2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2f8) {
            ctx->pc = 0x12C30Cu;
            return;
        }
    }
    ctx->pc = 0x12C300u;
    // 0x12c300: 0xa4c20024  sh          $v0, 0x24($a2)
    ctx->pc = 0x12c300u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x12c304: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12C304u;
    {
        const bool branch_taken_0x12c304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C304u;
        // 0x12c308: 0xa5470000  sh          $a3, 0x0($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c304) {
            ctx->pc = 0x12C360u;
            return;
        }
    }
    ctx->pc = 0x12C30Cu;
}
