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

// Function: FUN_0020ac28
// Address: 0x20ac28 - 0x20af3c
void FUN_0020ac28_0x20ac28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020ac28_0x20ac28");
#endif

    switch (ctx->pc) {
        case 0x20ac60u: goto label_20ac60;
        case 0x20aca0u: goto label_20aca0;
        case 0x20acf0u: goto label_20acf0;
        case 0x20ad20u: goto label_20ad20;
        case 0x20ad60u: goto label_20ad60;
        case 0x20adc4u: goto label_20adc4;
        case 0x20addcu: goto label_20addc;
        case 0x20adf4u: goto label_20adf4;
        case 0x20ae0cu: goto label_20ae0c;
        case 0x20ae24u: goto label_20ae24;
        case 0x20ae3cu: goto label_20ae3c;
        case 0x20ae54u: goto label_20ae54;
        case 0x20ae6cu: goto label_20ae6c;
        case 0x20ae84u: goto label_20ae84;
        case 0x20ae9cu: goto label_20ae9c;
        case 0x20aeb4u: goto label_20aeb4;
        default: break;
    }

    ctx->pc = 0x20ac28u;

    // 0x20ac28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ac28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ac2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20ac2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ac30: 0x148000a2  bnez        $a0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x20AC30u;
    {
        const bool branch_taken_0x20ac30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC30u;
        // 0x20ac34: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac30) {
            ctx->pc = 0x20AEBCu;
            goto label_20aebc;
        }
    }
    ctx->pc = 0x20AC38u;
    // 0x20ac38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ac3c: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x20ac3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x20ac40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x20ac44: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x20ac44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x20ac48: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x20AC48u;
    {
        const bool branch_taken_0x20ac48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC48u;
        // 0x20ac4c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac48) {
            ctx->pc = 0x20AC7Cu;
            goto label_20ac7c;
        }
    }
    ctx->pc = 0x20AC50u;
    // 0x20ac50: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x20ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x20ac54: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x20ac54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x20ac58: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20ac58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ac5c: 0x0  nop
    ctx->pc = 0x20ac5cu;
    // NOP
label_20ac60:
    // 0x20ac60: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x20ac60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20ac64: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x20AC64u;
    {
        const bool branch_taken_0x20ac64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC64u;
        // 0x20ac68: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac64) {
            ctx->pc = 0x20AD84u;
            goto label_20ad84;
        }
    }
    ctx->pc = 0x20AC6Cu;
    // 0x20ac6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ac70: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20ac70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20ac74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20AC74u;
    {
        const bool branch_taken_0x20ac74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC74u;
        // 0x20ac78: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac74) {
            ctx->pc = 0x20AC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ac60;
        }
    }
    ctx->pc = 0x20AC7Cu;
label_20ac7c:
    // 0x20ac7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ac80: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x20ac80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x20ac84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x20ac88: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x20ac88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x20ac8c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20AC8Cu;
    {
        const bool branch_taken_0x20ac8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC8Cu;
        // 0x20ac90: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac8c) {
            ctx->pc = 0x20ACBCu;
            goto label_20acbc;
        }
    }
    ctx->pc = 0x20AC94u;
    // 0x20ac94: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x20ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x20ac98: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x20ac98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x20ac9c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20ac9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20aca0:
    // 0x20aca0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x20aca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20aca4: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x20ACA4u;
    {
        const bool branch_taken_0x20aca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACA4u;
        // 0x20aca8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aca4) {
            ctx->pc = 0x20AD90u;
            goto label_20ad90;
        }
    }
    ctx->pc = 0x20ACACu;
    // 0x20acac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20acacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20acb0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20acb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20acb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20ACB4u;
    {
        const bool branch_taken_0x20acb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACB4u;
        // 0x20acb8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acb4) {
            ctx->pc = 0x20ACA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20aca0;
        }
    }
    ctx->pc = 0x20ACBCu;
