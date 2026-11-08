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

// Function: entry_0014ec8c
// Address: 0x14ec8c - 0x14ecb8
void entry_0014ec8c_0x14ec8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ec8c_0x14ec8c");
#endif

    ctx->pc = 0x14ec8cu;

    // 0x14ec8c: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x14ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
    // 0x14ec90: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x14ec90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x14ec94: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14ec98: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x14ec98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14ec9c: 0x1420003e  bnez        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x14EC9Cu;
    {
        const bool branch_taken_0x14ec9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC9Cu;
        // 0x14eca0: 0x3c011000  lui         $at, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec9c) {
            ctx->pc = 0x14ED98u;
            return;
        }
    }
    ctx->pc = 0x14ECA4u;
    // 0x14eca4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14eca8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x14eca8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14ecac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14ECACu;
    {
        const bool branch_taken_0x14ecac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECACu;
        // 0x14ecb0: 0x27a3006c  addiu       $v1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ecac) {
            ctx->pc = 0x14ECB8u;
            return;
        }
    }
    ctx->pc = 0x14ECB4u;
    // 0x14ecb4: 0x26630004  addiu       $v1, $s3, 0x4
    ctx->pc = 0x14ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->pc = 0x14ecb8u;
}
