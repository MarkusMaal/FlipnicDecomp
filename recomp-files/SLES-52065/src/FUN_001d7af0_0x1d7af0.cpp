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

// Function: FUN_001d7af0
// Address: 0x1d7af0 - 0x1d7cf8
void FUN_001d7af0_0x1d7af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d7af0_0x1d7af0");
#endif

    ctx->pc = 0x1d7af0u;

    // 0x1d7af0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d7af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d7af4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7af8: 0x8c45054c  lw          $a1, 0x54C($v0)
    ctx->pc = 0x1d7af8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d7afc: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1d7afcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1d7b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7b04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d7b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7b08: 0x8cc40550  lw          $a0, 0x550($a2)
    ctx->pc = 0x1d7b08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370550u));
    // 0x1d7b0c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1d7b0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d7b10: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x1d7b10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1d7b14: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1d7b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1d7b18: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d7b1c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d7b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7b20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7b24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7b28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7b2c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1d7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d7b30: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d7b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d7b34: 0xa066030e  sb          $a2, 0x30E($v1)
    ctx->pc = 0x1d7b34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 782), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d7b38: 0x2484030c  addiu       $a0, $a0, 0x30C
    ctx->pc = 0x1d7b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 780));
    // 0x1d7b3c: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x1d7b3cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7b40: 0x10a70035  beq         $a1, $a3, . + 4 + (0x35 << 2)
    ctx->pc = 0x1D7B40u;
    {
        const bool branch_taken_0x1d7b40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x1D7B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B40u;
        // 0x1d7b44: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b40) {
            ctx->pc = 0x1D7C18u;
            goto label_1d7c18;
        }
    }
    ctx->pc = 0x1D7B48u;
    // 0x1d7b48: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7B48u;
    {
        const bool branch_taken_0x1d7b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b48) {
            ctx->pc = 0x1D7B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7B48u;
            // 0x1d7b4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7B60u;
            goto label_1d7b60;
        }
    }
    ctx->pc = 0x1D7B50u;
    // 0x1d7b50: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7B50u;
    {
        const bool branch_taken_0x1d7b50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B50u;
        // 0x1d7b54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b50) {
            ctx->pc = 0x1D7B70u;
            goto label_1d7b70;
        }
    }
    ctx->pc = 0x1D7B58u;
    // 0x1d7b58: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1D7B58u;
    {
        const bool branch_taken_0x1d7b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b58) {
            ctx->pc = 0x1D7CF0u;
            goto label_1d7cf0;
        }
    }
    ctx->pc = 0x1D7B60u;
label_1d7b60:
    // 0x1d7b60: 0x10a20057  beq         $a1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1D7B60u;
    {
        const bool branch_taken_0x1d7b60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B60u;
        // 0x1d7b64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b60) {
            ctx->pc = 0x1D7CC0u;
            goto label_1d7cc0;
        }
    }
    ctx->pc = 0x1D7B68u;
    // 0x1d7b68: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1D7B68u;
    {
        const bool branch_taken_0x1d7b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b68) {
            ctx->pc = 0x1D7CF0u;
            goto label_1d7cf0;
        }
    }
    ctx->pc = 0x1D7B70u;
label_1d7b70:
    // 0x1d7b70: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x1d7b70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1d7b74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7b78: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D7B78u;
    {
        const bool branch_taken_0x1d7b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B78u;
        // 0x1d7b7c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b78) {
            ctx->pc = 0x1D7BD8u;
            goto label_1d7bd8;
        }
    }
    ctx->pc = 0x1D7B80u;
    // 0x1d7b80: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7B80u;
    {
        const bool branch_taken_0x1d7b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b80) {
            ctx->pc = 0x1D7B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7B80u;
            // 0x1d7b84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7BA0u;
            goto label_1d7ba0;
        }
    }
    ctx->pc = 0x1D7B88u;
    // 0x1d7b88: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1D7B88u;
    {
        const bool branch_taken_0x1d7b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b88) {
            ctx->pc = 0x1D7B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7B88u;
            // 0x1d7b8c: 0x80850002  lb          $a1, 0x2($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7BB8u;
            goto label_1d7bb8;
        }
    }
    ctx->pc = 0x1D7B90u;
    // 0x1d7b90: 0x1067000d  beq         $v1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x1D7B90u;
    {
        const bool branch_taken_0x1d7b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1D7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B90u;
        // 0x1d7b94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b90) {
            ctx->pc = 0x1D7BC8u;
            goto label_1d7bc8;
        }
    }
    ctx->pc = 0x1D7B98u;
    // 0x1d7b98: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1D7B98u;
    {
        const bool branch_taken_0x1d7b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b98) {
            ctx->pc = 0x1D7CF0u;
            goto label_1d7cf0;
        }
    }
    ctx->pc = 0x1D7BA0u;
