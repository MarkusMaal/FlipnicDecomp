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

// Function: FUN_00169a10
// Address: 0x169a10 - 0x169e58
void FUN_00169a10_0x169a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169a10_0x169a10");
#endif

    switch (ctx->pc) {
        case 0x169a10u: goto label_169a10;
        case 0x169a14u: goto label_169a14;
        case 0x169a18u: goto label_169a18;
        case 0x169a1cu: goto label_169a1c;
        case 0x169a20u: goto label_169a20;
        case 0x169a24u: goto label_169a24;
        case 0x169a28u: goto label_169a28;
        case 0x169a2cu: goto label_169a2c;
        case 0x169a30u: goto label_169a30;
        case 0x169a34u: goto label_169a34;
        case 0x169a38u: goto label_169a38;
        case 0x169a3cu: goto label_169a3c;
        case 0x169a40u: goto label_169a40;
        case 0x169a44u: goto label_169a44;
        case 0x169a48u: goto label_169a48;
        case 0x169a4cu: goto label_169a4c;
        case 0x169a50u: goto label_169a50;
        case 0x169a54u: goto label_169a54;
        case 0x169a58u: goto label_169a58;
        case 0x169a5cu: goto label_169a5c;
        case 0x169a60u: goto label_169a60;
        case 0x169a64u: goto label_169a64;
        case 0x169a68u: goto label_169a68;
        case 0x169a6cu: goto label_169a6c;
        case 0x169a70u: goto label_169a70;
        case 0x169a74u: goto label_169a74;
        case 0x169a78u: goto label_169a78;
        case 0x169a7cu: goto label_169a7c;
        case 0x169a80u: goto label_169a80;
        case 0x169a84u: goto label_169a84;
        case 0x169a88u: goto label_169a88;
        case 0x169a8cu: goto label_169a8c;
        case 0x169a90u: goto label_169a90;
        case 0x169a94u: goto label_169a94;
        case 0x169a98u: goto label_169a98;
        case 0x169a9cu: goto label_169a9c;
        case 0x169aa0u: goto label_169aa0;
        case 0x169aa4u: goto label_169aa4;
        case 0x169aa8u: goto label_169aa8;
        case 0x169aacu: goto label_169aac;
        case 0x169ab0u: goto label_169ab0;
        case 0x169ab4u: goto label_169ab4;
        case 0x169ab8u: goto label_169ab8;
        case 0x169abcu: goto label_169abc;
        case 0x169ac0u: goto label_169ac0;
        case 0x169ac4u: goto label_169ac4;
        case 0x169ac8u: goto label_169ac8;
        case 0x169accu: goto label_169acc;
        case 0x169ad0u: goto label_169ad0;
        case 0x169ad4u: goto label_169ad4;
        case 0x169ad8u: goto label_169ad8;
        case 0x169adcu: goto label_169adc;
        case 0x169ae0u: goto label_169ae0;
        case 0x169ae4u: goto label_169ae4;
        case 0x169ae8u: goto label_169ae8;
        case 0x169aecu: goto label_169aec;
        case 0x169af0u: goto label_169af0;
        case 0x169af4u: goto label_169af4;
        case 0x169af8u: goto label_169af8;
        case 0x169afcu: goto label_169afc;
        case 0x169b00u: goto label_169b00;
        case 0x169b04u: goto label_169b04;
        case 0x169b08u: goto label_169b08;
        case 0x169b0cu: goto label_169b0c;
        case 0x169b10u: goto label_169b10;
        case 0x169b14u: goto label_169b14;
        case 0x169b18u: goto label_169b18;
        case 0x169b1cu: goto label_169b1c;
        case 0x169b20u: goto label_169b20;
        case 0x169b24u: goto label_169b24;
        case 0x169b28u: goto label_169b28;
        case 0x169b2cu: goto label_169b2c;
        case 0x169b30u: goto label_169b30;
        case 0x169b34u: goto label_169b34;
        case 0x169b38u: goto label_169b38;
        case 0x169b3cu: goto label_169b3c;
        case 0x169b40u: goto label_169b40;
        case 0x169b44u: goto label_169b44;
        case 0x169b48u: goto label_169b48;
        case 0x169b4cu: goto label_169b4c;
        case 0x169b50u: goto label_169b50;
        case 0x169b54u: goto label_169b54;
        case 0x169b58u: goto label_169b58;
        case 0x169b5cu: goto label_169b5c;
        case 0x169b60u: goto label_169b60;
        case 0x169b64u: goto label_169b64;
        case 0x169b68u: goto label_169b68;
        case 0x169b6cu: goto label_169b6c;
        case 0x169b70u: goto label_169b70;
        case 0x169b74u: goto label_169b74;
        case 0x169b78u: goto label_169b78;
        case 0x169b7cu: goto label_169b7c;
        case 0x169b80u: goto label_169b80;
        case 0x169b84u: goto label_169b84;
        case 0x169b88u: goto label_169b88;
        case 0x169b8cu: goto label_169b8c;
        case 0x169b90u: goto label_169b90;
        case 0x169b94u: goto label_169b94;
        case 0x169b98u: goto label_169b98;
        case 0x169b9cu: goto label_169b9c;
        case 0x169ba0u: goto label_169ba0;
        case 0x169ba4u: goto label_169ba4;
        case 0x169ba8u: goto label_169ba8;
        case 0x169bacu: goto label_169bac;
        case 0x169bb0u: goto label_169bb0;
        case 0x169bb4u: goto label_169bb4;
        case 0x169bb8u: goto label_169bb8;
        case 0x169bbcu: goto label_169bbc;
        case 0x169bc0u: goto label_169bc0;
        case 0x169bc4u: goto label_169bc4;
        case 0x169bc8u: goto label_169bc8;
        case 0x169bccu: goto label_169bcc;
        case 0x169bd0u: goto label_169bd0;
        case 0x169bd4u: goto label_169bd4;
        case 0x169bd8u: goto label_169bd8;
        case 0x169bdcu: goto label_169bdc;
        case 0x169be0u: goto label_169be0;
        case 0x169be4u: goto label_169be4;
        case 0x169be8u: goto label_169be8;
        case 0x169becu: goto label_169bec;
        case 0x169bf0u: goto label_169bf0;
        case 0x169bf4u: goto label_169bf4;
        case 0x169bf8u: goto label_169bf8;
        case 0x169bfcu: goto label_169bfc;
        case 0x169c00u: goto label_169c00;
        case 0x169c04u: goto label_169c04;
        case 0x169c08u: goto label_169c08;
        case 0x169c0cu: goto label_169c0c;
        case 0x169c10u: goto label_169c10;
        case 0x169c14u: goto label_169c14;
        case 0x169c18u: goto label_169c18;
        case 0x169c1cu: goto label_169c1c;
        case 0x169c20u: goto label_169c20;
        case 0x169c24u: goto label_169c24;
        case 0x169c28u: goto label_169c28;
        case 0x169c2cu: goto label_169c2c;
        case 0x169c30u: goto label_169c30;
        case 0x169c34u: goto label_169c34;
        case 0x169c38u: goto label_169c38;
        case 0x169c3cu: goto label_169c3c;
        case 0x169c40u: goto label_169c40;
        case 0x169c44u: goto label_169c44;
        case 0x169c48u: goto label_169c48;
        case 0x169c4cu: goto label_169c4c;
        case 0x169c50u: goto label_169c50;
        case 0x169c54u: goto label_169c54;
        case 0x169c58u: goto label_169c58;
        case 0x169c5cu: goto label_169c5c;
        case 0x169c60u: goto label_169c60;
        case 0x169c64u: goto label_169c64;
        case 0x169c68u: goto label_169c68;
        case 0x169c6cu: goto label_169c6c;
        case 0x169c70u: goto label_169c70;
        case 0x169c74u: goto label_169c74;
        case 0x169c78u: goto label_169c78;
        case 0x169c7cu: goto label_169c7c;
        case 0x169c80u: goto label_169c80;
        case 0x169c84u: goto label_169c84;
        case 0x169c88u: goto label_169c88;
        case 0x169c8cu: goto label_169c8c;
        case 0x169c90u: goto label_169c90;
        case 0x169c94u: goto label_169c94;
        case 0x169c98u: goto label_169c98;
        case 0x169c9cu: goto label_169c9c;
        case 0x169ca0u: goto label_169ca0;
        case 0x169ca4u: goto label_169ca4;
        case 0x169ca8u: goto label_169ca8;
        case 0x169cacu: goto label_169cac;
        case 0x169cb0u: goto label_169cb0;
        case 0x169cb4u: goto label_169cb4;
        case 0x169cb8u: goto label_169cb8;
        case 0x169cbcu: goto label_169cbc;
        case 0x169cc0u: goto label_169cc0;
        case 0x169cc4u: goto label_169cc4;
        case 0x169cc8u: goto label_169cc8;
        case 0x169cccu: goto label_169ccc;
        case 0x169cd0u: goto label_169cd0;
        case 0x169cd4u: goto label_169cd4;
        case 0x169cd8u: goto label_169cd8;
        case 0x169cdcu: goto label_169cdc;
        case 0x169ce0u: goto label_169ce0;
        case 0x169ce4u: goto label_169ce4;
        case 0x169ce8u: goto label_169ce8;
        case 0x169cecu: goto label_169cec;
        case 0x169cf0u: goto label_169cf0;
        case 0x169cf4u: goto label_169cf4;
        case 0x169cf8u: goto label_169cf8;
        case 0x169cfcu: goto label_169cfc;
        case 0x169d00u: goto label_169d00;
        case 0x169d04u: goto label_169d04;
        case 0x169d08u: goto label_169d08;
        case 0x169d0cu: goto label_169d0c;
        case 0x169d10u: goto label_169d10;
        case 0x169d14u: goto label_169d14;
        case 0x169d18u: goto label_169d18;
        case 0x169d1cu: goto label_169d1c;
        case 0x169d20u: goto label_169d20;
        case 0x169d24u: goto label_169d24;
        case 0x169d28u: goto label_169d28;
        case 0x169d2cu: goto label_169d2c;
        case 0x169d30u: goto label_169d30;
        case 0x169d34u: goto label_169d34;
        case 0x169d38u: goto label_169d38;
        case 0x169d3cu: goto label_169d3c;
        case 0x169d40u: goto label_169d40;
        case 0x169d44u: goto label_169d44;
        case 0x169d48u: goto label_169d48;
        case 0x169d4cu: goto label_169d4c;
        case 0x169d50u: goto label_169d50;
        case 0x169d54u: goto label_169d54;
        case 0x169d58u: goto label_169d58;
        case 0x169d5cu: goto label_169d5c;
        case 0x169d60u: goto label_169d60;
        case 0x169d64u: goto label_169d64;
        case 0x169d68u: goto label_169d68;
        case 0x169d6cu: goto label_169d6c;
        case 0x169d70u: goto label_169d70;
        case 0x169d74u: goto label_169d74;
        case 0x169d78u: goto label_169d78;
        case 0x169d7cu: goto label_169d7c;
        case 0x169d80u: goto label_169d80;
        case 0x169d84u: goto label_169d84;
        case 0x169d88u: goto label_169d88;
        case 0x169d8cu: goto label_169d8c;
        case 0x169d90u: goto label_169d90;
        case 0x169d94u: goto label_169d94;
        case 0x169d98u: goto label_169d98;
        case 0x169d9cu: goto label_169d9c;
        case 0x169da0u: goto label_169da0;
        case 0x169da4u: goto label_169da4;
        case 0x169da8u: goto label_169da8;
        case 0x169dacu: goto label_169dac;
        case 0x169db0u: goto label_169db0;
        case 0x169db4u: goto label_169db4;
        case 0x169db8u: goto label_169db8;
        case 0x169dbcu: goto label_169dbc;
        case 0x169dc0u: goto label_169dc0;
        case 0x169dc4u: goto label_169dc4;
        case 0x169dc8u: goto label_169dc8;
        case 0x169dccu: goto label_169dcc;
        case 0x169dd0u: goto label_169dd0;
        case 0x169dd4u: goto label_169dd4;
        case 0x169dd8u: goto label_169dd8;
        case 0x169ddcu: goto label_169ddc;
        case 0x169de0u: goto label_169de0;
        case 0x169de4u: goto label_169de4;
        case 0x169de8u: goto label_169de8;
        case 0x169decu: goto label_169dec;
        case 0x169df0u: goto label_169df0;
        case 0x169df4u: goto label_169df4;
        case 0x169df8u: goto label_169df8;
        case 0x169dfcu: goto label_169dfc;
        case 0x169e00u: goto label_169e00;
        case 0x169e04u: goto label_169e04;
        case 0x169e08u: goto label_169e08;
        case 0x169e0cu: goto label_169e0c;
        case 0x169e10u: goto label_169e10;
        case 0x169e14u: goto label_169e14;
        case 0x169e18u: goto label_169e18;
        case 0x169e1cu: goto label_169e1c;
        case 0x169e20u: goto label_169e20;
        case 0x169e24u: goto label_169e24;
        case 0x169e28u: goto label_169e28;
        case 0x169e2cu: goto label_169e2c;
        case 0x169e30u: goto label_169e30;
        case 0x169e34u: goto label_169e34;
        case 0x169e38u: goto label_169e38;
        case 0x169e3cu: goto label_169e3c;
        case 0x169e40u: goto label_169e40;
        case 0x169e44u: goto label_169e44;
        case 0x169e48u: goto label_169e48;
        case 0x169e4cu: goto label_169e4c;
        case 0x169e50u: goto label_169e50;
        case 0x169e54u: goto label_169e54;
        default: break;
    }

    ctx->pc = 0x169a10u;

