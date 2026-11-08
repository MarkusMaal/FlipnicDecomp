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

// Function: entry_001e5258
// Address: 0x1e5258 - 0x1e5280
void entry_001e5258_0x1e5258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5258_0x1e5258");
#endif

    ctx->pc = 0x1e5258u;

    // 0x1e5258: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e5258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e525c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E525Cu;
    {
        const bool branch_taken_0x1e525c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E525Cu;
        // 0x1e5260: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e525c) {
            ctx->pc = 0x1E52C4u;
            return;
        }
    }
    ctx->pc = 0x1E5264u;
    // 0x1e5264: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1e5264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e5268: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e5268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e526c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1e526cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5270: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5270u;
    {
        const bool branch_taken_0x1e5270 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E5274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5270u;
        // 0x1e5274: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5270) {
            ctx->pc = 0x1E5280u;
            return;
        }
    }
    ctx->pc = 0x1E5278u;
    // 0x1e5278: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e5278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e527c: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1e527cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    ctx->pc = 0x1e5280u;
}
