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

// Function: FUN_00161a50
// Address: 0x161a50 - 0x161c14
void FUN_00161a50_0x161a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00161a50_0x161a50");
#endif

    switch (ctx->pc) {
        case 0x161b28u: goto label_161b28;
        case 0x161bd4u: goto label_161bd4;
        default: break;
    }

    ctx->pc = 0x161a50u;

    // 0x161a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x161a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161a5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a60: 0x9084021e  lbu         $a0, 0x21E($a0)
    ctx->pc = 0x161a60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 542)));
    // 0x161a64: 0x4800067  bltz        $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x161A64u;
    {
        const bool branch_taken_0x161a64 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x161a64) {
            ctx->pc = 0x161C04u;
            goto label_161c04;
        }
    }
    ctx->pc = 0x161A6Cu;
    // 0x161a6c: 0x93878488  lbu         $a3, -0x7B78($gp)
    ctx->pc = 0x161a6cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x161a70: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x161A70u;
    {
        const bool branch_taken_0x161a70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x161A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A70u;
        // 0x161a74: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a70) {
            ctx->pc = 0x161A8Cu;
            goto label_161a8c;
        }
    }
    ctx->pc = 0x161A78u;
    // 0x161a78: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x161a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x161a7c: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x161a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x161a80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161a84: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x161a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161a88: 0x0  nop
    ctx->pc = 0x161a88u;
    // NOP
label_161a8c:
    // 0x161a8c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x161A8Cu;
    {
        const bool branch_taken_0x161a8c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x161a8c) {
            ctx->pc = 0x161A9Cu;
            goto label_161a9c;
        }
    }
    ctx->pc = 0x161A94u;
    // 0x161a94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x161A94u;
    {
        const bool branch_taken_0x161a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A94u;
        // 0x161a98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a94) {
            ctx->pc = 0x161AACu;
            goto label_161aac;
        }
    }
    ctx->pc = 0x161A9Cu;
label_161a9c:
    // 0x161a9c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x161a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x161aa0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x161aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x161aa4: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x161aa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x161aa8: 0x0  nop
    ctx->pc = 0x161aa8u;
    // NOP
label_161aac:
    // 0x161aac: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x161aacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x161ab0: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x161AB0u;
    {
        const bool branch_taken_0x161ab0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x161AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AB0u;
        // 0x161ab4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ab0) {
            ctx->pc = 0x161ACCu;
            goto label_161acc;
        }
    }
    ctx->pc = 0x161AB8u;
    // 0x161ab8: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x161ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x161abc: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x161abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x161ac0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161ac4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x161ac4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161ac8: 0x0  nop
    ctx->pc = 0x161ac8u;
    // NOP
label_161acc:
    // 0x161acc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161ACCu;
    {
        const bool branch_taken_0x161acc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x161AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161ACCu;
        // 0x161ad0: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161acc) {
            ctx->pc = 0x161ADCu;
            goto label_161adc;
        }
    }
    ctx->pc = 0x161AD4u;
    // 0x161ad4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x161AD4u;
    {
        const bool branch_taken_0x161ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AD4u;
        // 0x161ad8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ad4) {
            ctx->pc = 0x161AE8u;
            goto label_161ae8;
        }
    }
    ctx->pc = 0x161ADCu;
label_161adc:
    // 0x161adc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x161adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x161ae0: 0x84630024  lh          $v1, 0x24($v1)
    ctx->pc = 0x161ae0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x161ae4: 0x0  nop
    ctx->pc = 0x161ae4u;
    // NOP