label_169a10:
    // 0x169a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_169a14:
    // 0x169a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_169a18:
    // 0x169a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_169a1c:
    // 0x169a1c: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x169a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_169a20:
    // 0x169a20: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_169a24:
    if (ctx->pc == 0x169A24u) {
        ctx->pc = 0x169A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A20u;
        // 0x169a24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A28u;
        goto label_169a28;
    }
    ctx->pc = 0x169A20u;
    {
        const bool branch_taken_0x169a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A20u;
        // 0x169a24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a20) {
            ctx->pc = 0x169AA8u;
            goto label_169aa8;
        }
    }
    ctx->pc = 0x169A28u;
label_169a28:
    // 0x169a28: 0x846301e8  lh          $v1, 0x1E8($v1)
    ctx->pc = 0x169a28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_169a2c:
    // 0x169a2c: 0x28610000  slti        $at, $v1, 0x0
    ctx->pc = 0x169a2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_169a30:
    // 0x169a30: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_169a34:
    if (ctx->pc == 0x169A34u) {
        ctx->pc = 0x169A38u;
        goto label_169a38;
    }
    ctx->pc = 0x169A30u;
    {
        const bool branch_taken_0x169a30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a30) {
            ctx->pc = 0x169A50u;
            goto label_169a50;
        }
    }
    ctx->pc = 0x169A38u;
