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

// Function: FUN_001d99f0
// Address: 0x1d99f0 - 0x1d9c8c
void FUN_001d99f0_0x1d99f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d99f0_0x1d99f0");
#endif

    switch (ctx->pc) {
        case 0x1d99f0u: goto label_1d99f0;
        case 0x1d99f4u: goto label_1d99f4;
        case 0x1d99f8u: goto label_1d99f8;
        case 0x1d99fcu: goto label_1d99fc;
        case 0x1d9a00u: goto label_1d9a00;
        case 0x1d9a04u: goto label_1d9a04;
        case 0x1d9a08u: goto label_1d9a08;
        case 0x1d9a0cu: goto label_1d9a0c;
        case 0x1d9a10u: goto label_1d9a10;
        case 0x1d9a14u: goto label_1d9a14;
        case 0x1d9a18u: goto label_1d9a18;
        case 0x1d9a1cu: goto label_1d9a1c;
        case 0x1d9a20u: goto label_1d9a20;
        case 0x1d9a24u: goto label_1d9a24;
        case 0x1d9a28u: goto label_1d9a28;
        case 0x1d9a2cu: goto label_1d9a2c;
        case 0x1d9a30u: goto label_1d9a30;
        case 0x1d9a34u: goto label_1d9a34;
        case 0x1d9a38u: goto label_1d9a38;
        case 0x1d9a3cu: goto label_1d9a3c;
        case 0x1d9a40u: goto label_1d9a40;
        case 0x1d9a44u: goto label_1d9a44;
        case 0x1d9a48u: goto label_1d9a48;
        case 0x1d9a4cu: goto label_1d9a4c;
        case 0x1d9a50u: goto label_1d9a50;
        case 0x1d9a54u: goto label_1d9a54;
        case 0x1d9a58u: goto label_1d9a58;
        case 0x1d9a5cu: goto label_1d9a5c;
        case 0x1d9a60u: goto label_1d9a60;
        case 0x1d9a64u: goto label_1d9a64;
        case 0x1d9a68u: goto label_1d9a68;
        case 0x1d9a6cu: goto label_1d9a6c;
        case 0x1d9a70u: goto label_1d9a70;
        case 0x1d9a74u: goto label_1d9a74;
        case 0x1d9a78u: goto label_1d9a78;
        case 0x1d9a7cu: goto label_1d9a7c;
        case 0x1d9a80u: goto label_1d9a80;
        case 0x1d9a84u: goto label_1d9a84;
        case 0x1d9a88u: goto label_1d9a88;
        case 0x1d9a8cu: goto label_1d9a8c;
        case 0x1d9a90u: goto label_1d9a90;
        case 0x1d9a94u: goto label_1d9a94;
        case 0x1d9a98u: goto label_1d9a98;
        case 0x1d9a9cu: goto label_1d9a9c;
        case 0x1d9aa0u: goto label_1d9aa0;
        case 0x1d9aa4u: goto label_1d9aa4;
        case 0x1d9aa8u: goto label_1d9aa8;
        case 0x1d9aacu: goto label_1d9aac;
        case 0x1d9ab0u: goto label_1d9ab0;
        case 0x1d9ab4u: goto label_1d9ab4;
        case 0x1d9ab8u: goto label_1d9ab8;
        case 0x1d9abcu: goto label_1d9abc;
        case 0x1d9ac0u: goto label_1d9ac0;
        case 0x1d9ac4u: goto label_1d9ac4;
        case 0x1d9ac8u: goto label_1d9ac8;
        case 0x1d9accu: goto label_1d9acc;
        case 0x1d9ad0u: goto label_1d9ad0;
        case 0x1d9ad4u: goto label_1d9ad4;
        case 0x1d9ad8u: goto label_1d9ad8;
        case 0x1d9adcu: goto label_1d9adc;
        case 0x1d9ae0u: goto label_1d9ae0;
        case 0x1d9ae4u: goto label_1d9ae4;
        case 0x1d9ae8u: goto label_1d9ae8;
        case 0x1d9aecu: goto label_1d9aec;
        case 0x1d9af0u: goto label_1d9af0;
        case 0x1d9af4u: goto label_1d9af4;
        case 0x1d9af8u: goto label_1d9af8;
        case 0x1d9afcu: goto label_1d9afc;
        case 0x1d9b00u: goto label_1d9b00;
        case 0x1d9b04u: goto label_1d9b04;
        case 0x1d9b08u: goto label_1d9b08;
        case 0x1d9b0cu: goto label_1d9b0c;
        case 0x1d9b10u: goto label_1d9b10;
        case 0x1d9b14u: goto label_1d9b14;
        case 0x1d9b18u: goto label_1d9b18;
        case 0x1d9b1cu: goto label_1d9b1c;
        case 0x1d9b20u: goto label_1d9b20;
        case 0x1d9b24u: goto label_1d9b24;
        case 0x1d9b28u: goto label_1d9b28;
        case 0x1d9b2cu: goto label_1d9b2c;
        case 0x1d9b30u: goto label_1d9b30;
        case 0x1d9b34u: goto label_1d9b34;
        case 0x1d9b38u: goto label_1d9b38;
        case 0x1d9b3cu: goto label_1d9b3c;
        case 0x1d9b40u: goto label_1d9b40;
        case 0x1d9b44u: goto label_1d9b44;
        case 0x1d9b48u: goto label_1d9b48;
        case 0x1d9b4cu: goto label_1d9b4c;
        case 0x1d9b50u: goto label_1d9b50;
        case 0x1d9b54u: goto label_1d9b54;
        case 0x1d9b58u: goto label_1d9b58;
        case 0x1d9b5cu: goto label_1d9b5c;
        case 0x1d9b60u: goto label_1d9b60;
        case 0x1d9b64u: goto label_1d9b64;
        case 0x1d9b68u: goto label_1d9b68;
        case 0x1d9b6cu: goto label_1d9b6c;
        case 0x1d9b70u: goto label_1d9b70;
        case 0x1d9b74u: goto label_1d9b74;
        case 0x1d9b78u: goto label_1d9b78;
        case 0x1d9b7cu: goto label_1d9b7c;
        case 0x1d9b80u: goto label_1d9b80;
        case 0x1d9b84u: goto label_1d9b84;
        case 0x1d9b88u: goto label_1d9b88;
        case 0x1d9b8cu: goto label_1d9b8c;
        case 0x1d9b90u: goto label_1d9b90;
        case 0x1d9b94u: goto label_1d9b94;
        case 0x1d9b98u: goto label_1d9b98;
        case 0x1d9b9cu: goto label_1d9b9c;
        case 0x1d9ba0u: goto label_1d9ba0;
        case 0x1d9ba4u: goto label_1d9ba4;
        case 0x1d9ba8u: goto label_1d9ba8;
        case 0x1d9bacu: goto label_1d9bac;
        case 0x1d9bb0u: goto label_1d9bb0;
        case 0x1d9bb4u: goto label_1d9bb4;
        case 0x1d9bb8u: goto label_1d9bb8;
        case 0x1d9bbcu: goto label_1d9bbc;
        case 0x1d9bc0u: goto label_1d9bc0;
        case 0x1d9bc4u: goto label_1d9bc4;
        case 0x1d9bc8u: goto label_1d9bc8;
        case 0x1d9bccu: goto label_1d9bcc;
        case 0x1d9bd0u: goto label_1d9bd0;
        case 0x1d9bd4u: goto label_1d9bd4;
        case 0x1d9bd8u: goto label_1d9bd8;
        case 0x1d9bdcu: goto label_1d9bdc;
        case 0x1d9be0u: goto label_1d9be0;
        case 0x1d9be4u: goto label_1d9be4;
        case 0x1d9be8u: goto label_1d9be8;
        case 0x1d9becu: goto label_1d9bec;
        case 0x1d9bf0u: goto label_1d9bf0;
        case 0x1d9bf4u: goto label_1d9bf4;
        case 0x1d9bf8u: goto label_1d9bf8;
        case 0x1d9bfcu: goto label_1d9bfc;
        case 0x1d9c00u: goto label_1d9c00;
        case 0x1d9c04u: goto label_1d9c04;
        case 0x1d9c08u: goto label_1d9c08;
        case 0x1d9c0cu: goto label_1d9c0c;
        case 0x1d9c10u: goto label_1d9c10;
        case 0x1d9c14u: goto label_1d9c14;
        case 0x1d9c18u: goto label_1d9c18;
        case 0x1d9c1cu: goto label_1d9c1c;
        case 0x1d9c20u: goto label_1d9c20;
        case 0x1d9c24u: goto label_1d9c24;
        case 0x1d9c28u: goto label_1d9c28;
        case 0x1d9c2cu: goto label_1d9c2c;
        case 0x1d9c30u: goto label_1d9c30;
        case 0x1d9c34u: goto label_1d9c34;
        case 0x1d9c38u: goto label_1d9c38;
        case 0x1d9c3cu: goto label_1d9c3c;
        case 0x1d9c40u: goto label_1d9c40;
        case 0x1d9c44u: goto label_1d9c44;
        case 0x1d9c48u: goto label_1d9c48;
        case 0x1d9c4cu: goto label_1d9c4c;
        case 0x1d9c50u: goto label_1d9c50;
        case 0x1d9c54u: goto label_1d9c54;
        case 0x1d9c58u: goto label_1d9c58;
        case 0x1d9c5cu: goto label_1d9c5c;
        case 0x1d9c60u: goto label_1d9c60;
        case 0x1d9c64u: goto label_1d9c64;
        case 0x1d9c68u: goto label_1d9c68;
        case 0x1d9c6cu: goto label_1d9c6c;
        case 0x1d9c70u: goto label_1d9c70;
        case 0x1d9c74u: goto label_1d9c74;
        case 0x1d9c78u: goto label_1d9c78;
        case 0x1d9c7cu: goto label_1d9c7c;
        case 0x1d9c80u: goto label_1d9c80;
        case 0x1d9c84u: goto label_1d9c84;
        case 0x1d9c88u: goto label_1d9c88;
        default: break;
    }

    ctx->pc = 0x1d99f0u;