label_161ae8:
    // 0x161ae8: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x161ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x161aec: 0x28c10004  slti        $at, $a2, 0x4
    ctx->pc = 0x161aecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x161af0: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x161AF0u;
    {
        const bool branch_taken_0x161af0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x161AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AF0u;
        // 0x161af4: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161af0) {
            ctx->pc = 0x161B30u;
            goto label_161b30;
        }
    }
    ctx->pc = 0x161AF8u;
    // 0x161af8: 0x8203021c  lb          $v1, 0x21C($s0)
    ctx->pc = 0x161af8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x161afc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x161AFCu;
    {
        const bool branch_taken_0x161afc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x161B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AFCu;
        // 0x161b00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161afc) {
            ctx->pc = 0x161B10u;
            goto label_161b10;
        }
    }
    ctx->pc = 0x161B04u;
    // 0x161b04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x161b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161b08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161B08u;
    {
        const bool branch_taken_0x161b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B08u;
        // 0x161b0c: 0xa203021c  sb          $v1, 0x21C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 540), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b08) {
            ctx->pc = 0x161B14u;
            goto label_161b14;
        }
    }
    ctx->pc = 0x161B10u;
label_161b10:
    // 0x161b10: 0xa203021c  sb          $v1, 0x21C($s0)
    ctx->pc = 0x161b10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 540), (uint8_t)GPR_U32(ctx, 3));
label_161b14:
    // 0x161b14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x161b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161b18: 0x14c3003a  bne         $a2, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x161B18u;
    {
        const bool branch_taken_0x161b18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x161B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B18u;
        // 0x161b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b18) {
            ctx->pc = 0x161C04u;
            goto label_161c04;
        }
    }
    ctx->pc = 0x161B20u;
    // 0x161b20: 0xc042118  jal         func_108460
    ctx->pc = 0x161B20u;
    SET_GPR_U32(ctx, 31, 0x161B28u);
    ctx->pc = 0x161B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161B20u;
    // 0x161b24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x161B20u, 0x161B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161B28u;
label_161b28:
    // 0x161b28: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x161B28u;
    {
        const bool branch_taken_0x161b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B28u;
        // 0x161b2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b28) {
            ctx->pc = 0x161C08u;
            goto label_161c08;
        }
    }
    ctx->pc = 0x161B30u;
label_161b30:
    // 0x161b30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x161b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161b34: 0x14c30014  bne         $a2, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x161B34u;
    {
        const bool branch_taken_0x161b34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x161B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B34u;
        // 0x161b38: 0x28c1fffe  slti        $at, $a2, -0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967294) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b34) {
            ctx->pc = 0x161B88u;
            goto label_161b88;
        }
    }
    ctx->pc = 0x161B3Cu;
    // 0x161b3c: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x161b3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x161b40: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x161B40u;
    {
        const bool branch_taken_0x161b40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B40u;
        // 0x161b44: 0x28a10004  slti        $at, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b40) {
            ctx->pc = 0x161B84u;
            goto label_161b84;
        }
    }
    ctx->pc = 0x161B48u;
    // 0x161b48: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x161B48u;
    {
        const bool branch_taken_0x161b48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x161b48) {
            ctx->pc = 0x161B84u;
            goto label_161b84;
        }
    }
    ctx->pc = 0x161B50u;
    // 0x161b50: 0x8203021c  lb          $v1, 0x21C($s0)
    ctx->pc = 0x161b50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x161b54: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x161B54u;
    {
        const bool branch_taken_0x161b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x161b54) {
            ctx->pc = 0x161B84u;
            goto label_161b84;
        }
    }
    ctx->pc = 0x161B5Cu;
    // 0x161b5c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x161B5Cu;
    {
        const bool branch_taken_0x161b5c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x161b5c) {
            ctx->pc = 0x161B70u;
            goto label_161b70;
        }
    }
    ctx->pc = 0x161B64u;
    // 0x161b64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x161b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161b68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x161B68u;
    {
        const bool branch_taken_0x161b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B68u;
        // 0x161b6c: 0xa203021c  sb          $v1, 0x21C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 540), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b68) {
            ctx->pc = 0x161B78u;
            goto label_161b78;
        }
    }
    ctx->pc = 0x161B70u;
label_161b70:
    // 0x161b70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x161b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161b74: 0xa203021c  sb          $v1, 0x21C($s0)
    ctx->pc = 0x161b74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 540), (uint8_t)GPR_U32(ctx, 3));
