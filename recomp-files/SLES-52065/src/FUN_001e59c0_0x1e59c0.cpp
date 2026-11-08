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

// Function: FUN_001e59c0
// Address: 0x1e59c0 - 0x1e5b70
void FUN_001e59c0_0x1e59c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e59c0_0x1e59c0");
#endif

    switch (ctx->pc) {
        case 0x1e59c0u: goto label_1e59c0;
        case 0x1e59c4u: goto label_1e59c4;
        case 0x1e59c8u: goto label_1e59c8;
        case 0x1e59ccu: goto label_1e59cc;
        case 0x1e59d0u: goto label_1e59d0;
        case 0x1e59d4u: goto label_1e59d4;
        case 0x1e59d8u: goto label_1e59d8;
        case 0x1e59dcu: goto label_1e59dc;
        case 0x1e59e0u: goto label_1e59e0;
        case 0x1e59e4u: goto label_1e59e4;
        case 0x1e59e8u: goto label_1e59e8;
        case 0x1e59ecu: goto label_1e59ec;
        case 0x1e59f0u: goto label_1e59f0;
        case 0x1e59f4u: goto label_1e59f4;
        case 0x1e59f8u: goto label_1e59f8;
        case 0x1e59fcu: goto label_1e59fc;
        case 0x1e5a00u: goto label_1e5a00;
        case 0x1e5a04u: goto label_1e5a04;
        case 0x1e5a08u: goto label_1e5a08;
        case 0x1e5a0cu: goto label_1e5a0c;
        case 0x1e5a10u: goto label_1e5a10;
        case 0x1e5a14u: goto label_1e5a14;
        case 0x1e5a18u: goto label_1e5a18;
        case 0x1e5a1cu: goto label_1e5a1c;
        case 0x1e5a20u: goto label_1e5a20;
        case 0x1e5a24u: goto label_1e5a24;
        case 0x1e5a28u: goto label_1e5a28;
        case 0x1e5a2cu: goto label_1e5a2c;
        case 0x1e5a30u: goto label_1e5a30;
        case 0x1e5a34u: goto label_1e5a34;
        case 0x1e5a38u: goto label_1e5a38;
        case 0x1e5a3cu: goto label_1e5a3c;
        case 0x1e5a40u: goto label_1e5a40;
        case 0x1e5a44u: goto label_1e5a44;
        case 0x1e5a48u: goto label_1e5a48;
        case 0x1e5a4cu: goto label_1e5a4c;
        case 0x1e5a50u: goto label_1e5a50;
        case 0x1e5a54u: goto label_1e5a54;
        case 0x1e5a58u: goto label_1e5a58;
        case 0x1e5a5cu: goto label_1e5a5c;
        case 0x1e5a60u: goto label_1e5a60;
        case 0x1e5a64u: goto label_1e5a64;
        case 0x1e5a68u: goto label_1e5a68;
        case 0x1e5a6cu: goto label_1e5a6c;
        case 0x1e5a70u: goto label_1e5a70;
        case 0x1e5a74u: goto label_1e5a74;
        case 0x1e5a78u: goto label_1e5a78;
        case 0x1e5a7cu: goto label_1e5a7c;
        case 0x1e5a80u: goto label_1e5a80;
        case 0x1e5a84u: goto label_1e5a84;
        case 0x1e5a88u: goto label_1e5a88;
        case 0x1e5a8cu: goto label_1e5a8c;
        case 0x1e5a90u: goto label_1e5a90;
        case 0x1e5a94u: goto label_1e5a94;
        case 0x1e5a98u: goto label_1e5a98;
        case 0x1e5a9cu: goto label_1e5a9c;
        case 0x1e5aa0u: goto label_1e5aa0;
        case 0x1e5aa4u: goto label_1e5aa4;
        case 0x1e5aa8u: goto label_1e5aa8;
        case 0x1e5aacu: goto label_1e5aac;
        case 0x1e5ab0u: goto label_1e5ab0;
        case 0x1e5ab4u: goto label_1e5ab4;
        case 0x1e5ab8u: goto label_1e5ab8;
        case 0x1e5abcu: goto label_1e5abc;
        case 0x1e5ac0u: goto label_1e5ac0;
        case 0x1e5ac4u: goto label_1e5ac4;
        case 0x1e5ac8u: goto label_1e5ac8;
        case 0x1e5accu: goto label_1e5acc;
        case 0x1e5ad0u: goto label_1e5ad0;
        case 0x1e5ad4u: goto label_1e5ad4;
        case 0x1e5ad8u: goto label_1e5ad8;
        case 0x1e5adcu: goto label_1e5adc;
        case 0x1e5ae0u: goto label_1e5ae0;
        case 0x1e5ae4u: goto label_1e5ae4;
        case 0x1e5ae8u: goto label_1e5ae8;
        case 0x1e5aecu: goto label_1e5aec;
        case 0x1e5af0u: goto label_1e5af0;
        case 0x1e5af4u: goto label_1e5af4;
        case 0x1e5af8u: goto label_1e5af8;
        case 0x1e5afcu: goto label_1e5afc;
        case 0x1e5b00u: goto label_1e5b00;
        case 0x1e5b04u: goto label_1e5b04;
        case 0x1e5b08u: goto label_1e5b08;
        case 0x1e5b0cu: goto label_1e5b0c;
        case 0x1e5b10u: goto label_1e5b10;
        case 0x1e5b14u: goto label_1e5b14;
        case 0x1e5b18u: goto label_1e5b18;
        case 0x1e5b1cu: goto label_1e5b1c;
        case 0x1e5b20u: goto label_1e5b20;
        case 0x1e5b24u: goto label_1e5b24;
        case 0x1e5b28u: goto label_1e5b28;
        case 0x1e5b2cu: goto label_1e5b2c;
        case 0x1e5b30u: goto label_1e5b30;
        case 0x1e5b34u: goto label_1e5b34;
        case 0x1e5b38u: goto label_1e5b38;
        case 0x1e5b3cu: goto label_1e5b3c;
        case 0x1e5b40u: goto label_1e5b40;
        case 0x1e5b44u: goto label_1e5b44;
        case 0x1e5b48u: goto label_1e5b48;
        case 0x1e5b4cu: goto label_1e5b4c;
        case 0x1e5b50u: goto label_1e5b50;
        case 0x1e5b54u: goto label_1e5b54;
        case 0x1e5b58u: goto label_1e5b58;
        case 0x1e5b5cu: goto label_1e5b5c;
        case 0x1e5b60u: goto label_1e5b60;
        case 0x1e5b64u: goto label_1e5b64;
        case 0x1e5b68u: goto label_1e5b68;
        case 0x1e5b6cu: goto label_1e5b6c;
        default: break;
    }

    ctx->pc = 0x1e59c0u;