label_1d7ba0:
    // 0x1d7ba0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D7BA0u;
    {
        const bool branch_taken_0x1d7ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7BA0u;
        // 0x1d7ba4: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ba0) {
            ctx->pc = 0x1D7BF0u;
            goto label_1d7bf0;
        }
    }
    ctx->pc = 0x1D7BA8u;
    // 0x1d7ba8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D7BA8u;
    {
        const bool branch_taken_0x1d7ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7BA8u;
        // 0x1d7bac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ba8) {
            ctx->pc = 0x1D7C08u;
            goto label_1d7c08;
        }
    }
    ctx->pc = 0x1D7BB0u;
    // 0x1d7bb0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1D7BB0u;
    {
        const bool branch_taken_0x1d7bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7bb0) {
            ctx->pc = 0x1D7CF0u;
            goto label_1d7cf0;
        }
    }
    ctx->pc = 0x1D7BB8u;
label_1d7bb8:
    // 0x1d7bb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7bc0: 0x8074c9e  j           func_1D3278
    ctx->pc = 0x1D7BC0u;
    ctx->pc = 0x1D7BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BC0u;
    // 0x1d7bc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3278u;
    FUN_001d3278_0x1d3278(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7BC8u;
label_1d7bc8:
    // 0x1d7bc8: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x1d7bc8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d7bcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7bd0: 0x8074cb8  j           func_1D32E0
    ctx->pc = 0x1D7BD0u;
    ctx->pc = 0x1D7BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BD0u;
    // 0x1d7bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D32E0u;
    FUN_001d32e0_0x1d32e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7BD8u;
label_1d7bd8:
    // 0x1d7bd8: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x1d7bd8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d7bdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7be4: 0x8074cf0  j           func_1D33C0
    ctx->pc = 0x1D7BE4u;
    ctx->pc = 0x1D7BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BE4u;
    // 0x1d7be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33C0u;
    FUN_001d33c0_0x1d33c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7BECu;
    // 0x1d7bec: 0x0  nop
    ctx->pc = 0x1d7becu;
    // NOP
label_1d7bf0:
    // 0x1d7bf0: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x1d7bf0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d7bf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7bfc: 0x8074d08  j           func_1D3420
    ctx->pc = 0x1D7BFCu;
    ctx->pc = 0x1D7C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BFCu;
    // 0x1d7c00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3420u;
    FUN_001d3420_0x1d3420(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7C04u;
    // 0x1d7c04: 0x0  nop
    ctx->pc = 0x1d7c04u;
    // NOP
label_1d7c08:
    // 0x1d7c08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c0c: 0x8074d20  j           func_1D3480
    ctx->pc = 0x1D7C0Cu;
    ctx->pc = 0x1D7C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C0Cu;
    // 0x1d7c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3480u;
    FUN_001d3480_0x1d3480(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7C14u;
    // 0x1d7c14: 0x0  nop
    ctx->pc = 0x1d7c14u;
    // NOP
label_1d7c18:
    // 0x1d7c18: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x1d7c18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1d7c1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7c20: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D7C20u;
    {
        const bool branch_taken_0x1d7c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C20u;
        // 0x1d7c24: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c20) {
            ctx->pc = 0x1D7C80u;
            goto label_1d7c80;
        }
    }
    ctx->pc = 0x1D7C28u;
    // 0x1d7c28: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7C28u;
    {
        const bool branch_taken_0x1d7c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c28) {
            ctx->pc = 0x1D7C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7C28u;
            // 0x1d7c2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7C48u;
            goto label_1d7c48;
        }
    }
    ctx->pc = 0x1D7C30u;
    // 0x1d7c30: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1D7C30u;
    {
        const bool branch_taken_0x1d7c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c30) {
            ctx->pc = 0x1D7C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7C30u;
            // 0x1d7c34: 0x80850002  lb          $a1, 0x2($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7C60u;
            goto label_1d7c60;
        }
    }
    ctx->pc = 0x1D7C38u;
    // 0x1d7c38: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D7C38u;
    {
        const bool branch_taken_0x1d7c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D7C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C38u;
        // 0x1d7c3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c38) {
            ctx->pc = 0x1D7C70u;
            goto label_1d7c70;
        }
    }
    ctx->pc = 0x1D7C40u;
    // 0x1d7c40: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1D7C40u;
    {
        const bool branch_taken_0x1d7c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c40) {
            ctx->pc = 0x1D7CF0u;
            goto label_1d7cf0;
        }
    }
    ctx->pc = 0x1D7C48u;