label_20acbc:
    // 0x20acbc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20acc0: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x20acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x20acc4: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x20acc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x20acc8: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x20acc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x20accc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20acccu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10003C00u));
    // 0x20acd0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x20acd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x20acd4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20ACD4u;
    {
        const bool branch_taken_0x20acd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACD4u;
        // 0x20acd8: 0x3c031f00  lui         $v1, 0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acd4) {
            ctx->pc = 0x20AD0Cu;
            goto label_20ad0c;
        }
    }
    ctx->pc = 0x20ACDCu;
    // 0x20acdc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20ace0: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x20ace0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x20ace4: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x20ace4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x20ace8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x20ace8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x20acec: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20acecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20acf0:
    // 0x20acf0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x20acf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20acf4: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x20ACF4u;
    {
        const bool branch_taken_0x20acf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACF4u;
        // 0x20acf8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acf4) {
            ctx->pc = 0x20AD9Cu;
            goto label_20ad9c;
        }
    }
    ctx->pc = 0x20ACFCu;
    // 0x20acfc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20ad00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20ad00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20ad04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20AD04u;
    {
        const bool branch_taken_0x20ad04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD04u;
        // 0x20ad08: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad04) {
            ctx->pc = 0x20ACF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20acf0;
        }
    }
    ctx->pc = 0x20AD0Cu;
label_20ad0c:
    // 0x20ad0c: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x20ad0cu;
    SET_GPR_U32(ctx, 6, ctx->vu0_vpu_stat);
    // 0x20ad10: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x20ad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x20ad14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20AD14u;
    {
        const bool branch_taken_0x20ad14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD14u;
        // 0x20ad18: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad14) {
            ctx->pc = 0x20AD3Cu;
            goto label_20ad3c;
        }
    }
    ctx->pc = 0x20AD1Cu;
    // 0x20ad1c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20ad1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20ad20:
    // 0x20ad20: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x20ad20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20ad24: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20AD24u;
    {
        const bool branch_taken_0x20ad24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD24u;
        // 0x20ad28: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad24) {
            ctx->pc = 0x20ADA8u;
            goto label_20ada8;
        }
    }
    ctx->pc = 0x20AD2Cu;
    // 0x20ad2c: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x20ad2cu;
    SET_GPR_U32(ctx, 6, ctx->vu0_vpu_stat);
    // 0x20ad30: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x20ad30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x20ad34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20AD34u;
    {
        const bool branch_taken_0x20ad34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD34u;
        // 0x20ad38: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad34) {
            ctx->pc = 0x20AD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ad20;
        }
    }
    ctx->pc = 0x20AD3Cu;
label_20ad3c:
    // 0x20ad3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ad40: 0x34423020  ori         $v0, $v0, 0x3020
    ctx->pc = 0x20ad40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
    // 0x20ad44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10003020u));
    // 0x20ad48: 0x30630c00  andi        $v1, $v1, 0xC00
    ctx->pc = 0x20ad48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3072);
    // 0x20ad4c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20AD4Cu;
    {
        const bool branch_taken_0x20ad4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD4Cu;
        // 0x20ad50: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad4c) {
            ctx->pc = 0x20AD7Cu;
            goto label_20ad7c;
        }
    }
    ctx->pc = 0x20AD54u;
    // 0x20ad54: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x20ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x20ad58: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x20ad58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
    // 0x20ad5c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20ad5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20ad60:
    // 0x20ad60: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x20ad60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20ad64: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20AD64u;
    {
        const bool branch_taken_0x20ad64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD64u;
        // 0x20ad68: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad64) {
            ctx->pc = 0x20ADB4u;
            goto label_20adb4;
        }
    }
    ctx->pc = 0x20AD6Cu;
    // 0x20ad6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ad70: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x20ad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
    // 0x20ad74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20AD74u;
    {
        const bool branch_taken_0x20ad74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD74u;
        // 0x20ad78: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad74) {
            ctx->pc = 0x20AD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ad60;
        }
    }
    ctx->pc = 0x20AD7Cu;
label_20ad7c:
    // 0x20ad7c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x20AD7Cu;
    {
        const bool branch_taken_0x20ad7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD7Cu;
        // 0x20ad80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad7c) {
            ctx->pc = 0x20AF30u;
            goto label_20af30;
        }
    }
    ctx->pc = 0x20AD84u;
label_20ad84:
    // 0x20ad84: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ad88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20AD88u;
    {
        const bool branch_taken_0x20ad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD88u;
        // 0x20ad8c: 0x24845ce8  addiu       $a0, $a0, 0x5CE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad88) {
            ctx->pc = 0x20ADBCu;
            goto label_20adbc;
        }
    }
    ctx->pc = 0x20AD90u;
