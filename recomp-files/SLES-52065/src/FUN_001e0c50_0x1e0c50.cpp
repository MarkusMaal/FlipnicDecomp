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

// Function: FUN_001e0c50
// Address: 0x1e0c50 - 0x1e0dc8
void FUN_001e0c50_0x1e0c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0c50_0x1e0c50");
#endif

    ctx->pc = 0x1e0c50u;

    // 0x1e0c50: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e0c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c54: 0x3c036468  lui         $v1, 0x6468
    ctx->pc = 0x1e0c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25704 << 16));
    // 0x1e0c58: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x1e0c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1e0c5c: 0x34635353  ori         $v1, $v1, 0x5353
    ctx->pc = 0x1e0c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21331);
    // 0x1e0c60: 0x14a30057  bne         $a1, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1E0C60u;
    {
        const bool branch_taken_0x1e0c60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E0C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C60u;
        // 0x1e0c64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c60) {
            ctx->pc = 0x1E0DC0u;
            goto label_1e0dc0;
        }
    }
    ctx->pc = 0x1E0C68u;
    // 0x1e0c68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e0c6c: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1E0C6Cu;
    {
        const bool branch_taken_0x1e0c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C6Cu;
        // 0x1e0c70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c6c) {
            ctx->pc = 0x1E0DC0u;
            goto label_1e0dc0;
        }
    }
    ctx->pc = 0x1E0C74u;
    // 0x1e0c74: 0x8cc3007c  lw          $v1, 0x7C($a2)
    ctx->pc = 0x1e0c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x1e0c78: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0C78u;
    {
        const bool branch_taken_0x1e0c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e0c78) {
            ctx->pc = 0x1E0C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0C78u;
            // 0x1e0c7c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0C84u;
            goto label_1e0c84;
        }
    }
    ctx->pc = 0x1E0C80u;
    // 0x1e0c80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e0c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e0c84:
    // 0x1e0c84: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e0c84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e0c88: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1e0c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1e0c8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0c90: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x1e0c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1e0c94: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0C94u;
    {
        const bool branch_taken_0x1e0c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C94u;
        // 0x1e0c98: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c94) {
            ctx->pc = 0x1E0CA8u;
            goto label_1e0ca8;
        }
    }
    ctx->pc = 0x1E0C9Cu;
    // 0x1e0c9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0C9Cu;
    {
        const bool branch_taken_0x1e0c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C9Cu;
        // 0x1e0ca0: 0xacc20030  sw          $v0, 0x30($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c9c) {
            ctx->pc = 0x1E0CACu;
            goto label_1e0cac;
        }
    }
    ctx->pc = 0x1E0CA4u;
    // 0x1e0ca4: 0x0  nop
    ctx->pc = 0x1e0ca4u;
    // NOP
label_1e0ca8:
    // 0x1e0ca8: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x1e0ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
label_1e0cac:
    // 0x1e0cac: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x1e0cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1e0cb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0cb4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0CB4u;
    {
        const bool branch_taken_0x1e0cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CB4u;
        // 0x1e0cb8: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cb4) {
            ctx->pc = 0x1E0CC8u;
            goto label_1e0cc8;
        }
    }
    ctx->pc = 0x1E0CBCu;
    // 0x1e0cbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CBCu;
    {
        const bool branch_taken_0x1e0cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CBCu;
        // 0x1e0cc0: 0xacc20034  sw          $v0, 0x34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cbc) {
            ctx->pc = 0x1E0CCCu;
            goto label_1e0ccc;
        }
    }
    ctx->pc = 0x1E0CC4u;
    // 0x1e0cc4: 0x0  nop
    ctx->pc = 0x1e0cc4u;
    // NOP
label_1e0cc8:
    // 0x1e0cc8: 0xacc00034  sw          $zero, 0x34($a2)
    ctx->pc = 0x1e0cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
label_1e0ccc:
    // 0x1e0ccc: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x1e0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1e0cd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0cd4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0CD4u;
    {
        const bool branch_taken_0x1e0cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CD4u;
        // 0x1e0cd8: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cd4) {
            ctx->pc = 0x1E0CE8u;
            goto label_1e0ce8;
        }
    }
    ctx->pc = 0x1E0CDCu;
    // 0x1e0cdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CDCu;
    {
        const bool branch_taken_0x1e0cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CDCu;
        // 0x1e0ce0: 0xacc20038  sw          $v0, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cdc) {
            ctx->pc = 0x1E0CECu;
            goto label_1e0cec;
        }
    }
    ctx->pc = 0x1E0CE4u;
    // 0x1e0ce4: 0x0  nop
    ctx->pc = 0x1e0ce4u;
    // NOP
label_1e0ce8:
    // 0x1e0ce8: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x1e0ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