label_1e59c0:
    // 0x1e59c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e59c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e59c4:
    // 0x1e59c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e59c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e59c8:
    // 0x1e59c8: 0x27a2007f  addiu       $v0, $sp, 0x7F
    ctx->pc = 0x1e59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
label_1e59cc:
    // 0x1e59cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e59ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e59d0:
    // 0x1e59d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e59d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e59d4:
    // 0x1e59d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e59d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e59d8:
    // 0x1e59d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e59d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e59dc:
    // 0x1e59dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e59dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e59e0:
    // 0x1e59e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e59e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e59e4:
    // 0x1e59e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e59e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e59e8:
    // 0x1e59e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e59e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e59ec:
    // 0x1e59ec: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1e59ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1e59f0:
    // 0x1e59f0: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1e59f4:
    if (ctx->pc == 0x1E59F4u) {
        ctx->pc = 0x1E59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59F0u;
        // 0x1e59f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E59F8u;
        goto label_1e59f8;
    }
    ctx->pc = 0x1E59F0u;
    {
        const bool branch_taken_0x1e59f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59F0u;
        // 0x1e59f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59f0) {
            ctx->pc = 0x1E5AECu;
            goto label_1e5aec;
        }
    }
    ctx->pc = 0x1E59F8u;
label_1e59f8:
    // 0x1e59f8: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_1e59fc:
    if (ctx->pc == 0x1E59FCu) {
        ctx->pc = 0x1E59FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59F8u;
        // 0x1e59fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A00u;
        goto label_1e5a00;
    }
    ctx->pc = 0x1E59F8u;
    {
        const bool branch_taken_0x1e59f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E59FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59F8u;
        // 0x1e59fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59f8) {
            ctx->pc = 0x1E5A08u;
            goto label_1e5a08;
        }
    }
    ctx->pc = 0x1E5A00u;