label_20ad90:
    // 0x20ad90: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ad94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20AD94u;
    {
        const bool branch_taken_0x20ad94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD94u;
        // 0x20ad98: 0x24845dc8  addiu       $a0, $a0, 0x5DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad94) {
            ctx->pc = 0x20ADBCu;
            goto label_20adbc;
        }
    }
    ctx->pc = 0x20AD9Cu;
label_20ad9c:
    // 0x20ad9c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ada0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20ADA0u;
    {
        const bool branch_taken_0x20ada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADA0u;
        // 0x20ada4: 0x24845df8  addiu       $a0, $a0, 0x5DF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ada0) {
            ctx->pc = 0x20ADBCu;
            goto label_20adbc;
        }
    }
    ctx->pc = 0x20ADA8u;
label_20ada8:
    // 0x20ada8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20adac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20ADACu;
    {
        const bool branch_taken_0x20adac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADACu;
        // 0x20adb0: 0x24845e28  addiu       $a0, $a0, 0x5E28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20adac) {
            ctx->pc = 0x20ADBCu;
            goto label_20adbc;
        }
    }
    ctx->pc = 0x20ADB4u;
label_20adb4:
    // 0x20adb4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20adb8: 0x24845e50  addiu       $a0, $a0, 0x5E50
    ctx->pc = 0x20adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24144));
label_20adbc:
    // 0x20adbc: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20ADBCu;
    SET_GPR_U32(ctx, 31, 0x20ADC4u);
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20ADBCu, 0x20ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ADC4u;
label_20adc4:
    // 0x20adc4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20adc8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20adcc: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x20adccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x20add0: 0x24845d18  addiu       $a0, $a0, 0x5D18
    ctx->pc = 0x20add0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23832));
    // 0x20add4: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20ADD4u;
    SET_GPR_U32(ctx, 31, 0x20ADDCu);
    ctx->pc = 0x20ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ADD4u;
    // 0x20add8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20ADD4u, 0x20ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ADDCu;
label_20addc:
    // 0x20addc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20addcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ade0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ade4: 0x34429030  ori         $v0, $v0, 0x9030
    ctx->pc = 0x20ade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36912);
    // 0x20ade8: 0x24845d28  addiu       $a0, $a0, 0x5D28
    ctx->pc = 0x20ade8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23848));
    // 0x20adec: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20ADECu;
    SET_GPR_U32(ctx, 31, 0x20ADF4u);
    ctx->pc = 0x20ADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ADECu;
    // 0x20adf0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20ADECu, 0x20ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ADF4u;
label_20adf4:
    // 0x20adf4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20adf8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20adfc: 0x34429010  ori         $v0, $v0, 0x9010
    ctx->pc = 0x20adfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36880);
    // 0x20ae00: 0x24845d38  addiu       $a0, $a0, 0x5D38
    ctx->pc = 0x20ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23864));
    // 0x20ae04: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AE04u;
    SET_GPR_U32(ctx, 31, 0x20AE0Cu);
    ctx->pc = 0x20AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE04u;
    // 0x20ae08: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AE04u, 0x20AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE0Cu;
label_20ae0c:
    // 0x20ae0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ae10: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ae14: 0x34429020  ori         $v0, $v0, 0x9020
    ctx->pc = 0x20ae14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36896);
    // 0x20ae18: 0x24845d48  addiu       $a0, $a0, 0x5D48
    ctx->pc = 0x20ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23880));
    // 0x20ae1c: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AE1Cu;
    SET_GPR_U32(ctx, 31, 0x20AE24u);
    ctx->pc = 0x20AE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE1Cu;
    // 0x20ae20: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AE1Cu, 0x20AE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE24u;
label_20ae24:
    // 0x20ae24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ae28: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ae2c: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x20ae2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x20ae30: 0x24845d58  addiu       $a0, $a0, 0x5D58
    ctx->pc = 0x20ae30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23896));
    // 0x20ae34: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AE34u;
    SET_GPR_U32(ctx, 31, 0x20AE3Cu);
    ctx->pc = 0x20AE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE34u;
    // 0x20ae38: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AE34u, 0x20AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE3Cu;
label_20ae3c:
    // 0x20ae3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ae40: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ae44: 0x3442a030  ori         $v0, $v0, 0xA030
    ctx->pc = 0x20ae44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41008);
    // 0x20ae48: 0x24845d68  addiu       $a0, $a0, 0x5D68
    ctx->pc = 0x20ae48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23912));
    // 0x20ae4c: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AE4Cu;
    SET_GPR_U32(ctx, 31, 0x20AE54u);
    ctx->pc = 0x20AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE4Cu;
    // 0x20ae50: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AE4Cu, 0x20AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE54u;