label_1d99f0:
    // 0x1d99f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d99f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d99f4:
    // 0x1d99f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d99f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1d99f8:
    // 0x1d99f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1d99f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1d99fc:
    // 0x1d99fc: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1d99fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9a00:
    // 0x1d9a00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1d9a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1d9a04:
    // 0x1d9a04: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1d9a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1d9a08:
    // 0x1d9a08: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1d9a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1d9a0c:
    // 0x1d9a0c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1d9a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1d9a10:
    // 0x1d9a10: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1d9a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1d9a14:
    // 0x1d9a14: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1d9a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_1d9a18:
    // 0x1d9a18: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1d9a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_1d9a1c:
    // 0x1d9a1c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1d9a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1d9a20:
    // 0x1d9a20: 0xc07d0d8  jal         func_1F4360
label_1d9a24:
    if (ctx->pc == 0x1D9A24u) {
        ctx->pc = 0x1D9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A20u;
        // 0x1d9a24: 0x2412001f  addiu       $s2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A28u;
        goto label_1d9a28;
    }
    ctx->pc = 0x1D9A20u;
    SET_GPR_U32(ctx, 31, 0x1D9A28u);
    ctx->pc = 0x1D9A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A20u;
    // 0x1d9a24: 0x2412001f  addiu       $s2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D9A20u, 0x1D9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A28u;