label_1d7c48:
    // 0x1d7c48: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D7C48u;
    {
        const bool branch_taken_0x1d7c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C48u;
        // 0x1d7c4c: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c48) {
            ctx->pc = 0x1D7C98u;
            goto label_1d7c98;
        }
    }
    ctx->pc = 0x1D7C50u;
    // 0x1d7c50: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D7C50u;
    {
        const bool branch_taken_0x1d7c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C50u;
        // 0x1d7c54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c50) {
            ctx->pc = 0x1D7CB0u;
            goto label_1d7cb0;
        }
    }
    ctx->pc = 0x1D7C58u;
    // 0x1d7c58: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D7C58u;
    {
        const bool branch_taken_0x1d7c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c58) {
            ctx->pc = 0x1D7CF0u;
            goto label_1d7cf0;
        }
    }
    ctx->pc = 0x1D7C60u;
label_1d7c60:
    // 0x1d7c60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d7c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7c68: 0x8074c9e  j           func_1D3278
    ctx->pc = 0x1D7C68u;
    ctx->pc = 0x1D7C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C68u;
    // 0x1d7c6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3278u;
    FUN_001d3278_0x1d3278(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7C70u;
label_1d7c70:
    // 0x1d7c70: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x1d7c70u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d7c74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d7c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7c78: 0x8074cb8  j           func_1D32E0
    ctx->pc = 0x1D7C78u;
    ctx->pc = 0x1D7C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C78u;
    // 0x1d7c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D32E0u;
    FUN_001d32e0_0x1d32e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7C80u;
label_1d7c80:
    // 0x1d7c80: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x1d7c80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d7c84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d7c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7c8c: 0x8074cf0  j           func_1D33C0
    ctx->pc = 0x1D7C8Cu;
    ctx->pc = 0x1D7C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C8Cu;
    // 0x1d7c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33C0u;
    FUN_001d33c0_0x1d33c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7C94u;
    // 0x1d7c94: 0x0  nop
    ctx->pc = 0x1d7c94u;
    // NOP
label_1d7c98:
    // 0x1d7c98: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x1d7c98u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d7c9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d7c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7ca4: 0x8074d08  j           func_1D3420
    ctx->pc = 0x1D7CA4u;
    ctx->pc = 0x1D7CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CA4u;
    // 0x1d7ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3420u;
    FUN_001d3420_0x1d3420(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7CACu;
    // 0x1d7cac: 0x0  nop
    ctx->pc = 0x1d7cacu;
    // NOP
label_1d7cb0:
    // 0x1d7cb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d7cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7cb4: 0x8074d20  j           func_1D3480
    ctx->pc = 0x1D7CB4u;
    ctx->pc = 0x1D7CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CB4u;
    // 0x1d7cb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3480u;
    FUN_001d3480_0x1d3480(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7CBCu;
    // 0x1d7cbc: 0x0  nop
    ctx->pc = 0x1d7cbcu;
    // NOP
label_1d7cc0:
    // 0x1d7cc0: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x1d7cc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1d7cc4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D7CC4u;
    {
        const bool branch_taken_0x1d7cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7cc4) {
            ctx->pc = 0x1D7CF0u;
            goto label_1d7cf0;
        }
    }
    ctx->pc = 0x1D7CCCu;
    // 0x1d7ccc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d7cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d7cd0: 0x80860002  lb          $a2, 0x2($a0)
    ctx->pc = 0x1d7cd0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d7cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7cd8: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1d7cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d7cdc: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d7cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d7ce0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7ce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ce4: 0x8075674  j           func_1D59D0
    ctx->pc = 0x1D7CE4u;
    ctx->pc = 0x1D7CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CE4u;
    // 0x1d7ce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    FUN_001d59d0_0x1d59d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7CECu;
    // 0x1d7cec: 0x0  nop
    ctx->pc = 0x1d7cecu;
    // NOP
label_1d7cf0:
    // 0x1d7cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CF0u;
        // 0x1d7cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7CF8u;
}