label_20ae54:
    // 0x20ae54: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ae58: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ae5c: 0x3442a010  ori         $v0, $v0, 0xA010
    ctx->pc = 0x20ae5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40976);
    // 0x20ae60: 0x24845d78  addiu       $a0, $a0, 0x5D78
    ctx->pc = 0x20ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23928));
    // 0x20ae64: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AE64u;
    SET_GPR_U32(ctx, 31, 0x20AE6Cu);
    ctx->pc = 0x20AE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE64u;
    // 0x20ae68: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AE64u, 0x20AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE6Cu;
label_20ae6c:
    // 0x20ae6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ae70: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ae74: 0x3442a020  ori         $v0, $v0, 0xA020
    ctx->pc = 0x20ae74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40992);
    // 0x20ae78: 0x24845d88  addiu       $a0, $a0, 0x5D88
    ctx->pc = 0x20ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23944));
    // 0x20ae7c: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AE7Cu;
    SET_GPR_U32(ctx, 31, 0x20AE84u);
    ctx->pc = 0x20AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE7Cu;
    // 0x20ae80: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AE7Cu, 0x20AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE84u;
label_20ae84:
    // 0x20ae84: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ae88: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ae8c: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x20ae8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x20ae90: 0x24845d98  addiu       $a0, $a0, 0x5D98
    ctx->pc = 0x20ae90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23960));
    // 0x20ae94: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AE94u;
    SET_GPR_U32(ctx, 31, 0x20AE9Cu);
    ctx->pc = 0x20AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE94u;
    // 0x20ae98: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AE94u, 0x20AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE9Cu;
label_20ae9c:
    // 0x20ae9c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20aea0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20aea4: 0x34423020  ori         $v0, $v0, 0x3020
    ctx->pc = 0x20aea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
    // 0x20aea8: 0x24845db0  addiu       $a0, $a0, 0x5DB0
    ctx->pc = 0x20aea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23984));
    // 0x20aeac: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20AEACu;
    SET_GPR_U32(ctx, 31, 0x20AEB4u);
    ctx->pc = 0x20AEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AEACu;
    // 0x20aeb0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20AEACu, 0x20AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AEB4u;
label_20aeb4:
    // 0x20aeb4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20AEB4u;
    {
        const bool branch_taken_0x20aeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEB4u;
        // 0x20aeb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aeb4) {
            ctx->pc = 0x20AF30u;
            goto label_20af30;
        }
    }
    ctx->pc = 0x20AEBCu;
label_20aebc:
    // 0x20aebc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20aec0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x20aec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x20aec4: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x20aec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x20aec8: 0x34a5a000  ori         $a1, $a1, 0xA000
    ctx->pc = 0x20aec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40960);
    // 0x20aecc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x20aed0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20aed4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x20aed4u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x20aed8: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x20aed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x20aedc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20aedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20aee0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x20aee0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10003C00u));
    // 0x20aee4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20aee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20aee8: 0x30c60100  andi        $a2, $a2, 0x100
    ctx->pc = 0x20aee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x20aeec: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x20aeecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x20aef0: 0x3c031f00  lui         $v1, 0x1F00
    ctx->pc = 0x20aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
    // 0x20aef4: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x20aef4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20aef8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x20aef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x20aefc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x20aefcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x20af00: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x20af00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x20af04: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x20af04u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20af08: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x20af08u;
    SET_GPR_U32(ctx, 6, ctx->vu0_vpu_stat);
    // 0x20af0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20af10: 0x30c60100  andi        $a2, $a2, 0x100
    ctx->pc = 0x20af10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x20af14: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x20af14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
    // 0x20af18: 0x34450008  ori         $a1, $v0, 0x8
    ctx->pc = 0x20af18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x20af1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20af1cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10003020u));
    // 0x20af20: 0xa6100b  movn        $v0, $a1, $a2
    ctx->pc = 0x20af20u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x20af24: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x20af24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x20af28: 0x30840c00  andi        $a0, $a0, 0xC00
    ctx->pc = 0x20af28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3072);
    // 0x20af2c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x20af2cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_20af30:
    // 0x20af30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20af30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20af34: 0x3e00008  jr          $ra
    ctx->pc = 0x20AF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF34u;
        // 0x20af38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AF3Cu;
}