label_1d9a28:
    // 0x1d9a28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d9a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1d9a2c:
    // 0x1d9a2c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1d9a30:
    // 0x1d9a30: 0x245066c0  addiu       $s0, $v0, 0x66C0
    ctx->pc = 0x1d9a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 26304));
label_1d9a34:
    // 0x1d9a34: 0x0  nop
    ctx->pc = 0x1d9a34u;
    // NOP
label_1d9a38:
    // 0x1d9a38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d9a3c:
    // 0x1d9a3c: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
label_1d9a40:
    if (ctx->pc == 0x1D9A40u) {
        ctx->pc = 0x1D9A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A3Cu;
        // 0x1d9a40: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A44u;
        goto label_1d9a44;
    }
    ctx->pc = 0x1D9A3Cu;
    {
        const bool branch_taken_0x1d9a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1d9a3c) {
            ctx->pc = 0x1D9A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9A3Cu;
            // 0x1d9a40: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9A58u;
            goto label_1d9a58;
        }
    }
    ctx->pc = 0x1D9A44u;
label_1d9a44:
    // 0x1d9a44: 0xc07565e  jal         func_1D5978
label_1d9a48:
    if (ctx->pc == 0x1D9A48u) {
        ctx->pc = 0x1D9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A44u;
        // 0x1d9a48: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A4Cu;
        goto label_1d9a4c;
    }
    ctx->pc = 0x1D9A44u;
    SET_GPR_U32(ctx, 31, 0x1D9A4Cu);
    ctx->pc = 0x1D9A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A44u;
    // 0x1d9a48: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5978u, 0x1D9A44u, 0x1D9A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A4Cu;
label_1d9a4c:
    // 0x1d9a4c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1d9a50:
    if (ctx->pc == 0x1D9A50u) {
        ctx->pc = 0x1D9A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A4Cu;
        // 0x1d9a50: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A54u;
        goto label_1d9a54;
    }
    ctx->pc = 0x1D9A4Cu;
    {
        const bool branch_taken_0x1d9a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a4c) {
            ctx->pc = 0x1D9A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9A4Cu;
            // 0x1d9a50: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9A54u;
            goto label_1d9a54;
        }
    }
    ctx->pc = 0x1D9A54u;
label_1d9a54:
    // 0x1d9a54: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1d9a54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1d9a58:
    // 0x1d9a58: 0x641fff7  bgez        $s2, . + 4 + (-0x9 << 2)
