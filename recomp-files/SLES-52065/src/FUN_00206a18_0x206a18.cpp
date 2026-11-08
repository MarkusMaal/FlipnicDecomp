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

// Function: FUN_00206a18
// Address: 0x206a18 - 0x207080
void FUN_00206a18_0x206a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00206a18_0x206a18");
#endif

    switch (ctx->pc) {
        case 0x206e74u: goto label_206e74;
        default: break;
    }

    ctx->pc = 0x206a18u;

    // 0x206a18: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x206a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a1c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x206a20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x206a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x206a24: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x206a24u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x206a28: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x206a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x206a2c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x206a2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x206a30: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x206A30u;
    {
        const bool branch_taken_0x206a30 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x206A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A30u;
        // 0x206a34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a30) {
            ctx->pc = 0x206A8Cu;
            goto label_206a8c;
        }
    }
    ctx->pc = 0x206A38u;
    // 0x206a38: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x206a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x206a3c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x206a3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x206a40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x206a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206a44: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206a48: 0x21023  negu        $v0, $v0
    ctx->pc = 0x206a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x206a4c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x206a4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x206a50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x206a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x206a54: 0x41823  negu        $v1, $a0
    ctx->pc = 0x206a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x206a58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x206a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x206a5c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x206a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x206a60: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x206a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x206a64: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x206a64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x206a68: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x206a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206a6c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x206a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x206a70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x206a70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x206a74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x206a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x206a78: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x206a78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x206a7c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x206a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206a80: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206a84: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x206a84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x206a88: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x206a88u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_206a8c:
    // 0x206a8c: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x206a8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x206a90: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x206A90u;
    {
        const bool branch_taken_0x206a90 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x206A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A90u;
        // 0x206a94: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a90) {
            ctx->pc = 0x206AE0u;
            goto label_206ae0;
        }
    }
    ctx->pc = 0x206A98u;
    // 0x206a98: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x206a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x206a9c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x206a9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x206aa0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x206aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206aa4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206aa8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x206aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x206aac: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x206aacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x206ab0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x206ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x206ab4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x206ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x206ab8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x206ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x206abc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x206abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x206ac0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x206ac0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x206ac4: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x206ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x206ac8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206ac8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206acc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x206accu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x206ad0: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x206ad0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x206ad4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x206ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x206ad8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x206ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x206adc: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x206adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_206ae0:
    // 0x206ae0: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x206ae0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x206ae4: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x206ae4u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x206ae8: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x206ae8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x206aec: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x206aecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x206af0: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x206af0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x206af4: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x206af4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x206af8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x206af8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x206afc: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x206AFCu;
    {
        const bool branch_taken_0x206afc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x206B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AFCu;
        // 0x206b00: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206afc) {
            ctx->pc = 0x206DCCu;
            goto label_206dcc;
        }
    }
    ctx->pc = 0x206B04u;
    // 0x206b04: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x206b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206b08: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x206B08u;
    {
        const bool branch_taken_0x206b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B08u;
        // 0x206b0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b08) {
            ctx->pc = 0x206B98u;
            goto label_206b98;
        }
    }
    ctx->pc = 0x206B10u;
    // 0x206b10: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x206b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206b14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x206B14u;
    {
        const bool branch_taken_0x206b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B14u;
        // 0x206b18: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b14) {
            ctx->pc = 0x206B30u;
            goto label_206b30;
        }
    }
    ctx->pc = 0x206B1Cu;
    // 0x206b1c: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x206b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x206b20: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x206b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x206b24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x206B24u;
    {
        const bool branch_taken_0x206b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B24u;
        // 0x206b28: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b24) {
            ctx->pc = 0x206B48u;
            goto label_206b48;
        }
    }
    ctx->pc = 0x206B2Cu;
    // 0x206b2c: 0x0  nop
    ctx->pc = 0x206b2cu;
    // NOP
label_206b30:
    // 0x206b30: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x206b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x206b34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x206b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x206b38: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x206b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x206b3c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x206b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206b40: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x206b40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x206b44: 0x0  nop
    ctx->pc = 0x206b44u;
    // NOP
