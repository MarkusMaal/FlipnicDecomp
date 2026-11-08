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

// Function: entry_00205a80
// Address: 0x205a80 - 0x205a98
void entry_00205a80_0x205a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205a80_0x205a80");
#endif

    ctx->pc = 0x205a80u;

    // 0x205a80: 0x8230ffff  lb          $s0, -0x1($s1)
    ctx->pc = 0x205a80u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
    // 0x205a84: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x205a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x205a88: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205A88u;
    {
        const bool branch_taken_0x205a88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x205A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A88u;
        // 0x205a8c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a88) {
            ctx->pc = 0x205A98u;
            return;
        }
    }
    ctx->pc = 0x205A90u;
    // 0x205a90: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x205A90u;
    {
        const bool branch_taken_0x205a90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x205A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A90u;
        // 0x205a94: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a90) {
            ctx->pc = 0x205AACu;
            return;
        }
    }
    ctx->pc = 0x205A98u;
}