label_1d9a5c:
    if (ctx->pc == 0x1D9A5Cu) {
        ctx->pc = 0x1D9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A58u;
        // 0x1d9a5c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A60u;
        goto label_1d9a60;
    }
    ctx->pc = 0x1D9A58u;
    {
        const bool branch_taken_0x1d9a58 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1D9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A58u;
        // 0x1d9a5c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a58) {
            ctx->pc = 0x1D9A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9a38;
        }
    }
    ctx->pc = 0x1D9A60u;
label_1d9a60:
    // 0x1d9a60: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1d9a64:
    // 0x1d9a64: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x1d9a64u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
label_1d9a68:
    // 0x1d9a68: 0x245066c0  addiu       $s0, $v0, 0x66C0
    ctx->pc = 0x1d9a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 26304));
label_1d9a6c:
    // 0x1d9a6c: 0xaec072e0  sw          $zero, 0x72E0($s6)
    ctx->pc = 0x1d9a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 29408), GPR_U32(ctx, 0));
label_1d9a70:
    // 0x1d9a70: 0x26150010  addiu       $s5, $s0, 0x10
    ctx->pc = 0x1d9a70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1d9a74:
    // 0x1d9a74: 0x3c1e0038  lui         $fp, 0x38
    ctx->pc = 0x1d9a74u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
label_1d9a78:
    // 0x1d9a78: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x1d9a78u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
label_1d9a7c:
    // 0x1d9a7c: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x1d9a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1d9a80:
    // 0x1d9a80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d9a84:
    // 0x1d9a84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9a88:
    // 0x1d9a88: 0x5462004c  bnel        $v1, $v0, . + 4 + (0x4C << 2)
label_1d9a8c:
    if (ctx->pc == 0x1D9A8Cu) {
        ctx->pc = 0x1D9A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A88u;
        // 0x1d9a8c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A90u;
        goto label_1d9a90;
    }
    ctx->pc = 0x1D9A88u;
    {
        const bool branch_taken_0x1d9a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9a88) {
            ctx->pc = 0x1D9A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9A88u;
            // 0x1d9a8c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BBCu;
            goto label_1d9bbc;
        }
    }
    ctx->pc = 0x1D9A90u;
label_1d9a90:
    // 0x1d9a90: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x1d9a90u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
label_1d9a94:
    // 0x1d9a94: 0xafc071d4  sw          $zero, 0x71D4($fp)
    ctx->pc = 0x1d9a94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 29140), GPR_U32(ctx, 0));
label_1d9a98:
    // 0x1d9a98: 0xae8071d0  sw          $zero, 0x71D0($s4)
    ctx->pc = 0x1d9a98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 29136), GPR_U32(ctx, 0));
label_1d9a9c:
    // 0x1d9a9c: 0xde040028  ld          $a0, 0x28($s0)
    ctx->pc = 0x1d9a9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 40)));
label_1d9aa0:
    // 0x1d9aa0: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x1d9aa0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_1d9aa4:
    // 0x1d9aa4: 0xc081ffe  jal         func_207FF8
label_1d9aa8:
    if (ctx->pc == 0x1D9AA8u) {
        ctx->pc = 0x1D9AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AA4u;
        // 0x1d9aa8: 0x26110040  addiu       $s1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9AACu;
        goto label_1d9aac;
    }
    ctx->pc = 0x1D9AA4u;
    SET_GPR_U32(ctx, 31, 0x1D9AACu);
    ctx->pc = 0x1D9AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9AA4u;
    // 0x1d9aa8: 0x26110040  addiu       $s1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1D9AA4u, 0x1D9AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9AACu;
label_1d9aac:
    // 0x1d9aac: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1d9aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1d9ab0:
    // 0x1d9ab0: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1d9ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
label_1d9ab4:
    // 0x1d9ab4: 0x10000035  b           . + 4 + (0x35 << 2)
label_1d9ab8:
    if (ctx->pc == 0x1D9AB8u) {
        ctx->pc = 0x1D9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AB4u;
        // 0x1d9ab8: 0x24739f90  addiu       $s3, $v1, -0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9ABCu;
        goto label_1d9abc;
    }
    ctx->pc = 0x1D9AB4u;
    {
        const bool branch_taken_0x1d9ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AB4u;
        // 0x1d9ab8: 0x24739f90  addiu       $s3, $v1, -0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ab4) {
            ctx->pc = 0x1D9B8Cu;
            goto label_1d9b8c;
        }
    }
    ctx->pc = 0x1D9ABCu;
label_1d9abc:
    // 0x1d9abc: 0x0  nop
    ctx->pc = 0x1d9abcu;
    // NOP
label_1d9ac0:
    // 0x1d9ac0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1d9ac0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9ac4:
    // 0x1d9ac4: 0x4630007  bgezl       $v1, . + 4 + (0x7 << 2)
