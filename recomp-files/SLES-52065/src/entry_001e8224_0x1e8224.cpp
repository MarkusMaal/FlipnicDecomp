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

// Function: entry_001e8224
// Address: 0x1e8224 - 0x1e825c
void entry_001e8224_0x1e8224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8224_0x1e8224");
#endif

    ctx->pc = 0x1e8224u;

    // 0x1e8224: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1e8224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e8228: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e8228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e822c: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x1e822cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1e8230: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1e8230u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e8234: 0x1420007f  bnez        $at, . + 4 + (0x7F << 2)
    ctx->pc = 0x1E8234u;
    {
        const bool branch_taken_0x1e8234 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8234) {
            ctx->pc = 0x1E8434u;
            return;
        }
    }
    ctx->pc = 0x1E823Cu;
    // 0x1e823c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e823cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e8240: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1e8240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1e8244: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1e8244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e8248: 0xb22023  subu        $a0, $a1, $s2
    ctx->pc = 0x1e8248u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1e824c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E824Cu;
    {
        const bool branch_taken_0x1e824c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1E8250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E824Cu;
        // 0x1e8250: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e824c) {
            ctx->pc = 0x1E825Cu;
            return;
        }
    }
    ctx->pc = 0x1E8254u;
    // 0x1e8254: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x1e8254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1e8258: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1e8258u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    ctx->pc = 0x1e825cu;
}