label_1e5a00:
    // 0x1e5a00: 0x10000054  b           . + 4 + (0x54 << 2)
label_1e5a04:
    if (ctx->pc == 0x1E5A04u) {
        ctx->pc = 0x1E5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A00u;
        // 0x1e5a04: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A08u;
        goto label_1e5a08;
    }
    ctx->pc = 0x1E5A00u;
    {
        const bool branch_taken_0x1e5a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A00u;
        // 0x1e5a04: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a00) {
            ctx->pc = 0x1E5B54u;
            goto label_1e5b54;
        }
    }
    ctx->pc = 0x1E5A08u;
label_1e5a08:
    // 0x1e5a08: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x1e5a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1e5a0c:
    // 0x1e5a0c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e5a10:
    // 0x1e5a10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e5a14:
    // 0x1e5a14: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_1e5a18:
    if (ctx->pc == 0x1E5A18u) {
        ctx->pc = 0x1E5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A14u;
        // 0x1e5a18: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A1Cu;
        goto label_1e5a1c;
    }
    ctx->pc = 0x1E5A14u;
    {
        const bool branch_taken_0x1e5a14 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A14u;
        // 0x1e5a18: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a14) {
            ctx->pc = 0x1E5A2Cu;
            goto label_1e5a2c;
        }
    }
    ctx->pc = 0x1E5A1Cu;
label_1e5a1c:
    // 0x1e5a1c: 0xc080490  jal         func_201240
label_1e5a20:
    if (ctx->pc == 0x1E5A20u) {
        ctx->pc = 0x1E5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A1Cu;
        // 0x1e5a20: 0x8e840024  lw          $a0, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A24u;
        goto label_1e5a24;
    }
    ctx->pc = 0x1E5A1Cu;
    SET_GPR_U32(ctx, 31, 0x1E5A24u);
    ctx->pc = 0x1E5A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5A1Cu;
    // 0x1e5a20: 0x8e840024  lw          $a0, 0x24($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201240u, 0x1E5A1Cu, 0x1E5A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5A24u;
label_1e5a24:
    // 0x1e5a24: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e5a28:
    if (ctx->pc == 0x1E5A28u) {
        ctx->pc = 0x1E5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A24u;
        // 0x1e5a28: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A2Cu;
        goto label_1e5a2c;
    }
    ctx->pc = 0x1E5A24u;
    {
        const bool branch_taken_0x1e5a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A24u;
        // 0x1e5a28: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a24) {
            ctx->pc = 0x1E5A48u;
            goto label_1e5a48;
        }
    }
    ctx->pc = 0x1E5A2Cu;
label_1e5a2c:
    // 0x1e5a2c: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1e5a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1e5a30:
    // 0x1e5a30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5a34:
    // 0x1e5a34: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e5a38:
    // 0x1e5a38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e5a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e5a3c:
    // 0x1e5a3c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e5a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e5a40:
    // 0x1e5a40: 0x0  nop
    ctx->pc = 0x1e5a40u;
    // NOP
label_1e5a44:
    // 0x1e5a44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e5a48:
    // 0x1e5a48: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e5a4c:
    if (ctx->pc == 0x1E5A4Cu) {
        ctx->pc = 0x1E5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A48u;
        // 0x1e5a4c: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A50u;
        goto label_1e5a50;
    }
    ctx->pc = 0x1E5A48u;
    {
        const bool branch_taken_0x1e5a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A48u;
        // 0x1e5a4c: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a48) {
            ctx->pc = 0x1E5A58u;
            goto label_1e5a58;
        }
    }
    ctx->pc = 0x1E5A50u;