label_1d9ac8:
    if (ctx->pc == 0x1D9AC8u) {
        ctx->pc = 0x1D9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AC4u;
        // 0x1d9ac8: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9ACCu;
        goto label_1d9acc;
    }
    ctx->pc = 0x1D9AC4u;
    {
        const bool branch_taken_0x1d9ac4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1d9ac4) {
            ctx->pc = 0x1D9AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9AC4u;
            // 0x1d9ac8: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9AE4u;
            goto label_1d9ae4;
        }
    }
    ctx->pc = 0x1D9ACCu;
label_1d9acc:
    // 0x1d9acc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d9accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9ad0:
    // 0x1d9ad0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1d9ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9ad4:
    // 0x1d9ad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d9ad8:
    // 0x1d9ad8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d9ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d9adc:
    // 0x1d9adc: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1d9adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_1d9ae0:
    // 0x1d9ae0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1d9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1d9ae4:
    // 0x1d9ae4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1d9ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_1d9ae8:
    // 0x1d9ae8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d9ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d9aec:
    // 0x1d9aec: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d9aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1d9af0:
    // 0x1d9af0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9af4:
    // 0x1d9af4: 0x60f809  jalr        $v1
label_1d9af8:
    if (ctx->pc == 0x1D9AF8u) {
        ctx->pc = 0x1D9AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AF4u;
        // 0x1d9af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9AFCu;
        goto label_1d9afc;
    }
    ctx->pc = 0x1D9AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D9AFCu);
        ctx->pc = 0x1D9AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AF4u;
        // 0x1d9af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9AF4u, 0x1D9AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9AFCu;
label_1d9afc:
    // 0x1d9afc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d9afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d9b00:
    // 0x1d9b00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d9b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9b04:
    // 0x1d9b04: 0x10820027  beq         $a0, $v0, . + 4 + (0x27 << 2)
label_1d9b08:
    if (ctx->pc == 0x1D9B08u) {
        ctx->pc = 0x1D9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B04u;
        // 0x1d9b08: 0x8e8571d0  lw          $a1, 0x71D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B0Cu;
        goto label_1d9b0c;
    }
    ctx->pc = 0x1D9B04u;
    {
        const bool branch_taken_0x1d9b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B04u;
        // 0x1d9b08: 0x8e8571d0  lw          $a1, 0x71D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b04) {
            ctx->pc = 0x1D9BA4u;
            goto label_1d9ba4;
        }
    }
    ctx->pc = 0x1D9B0Cu;
label_1d9b0c:
    // 0x1d9b0c: 0x92020044  lbu         $v0, 0x44($s0)
    ctx->pc = 0x1d9b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
label_1d9b10:
    // 0x1d9b10: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_1d9b14:
    if (ctx->pc == 0x1D9B14u) {
        ctx->pc = 0x1D9B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B10u;
        // 0x1d9b14: 0xa2000044  sb          $zero, 0x44($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B18u;
        goto label_1d9b18;
    }
    ctx->pc = 0x1D9B10u;
    {
        const bool branch_taken_0x1d9b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b10) {
            ctx->pc = 0x1D9B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9B10u;
            // 0x1d9b14: 0xa2000044  sb          $zero, 0x44($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9B8Cu;
            goto label_1d9b8c;
        }
    }
    ctx->pc = 0x1D9B18u;
label_1d9b18:
    // 0x1d9b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b1c:
    // 0x1d9b1c: 0x26070040  addiu       $a3, $s0, 0x40
    ctx->pc = 0x1d9b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1d9b20:
    // 0x1d9b20: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1d9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d9b24:
    // 0x1d9b24: 0x631f8  dsll        $a2, $a2, 7
    ctx->pc = 0x1d9b24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 7);
label_1d9b28:
    // 0x1d9b28: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x1d9b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1d9b2c:
    // 0x1d9b2c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1d9b2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1d9b30:
    // 0x1d9b30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d9b34:
    // 0x1d9b34: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1d9b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1d9b38:
    // 0x1d9b38: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x1d9b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_1d9b3c:
    // 0x1d9b3c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1d9b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_1d9b40:
    // 0x1d9b40: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1d9b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_1d9b44:
    // 0x1d9b44: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
label_1d9b48:
    if (ctx->pc == 0x1D9B48u) {
        ctx->pc = 0x1D9B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B44u;
        // 0x1d9b48: 0xc2302d  daddu       $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B4Cu;
        goto label_1d9b4c;
    }
    ctx->pc = 0x1D9B44u;
    {
        const bool branch_taken_0x1d9b44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B44u;
        // 0x1d9b48: 0xc2302d  daddu       $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b44) {
            ctx->pc = 0x1D9B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9b20;
        }
    }
    ctx->pc = 0x1D9B4Cu;