label_169a38:
    // 0x169a38: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x169a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_169a3c:
    // 0x169a3c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x169a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_169a40:
    // 0x169a40: 0x320f809  jalr        $t9
label_169a44:
    if (ctx->pc == 0x169A44u) {
        ctx->pc = 0x169A48u;
        goto label_169a48;
    }
    ctx->pc = 0x169A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169A48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169A40u, 0x169A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169A48u;
label_169a48:
    // 0x169a48: 0x10000100  b           . + 4 + (0x100 << 2)
label_169a4c:
    if (ctx->pc == 0x169A4Cu) {
        ctx->pc = 0x169A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A48u;
        // 0x169a4c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A50u;
        goto label_169a50;
    }
    ctx->pc = 0x169A48u;
    {
        const bool branch_taken_0x169a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A48u;
        // 0x169a4c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a48) {
            ctx->pc = 0x169E4Cu;
            goto label_169e4c;
        }
    }
    ctx->pc = 0x169A50u;
label_169a50:
    // 0x169a50: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x169a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_169a54:
    // 0x169a54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169a58:
    // 0x169a58: 0x8c632798  lw          $v1, 0x2798($v1)
    ctx->pc = 0x169a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10136)));
label_169a5c:
    // 0x169a5c: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
label_169a60:
    if (ctx->pc == 0x169A60u) {
        ctx->pc = 0x169A64u;
        goto label_169a64;
    }
    ctx->pc = 0x169A5Cu;
    {
        const bool branch_taken_0x169a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x169a5c) {
            ctx->pc = 0x169A80u;
            goto label_169a80;
        }
    }
    ctx->pc = 0x169A64u;
label_169a64:
    // 0x169a64: 0xc05a7d0  jal         func_169F40
label_169a68:
    if (ctx->pc == 0x169A68u) {
        ctx->pc = 0x169A6Cu;
        goto label_169a6c;
    }
    ctx->pc = 0x169A64u;
    SET_GPR_U32(ctx, 31, 0x169A6Cu);
    ctx->pc = 0x169F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169F40u, 0x169A64u, 0x169A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A6Cu;
label_169a6c:
    // 0x169a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169a70:
    // 0x169a70: 0xc05a810  jal         func_16A040
label_169a74:
    if (ctx->pc == 0x169A74u) {
        ctx->pc = 0x169A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A70u;
        // 0x169a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A78u;
        goto label_169a78;
    }
    ctx->pc = 0x169A70u;
    SET_GPR_U32(ctx, 31, 0x169A78u);
    ctx->pc = 0x169A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A70u;
    // 0x169a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A040u, 0x169A70u, 0x169A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A78u;
label_169a78:
    // 0x169a78: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_169a7c:
    if (ctx->pc == 0x169A7Cu) {
        ctx->pc = 0x169A80u;
        goto label_169a80;
    }
    ctx->pc = 0x169A78u;
    {
        const bool branch_taken_0x169a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a78) {
            ctx->pc = 0x169E48u;
            goto label_169e48;
        }
    }
    ctx->pc = 0x169A80u;
label_169a80:
    // 0x169a80: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x169a80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
label_169a84:
    // 0x169a84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x169a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_169a88:
    // 0x169a88: 0xa6030220  sh          $v1, 0x220($s0)
    ctx->pc = 0x169a88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 3));
label_169a8c:
    // 0x169a8c: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x169a8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
label_169a90:
    // 0x169a90: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_169a94:
    if (ctx->pc == 0x169A94u) {
        ctx->pc = 0x169A98u;
        goto label_169a98;
    }
    ctx->pc = 0x169A90u;
    {
        const bool branch_taken_0x169a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169a90) {
            ctx->pc = 0x169AA8u;
            goto label_169aa8;
        }
    }
    ctx->pc = 0x169A98u;
label_169a98:
    // 0x169a98: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x169a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_169a9c:
    // 0x169a9c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169aa0:
    // 0x169aa0: 0x320f809  jalr        $t9
label_169aa4:
    if (ctx->pc == 0x169AA4u) {
        ctx->pc = 0x169AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AA0u;
        // 0x169aa4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169AA8u;
        goto label_169aa8;
    }
    ctx->pc = 0x169AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169AA8u);
        ctx->pc = 0x169AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AA0u;
        // 0x169aa4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169AA0u, 0x169AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169AA8u;
label_169aa8:
    // 0x169aa8: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x169aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_169aac:
    // 0x169aac: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x169aacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_169ab0:
    // 0x169ab0: 0x102000e5  beqz        $at, . + 4 + (0xE5 << 2)
label_169ab4:
    if (ctx->pc == 0x169AB4u) {
        ctx->pc = 0x169AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AB0u;
        // 0x169ab4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169AB8u;
        goto label_169ab8;
    }
    ctx->pc = 0x169AB0u;
    {
        const bool branch_taken_0x169ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x169AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AB0u;
        // 0x169ab4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ab0) {
            ctx->pc = 0x169E48u;
            goto label_169e48;
        }
    }
    ctx->pc = 0x169AB8u;
