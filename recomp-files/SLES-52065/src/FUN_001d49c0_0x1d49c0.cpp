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

// Function: FUN_001d49c0
// Address: 0x1d49c0 - 0x1d4ae8
void FUN_001d49c0_0x1d49c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d49c0_0x1d49c0");
#endif

    switch (ctx->pc) {
        case 0x1d49f4u: goto label_1d49f4;
        case 0x1d4a4cu: goto label_1d4a4c;
        case 0x1d4a84u: goto label_1d4a84;
        case 0x1d4aa4u: goto label_1d4aa4;
        default: break;
    }

    ctx->pc = 0x1d49c0u;

    // 0x1d49c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d49c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d49c4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1d49c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d49c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d49c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d49cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d49ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d49d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d49d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d49d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d49d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d49d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d49d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d49dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d49dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d49e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d49e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d49e4: 0x5443003a  bnel        $v0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D49E4u;
    {
        const bool branch_taken_0x1d49e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d49e4) {
            ctx->pc = 0x1D49E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D49E4u;
            // 0x1d49e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4AD0u;
            goto label_1d4ad0;
        }
    }
    ctx->pc = 0x1D49ECu;
    // 0x1d49ec: 0xc07514a  jal         func_1D4528
    ctx->pc = 0x1D49ECu;
    SET_GPR_U32(ctx, 31, 0x1D49F4u);
    ctx->pc = 0x1D49F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D49ECu;
    // 0x1d49f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4528u, 0x1D49ECu, 0x1D49F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D49F4u;
label_1d49f4:
    // 0x1d49f4: 0x8e0802d4  lw          $t0, 0x2D4($s0)
    ctx->pc = 0x1d49f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x1d49f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d49f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d49fc: 0x12680033  beq         $s3, $t0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1D49FCu;
    {
        const bool branch_taken_0x1d49fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 8));
        ctx->pc = 0x1D4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49FCu;
        // 0x1d4a00: 0x113102a  slt         $v0, $t0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49fc) {
            ctx->pc = 0x1D4ACCu;
            goto label_1d4acc;
        }
    }
    ctx->pc = 0x1D4A04u;
    // 0x1d4a04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4A04u;
    {
        const bool branch_taken_0x1d4a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A04u;
        // 0x1d4a08: 0x2688823  subu        $s1, $s3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a04) {
            ctx->pc = 0x1D4A14u;
            goto label_1d4a14;
        }
    }
    ctx->pc = 0x1D4A0Cu;
    // 0x1d4a0c: 0x8e020234  lw          $v0, 0x234($s0)
    ctx->pc = 0x1d4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x1d4a10: 0x488823  subu        $s1, $v0, $t0
    ctx->pc = 0x1d4a10u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1d4a14:
    // 0x1d4a14: 0x8e040248  lw          $a0, 0x248($s0)
    ctx->pc = 0x1d4a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x1d4a18: 0x8e020244  lw          $v0, 0x244($s0)
    ctx->pc = 0x1d4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x1d4a1c: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1d4a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d4a20: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x1d4a20u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4a24: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1d4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d4a28: 0x2a430000  slti        $v1, $s2, 0x0
    ctx->pc = 0x1d4a28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d4a2c: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x1d4a2cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x1d4a30: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4A30u;
    {
        const bool branch_taken_0x1d4a30 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1D4A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A30u;
        // 0x1d4a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a30) {
            ctx->pc = 0x1D4A4Cu;
            goto label_1d4a4c;
        }
    }
    ctx->pc = 0x1D4A38u;
    // 0x1d4a38: 0x8e060230  lw          $a2, 0x230($s0)
    ctx->pc = 0x1d4a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1d4a3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d4a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4a40: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1d4a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a44: 0xc075184  jal         func_1D4610
    ctx->pc = 0x1D4A44u;
    SET_GPR_U32(ctx, 31, 0x1D4A4Cu);
    ctx->pc = 0x1D4A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A44u;
    // 0x1d4a48: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4610u, 0x1D4A44u, 0x1D4A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A4Cu;
label_1d4a4c:
    // 0x1d4a4c: 0x642001b  bltzl       $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D4A4Cu;
    {
        const bool branch_taken_0x1d4a4c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1d4a4c) {
            ctx->pc = 0x1D4A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4A4Cu;
            // 0x1d4a50: 0x8e0202d4  lw          $v0, 0x2D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4ABCu;
            goto label_1d4abc;
        }
    }
    ctx->pc = 0x1D4A54u;
    // 0x1d4a54: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1d4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1d4a58: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D4A58u;
    {
        const bool branch_taken_0x1d4a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A58u;
        // 0x1d4a5c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a58) {
            ctx->pc = 0x1D4AB0u;
            goto label_1d4ab0;
        }
    }
    ctx->pc = 0x1D4A60u;
    // 0x1d4a60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d4a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d4a64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d4a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d4a68: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4A68u;
    {
        const bool branch_taken_0x1d4a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A68u;
        // 0x1d4a6c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a68) {
            ctx->pc = 0x1D4A84u;
            goto label_1d4a84;
        }
    }
    ctx->pc = 0x1D4A70u;
    // 0x1d4a70: 0x8e060240  lw          $a2, 0x240($s0)
    ctx->pc = 0x1d4a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1d4a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d4a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4a7c: 0xc075184  jal         func_1D4610
    ctx->pc = 0x1D4A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D4A84u);
    ctx->pc = 0x1D4A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A7Cu;
    // 0x1d4a80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4610u, 0x1D4A7Cu, 0x1D4A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A84u;
label_1d4a84:
    // 0x1d4a84: 0x8e060230  lw          $a2, 0x230($s0)
    ctx->pc = 0x1d4a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1d4a88: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1d4a88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a8c: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x1d4a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x1d4a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d4a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4a98: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1d4a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d4a9c: 0xc075184  jal         func_1D4610
    ctx->pc = 0x1D4A9Cu;
    SET_GPR_U32(ctx, 31, 0x1D4AA4u);
    ctx->pc = 0x1D4AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A9Cu;
    // 0x1d4aa0: 0xd13021  addu        $a2, $a2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4610u, 0x1D4A9Cu, 0x1D4AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AA4u;
label_1d4aa4:
    // 0x1d4aa4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4AA4u;
    {
        const bool branch_taken_0x1d4aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AA4u;
        // 0x1d4aa8: 0x8e0202d4  lw          $v0, 0x2D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4aa4) {
            ctx->pc = 0x1D4ABCu;
            goto label_1d4abc;
        }
    }
    ctx->pc = 0x1D4AACu;
    // 0x1d4aac: 0x0  nop
    ctx->pc = 0x1d4aacu;
    // NOP
label_1d4ab0:
    // 0x1d4ab0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1d4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d4ab4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d4ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d4ab8: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x1d4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_1d4abc:
    // 0x1d4abc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d4abcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ac0: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x1d4ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1d4ac4: 0x262180b  movn        $v1, $s3, $v0
    ctx->pc = 0x1d4ac4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 19));
    // 0x1d4ac8: 0xae0302d4  sw          $v1, 0x2D4($s0)
    ctx->pc = 0x1d4ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 3));
label_1d4acc:
    // 0x1d4acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d4accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4ad0:
    // 0x1d4ad0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d4ad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d4ad4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d4ad4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4ad8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d4ad8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d4adc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d4adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AE0u;
        // 0x1d4ae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4AE8u;
}