label_1d9b4c:
    // 0x1d9b4c: 0x4c20006  bltzl       $a2, . + 4 + (0x6 << 2)
label_1d9b50:
    if (ctx->pc == 0x1D9B50u) {
        ctx->pc = 0x1D9B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B4Cu;
        // 0x1d9b50: 0x6107a  dsrl        $v0, $a2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B54u;
        goto label_1d9b54;
    }
    ctx->pc = 0x1D9B4Cu;
    {
        const bool branch_taken_0x1d9b4c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1d9b4c) {
            ctx->pc = 0x1D9B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9B4Cu;
            // 0x1d9b50: 0x6107a  dsrl        $v0, $a2, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9B68u;
            goto label_1d9b68;
        }
    }
    ctx->pc = 0x1D9B54u;
label_1d9b54:
    // 0x1d9b54: 0xc081a60  jal         func_206980
label_1d9b58:
    if (ctx->pc == 0x1D9B58u) {
        ctx->pc = 0x1D9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B54u;
        // 0x1d9b58: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B5Cu;
        goto label_1d9b5c;
    }
    ctx->pc = 0x1D9B54u;
    SET_GPR_U32(ctx, 31, 0x1D9B5Cu);
    ctx->pc = 0x1D9B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B54u;
    // 0x1d9b58: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1D9B54u, 0x1D9B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B5Cu;
label_1d9b5c:
    // 0x1d9b5c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d9b60:
    if (ctx->pc == 0x1D9B60u) {
        ctx->pc = 0x1D9B64u;
        goto label_1d9b64;
    }
    ctx->pc = 0x1D9B5Cu;
    {
        const bool branch_taken_0x1d9b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b5c) {
            ctx->pc = 0x1D9B80u;
            goto label_1d9b80;
        }
    }
    ctx->pc = 0x1D9B64u;
label_1d9b64:
    // 0x1d9b64: 0x0  nop
    ctx->pc = 0x1d9b64u;
    // NOP
label_1d9b68:
    // 0x1d9b68: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x1d9b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_1d9b6c:
    // 0x1d9b6c: 0xc081a60  jal         func_206980
label_1d9b70:
    if (ctx->pc == 0x1D9B70u) {
        ctx->pc = 0x1D9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B6Cu;
        // 0x1d9b70: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B74u;
        goto label_1d9b74;
    }
    ctx->pc = 0x1D9B6Cu;
    SET_GPR_U32(ctx, 31, 0x1D9B74u);
    ctx->pc = 0x1D9B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B6Cu;
    // 0x1d9b70: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1D9B6Cu, 0x1D9B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B74u;
label_1d9b74:
    // 0x1d9b74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b78:
    // 0x1d9b78: 0xc081ffe  jal         func_207FF8
label_1d9b7c:
    if (ctx->pc == 0x1D9B7Cu) {
        ctx->pc = 0x1D9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B78u;
        // 0x1d9b7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B80u;
        goto label_1d9b80;
    }
    ctx->pc = 0x1D9B78u;
    SET_GPR_U32(ctx, 31, 0x1D9B80u);
    ctx->pc = 0x1D9B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B78u;
    // 0x1d9b7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1D9B78u, 0x1D9B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B80u;
label_1d9b80:
    // 0x1d9b80: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x1d9b80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
label_1d9b84:
    // 0x1d9b84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b88:
    // 0x1d9b88: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1d9b88u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
label_1d9b8c:
    // 0x1d9b8c: 0xde040028  ld          $a0, 0x28($s0)
    ctx->pc = 0x1d9b8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 40)));
label_1d9b90:
    // 0x1d9b90: 0xc082178  jal         func_2085E0
label_1d9b94:
    if (ctx->pc == 0x1D9B94u) {
        ctx->pc = 0x1D9B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B90u;
        // 0x1d9b94: 0xde050030  ld          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B98u;
        goto label_1d9b98;
    }
    ctx->pc = 0x1D9B90u;
    SET_GPR_U32(ctx, 31, 0x1D9B98u);
    ctx->pc = 0x1D9B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B90u;
    // 0x1d9b94: 0xde050030  ld          $a1, 0x30($s0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1D9B90u, 0x1D9B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B98u;
label_1d9b98:
    // 0x1d9b98: 0x443ffc9  bgezl       $v0, . + 4 + (-0x37 << 2)