label_169ab8:
    // 0x169ab8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x169ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_169abc:
    // 0x169abc: 0x2484f410  addiu       $a0, $a0, -0xBF0
    ctx->pc = 0x169abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964240));
label_169ac0:
    // 0x169ac0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_169ac4:
    // 0x169ac4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x169ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_169ac8:
    // 0x169ac8: 0x600008  jr          $v1
label_169acc:
    if (ctx->pc == 0x169ACCu) {
        ctx->pc = 0x169AD0u;
        goto label_169ad0;
    }
    ctx->pc = 0x169AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169AD0u: goto label_169ad0;
            case 0x169B00u: goto label_169b00;
            case 0x169B30u: goto label_169b30;
            case 0x169BC0u: goto label_169bc0;
            case 0x169C58u: goto label_169c58;
            case 0x169C6Cu: goto label_169c6c;
            case 0x169D50u: goto label_169d50;
            case 0x169D88u: goto label_169d88;
            case 0x169D9Cu: goto label_169d9c;
            case 0x169E28u: goto label_169e28;
            case 0x169E48u: goto label_169e48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169AC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x169AD0u;
label_169ad0:
    // 0x169ad0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x169ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_169ad4:
    // 0x169ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169ad8:
    // 0x169ad8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169adc:
    // 0x169adc: 0xc0425a4  jal         func_109690
label_169ae0:
    if (ctx->pc == 0x169AE0u) {
        ctx->pc = 0x169AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169ADCu;
        // 0x169ae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169AE4u;
        goto label_169ae4;
    }
    ctx->pc = 0x169ADCu;
    SET_GPR_U32(ctx, 31, 0x169AE4u);
    ctx->pc = 0x169AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169ADCu;
    // 0x169ae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169ADCu, 0x169AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169AE4u;
label_169ae4:
    // 0x169ae4: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169ae8:
    // 0x169ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169aec:
    // 0x169aec: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169af0:
    // 0x169af0: 0x320f809  jalr        $t9
label_169af4:
    if (ctx->pc == 0x169AF4u) {
        ctx->pc = 0x169AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AF0u;
        // 0x169af4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169AF8u;
        goto label_169af8;
    }
    ctx->pc = 0x169AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169AF8u);
        ctx->pc = 0x169AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AF0u;
        // 0x169af4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169AF0u, 0x169AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169AF8u;
label_169af8:
    // 0x169af8: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_169afc:
    if (ctx->pc == 0x169AFCu) {
        ctx->pc = 0x169B00u;
        goto label_169b00;
    }
    ctx->pc = 0x169AF8u;
    {
        const bool branch_taken_0x169af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169af8) {
            ctx->pc = 0x169E48u;
            goto label_169e48;
        }
    }
    ctx->pc = 0x169B00u;
label_169b00:
    // 0x169b00: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169b04:
    // 0x169b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169b08:
    // 0x169b08: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169b08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169b0c:
    // 0x169b0c: 0x320f809  jalr        $t9
label_169b10:
    if (ctx->pc == 0x169B10u) {
        ctx->pc = 0x169B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B0Cu;
        // 0x169b10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B14u;
        goto label_169b14;
    }
    ctx->pc = 0x169B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169B14u);
        ctx->pc = 0x169B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B0Cu;
        // 0x169b10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169B0Cu, 0x169B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169B14u;
label_169b14:
    // 0x169b14: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x169b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_169b18:
    // 0x169b18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169b1c:
    // 0x169b1c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x169b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_169b20:
    // 0x169b20: 0x320f809  jalr        $t9
label_169b24:
    if (ctx->pc == 0x169B24u) {
        ctx->pc = 0x169B28u;
        goto label_169b28;
    }
    ctx->pc = 0x169B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169B28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169B20u, 0x169B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169B28u;
label_169b28:
    // 0x169b28: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_169b2c:
    if (ctx->pc == 0x169B2Cu) {
        ctx->pc = 0x169B30u;
        goto label_169b30;
    }
    ctx->pc = 0x169B28u;
    {
        const bool branch_taken_0x169b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b28) {
            ctx->pc = 0x169E48u;
            goto label_169e48;
        }
    }
    ctx->pc = 0x169B30u;
label_169b30:
    // 0x169b30: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x169b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169b34:
    // 0x169b34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_169b38:
    if (ctx->pc == 0x169B38u) {
        ctx->pc = 0x169B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B34u;
        // 0x169b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B3Cu;
        goto label_169b3c;
    }
    ctx->pc = 0x169B34u;
    {
        const bool branch_taken_0x169b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B34u;
        // 0x169b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b34) {
            ctx->pc = 0x169B44u;
            goto label_169b44;
        }
    }
    ctx->pc = 0x169B3Cu;
label_169b3c:
    // 0x169b3c: 0xc05a798  jal         func_169E60
label_169b40:
    if (ctx->pc == 0x169B40u) {
        ctx->pc = 0x169B44u;
        goto label_169b44;
    }
    ctx->pc = 0x169B3Cu;
    SET_GPR_U32(ctx, 31, 0x169B44u);
    ctx->pc = 0x169E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E60u, 0x169B3Cu, 0x169B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B44u;
label_169b44:
    // 0x169b44: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169b44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169b48:
    // 0x169b48: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x169b48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_169b4c:
    // 0x169b4c: 0x320f809  jalr        $t9
label_169b50:
    if (ctx->pc == 0x169B50u) {
        ctx->pc = 0x169B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B4Cu;
        // 0x169b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B54u;
        goto label_169b54;
    }
    ctx->pc = 0x169B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169B54u);
        ctx->pc = 0x169B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B4Cu;
        // 0x169b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169B4Cu, 0x169B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169B54u;
label_169b54:
    // 0x169b54: 0x92040223  lbu         $a0, 0x223($s0)
    ctx->pc = 0x169b54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 547)));
label_169b58:
    // 0x169b58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_169b5c:
    if (ctx->pc == 0x169B5Cu) {
        ctx->pc = 0x169B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B58u;
        // 0x169b5c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B60u;
        goto label_169b60;
    }
    ctx->pc = 0x169B58u;
    {
        const bool branch_taken_0x169b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B58u;
        // 0x169b5c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b58) {
            ctx->pc = 0x169B68u;
            goto label_169b68;
        }
    }
    ctx->pc = 0x169B60u;
label_169b60:
    // 0x169b60: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_169b64:
    if (ctx->pc == 0x169B64u) {
        ctx->pc = 0x169B68u;
        goto label_169b68;
    }
    ctx->pc = 0x169B60u;
    {
        const bool branch_taken_0x169b60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x169b60) {
            ctx->pc = 0x169B90u;
            goto label_169b90;
        }
    }
    ctx->pc = 0x169B68u;
label_169b68:
    // 0x169b68: 0x92030222  lbu         $v1, 0x222($s0)
    ctx->pc = 0x169b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 546)));
