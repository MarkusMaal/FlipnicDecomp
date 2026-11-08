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

// Function: entry_00114280
// Address: 0x114280 - 0x1142d0
void entry_00114280_0x114280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114280_0x114280");
#endif

    ctx->pc = 0x114280u;

    // 0x114280: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x114280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x114284: 0x8c420230  lw          $v0, 0x230($v0)
    ctx->pc = 0x114284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
    // 0x114288: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x114288u;
    {
        const bool branch_taken_0x114288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114288) {
            ctx->pc = 0x1142DCu;
            return;
        }
    }
    ctx->pc = 0x114290u;
    // 0x114290: 0x8e470274  lw          $a3, 0x274($s2)
    ctx->pc = 0x114290u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
    // 0x114294: 0x10e40011  beq         $a3, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x114294u;
    {
        const bool branch_taken_0x114294 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x114298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114294u;
        // 0x114298: 0x24480320  addiu       $t0, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114294) {
            ctx->pc = 0x1142DCu;
            return;
        }
    }
    ctx->pc = 0x11429Cu;
    // 0x11429c: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x11429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1142a0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1142A0u;
    {
        const bool branch_taken_0x1142a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1142a0) {
            ctx->pc = 0x1142DCu;
            return;
        }
    }
    ctx->pc = 0x1142A8u;
    // 0x1142a8: 0x4e1000b  bgez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1142A8u;
    {
        const bool branch_taken_0x1142a8 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x1142a8) {
            ctx->pc = 0x1142D8u;
            return;
        }
    }
    ctx->pc = 0x1142B0u;
    // 0x1142b0: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x1142b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x1142b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1142b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1142b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1142B8u;
    {
        const bool branch_taken_0x1142b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1142b8) {
            ctx->pc = 0x1142D8u;
            return;
        }
    }
    ctx->pc = 0x1142C0u;
    // 0x1142c0: 0x14a40003  bne         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1142C0u;
    {
        const bool branch_taken_0x1142c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1142c0) {
            ctx->pc = 0x1142D0u;
            return;
        }
    }
    ctx->pc = 0x1142C8u;
    // 0x1142c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1142C8u;
    {
        const bool branch_taken_0x1142c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1142CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142C8u;
        // 0x1142cc: 0xae440274  sw          $a0, 0x274($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142c8) {
            ctx->pc = 0x1142DCu;
            return;
        }
    }
    ctx->pc = 0x1142D0u;
}