label_206b48:
    // 0x206b48: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x206b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x206b4c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x206b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x206b50: 0x24425900  addiu       $v0, $v0, 0x5900
    ctx->pc = 0x206b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22784));
    // 0x206b54: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x206b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x206b58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x206b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206b5c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x206b5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206b60: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x206b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x206b64: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x206b64u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x206b68: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x206B68u;
    {
        const bool branch_taken_0x206b68 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B68u;
        // 0x206b6c: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b68) {
            ctx->pc = 0x206B84u;
            goto label_206b84;
        }
    }
    ctx->pc = 0x206B70u;
    // 0x206b70: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x206b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x206b74: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x206b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x206b78: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x206b78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x206b7c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x206b7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x206b80: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x206b80u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_206b84:
    // 0x206b84: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x206b84u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x206b88: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x206b88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x206b8c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x206B8Cu;
    {
        const bool branch_taken_0x206b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B8Cu;
        // 0x206b90: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b8c) {
            ctx->pc = 0x206D10u;
            goto label_206d10;
        }
    }
    ctx->pc = 0x206B94u;
    // 0x206b94: 0x0  nop
    ctx->pc = 0x206b94u;
    // NOP
label_206b98:
    // 0x206b98: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x206B98u;
    {
        const bool branch_taken_0x206b98 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x206B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B98u;
        // 0x206b9c: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b98) {
            ctx->pc = 0x206BC0u;
            goto label_206bc0;
        }
    }
    ctx->pc = 0x206BA0u;
    // 0x206ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206ba4: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206BA4u;
    {
        const bool branch_taken_0x206ba4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x206ba4) {
            ctx->pc = 0x206BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206BA4u;
            // 0x206ba8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206BACu;
            goto label_206bac;
        }
    }
    ctx->pc = 0x206BACu;
label_206bac:
    // 0x206bac: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x206bacu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x206bb0: 0x1012  mflo        $v0
    ctx->pc = 0x206bb0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206bb4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x206bb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x206bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x206bbc: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x206bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_206bc0:
    // 0x206bc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206BC0u;
    {
        const bool branch_taken_0x206bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BC0u;
        // 0x206bc4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206bc0) {
            ctx->pc = 0x206BD8u;
            goto label_206bd8;
        }
    }
    ctx->pc = 0x206BC8u;
    // 0x206bc8: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x206bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x206bcc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x206bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x206bd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x206BD0u;
    {
        const bool branch_taken_0x206bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BD0u;
        // 0x206bd4: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206bd0) {
            ctx->pc = 0x206BF0u;
            goto label_206bf0;
        }
    }
    ctx->pc = 0x206BD8u;
label_206bd8:
    // 0x206bd8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x206bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x206bdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x206bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x206be0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x206be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x206be4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x206be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206be8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x206be8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x206bec: 0x0  nop
    ctx->pc = 0x206becu;
    // NOP
label_206bf0:
    // 0x206bf0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x206bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x206bf4: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x206bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x206bf8: 0x24425900  addiu       $v0, $v0, 0x5900
    ctx->pc = 0x206bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22784));
    // 0x206bfc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x206bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x206c00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x206c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206c04: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x206c04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206c08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x206c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x206c0c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x206c0cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x206c10: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x206C10u;
    {
        const bool branch_taken_0x206c10 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x206C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C10u;
        // 0x206c14: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c10) {
            ctx->pc = 0x206C28u;
            goto label_206c28;
        }
    }
    ctx->pc = 0x206C18u;
    // 0x206c18: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x206c18u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x206c1c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x206c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x206c20: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x206C20u;
    {
        const bool branch_taken_0x206c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C20u;
        // 0x206c24: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c20) {
            ctx->pc = 0x206D04u;
            goto label_206d04;
        }
    }
    ctx->pc = 0x206C28u;
label_206c28:
    // 0x206c28: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x206c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x206c2c: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x206c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x206c30: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x206c30u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x206c34: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x206c34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x206c38: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x206c38u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x206c3c: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x206c3cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x206c40: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x206c40u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x206c44: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x206c44u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x206c48: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x206c48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x206c4c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x206c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c50: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x206c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x206c54: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206C54u;
    {
        const bool branch_taken_0x206c54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x206c54) {
            ctx->pc = 0x206C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206C54u;
            // 0x206c58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206C5Cu;
            goto label_206c5c;
        }
    }
    ctx->pc = 0x206C5Cu;