label_169b6c:
    // 0x169b6c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_169b70:
    if (ctx->pc == 0x169B70u) {
        ctx->pc = 0x169B74u;
        goto label_169b74;
    }
    ctx->pc = 0x169B6Cu;
    {
        const bool branch_taken_0x169b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169b6c) {
            ctx->pc = 0x169BB0u;
            goto label_169bb0;
        }
    }
    ctx->pc = 0x169B74u;
label_169b74:
    // 0x169b74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_169b78:
    // 0x169b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169b7c:
    // 0x169b7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169b80:
    // 0x169b80: 0xc0425a4  jal         func_109690
label_169b84:
    if (ctx->pc == 0x169B84u) {
        ctx->pc = 0x169B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B80u;
        // 0x169b84: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B88u;
        goto label_169b88;
    }
    ctx->pc = 0x169B80u;
    SET_GPR_U32(ctx, 31, 0x169B88u);
    ctx->pc = 0x169B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B80u;
    // 0x169b84: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169B80u, 0x169B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B88u;
label_169b88:
    // 0x169b88: 0x1000000a  b           . + 4 + (0xA << 2)
label_169b8c:
    if (ctx->pc == 0x169B8Cu) {
        ctx->pc = 0x169B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B88u;
        // 0x169b8c: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B90u;
        goto label_169b90;
    }
    ctx->pc = 0x169B88u;
    {
        const bool branch_taken_0x169b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B88u;
        // 0x169b8c: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b88) {
            ctx->pc = 0x169BB4u;
            goto label_169bb4;
        }
    }
    ctx->pc = 0x169B90u;
label_169b90:
    // 0x169b90: 0x92030222  lbu         $v1, 0x222($s0)
    ctx->pc = 0x169b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 546)));
label_169b94:
    // 0x169b94: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_169b98:
    if (ctx->pc == 0x169B98u) {
        ctx->pc = 0x169B9Cu;
        goto label_169b9c;
    }
    ctx->pc = 0x169B94u;
    {
        const bool branch_taken_0x169b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169b94) {
            ctx->pc = 0x169BB0u;
            goto label_169bb0;
        }
    }
    ctx->pc = 0x169B9Cu;
label_169b9c:
    // 0x169b9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_169ba0:
    // 0x169ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169ba4:
    // 0x169ba4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169ba8:
    // 0x169ba8: 0xc0425a4  jal         func_109690
label_169bac:
    if (ctx->pc == 0x169BACu) {
        ctx->pc = 0x169BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BA8u;
        // 0x169bac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BB0u;
        goto label_169bb0;
    }
    ctx->pc = 0x169BA8u;
    SET_GPR_U32(ctx, 31, 0x169BB0u);
    ctx->pc = 0x169BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169BA8u;
    // 0x169bac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169BA8u, 0x169BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169BB0u;
label_169bb0:
    // 0x169bb0: 0xa20001d3  sb          $zero, 0x1D3($s0)
    ctx->pc = 0x169bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
label_169bb4:
    // 0x169bb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169bb8:
    // 0x169bb8: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_169bbc:
    if (ctx->pc == 0x169BBCu) {
        ctx->pc = 0x169BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BB8u;
        // 0x169bbc: 0xa2030222  sb          $v1, 0x222($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 546), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BC0u;
        goto label_169bc0;
    }
    ctx->pc = 0x169BB8u;
    {
        const bool branch_taken_0x169bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BB8u;
        // 0x169bbc: 0xa2030222  sb          $v1, 0x222($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 546), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bb8) {
            ctx->pc = 0x169E48u;
            goto label_169e48;
        }
    }
    ctx->pc = 0x169BC0u;
label_169bc0:
    // 0x169bc0: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169bc4:
    // 0x169bc4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x169bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_169bc8:
    // 0x169bc8: 0x320f809  jalr        $t9
label_169bcc:
    if (ctx->pc == 0x169BCCu) {
        ctx->pc = 0x169BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BC8u;
        // 0x169bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BD0u;
        goto label_169bd0;
    }
    ctx->pc = 0x169BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169BD0u);
        ctx->pc = 0x169BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BC8u;
        // 0x169bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169BC8u, 0x169BD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169BD0u;
label_169bd0:
    // 0x169bd0: 0x92040223  lbu         $a0, 0x223($s0)
    ctx->pc = 0x169bd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 547)));
label_169bd4:
    // 0x169bd4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_169bd8:
    if (ctx->pc == 0x169BD8u) {
        ctx->pc = 0x169BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BD4u;
        // 0x169bd8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BDCu;
        goto label_169bdc;
    }
    ctx->pc = 0x169BD4u;
    {
        const bool branch_taken_0x169bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BD4u;
        // 0x169bd8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bd4) {
            ctx->pc = 0x169BE4u;
            goto label_169be4;
        }
    }
    ctx->pc = 0x169BDCu;
label_169bdc:
    // 0x169bdc: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_169be0:
    if (ctx->pc == 0x169BE0u) {
        ctx->pc = 0x169BE4u;
        goto label_169be4;
    }
    ctx->pc = 0x169BDCu;
    {
        const bool branch_taken_0x169bdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x169bdc) {
            ctx->pc = 0x169C28u;
            goto label_169c28;
        }
    }
    ctx->pc = 0x169BE4u;
label_169be4:
    // 0x169be4: 0x92020222  lbu         $v0, 0x222($s0)
    ctx->pc = 0x169be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 546)));
label_169be8:
    // 0x169be8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_169bec:
    if (ctx->pc == 0x169BECu) {
        ctx->pc = 0x169BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BE8u;
        // 0x169bec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BF0u;
        goto label_169bf0;
    }
    ctx->pc = 0x169BE8u;
    {
        const bool branch_taken_0x169be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BE8u;
        // 0x169bec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169be8) {
            ctx->pc = 0x169C08u;
            goto label_169c08;
        }
    }
    ctx->pc = 0x169BF0u;
label_169bf0:
    // 0x169bf0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_169bf4:
    // 0x169bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169bf8:
    // 0x169bf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169bfc:
    // 0x169bfc: 0xc0425a4  jal         func_109690
label_169c00:
    if (ctx->pc == 0x169C00u) {
        ctx->pc = 0x169C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BFCu;
        // 0x169c00: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C04u;
        goto label_169c04;
    }
    ctx->pc = 0x169BFCu;
    SET_GPR_U32(ctx, 31, 0x169C04u);
    ctx->pc = 0x169C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169BFCu;
    // 0x169c00: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169BFCu, 0x169C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C04u;
label_169c04:
    // 0x169c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169c08:
    // 0x169c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169c0c:
    // 0x169c0c: 0xa20201d3  sb          $v0, 0x1D3($s0)
    ctx->pc = 0x169c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 2));
