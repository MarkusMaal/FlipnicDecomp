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

// Function: entry_001a8bcc
// Address: 0x1a8bcc - 0x1a8c88
void entry_001a8bcc_0x1a8bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8bcc_0x1a8bcc");
#endif

    ctx->pc = 0x1a8bccu;

    // 0x1a8bcc: 0x0  nop
    ctx->pc = 0x1a8bccu;
    // NOP
    // 0x1a8bd0: 0x2571021  addu        $v0, $s2, $s7
    ctx->pc = 0x1a8bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x1a8bd4: 0x8c430670  lw          $v1, 0x670($v0)
    ctx->pc = 0x1a8bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
    // 0x1a8bd8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a8bdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8be0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a8be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8be4: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a8be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1a8be8: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1a8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1a8bec: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x1A8BECu;
    {
        const bool branch_taken_0x1a8bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8bec) {
            ctx->pc = 0x1A8DD0u;
            return;
        }
    }
    ctx->pc = 0x1A8BF4u;
    // 0x1a8bf4: 0x8e8409b4  lw          $a0, 0x9B4($s4)
    ctx->pc = 0x1a8bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
    // 0x1a8bf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a8bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8bfc: 0x14830044  bne         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1A8BFCu;
    {
        const bool branch_taken_0x1a8bfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a8bfc) {
            ctx->pc = 0x1A8D10u;
            return;
        }
    }
    ctx->pc = 0x1A8C04u;
    // 0x1a8c04: 0x2ac10003  slti        $at, $s6, 0x3
    ctx->pc = 0x1a8c04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a8c08: 0x10200071  beqz        $at, . + 4 + (0x71 << 2)
    ctx->pc = 0x1A8C08u;
    {
        const bool branch_taken_0x1a8c08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8c08) {
            ctx->pc = 0x1A8DD0u;
            return;
        }
    }
    ctx->pc = 0x1A8C10u;
    // 0x1a8c10: 0x8e430670  lw          $v1, 0x670($s2)
    ctx->pc = 0x1a8c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x1a8c14: 0x27a400c4  addiu       $a0, $sp, 0xC4
    ctx->pc = 0x1a8c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1a8c18: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x1a8c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1a8c1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8c20: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8c24: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a8c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1a8c28: 0x8c6301d4  lw          $v1, 0x1D4($v1)
    ctx->pc = 0x1a8c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
    // 0x1a8c2c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1a8c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x1a8c30: 0x8e430680  lw          $v1, 0x680($s2)
    ctx->pc = 0x1a8c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1664)));
    // 0x1a8c34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8c38: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8c3c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a8c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1a8c40: 0x8c6301d4  lw          $v1, 0x1D4($v1)
    ctx->pc = 0x1a8c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
    // 0x1a8c44: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a8c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a8c48: 0x8e430690  lw          $v1, 0x690($s2)
    ctx->pc = 0x1a8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x1a8c4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8c50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8c54: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a8c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1a8c58: 0x8c4201d4  lw          $v0, 0x1D4($v0)
    ctx->pc = 0x1a8c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
    // 0x1a8c5c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a8c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a8c60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a8c64: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1a8c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a8c68: 0x14620059  bne         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1A8C68u;
    {
        const bool branch_taken_0x1a8c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8c68) {
            ctx->pc = 0x1A8DD0u;
            return;
        }
    }
    ctx->pc = 0x1A8C70u;
    // 0x1a8c70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a8c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8c74: 0x14620056  bne         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1A8C74u;
    {
        const bool branch_taken_0x1a8c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8c74) {
            ctx->pc = 0x1A8DD0u;
            return;
        }
    }
    ctx->pc = 0x1A8C7Cu;
    // 0x1a8c7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c80: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1A8C80u;
    {
        const bool branch_taken_0x1a8c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C80u;
        // 0x1a8c84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c80) {
            ctx->pc = 0x1A8CF8u;
            return;
        }
    }
    ctx->pc = 0x1A8C88u;
}