label_206c5c:
    // 0x206c5c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x206c5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c60: 0x1012  mflo        $v0
    ctx->pc = 0x206c60u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206c64: 0x1810  mfhi        $v1
    ctx->pc = 0x206c64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x206c68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206c6c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x206c70: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206c70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206c74: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x206c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x206c78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206c7c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206c80: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x206C80u;
    {
        const bool branch_taken_0x206c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206c80) {
            ctx->pc = 0x206C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206C80u;
            // 0x206c84: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206CACu;
            goto label_206cac;
        }
    }
    ctx->pc = 0x206C88u;
    // 0x206c88: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x206c8c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x206c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206c90: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x206C90u;
    {
        const bool branch_taken_0x206c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206c90) {
            ctx->pc = 0x206C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206C90u;
            // 0x206c94: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206CACu;
            goto label_206cac;
        }
    }
    ctx->pc = 0x206C98u;
    // 0x206c98: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206c9c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x206C9Cu;
    {
        const bool branch_taken_0x206c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206c9c) {
            ctx->pc = 0x206CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206C9Cu;
            // 0x206ca0: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206CA8u;
            goto label_206ca8;
        }
    }
    ctx->pc = 0x206CA4u;
    // 0x206ca4: 0x0  nop
    ctx->pc = 0x206ca4u;
    // NOP
label_206ca8:
    // 0x206ca8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x206ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_206cac:
    // 0x206cac: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x206cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x206cb0: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x206cb0u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x206cb4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206CB4u;
    {
        const bool branch_taken_0x206cb4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x206cb4) {
            ctx->pc = 0x206CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206CB4u;
            // 0x206cb8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206CBCu;
            goto label_206cbc;
        }
    }
    ctx->pc = 0x206CBCu;
label_206cbc:
    // 0x206cbc: 0x1012  mflo        $v0
    ctx->pc = 0x206cbcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206cc0: 0x1810  mfhi        $v1
    ctx->pc = 0x206cc0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x206cc4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206cc8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x206ccc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206cccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206cd0: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x206cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x206cd4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206cd8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206cdc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x206CDCu;
    {
        const bool branch_taken_0x206cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206cdc) {
            ctx->pc = 0x206CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206CDCu;
            // 0x206ce0: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D04u;
            goto label_206d04;
        }
    }
    ctx->pc = 0x206CE4u;
    // 0x206ce4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x206ce8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x206ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206cec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206CECu;
    {
        const bool branch_taken_0x206cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CECu;
        // 0x206cf0: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206cec) {
            ctx->pc = 0x206D04u;
            goto label_206d04;
        }
    }
    ctx->pc = 0x206CF4u;
    // 0x206cf4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206cf8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206CF8u;
    {
        const bool branch_taken_0x206cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206cf8) {
            ctx->pc = 0x206CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206CF8u;
            // 0x206cfc: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D00u;
            goto label_206d00;
        }
    }
    ctx->pc = 0x206D00u;
label_206d00:
    // 0x206d00: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x206d00u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_206d04:
    // 0x206d04: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x206d04u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x206d08: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x206d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d0c: 0x0  nop
    ctx->pc = 0x206d0cu;
    // NOP
label_206d10:
    // 0x206d10: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x206d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x206d14: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206D14u;
    {
        const bool branch_taken_0x206d14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x206d14) {
            ctx->pc = 0x206D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206D14u;
            // 0x206d18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D1Cu;
            goto label_206d1c;
        }
    }
    ctx->pc = 0x206D1Cu;
label_206d1c:
    // 0x206d1c: 0x1012  mflo        $v0
    ctx->pc = 0x206d1cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206d20: 0x1810  mfhi        $v1
    ctx->pc = 0x206d20u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x206d24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206d28: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x206d2c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206d2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206d30: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x206d30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x206d34: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206d38: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206d3c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x206D3Cu;
    {
        const bool branch_taken_0x206d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206d3c) {
            ctx->pc = 0x206D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206D3Cu;
            // 0x206d40: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D64u;
            goto label_206d64;
        }
    }
    ctx->pc = 0x206D44u;
    // 0x206d44: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x206d48: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x206d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206d4c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x206D4Cu;
    {
        const bool branch_taken_0x206d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206d4c) {
            ctx->pc = 0x206D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206D4Cu;
            // 0x206d50: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D64u;
            goto label_206d64;
        }
    }
    ctx->pc = 0x206D54u;
    // 0x206d54: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206d58: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206D58u;
    {
        const bool branch_taken_0x206d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206d58) {
            ctx->pc = 0x206D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206D58u;
            // 0x206d5c: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D60u;
            goto label_206d60;
        }
    }
    ctx->pc = 0x206D60u;