label_1d9b9c:
    if (ctx->pc == 0x1D9B9Cu) {
        ctx->pc = 0x1D9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B98u;
        // 0x1d9b9c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BA0u;
        goto label_1d9ba0;
    }
    ctx->pc = 0x1D9B98u;
    {
        const bool branch_taken_0x1d9b98 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d9b98) {
            ctx->pc = 0x1D9B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9B98u;
            // 0x1d9b9c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9ac0;
        }
    }
    ctx->pc = 0x1D9BA0u;
label_1d9ba0:
    // 0x1d9ba0: 0x8e8571d0  lw          $a1, 0x71D0($s4)
    ctx->pc = 0x1d9ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29136)));
label_1d9ba4:
    // 0x1d9ba4: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_1d9ba8:
    if (ctx->pc == 0x1D9BA8u) {
        ctx->pc = 0x1D9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BA4u;
        // 0x1d9ba8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BACu;
        goto label_1d9bac;
    }
    ctx->pc = 0x1D9BA4u;
    {
        const bool branch_taken_0x1d9ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9ba4) {
            ctx->pc = 0x1D9BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9BA4u;
            // 0x1d9ba8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BBCu;
            goto label_1d9bbc;
        }
    }
    ctx->pc = 0x1D9BACu;
label_1d9bac:
    // 0x1d9bac: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1d9bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1d9bb0:
    // 0x1d9bb0: 0xc07548a  jal         func_1D5228
label_1d9bb4:
    if (ctx->pc == 0x1D9BB4u) {
        ctx->pc = 0x1D9BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BB0u;
        // 0x1d9bb4: 0x26e670d0  addiu       $a2, $s7, 0x70D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 28880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BB8u;
        goto label_1d9bb8;
    }
    ctx->pc = 0x1D9BB0u;
    SET_GPR_U32(ctx, 31, 0x1D9BB8u);
    ctx->pc = 0x1D9BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9BB0u;
    // 0x1d9bb4: 0x26e670d0  addiu       $a2, $s7, 0x70D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 28880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5228u, 0x1D9BB0u, 0x1D9BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9BB8u;
label_1d9bb8:
    // 0x1d9bb8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1d9bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1d9bbc:
    // 0x1d9bbc: 0x26b50050  addiu       $s5, $s5, 0x50
    ctx->pc = 0x1d9bbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_1d9bc0:
    // 0x1d9bc0: 0x641ffaf  bgez        $s2, . + 4 + (-0x51 << 2)
label_1d9bc4:
    if (ctx->pc == 0x1D9BC4u) {
        ctx->pc = 0x1D9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BC0u;
        // 0x1d9bc4: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BC8u;
        goto label_1d9bc8;
    }
    ctx->pc = 0x1D9BC0u;
    {
        const bool branch_taken_0x1d9bc0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1D9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BC0u;
        // 0x1d9bc4: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9bc0) {
            ctx->pc = 0x1D9A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9a80;
        }
    }
    ctx->pc = 0x1D9BC8u;
label_1d9bc8:
    // 0x1d9bc8: 0x8ec272e0  lw          $v0, 0x72E0($s6)
    ctx->pc = 0x1d9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29408)));
label_1d9bcc:
    // 0x1d9bcc: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_1d9bd0:
    if (ctx->pc == 0x1D9BD0u) {
        ctx->pc = 0x1D9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BCCu;
        // 0x1d9bd0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BD4u;
        goto label_1d9bd4;
    }
    ctx->pc = 0x1D9BCCu;
    {
        const bool branch_taken_0x1d9bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9bcc) {
            ctx->pc = 0x1D9BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9BCCu;
            // 0x1d9bd0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9C2Cu;
            goto label_1d9c2c;
        }
    }
    ctx->pc = 0x1D9BD4u;
label_1d9bd4:
    // 0x1d9bd4: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_1d9bd8:
    if (ctx->pc == 0x1D9BD8u) {
        ctx->pc = 0x1D9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BD4u;
        // 0x1d9bd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BDCu;
        goto label_1d9bdc;
    }
    ctx->pc = 0x1D9BD4u;
    {
        const bool branch_taken_0x1d9bd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BD4u;
        // 0x1d9bd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9bd4) {
            ctx->pc = 0x1D9C24u;
            goto label_1d9c24;
        }
    }
    ctx->pc = 0x1D9BDCu;
label_1d9bdc:
    // 0x1d9bdc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d9bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1d9be0:
    // 0x1d9be0: 0x245271e0  addiu       $s2, $v0, 0x71E0
    ctx->pc = 0x1d9be0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29152));
label_1d9be4:
    // 0x1d9be4: 0x26530002  addiu       $s3, $s2, 0x2
    ctx->pc = 0x1d9be4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_1d9be8:
    // 0x1d9be8: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x1d9be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d9bec:
    // 0x1d9bec: 0x0  nop
    ctx->pc = 0x1d9becu;
    // NOP