label_161b78:
    // 0x161b78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x161b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161b7c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x161B7Cu;
    {
        const bool branch_taken_0x161b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B7Cu;
        // 0x161b80: 0xa6030220  sh          $v1, 0x220($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b7c) {
            ctx->pc = 0x161C04u;
            goto label_161c04;
        }
    }
    ctx->pc = 0x161B84u;
label_161b84:
    // 0x161b84: 0x28c1fffe  slti        $at, $a2, -0x2
    ctx->pc = 0x161b84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967294) ? 1 : 0);
label_161b88:
    // 0x161b88: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x161B88u;
    {
        const bool branch_taken_0x161b88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B88u;
        // 0x161b8c: 0x2404fffe  addiu       $a0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b88) {
            ctx->pc = 0x161BE0u;
            goto label_161be0;
        }
    }
    ctx->pc = 0x161B90u;
    // 0x161b90: 0x8204021c  lb          $a0, 0x21C($s0)
    ctx->pc = 0x161b90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x161b94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x161b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161b98: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x161B98u;
    {
        const bool branch_taken_0x161b98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x161b98) {
            ctx->pc = 0x161BDCu;
            goto label_161bdc;
        }
    }
    ctx->pc = 0x161BA0u;
    // 0x161ba0: 0xc6010218  lwc1        $f1, 0x218($s0)
    ctx->pc = 0x161ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161ba4: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x161ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x161ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161bac: 0x0  nop
    ctx->pc = 0x161bacu;
    // NOP
    // 0x161bb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161bb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161bb4: 0x0  nop
    ctx->pc = 0x161bb4u;
    // NOP
    // 0x161bb8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x161BB8u;
    {
        const bool branch_taken_0x161bb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161bb8) {
            ctx->pc = 0x161BDCu;
            goto label_161bdc;
        }
    }
    ctx->pc = 0x161BC0u;
    // 0x161bc0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x161bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x161bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bc8: 0xa202021c  sb          $v0, 0x21C($s0)
    ctx->pc = 0x161bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 540), (uint8_t)GPR_U32(ctx, 2));
    // 0x161bcc: 0xc042118  jal         func_108460
    ctx->pc = 0x161BCCu;
    SET_GPR_U32(ctx, 31, 0x161BD4u);
    ctx->pc = 0x161BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161BCCu;
    // 0x161bd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x161BCCu, 0x161BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161BD4u;
label_161bd4:
    // 0x161bd4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x161BD4u;
    {
        const bool branch_taken_0x161bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BD4u;
        // 0x161bd8: 0xa6000220  sh          $zero, 0x220($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161bd4) {
            ctx->pc = 0x161C04u;
            goto label_161c04;
        }
    }
    ctx->pc = 0x161BDCu;
label_161bdc:
    // 0x161bdc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x161bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_161be0:
    // 0x161be0: 0x14c40008  bne         $a2, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x161BE0u;
    {
        const bool branch_taken_0x161be0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x161BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BE0u;
        // 0x161be4: 0x28a10004  slti        $at, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161be0) {
            ctx->pc = 0x161C04u;
            goto label_161c04;
        }
    }
    ctx->pc = 0x161BE8u;
    // 0x161be8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x161BE8u;
    {
        const bool branch_taken_0x161be8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x161be8) {
            ctx->pc = 0x161C04u;
            goto label_161c04;
        }
    }
    ctx->pc = 0x161BF0u;
    // 0x161bf0: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x161bf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x161bf4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x161BF4u;
    {
        const bool branch_taken_0x161bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161bf4) {
            ctx->pc = 0x161C04u;
            goto label_161c04;
        }
    }
    ctx->pc = 0x161BFCu;
    // 0x161bfc: 0xa204021c  sb          $a0, 0x21C($s0)
    ctx->pc = 0x161bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 540), (uint8_t)GPR_U32(ctx, 4));
    // 0x161c00: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x161c00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
label_161c04:
    // 0x161c04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x161c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_161c08:
    // 0x161c08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x161C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C0Cu;
        // 0x161c10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161C14u;
}