label_206d60:
    // 0x206d60: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x206d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_206d64:
    // 0x206d64: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x206d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x206d68: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x206d68u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x206d6c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206D6Cu;
    {
        const bool branch_taken_0x206d6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x206d6c) {
            ctx->pc = 0x206D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206D6Cu;
            // 0x206d70: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D74u;
            goto label_206d74;
        }
    }
    ctx->pc = 0x206D74u;
label_206d74:
    // 0x206d74: 0x1012  mflo        $v0
    ctx->pc = 0x206d74u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206d78: 0x1810  mfhi        $v1
    ctx->pc = 0x206d78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x206d7c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206d80: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x206d84: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206d84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206d88: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x206d88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x206d8c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206d90: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206d94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x206D94u;
    {
        const bool branch_taken_0x206d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206d94) {
            ctx->pc = 0x206DB4u;
            goto label_206db4;
        }
    }
    ctx->pc = 0x206D9Cu;
    // 0x206d9c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x206da0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x206da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206da4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206DA4u;
    {
        const bool branch_taken_0x206da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DA4u;
        // 0x206da8: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206da4) {
            ctx->pc = 0x206DB4u;
            goto label_206db4;
        }
    }
    ctx->pc = 0x206DACu;
    // 0x206dac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206DACu;
    {
        const bool branch_taken_0x206dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206dac) {
            ctx->pc = 0x206DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206DACu;
            // 0x206db0: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206DB4u;
            goto label_206db4;
        }
    }
    ctx->pc = 0x206DB4u;
label_206db4:
    // 0x206db4: 0x13200097  beqz        $t9, . + 4 + (0x97 << 2)
    ctx->pc = 0x206DB4u;
    {
        const bool branch_taken_0x206db4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x206DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DB4u;
        // 0x206db8: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206db4) {
            ctx->pc = 0x207014u;
            goto label_207014;
        }
    }
    ctx->pc = 0x206DBCu;
    // 0x206dbc: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x206dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x206dc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x206dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x206dc4: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x206DC4u;
    {
        const bool branch_taken_0x206dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DC4u;
        // 0x206dc8: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206dc4) {
            ctx->pc = 0x207010u;
            goto label_207010;
        }
    }
    ctx->pc = 0x206DCCu;
label_206dcc:
    // 0x206dcc: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x206dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x206dd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x206DD0u;
    {
        const bool branch_taken_0x206dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DD0u;
        // 0x206dd4: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206dd0) {
            ctx->pc = 0x206DECu;
            goto label_206dec;
        }
    }
    ctx->pc = 0x206DD8u;
    // 0x206dd8: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x206dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x206ddc: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x206ddcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x206de0: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x206de0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x206de4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x206DE4u;
    {
        const bool branch_taken_0x206de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DE4u;
        // 0x206de8: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206de4) {
            ctx->pc = 0x207014u;
            goto label_207014;
        }
    }
    ctx->pc = 0x206DECu;
label_206dec:
    // 0x206dec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x206decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x206df0: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x206df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x206df4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x206DF4u;
    {
        const bool branch_taken_0x206df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DF4u;
        // 0x206df8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206df4) {
            ctx->pc = 0x206E10u;
            goto label_206e10;
        }
    }
    ctx->pc = 0x206DFCu;
    // 0x206dfc: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x206dfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x206e00: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x206e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x206e04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x206E04u;
    {
        const bool branch_taken_0x206e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E04u;
        // 0x206e08: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e04) {
            ctx->pc = 0x206E28u;
            goto label_206e28;
        }
    }
    ctx->pc = 0x206E0Cu;
    // 0x206e0c: 0x0  nop
    ctx->pc = 0x206e0cu;
    // NOP
label_206e10:
    // 0x206e10: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x206e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x206e14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x206e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x206e18: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x206e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x206e1c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x206e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x206e20: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x206e20u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x206e24: 0x0  nop
    ctx->pc = 0x206e24u;
    // NOP