label_1d9bf0:
    // 0x1d9bf0: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1d9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1d9bf4:
    // 0x1d9bf4: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x1d9bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1d9bf8:
    // 0x1d9bf8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1d9bf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9bfc:
    // 0x1d9bfc: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1d9bfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1d9c00:
    // 0x1d9c00: 0xc07548a  jal         func_1D5228
label_1d9c04:
    if (ctx->pc == 0x1D9C04u) {
        ctx->pc = 0x1D9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C00u;
        // 0x1d9c04: 0x2333021  addu        $a2, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C08u;
        goto label_1d9c08;
    }
    ctx->pc = 0x1D9C00u;
    SET_GPR_U32(ctx, 31, 0x1D9C08u);
    ctx->pc = 0x1D9C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9C00u;
    // 0x1d9c04: 0x2333021  addu        $a2, $s1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5228u, 0x1D9C00u, 0x1D9C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9C08u;
label_1d9c08:
    // 0x1d9c08: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d9c08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1d9c0c:
    // 0x1d9c0c: 0x8ec372e0  lw          $v1, 0x72E0($s6)
    ctx->pc = 0x1d9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29408)));
label_1d9c10:
    // 0x1d9c10: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1d9c14:
    // 0x1d9c14: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x1d9c14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1d9c18:
    // 0x1d9c18: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1d9c18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d9c1c:
    // 0x1d9c1c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_1d9c20:
    if (ctx->pc == 0x1D9C20u) {
        ctx->pc = 0x1D9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C1Cu;
        // 0x1d9c20: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C24u;
        goto label_1d9c24;
    }
    ctx->pc = 0x1D9C1Cu;
    {
        const bool branch_taken_0x1d9c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C1Cu;
        // 0x1d9c20: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c1c) {
            ctx->pc = 0x1D9BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9bf0;
        }
    }
    ctx->pc = 0x1D9C24u;
label_1d9c24:
    // 0x1d9c24: 0xaec072e0  sw          $zero, 0x72E0($s6)
    ctx->pc = 0x1d9c24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 29408), GPR_U32(ctx, 0));
label_1d9c28:
    // 0x1d9c28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d9c2c:
    // 0x1d9c2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1d9c30:
    if (ctx->pc == 0x1D9C30u) {
        ctx->pc = 0x1D9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C2Cu;
        // 0x1d9c30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C34u;
        goto label_1d9c34;
    }
    ctx->pc = 0x1D9C2Cu;
    {
        const bool branch_taken_0x1d9c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C2Cu;
        // 0x1d9c30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c2c) {
            ctx->pc = 0x1D9C60u;
            goto label_1d9c60;
        }
    }
    ctx->pc = 0x1D9C34u;
label_1d9c34:
    // 0x1d9c34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d9c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d9c38:
    // 0x1d9c38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d9c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d9c3c:
    // 0x1d9c3c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d9c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d9c40:
    // 0x1d9c40: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d9c40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d9c44:
    // 0x1d9c44: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1d9c44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1d9c48:
    // 0x1d9c48: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1d9c48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d9c4c:
    // 0x1d9c4c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1d9c4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1d9c50:
    // 0x1d9c50: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1d9c50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d9c54:
    // 0x1d9c54: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1d9c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1d9c58:
    // 0x1d9c58: 0x807d0ea  j           func_1F43A8
label_1d9c5c:
    if (ctx->pc == 0x1D9C5Cu) {
        ctx->pc = 0x1D9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C58u;
        // 0x1d9c5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C60u;
        goto label_1d9c60;
    }
    ctx->pc = 0x1D9C58u;
    ctx->pc = 0x1D9C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9C58u;
    // 0x1d9c5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9C60u;
label_1d9c60:
    // 0x1d9c60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d9c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d9c64:
    // 0x1d9c64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d9c64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d9c68:
    // 0x1d9c68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d9c68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d9c6c:
    // 0x1d9c6c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d9c6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d9c70:
    // 0x1d9c70: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1d9c70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1d9c74:
    // 0x1d9c74: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1d9c74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d9c78:
    // 0x1d9c78: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1d9c78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1d9c7c:
    // 0x1d9c7c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1d9c7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d9c80:
    // 0x1d9c80: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1d9c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1d9c84:
    // 0x1d9c84: 0x3e00008  jr          $ra
label_1d9c88:
    if (ctx->pc == 0x1D9C88u) {
        ctx->pc = 0x1D9C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C84u;
        // 0x1d9c88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C8Cu;
        goto label_fallthrough_0x1d9c84;
    }
    ctx->pc = 0x1D9C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C84u;
        // 0x1d9c88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d9c84:
    ctx->pc = 0x1D9C8Cu;
}