label_1e5a50:
    // 0x1e5a50: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1e5a54:
    if (ctx->pc == 0x1E5A54u) {
        ctx->pc = 0x1E5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A50u;
        // 0x1e5a54: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A58u;
        goto label_1e5a58;
    }
    ctx->pc = 0x1E5A50u;
    {
        const bool branch_taken_0x1e5a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A50u;
        // 0x1e5a54: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a50) {
            ctx->pc = 0x1E5B50u;
            goto label_1e5b50;
        }
    }
    ctx->pc = 0x1E5A58u;
label_1e5a58:
    // 0x1e5a58: 0x26850028  addiu       $a1, $s4, 0x28
    ctx->pc = 0x1e5a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_1e5a5c:
    // 0x1e5a5c: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1e5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1e5a60:
    // 0x1e5a60: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x1e5a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1e5a64:
    // 0x1e5a64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e5a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e5a68:
    // 0x1e5a68: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e5a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e5a6c:
    // 0x1e5a6c: 0x913821  addu        $a3, $a0, $s1
    ctx->pc = 0x1e5a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1e5a70:
    // 0x1e5a70: 0x27a80074  addiu       $t0, $sp, 0x74
    ctx->pc = 0x1e5a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_1e5a74:
    // 0x1e5a74: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x1e5a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_1e5a78:
    // 0x1e5a78: 0x27a9007f  addiu       $t1, $sp, 0x7F
    ctx->pc = 0x1e5a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
label_1e5a7c:
    // 0x1e5a7c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1e5a7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e5a80:
    // 0x1e5a80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5a84:
    // 0x1e5a84: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e5a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e5a88:
    // 0x1e5a88: 0x320f809  jalr        $t9
label_1e5a8c:
    if (ctx->pc == 0x1E5A8Cu) {
        ctx->pc = 0x1E5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A88u;
        // 0x1e5a8c: 0x27ab0078  addiu       $t3, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A90u;
        goto label_1e5a90;
    }
    ctx->pc = 0x1E5A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5A90u);
        ctx->pc = 0x1E5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A88u;
        // 0x1e5a8c: 0x27ab0078  addiu       $t3, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5A88u, 0x1E5A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5A90u;
label_1e5a90:
    // 0x1e5a90: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e5a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e5a94:
    // 0x1e5a94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e5a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e5a98:
    // 0x1e5a98: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1e5a9c:
    if (ctx->pc == 0x1E5A9Cu) {
        ctx->pc = 0x1E5AA0u;
        goto label_1e5aa0;
    }
    ctx->pc = 0x1E5A98u;
    {
        const bool branch_taken_0x1e5a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a98) {
            ctx->pc = 0x1E5AE0u;
            goto label_1e5ae0;
        }
    }
    ctx->pc = 0x1E5AA0u;
label_1e5aa0:
    // 0x1e5aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5aa4:
    // 0x1e5aa4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1e5aa8:
    if (ctx->pc == 0x1E5AA8u) {
        ctx->pc = 0x1E5AACu;
        goto label_1e5aac;
    }
    ctx->pc = 0x1E5AA4u;
    {
        const bool branch_taken_0x1e5aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5aa4) {
            ctx->pc = 0x1E5AD0u;
            goto label_1e5ad0;
        }
    }
    ctx->pc = 0x1E5AACu;
label_1e5aac:
    // 0x1e5aac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1e5ab0:
    if (ctx->pc == 0x1E5AB0u) {
        ctx->pc = 0x1E5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AACu;
        // 0x1e5ab0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5AB4u;
        goto label_1e5ab4;
    }
    ctx->pc = 0x1E5AACu;
    {
        const bool branch_taken_0x1e5aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AACu;
        // 0x1e5ab0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5aac) {
            ctx->pc = 0x1E5AD0u;
            goto label_1e5ad0;
        }
    }
    ctx->pc = 0x1E5AB4u;
