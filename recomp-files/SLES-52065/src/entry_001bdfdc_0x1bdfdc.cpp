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

// Function: entry_001bdfdc
// Address: 0x1bdfdc - 0x1be028
void entry_001bdfdc_0x1bdfdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdfdc_0x1bdfdc");
#endif

    ctx->pc = 0x1bdfdcu;

    // 0x1bdfdc: 0x0  nop
    ctx->pc = 0x1bdfdcu;
    // NOP
    // 0x1bdfe0: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x1bdfe0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bdfe4: 0x0  nop
    ctx->pc = 0x1bdfe4u;
    // NOP
    // 0x1bdfe8: 0x0  nop
    ctx->pc = 0x1bdfe8u;
    // NOP
    // 0x1bdfec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BDFECu;
    {
        const bool branch_taken_0x1bdfec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdfec) {
            ctx->pc = 0x1BDFD8u;
            return;
        }
    }
    ctx->pc = 0x1BDFF4u;
    // 0x1bdff4: 0x2531823  subu        $v1, $s2, $s3
    ctx->pc = 0x1bdff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1bdff8: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1bdff8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1bdffc: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1BDFFCu;
    {
        const bool branch_taken_0x1bdffc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdffc) {
            ctx->pc = 0x1BE0B8u;
            return;
        }
    }
    ctx->pc = 0x1BE004u;
    // 0x1be004: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1be004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1be008: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1be008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1be00c: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x1be00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1be010: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1be010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1be014: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x1be014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1be018: 0x15070014  bne         $t0, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BE018u;
    {
        const bool branch_taken_0x1be018 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1be018) {
            ctx->pc = 0x1BE06Cu;
            return;
        }
    }
    ctx->pc = 0x1BE020u;
    // 0x1be020: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BE020u;
    {
        const bool branch_taken_0x1be020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE020u;
        // 0x1be024: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be020) {
            ctx->pc = 0x1BE06Cu;
            return;
        }
    }
    ctx->pc = 0x1BE028u;
}
