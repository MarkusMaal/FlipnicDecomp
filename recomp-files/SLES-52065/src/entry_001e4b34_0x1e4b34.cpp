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

// Function: entry_001e4b34
// Address: 0x1e4b34 - 0x1e4b64
void entry_001e4b34_0x1e4b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4b34_0x1e4b34");
#endif

    ctx->pc = 0x1e4b34u;

    // 0x1e4b34: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E4B34u;
    {
        const bool branch_taken_0x1e4b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e4b34) {
            ctx->pc = 0x1E4BA4u;
            return;
        }
    }
    ctx->pc = 0x1E4B3Cu;
    // 0x1e4b3c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e4b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e4b40: 0x92082b  sltu        $at, $a0, $s2
    ctx->pc = 0x1e4b40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e4b44: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E4B44u;
    {
        const bool branch_taken_0x1e4b44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B44u;
        // 0x1e4b48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b44) {
            ctx->pc = 0x1E4B9Cu;
            return;
        }
    }
    ctx->pc = 0x1E4B4Cu;
    // 0x1e4b4c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e4b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e4b50: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x1e4b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e4b54: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4B54u;
    {
        const bool branch_taken_0x1e4b54 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B54u;
        // 0x1e4b58: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b54) {
            ctx->pc = 0x1E4B64u;
            return;
        }
    }
    ctx->pc = 0x1E4B5Cu;
    // 0x1e4b5c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e4b60: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e4b60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1e4b64u;
}