label_1e5ab4:
    // 0x1e5ab4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1e5ab8:
    if (ctx->pc == 0x1E5AB8u) {
        ctx->pc = 0x1E5ABCu;
        goto label_1e5abc;
    }
    ctx->pc = 0x1E5AB4u;
    {
        const bool branch_taken_0x1e5ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5ab4) {
            ctx->pc = 0x1E5AC4u;
            goto label_1e5ac4;
        }
    }
    ctx->pc = 0x1E5ABCu;
label_1e5abc:
    // 0x1e5abc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e5ac0:
    if (ctx->pc == 0x1E5AC0u) {
        ctx->pc = 0x1E5AC4u;
        goto label_1e5ac4;
    }
    ctx->pc = 0x1E5ABCu;
    {
        const bool branch_taken_0x1e5abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5abc) {
            ctx->pc = 0x1E5AECu;
            goto label_1e5aec;
        }
    }
    ctx->pc = 0x1E5AC4u;
label_1e5ac4:
    // 0x1e5ac4: 0x0  nop
    ctx->pc = 0x1e5ac4u;
    // NOP
label_1e5ac8:
    // 0x1e5ac8: 0x10000021  b           . + 4 + (0x21 << 2)
label_1e5acc:
    if (ctx->pc == 0x1E5ACCu) {
        ctx->pc = 0x1E5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AC8u;
        // 0x1e5acc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5AD0u;
        goto label_1e5ad0;
    }
    ctx->pc = 0x1E5AC8u;
    {
        const bool branch_taken_0x1e5ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AC8u;
        // 0x1e5acc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ac8) {
            ctx->pc = 0x1E5B50u;
            goto label_1e5b50;
        }
    }
    ctx->pc = 0x1E5AD0u;
label_1e5ad0:
    // 0x1e5ad0: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x1e5ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_1e5ad4:
    // 0x1e5ad4: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x1e5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1e5ad8:
    // 0x1e5ad8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e5adc:
    if (ctx->pc == 0x1E5ADCu) {
        ctx->pc = 0x1E5ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AD8u;
        // 0x1e5adc: 0x628023  subu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5AE0u;
        goto label_1e5ae0;
    }
    ctx->pc = 0x1E5AD8u;
    {
        const bool branch_taken_0x1e5ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AD8u;
        // 0x1e5adc: 0x628023  subu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ad8) {
            ctx->pc = 0x1E5AECu;
            goto label_1e5aec;
        }
    }
    ctx->pc = 0x1E5AE0u;
label_1e5ae0:
    // 0x1e5ae0: 0x83a20068  lb          $v0, 0x68($sp)
    ctx->pc = 0x1e5ae0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
label_1e5ae4:
    // 0x1e5ae4: 0xafb20078  sw          $s2, 0x78($sp)
    ctx->pc = 0x1e5ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 18));
label_1e5ae8:
    // 0x1e5ae8: 0xa3a2007f  sb          $v0, 0x7F($sp)
    ctx->pc = 0x1e5ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 2));
label_1e5aec:
    // 0x1e5aec: 0x0  nop
    ctx->pc = 0x1e5aecu;
    // NOP
label_1e5af0:
    // 0x1e5af0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e5af4:
    // 0x1e5af4: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x1e5af4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e5af8:
    // 0x1e5af8: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x1e5af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1e5afc:
    // 0x1e5afc: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1e5b00:
    if (ctx->pc == 0x1E5B00u) {
        ctx->pc = 0x1E5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AFCu;
        // 0x1e5b00: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5B04u;
        goto label_1e5b04;
    }
    ctx->pc = 0x1E5AFCu;
    {
        const bool branch_taken_0x1e5afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AFCu;
        // 0x1e5b00: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5afc) {
            ctx->pc = 0x1E59F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e59f8;
        }
    }
    ctx->pc = 0x1E5B04u;
label_1e5b04:
    // 0x1e5b04: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_1e5b08:
    if (ctx->pc == 0x1E5B08u) {
        ctx->pc = 0x1E5B0Cu;
        goto label_1e5b0c;
    }
    ctx->pc = 0x1E5B04u;
    {
        const bool branch_taken_0x1e5b04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5b04) {
            ctx->pc = 0x1E5B48u;
            goto label_1e5b48;
        }
    }
    ctx->pc = 0x1E5B0Cu;