label_169c10:
    // 0x169c10: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169c14:
    // 0x169c14: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169c18:
    // 0x169c18: 0x320f809  jalr        $t9
label_169c1c:
    if (ctx->pc == 0x169C1Cu) {
        ctx->pc = 0x169C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C18u;
        // 0x169c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C20u;
        goto label_169c20;
    }
    ctx->pc = 0x169C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169C20u);
        ctx->pc = 0x169C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C18u;
        // 0x169c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169C18u, 0x169C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169C20u;
label_169c20:
    // 0x169c20: 0x1000000b  b           . + 4 + (0xB << 2)
label_169c24:
    if (ctx->pc == 0x169C24u) {
        ctx->pc = 0x169C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C20u;
        // 0x169c24: 0xa2000222  sb          $zero, 0x222($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 546), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C28u;
        goto label_169c28;
    }
    ctx->pc = 0x169C20u;
    {
        const bool branch_taken_0x169c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C20u;
        // 0x169c24: 0xa2000222  sb          $zero, 0x222($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 546), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c20) {
            ctx->pc = 0x169C50u;
            goto label_169c50;
        }
    }
    ctx->pc = 0x169C28u;
label_169c28:
    // 0x169c28: 0x92030222  lbu         $v1, 0x222($s0)
    ctx->pc = 0x169c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 546)));
label_169c2c:
    // 0x169c2c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_169c30:
    if (ctx->pc == 0x169C30u) {
        ctx->pc = 0x169C34u;
        goto label_169c34;
    }
    ctx->pc = 0x169C2Cu;
    {
        const bool branch_taken_0x169c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c2c) {
            ctx->pc = 0x169C48u;
            goto label_169c48;
        }
    }
    ctx->pc = 0x169C34u;
label_169c34:
    // 0x169c34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_169c38:
    // 0x169c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169c3c:
    // 0x169c3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169c40:
    // 0x169c40: 0xc0425a4  jal         func_109690
label_169c44:
    if (ctx->pc == 0x169C44u) {
        ctx->pc = 0x169C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C40u;
        // 0x169c44: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C48u;
        goto label_169c48;
    }
    ctx->pc = 0x169C40u;
    SET_GPR_U32(ctx, 31, 0x169C48u);
    ctx->pc = 0x169C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C40u;
    // 0x169c44: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169C40u, 0x169C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C48u;
label_169c48:
    // 0x169c48: 0xa20001d3  sb          $zero, 0x1D3($s0)
    ctx->pc = 0x169c48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
label_169c4c:
    // 0x169c4c: 0xa2000222  sb          $zero, 0x222($s0)
    ctx->pc = 0x169c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 546), (uint8_t)GPR_U32(ctx, 0));
label_169c50:
    // 0x169c50: 0x1000007d  b           . + 4 + (0x7D << 2)
label_169c54:
    if (ctx->pc == 0x169C54u) {
        ctx->pc = 0x169C58u;
        goto label_169c58;
    }
    ctx->pc = 0x169C50u;
    {
        const bool branch_taken_0x169c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c50) {
            ctx->pc = 0x169E48u;
            goto label_169e48;
        }
    }
    ctx->pc = 0x169C58u;
label_169c58:
    // 0x169c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169c5c:
    // 0x169c5c: 0xc05a7d0  jal         func_169F40
label_169c60:
    if (ctx->pc == 0x169C60u) {
        ctx->pc = 0x169C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C5Cu;
        // 0x169c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C64u;
        goto label_169c64;
    }
    ctx->pc = 0x169C5Cu;
    SET_GPR_U32(ctx, 31, 0x169C64u);
    ctx->pc = 0x169C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C5Cu;
    // 0x169c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169F40u, 0x169C5Cu, 0x169C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C64u;
label_169c64:
    // 0x169c64: 0x10000078  b           . + 4 + (0x78 << 2)
label_169c68:
    if (ctx->pc == 0x169C68u) {
        ctx->pc = 0x169C6Cu;
        goto label_169c6c;
    }
    ctx->pc = 0x169C64u;
    {
        const bool branch_taken_0x169c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c64) {
            ctx->pc = 0x169E48u;
            goto label_169e48;
        }
    }
    ctx->pc = 0x169C6Cu;
label_169c6c:
    // 0x169c6c: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x169c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_169c70:
    // 0x169c70: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x169c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_169c74:
    // 0x169c74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169c78:
    // 0x169c78: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x169c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_169c7c:
    // 0x169c7c: 0x320f809  jalr        $t9
label_169c80:
    if (ctx->pc == 0x169C80u) {
        ctx->pc = 0x169C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C7Cu;
        // 0x169c80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C84u;
        goto label_169c84;
    }
    ctx->pc = 0x169C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169C84u);
        ctx->pc = 0x169C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C7Cu;
        // 0x169c80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169C7Cu, 0x169C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169C84u;
label_169c84:
    // 0x169c84: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169c84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169c88:
    // 0x169c88: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x169c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169c8c:
    // 0x169c8c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x169c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_169c90:
    // 0x169c90: 0x320f809  jalr        $t9
label_169c94:
    if (ctx->pc == 0x169C94u) {
        ctx->pc = 0x169C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C90u;
        // 0x169c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C98u;
        goto label_169c98;
    }
    ctx->pc = 0x169C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169C98u);
        ctx->pc = 0x169C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C90u;
        // 0x169c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169C90u, 0x169C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169C98u;
label_169c98:
    // 0x169c98: 0x8e030224  lw          $v1, 0x224($s0)
    ctx->pc = 0x169c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169c9c:
    // 0x169c9c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x169c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_169ca0:
    // 0x169ca0: 0xc6000200  lwc1        $f0, 0x200($s0)
    ctx->pc = 0x169ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_169ca4:
    // 0x169ca4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x169ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_169ca8:
    // 0x169ca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x169ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_169cac:
    // 0x169cac: 0xc46201c0  lwc1        $f2, 0x1C0($v1)
    ctx->pc = 0x169cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_169cb0:
    // 0x169cb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x169cb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_169cb4:
    // 0x169cb4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x169cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_169cb8:
    // 0x169cb8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x169cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_169cbc:
    // 0x169cbc: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x169cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169cc0:
    // 0x169cc0: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x169cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
label_169cc4:
    // 0x169cc4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x169cc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_169cc8:
    // 0x169cc8: 0x4b002103  vaddw.x     $vf4, $vf4, $vf0w
    ctx->pc = 0x169cc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_169ccc:
    // 0x169ccc: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x169cccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_169cd0:
    // 0x169cd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x169cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169cd4:
    // 0x169cd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x169cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_169cd8:
    // 0x169cd8: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x169cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_169cdc:
    // 0x169cdc: 0xc056194  jal         func_158650