label_206e28:
    // 0x206e28: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x206e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x206e2c: 0xc92006  srlv        $a0, $t1, $a2
    ctx->pc = 0x206e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x206e30: 0x24425900  addiu       $v0, $v0, 0x5900
    ctx->pc = 0x206e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22784));
    // 0x206e34: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x206e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x206e38: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x206e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206e3c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x206e3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206e40: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x206e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x206e44: 0xa36823  subu        $t5, $a1, $v1
    ctx->pc = 0x206e44u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x206e48: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x206E48u;
    {
        const bool branch_taken_0x206e48 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x206E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E48u;
        // 0x206e4c: 0xad7023  subu        $t6, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e48) {
            ctx->pc = 0x206E90u;
            goto label_206e90;
        }
    }
    ctx->pc = 0x206E50u;
    // 0x206e50: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x206e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x206e54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x206E54u;
    {
        const bool branch_taken_0x206e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E54u;
        // 0x206e58: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e54) {
            ctx->pc = 0x206E68u;
            goto label_206e68;
        }
    }
    ctx->pc = 0x206E5Cu;
    // 0x206e5c: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x206e5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206e60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206E60u;
    {
        const bool branch_taken_0x206e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206e60) {
            ctx->pc = 0x206E78u;
            goto label_206e78;
        }
    }
    ctx->pc = 0x206E68u;
label_206e68:
    // 0x206e68: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x206e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x206e6c: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x206e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x206e70: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x206e70u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_206e74:
    // 0x206e74: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x206e74u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206e78:
    // 0x206e78: 0x13200066  beqz        $t9, . + 4 + (0x66 << 2)
    ctx->pc = 0x206E78u;
    {
        const bool branch_taken_0x206e78 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x206E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E78u;
        // 0x206e7c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e78) {
            ctx->pc = 0x207014u;
            goto label_207014;
        }
    }
    ctx->pc = 0x206E80u;
    // 0x206e80: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x206e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x206e84: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x206e84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x206e88: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x206E88u;
    {
        const bool branch_taken_0x206e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E88u;
        // 0x206e8c: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e88) {
            ctx->pc = 0x207010u;
            goto label_207010;
        }
    }
    ctx->pc = 0x206E90u;
label_206e90:
    // 0x206e90: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x206e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x206e94: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x206e94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x206e98: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x206e98u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x206e9c: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x206e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x206ea0: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x206ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x206ea4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x206ea4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x206ea8: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x206ea8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x206eac: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x206eacu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x206eb0: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x206eb0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x206eb4: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x206eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x206eb8: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x206eb8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x206ebc: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x206ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x206ec0: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x206ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x206ec4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206EC4u;
    {
        const bool branch_taken_0x206ec4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x206ec4) {
            ctx->pc = 0x206EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206EC4u;
            // 0x206ec8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206ECCu;
            goto label_206ecc;
        }
    }
    ctx->pc = 0x206ECCu;
label_206ecc:
    // 0x206ecc: 0x1012  mflo        $v0
    ctx->pc = 0x206eccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206ed0: 0x1810  mfhi        $v1
    ctx->pc = 0x206ed0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x206ed4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x206ed4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ed8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206edc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x206ee0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206ee0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206ee4: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x206ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x206ee8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206eec: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x206eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x206ef0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x206EF0u;
    {
        const bool branch_taken_0x206ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206ef0) {
            ctx->pc = 0x206EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206EF0u;
            // 0x206ef4: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206F24u;
            goto label_206f24;
        }
    }
    ctx->pc = 0x206EF8u;
    // 0x206ef8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x206ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x206efc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x206efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x206f00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x206F00u;
    {
        const bool branch_taken_0x206f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F00u;
        // 0x206f04: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f00) {
            ctx->pc = 0x206F20u;
            goto label_206f20;
        }
    }
    ctx->pc = 0x206F08u;
    // 0x206f08: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x206f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x206f0c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x206F0Cu;
    {
        const bool branch_taken_0x206f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206f0c) {
            ctx->pc = 0x206F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206F0Cu;
            // 0x206f10: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206F24u;
            goto label_206f24;
        }
    }
    ctx->pc = 0x206F14u;
    // 0x206f14: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x206f14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x206f18: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x206f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x206f1c: 0x0  nop
    ctx->pc = 0x206f1cu;
    // NOP
label_206f20:
    // 0x206f20: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x206f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_206f24:
    // 0x206f24: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206F24u;
    {
        const bool branch_taken_0x206f24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x206f24) {
            ctx->pc = 0x206F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206F24u;
            // 0x206f28: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206F2Cu;
            goto label_206f2c;
        }
    }
    ctx->pc = 0x206F2Cu;
