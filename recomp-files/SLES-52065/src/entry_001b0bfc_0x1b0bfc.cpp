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

// Function: entry_001b0bfc
// Address: 0x1b0bfc - 0x1b0c7c
void entry_001b0bfc_0x1b0bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0bfc_0x1b0bfc");
#endif

    ctx->pc = 0x1b0bfcu;

    // 0x1b0bfc: 0x0  nop
    ctx->pc = 0x1b0bfcu;
    // NOP
    // 0x1b0c00: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1b0c00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0c04: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
    ctx->pc = 0x1B0C04u;
    {
        const bool branch_taken_0x1b0c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C04u;
        // 0x1b0c08: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c04) {
            ctx->pc = 0x1B0A8Cu;
            return;
        }
    }
    ctx->pc = 0x1B0C0Cu;
    // 0x1b0c0c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b0c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b0c10: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1B0C10u;
    {
        const bool branch_taken_0x1b0c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c10) {
            ctx->pc = 0x1B0A88u;
            return;
        }
    }
    ctx->pc = 0x1B0C18u;
    // 0x1b0c18: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x1b0c18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1b0c1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b0c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0c20: 0x8e920118  lw          $s2, 0x118($s4)
    ctx->pc = 0x1b0c20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1b0c24: 0x8e93011c  lw          $s3, 0x11C($s4)
    ctx->pc = 0x1b0c24u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x1b0c28: 0x92230063  lbu         $v1, 0x63($s1)
    ctx->pc = 0x1b0c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 99)));
    // 0x1b0c2c: 0xde220060  ld          $v0, 0x60($s1)
    ctx->pc = 0x1b0c2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1b0c30: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x1b0c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
    // 0x1b0c34: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b0c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b0c38: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x1b0c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
    // 0x1b0c3c: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b0c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b0c40: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x1b0c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b0c44: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1b0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b0c48: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x1b0c48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b0c4c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0C4Cu;
    {
        const bool branch_taken_0x1b0c4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C4Cu;
        // 0x1b0c50: 0x2a900  sll         $s5, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c4c) {
            ctx->pc = 0x1B0CA0u;
            return;
        }
    }
    ctx->pc = 0x1B0C54u;
    // 0x1b0c54: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b0c58: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b0c5c: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b0c60: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0c64: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0c68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0C68u;
    {
        const bool branch_taken_0x1b0c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c68) {
            ctx->pc = 0x1B0C7Cu;
            return;
        }
    }
    ctx->pc = 0x1B0C70u;
    // 0x1b0c70: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1b0c74: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0c78: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0c7cu;
}
