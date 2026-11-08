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

// Function: entry_001e4bd0
// Address: 0x1e4bd0 - 0x1e4c54
void entry_001e4bd0_0x1e4bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4bd0_0x1e4bd0");
#endif

    ctx->pc = 0x1e4bd0u;

    // 0x1e4bd0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e4bd4: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1e4bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1e4bd8: 0x2001027  not         $v0, $s0
    ctx->pc = 0x1e4bd8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x1e4bdc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e4bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e4be0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e4be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e4be4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1e4be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e4be8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1e4be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e4bec: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1E4BECu;
    {
        const bool branch_taken_0x1e4bec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BECu;
        // 0x1e4bf0: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4bec) {
            ctx->pc = 0x1E4CB8u;
            return;
        }
    }
    ctx->pc = 0x1E4BF4u;
    // 0x1e4bf4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1e4bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e4bf8: 0x3212ffff  andi        $s2, $s0, 0xFFFF
    ctx->pc = 0x1e4bf8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1e4bfc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e4c00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e4c04: 0x441001b  bgez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E4C04u;
    {
        const bool branch_taken_0x1e4c04 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C04u;
        // 0x1e4c08: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c04) {
            ctx->pc = 0x1E4C74u;
            return;
        }
    }
    ctx->pc = 0x1E4C0Cu;
    // 0x1e4c0c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e4c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e4c10: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e4c14: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1e4c18: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e4c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e4c1c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e4c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e4c20: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E4C20u;
    {
        const bool branch_taken_0x1e4c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C20u;
        // 0x1e4c24: 0x3244ffff  andi        $a0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c20) {
            ctx->pc = 0x1E4C64u;
            return;
        }
    }
    ctx->pc = 0x1E4C28u;
    // 0x1e4c28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4c2c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e4c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e4c30: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x1e4c30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x1e4c34: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e4c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e4c38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e4c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4c3c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e4c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4c40: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4C40u;
    {
        const bool branch_taken_0x1e4c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C40u;
        // 0x1e4c44: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c40) {
            ctx->pc = 0x1E4C54u;
            return;
        }
    }
    ctx->pc = 0x1E4C48u;
    // 0x1e4c48: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e4c48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e4c4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4C4Cu;
    {
        const bool branch_taken_0x1e4c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C4Cu;
        // 0x1e4c50: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c4c) {
            ctx->pc = 0x1E4C5Cu;
            return;
        }
    }
    ctx->pc = 0x1E4C54u;
}