label_1e5b0c:
    // 0x1e5b0c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_1e5b10:
    if (ctx->pc == 0x1E5B10u) {
        ctx->pc = 0x1E5B14u;
        goto label_1e5b14;
    }
    ctx->pc = 0x1E5B0Cu;
    {
        const bool branch_taken_0x1e5b0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5b0c) {
            ctx->pc = 0x1E5B48u;
            goto label_1e5b48;
        }
    }
    ctx->pc = 0x1E5B14u;
label_1e5b14:
    // 0x1e5b14: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e5b14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1e5b18:
    // 0x1e5b18: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x1e5b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1e5b1c:
    // 0x1e5b1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e5b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e5b20:
    // 0x1e5b20: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x1e5b20u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e5b24:
    // 0x1e5b24: 0xc080dea  jal         func_2037A8
label_1e5b28:
    if (ctx->pc == 0x1E5B28u) {
        ctx->pc = 0x1E5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B24u;
        // 0x1e5b28: 0x8e850024  lw          $a1, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5B2Cu;
        goto label_1e5b2c;
    }
    ctx->pc = 0x1E5B24u;
    SET_GPR_U32(ctx, 31, 0x1E5B2Cu);
    ctx->pc = 0x1E5B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5B24u;
    // 0x1e5b28: 0x8e850024  lw          $a1, 0x24($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x1E5B24u, 0x1E5B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5B2Cu;
label_1e5b2c:
    // 0x1e5b2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e5b30:
    // 0x1e5b30: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e5b34:
    if (ctx->pc == 0x1E5B34u) {
        ctx->pc = 0x1E5B38u;
        goto label_1e5b38;
    }
    ctx->pc = 0x1E5B30u;
    {
        const bool branch_taken_0x1e5b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e5b30) {
            ctx->pc = 0x1E5B40u;
            goto label_1e5b40;
        }
    }
    ctx->pc = 0x1E5B38u;
label_1e5b38:
    // 0x1e5b38: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e5b3c:
    if (ctx->pc == 0x1E5B3Cu) {
        ctx->pc = 0x1E5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B38u;
        // 0x1e5b3c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5B40u;
        goto label_1e5b40;
    }
    ctx->pc = 0x1E5B38u;
    {
        const bool branch_taken_0x1e5b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B38u;
        // 0x1e5b3c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b38) {
            ctx->pc = 0x1E5B50u;
            goto label_1e5b50;
        }
    }
    ctx->pc = 0x1E5B40u;
label_1e5b40:
    // 0x1e5b40: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_1e5b44:
    if (ctx->pc == 0x1E5B44u) {
        ctx->pc = 0x1E5B48u;
        goto label_1e5b48;
    }
    ctx->pc = 0x1E5B40u;
    {
        const bool branch_taken_0x1e5b40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5b40) {
            ctx->pc = 0x1E5B14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5b14;
        }
    }
    ctx->pc = 0x1E5B48u;
label_1e5b48:
    // 0x1e5b48: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x1e5b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_1e5b4c:
    // 0x1e5b4c: 0x0  nop
    ctx->pc = 0x1e5b4cu;
    // NOP
label_1e5b50:
    // 0x1e5b50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e5b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e5b54:
    // 0x1e5b54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e5b54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e5b58:
    // 0x1e5b58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e5b58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5b5c:
    // 0x1e5b5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5b5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5b60:
    // 0x1e5b60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5b64:
    // 0x1e5b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5b68:
    // 0x1e5b68: 0x3e00008  jr          $ra
label_1e5b6c:
    if (ctx->pc == 0x1E5B6Cu) {
        ctx->pc = 0x1E5B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B68u;
        // 0x1e5b6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5B70u;
        goto label_fallthrough_0x1e5b68;
    }
    ctx->pc = 0x1E5B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B68u;
        // 0x1e5b6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e5b68:
    ctx->pc = 0x1E5B70u;
}
