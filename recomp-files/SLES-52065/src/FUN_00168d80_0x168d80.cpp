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

// Function: FUN_00168d80
// Address: 0x168d80 - 0x168efc
void FUN_00168d80_0x168d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168d80_0x168d80");
#endif

    switch (ctx->pc) {
        case 0x168ef0u: goto label_168ef0;
        default: break;
    }

    ctx->pc = 0x168d80u;

    // 0x168d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168d88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x168d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x168d8c: 0x8067006c  lb          $a3, 0x6C($v1)
    ctx->pc = 0x168d8cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x168d90: 0x4e10002  bgez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x168D90u;
    {
        const bool branch_taken_0x168d90 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x168d90) {
            ctx->pc = 0x168D9Cu;
            goto label_168d9c;
        }
    }
    ctx->pc = 0x168D98u;
    // 0x168d98: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x168d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_168d9c:
    // 0x168d9c: 0x93888488  lbu         $t0, -0x7B78($gp)
    ctx->pc = 0x168d9cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x168da0: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x168DA0u;
    {
        const bool branch_taken_0x168da0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x168DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DA0u;
        // 0x168da4: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168da0) {
            ctx->pc = 0x168DBCu;
            goto label_168dbc;
        }
    }
    ctx->pc = 0x168DA8u;
    // 0x168da8: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x168da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x168dac: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x168dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x168db0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x168db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x168db4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x168db4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168db8: 0x0  nop
    ctx->pc = 0x168db8u;
    // NOP
label_168dbc:
    // 0x168dbc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168DBCu;
    {
        const bool branch_taken_0x168dbc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x168DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DBCu;
        // 0x168dc0: 0x33040  sll         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168dbc) {
            ctx->pc = 0x168DCCu;
            goto label_168dcc;
        }
    }
    ctx->pc = 0x168DC4u;
    // 0x168dc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x168DC4u;
    {
        const bool branch_taken_0x168dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DC4u;
        // 0x168dc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168dc4) {
            ctx->pc = 0x168DE8u;
            goto label_168de8;
        }
    }
    ctx->pc = 0x168DCCu;
label_168dcc:
    // 0x168dcc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x168dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x168dd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x168dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168dd4: 0x84c60004  lh          $a2, 0x4($a2)
    ctx->pc = 0x168dd4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x168dd8: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168DD8u;
    {
        const bool branch_taken_0x168dd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x168DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DD8u;
        // 0x168ddc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168dd8) {
            ctx->pc = 0x168DE8u;
            goto label_168de8;
        }
    }
    ctx->pc = 0x168DE0u;
    // 0x168de0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x168DE0u;
    {
        const bool branch_taken_0x168de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DE0u;
        // 0x168de4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168de0) {
            ctx->pc = 0x168DE8u;
            goto label_168de8;
        }
    }
    ctx->pc = 0x168DE8u;
label_168de8:
    // 0x168de8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x168DE8u;
    {
        const bool branch_taken_0x168de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168de8) {
            ctx->pc = 0x168E08u;
            goto label_168e08;
        }
    }
    ctx->pc = 0x168DF0u;
    // 0x168df0: 0x8c8501d4  lw          $a1, 0x1D4($a0)
    ctx->pc = 0x168df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x168df4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x168df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x168df8: 0x14a3003d  bne         $a1, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x168DF8u;
    {
        const bool branch_taken_0x168df8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x168DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DF8u;
        // 0x168dfc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168df8) {
            ctx->pc = 0x168EF0u;
            goto label_168ef0;
        }
    }
    ctx->pc = 0x168E00u;
    // 0x168e00: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x168E00u;
    {
        const bool branch_taken_0x168e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E00u;
        // 0x168e04: 0xac8301d4  sw          $v1, 0x1D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e00) {
            ctx->pc = 0x168EF0u;
            goto label_168ef0;
        }
    }
    ctx->pc = 0x168E08u;
label_168e08:
    // 0x168e08: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x168E08u;
    {
        const bool branch_taken_0x168e08 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E08u;
        // 0x168e0c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e08) {
            ctx->pc = 0x168E24u;
            goto label_168e24;
        }
    }
    ctx->pc = 0x168E10u;
    // 0x168e10: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x168e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x168e14: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x168e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x168e18: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x168e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x168e1c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x168e1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168e20: 0x0  nop
    ctx->pc = 0x168e20u;
    // NOP
label_168e24:
    // 0x168e24: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168E24u;
    {
        const bool branch_taken_0x168e24 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x168e24) {
            ctx->pc = 0x168E34u;
            goto label_168e34;
        }
    }
    ctx->pc = 0x168E2Cu;
    // 0x168e2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x168E2Cu;
    {
        const bool branch_taken_0x168e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E2Cu;
        // 0x168e30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e2c) {
            ctx->pc = 0x168E58u;
            goto label_168e58;
        }
    }
    ctx->pc = 0x168E34u;