label_1e0cec:
    // 0x1e0cec: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x1e0cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1e0cf0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0cf4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0CF4u;
    {
        const bool branch_taken_0x1e0cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CF4u;
        // 0x1e0cf8: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cf4) {
            ctx->pc = 0x1E0D08u;
            goto label_1e0d08;
        }
    }
    ctx->pc = 0x1E0CFCu;
    // 0x1e0cfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CFCu;
    {
        const bool branch_taken_0x1e0cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CFCu;
        // 0x1e0d00: 0xacc2003c  sw          $v0, 0x3C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cfc) {
            ctx->pc = 0x1E0D0Cu;
            goto label_1e0d0c;
        }
    }
    ctx->pc = 0x1E0D04u;
    // 0x1e0d04: 0x0  nop
    ctx->pc = 0x1e0d04u;
    // NOP
label_1e0d08:
    // 0x1e0d08: 0xacc0003c  sw          $zero, 0x3C($a2)
    ctx->pc = 0x1e0d08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 0));
label_1e0d0c:
    // 0x1e0d0c: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x1e0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1e0d10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0d14: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0D14u;
    {
        const bool branch_taken_0x1e0d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D14u;
        // 0x1e0d18: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d14) {
            ctx->pc = 0x1E0D28u;
            goto label_1e0d28;
        }
    }
    ctx->pc = 0x1E0D1Cu;
    // 0x1e0d1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0D1Cu;
    {
        const bool branch_taken_0x1e0d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D1Cu;
        // 0x1e0d20: 0xacc20040  sw          $v0, 0x40($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d1c) {
            ctx->pc = 0x1E0D2Cu;
            goto label_1e0d2c;
        }
    }
    ctx->pc = 0x1E0D24u;
    // 0x1e0d24: 0x0  nop
    ctx->pc = 0x1e0d24u;
    // NOP
label_1e0d28:
    // 0x1e0d28: 0xacc00040  sw          $zero, 0x40($a2)
    ctx->pc = 0x1e0d28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 0));
label_1e0d2c:
    // 0x1e0d2c: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x1e0d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x1e0d30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0d34: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0D34u;
    {
        const bool branch_taken_0x1e0d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D34u;
        // 0x1e0d38: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d34) {
            ctx->pc = 0x1E0D48u;
            goto label_1e0d48;
        }
    }
    ctx->pc = 0x1E0D3Cu;
    // 0x1e0d3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0D3Cu;
    {
        const bool branch_taken_0x1e0d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D3Cu;
        // 0x1e0d40: 0xacc20044  sw          $v0, 0x44($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d3c) {
            ctx->pc = 0x1E0D4Cu;
            goto label_1e0d4c;
        }
    }
    ctx->pc = 0x1E0D44u;
    // 0x1e0d44: 0x0  nop
    ctx->pc = 0x1e0d44u;
    // NOP
label_1e0d48:
    // 0x1e0d48: 0xacc00044  sw          $zero, 0x44($a2)
    ctx->pc = 0x1e0d48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
label_1e0d4c:
    // 0x1e0d4c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1e0d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1e0d50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0D50u;
    {
        const bool branch_taken_0x1e0d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D50u;
        // 0x1e0d54: 0xac860014  sw          $a2, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d50) {
            ctx->pc = 0x1E0D70u;
            goto label_1e0d70;
        }
    }
    ctx->pc = 0x1E0D58u;
    // 0x1e0d58: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1e0d58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0d5c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1e0d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1e0d60: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1e0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1e0d64: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1e0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1e0d68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0D68u;
    {
        const bool branch_taken_0x1e0d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D68u;
        // 0x1e0d6c: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d68) {
            ctx->pc = 0x1E0D7Cu;
            goto label_1e0d7c;
        }
    }
    ctx->pc = 0x1E0D70u;
label_1e0d70:
    // 0x1e0d70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0d74: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1e0d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1e0d78: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1e0d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_1e0d7c:
    // 0x1e0d7c: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x1e0d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1e0d80: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0D80u;
    {
        const bool branch_taken_0x1e0d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0d80) {
            ctx->pc = 0x1E0D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0D80u;
            // 0x1e0d84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0DA8u;
            goto label_1e0da8;
        }
    }
    ctx->pc = 0x1E0D88u;
    // 0x1e0d88: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1e0d88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0d8c: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1e0d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x1e0d90: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x1e0d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1e0d94: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x1e0d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1e0d98: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1e0d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x1e0d9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0D9Cu;
    {
        const bool branch_taken_0x1e0d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D9Cu;
        // 0x1e0da0: 0xac820028  sw          $v0, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d9c) {
            ctx->pc = 0x1E0DB0u;
            goto label_1e0db0;
        }
    }
    ctx->pc = 0x1E0DA4u;
    // 0x1e0da4: 0x0  nop
    ctx->pc = 0x1e0da4u;
    // NOP
label_1e0da8:
    // 0x1e0da8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1e0da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1e0dac: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1e0dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_1e0db0:
    // 0x1e0db0: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1e0db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1e0db4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0db8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB8u;
        // 0x1e0dbc: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0DC0u;
label_1e0dc0:
    // 0x1e0dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0DC8u;
}