label_169ce0:
    if (ctx->pc == 0x169CE0u) {
        ctx->pc = 0x169CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CDCu;
        // 0x169ce0: 0x8e040224  lw          $a0, 0x224($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169CE4u;
        goto label_169ce4;
    }
    ctx->pc = 0x169CDCu;
    SET_GPR_U32(ctx, 31, 0x169CE4u);
    ctx->pc = 0x169CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169CDCu;
    // 0x169ce0: 0x8e040224  lw          $a0, 0x224($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x169CDCu, 0x169CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169CE4u;
label_169ce4:
    // 0x169ce4: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169ce8:
    // 0x169ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169cec:
    // 0x169cec: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x169cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169cf0:
    // 0x169cf0: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x169cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_169cf4:
    // 0x169cf4: 0x320f809  jalr        $t9
label_169cf8:
    if (ctx->pc == 0x169CF8u) {
        ctx->pc = 0x169CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CF4u;
        // 0x169cf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169CFCu;
        goto label_169cfc;
    }
    ctx->pc = 0x169CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169CFCu);
        ctx->pc = 0x169CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CF4u;
        // 0x169cf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169CF4u, 0x169CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169CFCu;
label_169cfc:
    // 0x169cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169d00:
    // 0x169d00: 0xc042118  jal         func_108460
label_169d04:
    if (ctx->pc == 0x169D04u) {
        ctx->pc = 0x169D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D00u;
        // 0x169d04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D08u;
        goto label_169d08;
    }
    ctx->pc = 0x169D00u;
    SET_GPR_U32(ctx, 31, 0x169D08u);
    ctx->pc = 0x169D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D00u;
    // 0x169d04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x169D00u, 0x169D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D08u;
label_169d08:
    // 0x169d08: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x169d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_169d0c:
    // 0x169d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169d10:
    // 0x169d10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169d14:
    // 0x169d14: 0xc0425a4  jal         func_109690
label_169d18:
    if (ctx->pc == 0x169D18u) {
        ctx->pc = 0x169D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D14u;
        // 0x169d18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D1Cu;
        goto label_169d1c;
    }
    ctx->pc = 0x169D14u;
    SET_GPR_U32(ctx, 31, 0x169D1Cu);
    ctx->pc = 0x169D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D14u;
    // 0x169d18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169D14u, 0x169D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D1Cu;
label_169d1c:
    // 0x169d1c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x169d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_169d20:
    // 0x169d20: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x169d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_169d24:
    // 0x169d24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169d28:
    // 0x169d28: 0xc055dac  jal         func_1576B0
label_169d2c:
    if (ctx->pc == 0x169D2Cu) {
        ctx->pc = 0x169D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D28u;
        // 0x169d2c: 0x8e040224  lw          $a0, 0x224($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D30u;
        goto label_169d30;
    }
    ctx->pc = 0x169D28u;
    SET_GPR_U32(ctx, 31, 0x169D30u);
    ctx->pc = 0x169D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D28u;
    // 0x169d2c: 0x8e040224  lw          $a0, 0x224($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x169D28u, 0x169D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D30u;
label_169d30:
    // 0x169d30: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x169d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
label_169d34:
    // 0x169d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169d38:
    // 0x169d38: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169d3c:
    // 0x169d3c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169d40:
    // 0x169d40: 0x320f809  jalr        $t9
label_169d44:
    if (ctx->pc == 0x169D44u) {
        ctx->pc = 0x169D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D40u;
        // 0x169d44: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D48u;
        goto label_169d48;
    }
    ctx->pc = 0x169D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169D48u);
        ctx->pc = 0x169D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D40u;
        // 0x169d44: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169D40u, 0x169D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169D48u;
label_169d48:
    // 0x169d48: 0x1000003f  b           . + 4 + (0x3F << 2)
label_169d4c:
    if (ctx->pc == 0x169D4Cu) {
        ctx->pc = 0x169D50u;
        goto label_169d50;
    }
    ctx->pc = 0x169D48u;
    {
        const bool branch_taken_0x169d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d48) {
            ctx->pc = 0x169E48u;
            goto label_169e48;
        }
    }
    ctx->pc = 0x169D50u;
label_169d50:
    // 0x169d50: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x169d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169d54:
    // 0x169d54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_169d58:
    if (ctx->pc == 0x169D58u) {
        ctx->pc = 0x169D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D54u;
        // 0x169d58: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D5Cu;
        goto label_169d5c;
    }
    ctx->pc = 0x169D54u;
    {
        const bool branch_taken_0x169d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D54u;
        // 0x169d58: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d54) {
            ctx->pc = 0x169D68u;
            goto label_169d68;
        }
    }
    ctx->pc = 0x169D5Cu;
label_169d5c:
    // 0x169d5c: 0xc05a798  jal         func_169E60
label_169d60:
    if (ctx->pc == 0x169D60u) {
        ctx->pc = 0x169D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D5Cu;
        // 0x169d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D64u;
        goto label_169d64;
    }
    ctx->pc = 0x169D5Cu;
    SET_GPR_U32(ctx, 31, 0x169D64u);
    ctx->pc = 0x169D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D5Cu;
    // 0x169d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E60u, 0x169D5Cu, 0x169D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D64u;
label_169d64:
    // 0x169d64: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x169d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_169d68:
    // 0x169d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169d6c:
    // 0x169d6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169d70:
    // 0x169d70: 0xc0425a4  jal         func_109690
label_169d74:
    if (ctx->pc == 0x169D74u) {
        ctx->pc = 0x169D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D70u;
        // 0x169d74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D78u;
        goto label_169d78;
    }
    ctx->pc = 0x169D70u;
    SET_GPR_U32(ctx, 31, 0x169D78u);
    ctx->pc = 0x169D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D70u;
    // 0x169d74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169D70u, 0x169D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D78u;
label_169d78:
    // 0x169d78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169d7c:
    // 0x169d7c: 0xa20301d3  sb          $v1, 0x1D3($s0)
    ctx->pc = 0x169d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 3));
label_169d80:
    // 0x169d80: 0x10000031  b           . + 4 + (0x31 << 2)
label_169d84:
    if (ctx->pc == 0x169D84u) {
        ctx->pc = 0x169D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D80u;
        // 0x169d84: 0xae0001d4  sw          $zero, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D88u;
        goto label_169d88;
    }
    ctx->pc = 0x169D80u;
    {
        const bool branch_taken_0x169d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D80u;
        // 0x169d84: 0xae0001d4  sw          $zero, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d80) {
            ctx->pc = 0x169E48u;
            goto label_169e48;
        }
    }
    ctx->pc = 0x169D88u;
label_169d88:
    // 0x169d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169d8c:
    // 0x169d8c: 0xc05a810  jal         func_16A040