label_168e34:
    // 0x168e34: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x168e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x168e38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x168e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x168e3c: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x168e3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x168e40: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x168e40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x168e44: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x168E44u;
    {
        const bool branch_taken_0x168e44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x168e44) {
            ctx->pc = 0x168E54u;
            goto label_168e54;
        }
    }
    ctx->pc = 0x168E4Cu;
    // 0x168e4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x168E4Cu;
    {
        const bool branch_taken_0x168e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E4Cu;
        // 0x168e50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e4c) {
            ctx->pc = 0x168E58u;
            goto label_168e58;
        }
    }
    ctx->pc = 0x168E54u;
label_168e54:
    // 0x168e54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168e54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168e58:
    // 0x168e58: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x168E58u;
    {
        const bool branch_taken_0x168e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168e58) {
            ctx->pc = 0x168E80u;
            goto label_168e80;
        }
    }
    ctx->pc = 0x168E60u;
    // 0x168e60: 0x8c8601d4  lw          $a2, 0x1D4($a0)
    ctx->pc = 0x168e60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x168e64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x168e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x168e68: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x168E68u;
    {
        const bool branch_taken_0x168e68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x168e68) {
            ctx->pc = 0x168E80u;
            goto label_168e80;
        }
    }
    ctx->pc = 0x168E70u;
    // 0x168e70: 0x8c830230  lw          $v1, 0x230($a0)
    ctx->pc = 0x168e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x168e74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x168e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x168e78: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x168E78u;
    {
        const bool branch_taken_0x168e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E78u;
        // 0x168e7c: 0xac830230  sw          $v1, 0x230($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e78) {
            ctx->pc = 0x168EF0u;
            goto label_168ef0;
        }
    }
    ctx->pc = 0x168E80u;
label_168e80:
    // 0x168e80: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x168E80u;
    {
        const bool branch_taken_0x168e80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E80u;
        // 0x168e84: 0x3c03002b  lui         $v1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e80) {
            ctx->pc = 0x168E98u;
            goto label_168e98;
        }
    }
    ctx->pc = 0x168E88u;
    // 0x168e88: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x168e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x168e8c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x168e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x168e90: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x168e90u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168e94: 0x0  nop
    ctx->pc = 0x168e94u;
    // NOP
label_168e98:
    // 0x168e98: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x168E98u;
    {
        const bool branch_taken_0x168e98 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x168E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E98u;
        // 0x168e9c: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e98) {
            ctx->pc = 0x168EA8u;
            goto label_168ea8;
        }
    }
    ctx->pc = 0x168EA0u;
    // 0x168ea0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x168EA0u;
    {
        const bool branch_taken_0x168ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EA0u;
        // 0x168ea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ea0) {
            ctx->pc = 0x168EC8u;
            goto label_168ec8;
        }
    }
    ctx->pc = 0x168EA8u;
label_168ea8:
    // 0x168ea8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x168ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168eac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x168eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x168eb0: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x168eb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x168eb4: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x168EB4u;
    {
        const bool branch_taken_0x168eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x168eb4) {
            ctx->pc = 0x168EC4u;
            goto label_168ec4;
        }
    }
    ctx->pc = 0x168EBCu;
    // 0x168ebc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x168EBCu;
    {
        const bool branch_taken_0x168ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ebc) {
            ctx->pc = 0x168EC8u;
            goto label_168ec8;
        }
    }
    ctx->pc = 0x168EC4u;
label_168ec4:
    // 0x168ec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x168ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168ec8:
    // 0x168ec8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x168EC8u;
    {
        const bool branch_taken_0x168ec8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ec8) {
            ctx->pc = 0x168EF0u;
            goto label_168ef0;
        }
    }
    ctx->pc = 0x168ED0u;
    // 0x168ed0: 0x8c8501d4  lw          $a1, 0x1D4($a0)
    ctx->pc = 0x168ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x168ed4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x168ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168ed8: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x168ED8u;
    {
        const bool branch_taken_0x168ed8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x168ed8) {
            ctx->pc = 0x168EF0u;
            goto label_168ef0;
        }
    }
    ctx->pc = 0x168EE0u;
    // 0x168ee0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x168ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x168ee4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x168ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168ee8: 0xc042118  jal         func_108460
    ctx->pc = 0x168EE8u;
    SET_GPR_U32(ctx, 31, 0x168EF0u);
    ctx->pc = 0x168EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168EE8u;
    // 0x168eec: 0xac8201d4  sw          $v0, 0x1D4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x168EE8u, 0x168EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168EF0u;
label_168ef0:
    // 0x168ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x168EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EF4u;
        // 0x168ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168EFCu;
}