label_206f2c:
    // 0x206f2c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x206f2cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x206f30: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x206f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x206f34: 0x1012  mflo        $v0
    ctx->pc = 0x206f34u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206f38: 0x1810  mfhi        $v1
    ctx->pc = 0x206f38u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x206f3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x206f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206f44: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x206f48: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206f48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206f4c: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x206f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x206f50: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x206f50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206f54: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x206f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x206f58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x206F58u;
    {
        const bool branch_taken_0x206f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F58u;
        // 0x206f5c: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f58) {
            ctx->pc = 0x206F88u;
            goto label_206f88;
        }
    }
    ctx->pc = 0x206F60u;
    // 0x206f60: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x206f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x206f64: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x206f64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x206f68: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x206F68u;
    {
        const bool branch_taken_0x206f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F68u;
        // 0x206f6c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f68) {
            ctx->pc = 0x206F84u;
            goto label_206f84;
        }
    }
    ctx->pc = 0x206F70u;
    // 0x206f70: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x206f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x206f74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x206F74u;
    {
        const bool branch_taken_0x206f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F74u;
        // 0x206f78: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f74) {
            ctx->pc = 0x206F88u;
            goto label_206f88;
        }
    }
    ctx->pc = 0x206F7Cu;
    // 0x206f7c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x206f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x206f80: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x206f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_206f84:
    // 0x206f84: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x206f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_206f88:
    // 0x206f88: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x206f88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x206f8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x206f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x206f90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x206f90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x206f94: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x206f94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f98: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x206f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x206f9c: 0x480019  multu       $v0, $t0
    ctx->pc = 0x206f9cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x206fa0: 0x3810  mfhi        $a3
    ctx->pc = 0x206fa0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x206fa4: 0x3012  mflo        $a2
    ctx->pc = 0x206fa4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x206fa8: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x206fa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x206fac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x206FACu;
    {
        const bool branch_taken_0x206fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FACu;
        // 0x206fb0: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fac) {
            ctx->pc = 0x206FC8u;
            goto label_206fc8;
        }
    }
    ctx->pc = 0x206FB4u;
    // 0x206fb4: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x206FB4u;
    {
        const bool branch_taken_0x206fb4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        if (branch_taken_0x206fb4) {
            ctx->pc = 0x206FD8u;
            goto label_206fd8;
        }
    }
    ctx->pc = 0x206FBCu;
    // 0x206fbc: 0x186102b  sltu        $v0, $t4, $a2
    ctx->pc = 0x206fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206fc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206FC0u;
    {
        const bool branch_taken_0x206fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206fc0) {
            ctx->pc = 0x206FD8u;
            goto label_206fd8;
        }
    }
    ctx->pc = 0x206FC8u;
label_206fc8:
    // 0x206fc8: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x206fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x206fcc: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x206fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x206fd0: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x206fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206fd4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x206fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206fd8:
    // 0x206fd8: 0x1320000e  beqz        $t9, . + 4 + (0xE << 2)
    ctx->pc = 0x206FD8u;
    {
        const bool branch_taken_0x206fd8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x206FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FD8u;
        // 0x206fdc: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fd8) {
            ctx->pc = 0x207014u;
            goto label_207014;
        }
    }
    ctx->pc = 0x206FE0u;
    // 0x206fe0: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x206fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x206fe4: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x206fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x206fe8: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x206fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206fec: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x206fecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x206ff0: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x206ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x206ff4: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x206ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x206ff8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x206ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x206ffc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x206ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x207000: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x207000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x207004: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x207004u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x207008: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x207008u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x20700c: 0x0  nop
    ctx->pc = 0x20700cu;
    // NOP
label_207010:
    // 0x207010: 0xff2f0000  sd          $t7, 0x0($t9)
    ctx->pc = 0x207010u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 15));
label_207014:
    // 0x207014: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x207014u;
    {
        const bool branch_taken_0x207014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x207018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207014u;
        // 0x207018: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207014) {
            ctx->pc = 0x207070u;
            goto label_207070;
        }
    }
    ctx->pc = 0x20701Cu;
    // 0x20701c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20701cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207020: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x207020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x207024: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x207024u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x207028: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x207028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20702c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20702cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x207030: 0x21023  negu        $v0, $v0
    ctx->pc = 0x207030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x207034: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207034u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207038: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x207038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20703c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x20703cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x207040: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x207040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x207044: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x207044u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x207048: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x207048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
    // 0x20704c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x20704cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x207050: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x207050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x207054: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x207054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x207058: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x207058u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x20705c: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x20705cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x207060: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x207060u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x207064: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207068: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x207068u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x20706c: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x20706cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
label_207070:
    // 0x207070: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x207070u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207074: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x207074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207078: 0x3e00008  jr          $ra
    ctx->pc = 0x207078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207078u;
        // 0x20707c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207080u;
}