label_169d90:
    if (ctx->pc == 0x169D90u) {
        ctx->pc = 0x169D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D8Cu;
        // 0x169d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D94u;
        goto label_169d94;
    }
    ctx->pc = 0x169D8Cu;
    SET_GPR_U32(ctx, 31, 0x169D94u);
    ctx->pc = 0x169D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D8Cu;
    // 0x169d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A040u, 0x169D8Cu, 0x169D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D94u;
label_169d94:
    // 0x169d94: 0x1000002c  b           . + 4 + (0x2C << 2)
label_169d98:
    if (ctx->pc == 0x169D98u) {
        ctx->pc = 0x169D9Cu;
        goto label_169d9c;
    }
    ctx->pc = 0x169D94u;
    {
        const bool branch_taken_0x169d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d94) {
            ctx->pc = 0x169E48u;
            goto label_169e48;
        }
    }
    ctx->pc = 0x169D9Cu;
label_169d9c:
    // 0x169d9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x169d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_169da0:
    // 0x169da0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x169da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169da4:
    // 0x169da4: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x169da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_169da8:
    // 0x169da8: 0x84640034  lh          $a0, 0x34($v1)
    ctx->pc = 0x169da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
label_169dac:
    // 0x169dac: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_169db0:
    if (ctx->pc == 0x169DB0u) {
        ctx->pc = 0x169DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DACu;
        // 0x169db0: 0x84630036  lh          $v1, 0x36($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169DB4u;
        goto label_169db4;
    }
    ctx->pc = 0x169DACu;
    {
        const bool branch_taken_0x169dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DACu;
        // 0x169db0: 0x84630036  lh          $v1, 0x36($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169dac) {
            ctx->pc = 0x169DFCu;
            goto label_169dfc;
        }
    }
    ctx->pc = 0x169DB4u;
label_169db4:
    // 0x169db4: 0x8f868384  lw          $a2, -0x7C7C($gp)
    ctx->pc = 0x169db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_169db8:
    // 0x169db8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x169db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_169dbc:
    // 0x169dbc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x169dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_169dc0:
    // 0x169dc0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x169dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_169dc4:
    // 0x169dc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_169dc8:
    // 0x169dc8: 0x10000003  b           . + 4 + (0x3 << 2)
label_169dcc:
    if (ctx->pc == 0x169DCCu) {
        ctx->pc = 0x169DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DC8u;
        // 0x169dcc: 0x24470018  addiu       $a3, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169DD0u;
        goto label_169dd0;
    }
    ctx->pc = 0x169DC8u;
    {
        const bool branch_taken_0x169dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DC8u;
        // 0x169dcc: 0x24470018  addiu       $a3, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169dc8) {
            ctx->pc = 0x169DD8u;
            goto label_169dd8;
        }
    }
    ctx->pc = 0x169DD0u;
label_169dd0:
    // 0x169dd0: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x169dd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_169dd4:
    // 0x169dd4: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x169dd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_169dd8:
    // 0x169dd8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x169dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_169ddc:
    // 0x169ddc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x169ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_169de0:
    // 0x169de0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x169de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_169de4:
    // 0x169de4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x169de4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169de8:
    // 0x169de8: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x169de8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_169dec:
    // 0x169dec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x169decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169df0:
    // 0x169df0: 0xc04bce0  jal         func_12F380
label_169df4:
    if (ctx->pc == 0x169DF4u) {
        ctx->pc = 0x169DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DF0u;
        // 0x169df4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169DF8u;
        goto label_169df8;
    }
    ctx->pc = 0x169DF0u;
    SET_GPR_U32(ctx, 31, 0x169DF8u);
    ctx->pc = 0x169DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169DF0u;
    // 0x169df4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x169DF0u, 0x169DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169DF8u;
label_169df8:
    // 0x169df8: 0xae020228  sw          $v0, 0x228($s0)
    ctx->pc = 0x169df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 2));
label_169dfc:
    // 0x169dfc: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169dfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169e00:
    // 0x169e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169e04:
    // 0x169e04: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169e08:
    // 0x169e08: 0x320f809  jalr        $t9
label_169e0c:
    if (ctx->pc == 0x169E0Cu) {
        ctx->pc = 0x169E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E08u;
        // 0x169e0c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169E10u;
        goto label_169e10;
    }
    ctx->pc = 0x169E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169E10u);
        ctx->pc = 0x169E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E08u;
        // 0x169e0c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169E08u, 0x169E10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169E10u;
label_169e10:
    // 0x169e10: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x169e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_169e14:
    // 0x169e14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169e18:
    // 0x169e18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169e18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169e1c:
    // 0x169e1c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x169e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_169e20:
    // 0x169e20: 0x320f809  jalr        $t9
label_169e24:
    if (ctx->pc == 0x169E24u) {
        ctx->pc = 0x169E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E20u;
        // 0x169e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169E28u;
        goto label_169e28;
    }
    ctx->pc = 0x169E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169E28u);
        ctx->pc = 0x169E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E20u;
        // 0x169e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169E20u, 0x169E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169E28u;
label_169e28:
    // 0x169e28: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x169e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169e2c:
    // 0x169e2c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_169e30:
    if (ctx->pc == 0x169E30u) {
        ctx->pc = 0x169E34u;
        goto label_169e34;
    }
    ctx->pc = 0x169E2Cu;
    {
        const bool branch_taken_0x169e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x169e2c) {
            ctx->pc = 0x169E48u;
            goto label_169e48;
        }
    }
    ctx->pc = 0x169E34u;
label_169e34:
    // 0x169e34: 0xc055c40  jal         func_157100
label_169e38:
    if (ctx->pc == 0x169E38u) {
        ctx->pc = 0x169E3Cu;
        goto label_169e3c;
    }
    ctx->pc = 0x169E34u;
    SET_GPR_U32(ctx, 31, 0x169E3Cu);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x169E34u, 0x169E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E3Cu;
label_169e3c:
    // 0x169e3c: 0x8e030224  lw          $v1, 0x224($s0)
    ctx->pc = 0x169e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169e40:
    // 0x169e40: 0x7a060060  lq          $a2, 0x60($s0)
    ctx->pc = 0x169e40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 96)));
label_169e44:
    // 0x169e44: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x169e44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_169e48:
    // 0x169e48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_169e4c:
    // 0x169e4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169e50:
    // 0x169e50: 0x3e00008  jr          $ra
label_169e54:
    if (ctx->pc == 0x169E54u) {
        ctx->pc = 0x169E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E50u;
        // 0x169e54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169E58u;
        goto label_fallthrough_0x169e50;
    }
    ctx->pc = 0x169E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E50u;
        // 0x169e54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x169e50:
    ctx->pc = 0x169E58u;
}
