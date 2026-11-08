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

// Function: FUN_00120b20
// Address: 0x120b20 - 0x120e68
void FUN_00120b20_0x120b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120b20_0x120b20");
#endif

    switch (ctx->pc) {
        case 0x120b20u: goto label_120b20;
        case 0x120b24u: goto label_120b24;
        case 0x120b28u: goto label_120b28;
        case 0x120b2cu: goto label_120b2c;
        case 0x120b30u: goto label_120b30;
        case 0x120b34u: goto label_120b34;
        case 0x120b38u: goto label_120b38;
        case 0x120b3cu: goto label_120b3c;
        case 0x120b40u: goto label_120b40;
        case 0x120b44u: goto label_120b44;
        case 0x120b48u: goto label_120b48;
        case 0x120b4cu: goto label_120b4c;
        case 0x120b50u: goto label_120b50;
        case 0x120b54u: goto label_120b54;
        case 0x120b58u: goto label_120b58;
        case 0x120b5cu: goto label_120b5c;
        case 0x120b60u: goto label_120b60;
        case 0x120b64u: goto label_120b64;
        case 0x120b68u: goto label_120b68;
        case 0x120b6cu: goto label_120b6c;
        case 0x120b70u: goto label_120b70;
        case 0x120b74u: goto label_120b74;
        case 0x120b78u: goto label_120b78;
        case 0x120b7cu: goto label_120b7c;
        case 0x120b80u: goto label_120b80;
        case 0x120b84u: goto label_120b84;
        case 0x120b88u: goto label_120b88;
        case 0x120b8cu: goto label_120b8c;
        case 0x120b90u: goto label_120b90;
        case 0x120b94u: goto label_120b94;
        case 0x120b98u: goto label_120b98;
        case 0x120b9cu: goto label_120b9c;
        case 0x120ba0u: goto label_120ba0;
        case 0x120ba4u: goto label_120ba4;
        case 0x120ba8u: goto label_120ba8;
        case 0x120bacu: goto label_120bac;
        case 0x120bb0u: goto label_120bb0;
        case 0x120bb4u: goto label_120bb4;
        case 0x120bb8u: goto label_120bb8;
        case 0x120bbcu: goto label_120bbc;
        case 0x120bc0u: goto label_120bc0;
        case 0x120bc4u: goto label_120bc4;
        case 0x120bc8u: goto label_120bc8;
        case 0x120bccu: goto label_120bcc;
        case 0x120bd0u: goto label_120bd0;
        case 0x120bd4u: goto label_120bd4;
        case 0x120bd8u: goto label_120bd8;
        case 0x120bdcu: goto label_120bdc;
        case 0x120be0u: goto label_120be0;
        case 0x120be4u: goto label_120be4;
        case 0x120be8u: goto label_120be8;
        case 0x120becu: goto label_120bec;
        case 0x120bf0u: goto label_120bf0;
        case 0x120bf4u: goto label_120bf4;
        case 0x120bf8u: goto label_120bf8;
        case 0x120bfcu: goto label_120bfc;
        case 0x120c00u: goto label_120c00;
        case 0x120c04u: goto label_120c04;
        case 0x120c08u: goto label_120c08;
        case 0x120c0cu: goto label_120c0c;
        case 0x120c10u: goto label_120c10;
        case 0x120c14u: goto label_120c14;
        case 0x120c18u: goto label_120c18;
        case 0x120c1cu: goto label_120c1c;
        case 0x120c20u: goto label_120c20;
        case 0x120c24u: goto label_120c24;
        case 0x120c28u: goto label_120c28;
        case 0x120c2cu: goto label_120c2c;
        case 0x120c30u: goto label_120c30;
        case 0x120c34u: goto label_120c34;
        case 0x120c38u: goto label_120c38;
        case 0x120c3cu: goto label_120c3c;
        case 0x120c40u: goto label_120c40;
        case 0x120c44u: goto label_120c44;
        case 0x120c48u: goto label_120c48;
        case 0x120c4cu: goto label_120c4c;
        case 0x120c50u: goto label_120c50;
        case 0x120c54u: goto label_120c54;
        case 0x120c58u: goto label_120c58;
        case 0x120c5cu: goto label_120c5c;
        case 0x120c60u: goto label_120c60;
        case 0x120c64u: goto label_120c64;
        case 0x120c68u: goto label_120c68;
        case 0x120c6cu: goto label_120c6c;
        case 0x120c70u: goto label_120c70;
        case 0x120c74u: goto label_120c74;
        case 0x120c78u: goto label_120c78;
        case 0x120c7cu: goto label_120c7c;
        case 0x120c80u: goto label_120c80;
        case 0x120c84u: goto label_120c84;
        case 0x120c88u: goto label_120c88;
        case 0x120c8cu: goto label_120c8c;
        case 0x120c90u: goto label_120c90;
        case 0x120c94u: goto label_120c94;
        case 0x120c98u: goto label_120c98;
        case 0x120c9cu: goto label_120c9c;
        case 0x120ca0u: goto label_120ca0;
        case 0x120ca4u: goto label_120ca4;
        case 0x120ca8u: goto label_120ca8;
        case 0x120cacu: goto label_120cac;
        case 0x120cb0u: goto label_120cb0;
        case 0x120cb4u: goto label_120cb4;
        case 0x120cb8u: goto label_120cb8;
        case 0x120cbcu: goto label_120cbc;
        case 0x120cc0u: goto label_120cc0;
        case 0x120cc4u: goto label_120cc4;
        case 0x120cc8u: goto label_120cc8;
        case 0x120cccu: goto label_120ccc;
        case 0x120cd0u: goto label_120cd0;
        case 0x120cd4u: goto label_120cd4;
        case 0x120cd8u: goto label_120cd8;
        case 0x120cdcu: goto label_120cdc;
        case 0x120ce0u: goto label_120ce0;
        case 0x120ce4u: goto label_120ce4;
        case 0x120ce8u: goto label_120ce8;
        case 0x120cecu: goto label_120cec;
        case 0x120cf0u: goto label_120cf0;
        case 0x120cf4u: goto label_120cf4;
        case 0x120cf8u: goto label_120cf8;
        case 0x120cfcu: goto label_120cfc;
        case 0x120d00u: goto label_120d00;
        case 0x120d04u: goto label_120d04;
        case 0x120d08u: goto label_120d08;
        case 0x120d0cu: goto label_120d0c;
        case 0x120d10u: goto label_120d10;
        case 0x120d14u: goto label_120d14;
        case 0x120d18u: goto label_120d18;
        case 0x120d1cu: goto label_120d1c;
        case 0x120d20u: goto label_120d20;
        case 0x120d24u: goto label_120d24;
        case 0x120d28u: goto label_120d28;
        case 0x120d2cu: goto label_120d2c;
        case 0x120d30u: goto label_120d30;
        case 0x120d34u: goto label_120d34;
        case 0x120d38u: goto label_120d38;
        case 0x120d3cu: goto label_120d3c;
        case 0x120d40u: goto label_120d40;
        case 0x120d44u: goto label_120d44;
        case 0x120d48u: goto label_120d48;
        case 0x120d4cu: goto label_120d4c;
        case 0x120d50u: goto label_120d50;
        case 0x120d54u: goto label_120d54;
        case 0x120d58u: goto label_120d58;
        case 0x120d5cu: goto label_120d5c;
        case 0x120d60u: goto label_120d60;
        case 0x120d64u: goto label_120d64;
        case 0x120d68u: goto label_120d68;
        case 0x120d6cu: goto label_120d6c;
        case 0x120d70u: goto label_120d70;
        case 0x120d74u: goto label_120d74;
        case 0x120d78u: goto label_120d78;
        case 0x120d7cu: goto label_120d7c;
        case 0x120d80u: goto label_120d80;
        case 0x120d84u: goto label_120d84;
        case 0x120d88u: goto label_120d88;
        case 0x120d8cu: goto label_120d8c;
        case 0x120d90u: goto label_120d90;
        case 0x120d94u: goto label_120d94;
        case 0x120d98u: goto label_120d98;
        case 0x120d9cu: goto label_120d9c;
        case 0x120da0u: goto label_120da0;
        case 0x120da4u: goto label_120da4;
        case 0x120da8u: goto label_120da8;
        case 0x120dacu: goto label_120dac;
        case 0x120db0u: goto label_120db0;
        case 0x120db4u: goto label_120db4;
        case 0x120db8u: goto label_120db8;
        case 0x120dbcu: goto label_120dbc;
        case 0x120dc0u: goto label_120dc0;
        case 0x120dc4u: goto label_120dc4;
        case 0x120dc8u: goto label_120dc8;
        case 0x120dccu: goto label_120dcc;
        case 0x120dd0u: goto label_120dd0;
        case 0x120dd4u: goto label_120dd4;
        case 0x120dd8u: goto label_120dd8;
        case 0x120ddcu: goto label_120ddc;
        case 0x120de0u: goto label_120de0;
        case 0x120de4u: goto label_120de4;
        case 0x120de8u: goto label_120de8;
        case 0x120decu: goto label_120dec;
        case 0x120df0u: goto label_120df0;
        case 0x120df4u: goto label_120df4;
        case 0x120df8u: goto label_120df8;
        case 0x120dfcu: goto label_120dfc;
        case 0x120e00u: goto label_120e00;
        case 0x120e04u: goto label_120e04;
        case 0x120e08u: goto label_120e08;
        case 0x120e0cu: goto label_120e0c;
        case 0x120e10u: goto label_120e10;
        case 0x120e14u: goto label_120e14;
        case 0x120e18u: goto label_120e18;
        case 0x120e1cu: goto label_120e1c;
        case 0x120e20u: goto label_120e20;
        case 0x120e24u: goto label_120e24;
        case 0x120e28u: goto label_120e28;
        case 0x120e2cu: goto label_120e2c;
        case 0x120e30u: goto label_120e30;
        case 0x120e34u: goto label_120e34;
        case 0x120e38u: goto label_120e38;
        case 0x120e3cu: goto label_120e3c;
        case 0x120e40u: goto label_120e40;
        case 0x120e44u: goto label_120e44;
        case 0x120e48u: goto label_120e48;
        case 0x120e4cu: goto label_120e4c;
        case 0x120e50u: goto label_120e50;
        case 0x120e54u: goto label_120e54;
        case 0x120e58u: goto label_120e58;
        case 0x120e5cu: goto label_120e5c;
        case 0x120e60u: goto label_120e60;
        case 0x120e64u: goto label_120e64;
        default: break;
    }

    ctx->pc = 0x120b20u;

label_120b20:
    // 0x120b20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x120b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_120b24:
    // 0x120b24: 0x12b1821  addu        $v1, $t1, $t3
    ctx->pc = 0x120b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_120b28:
    // 0x120b28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x120b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_120b2c:
    // 0x120b2c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x120b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_120b30:
    // 0x120b30: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x120b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_120b34:
    // 0x120b34: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x120b34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_120b38:
    // 0x120b38: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x120b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_120b3c:
    // 0x120b3c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x120b3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_120b40:
    // 0x120b40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x120b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_120b44:
    // 0x120b44: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x120b44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_120b48:
    // 0x120b48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x120b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_120b4c:
    // 0x120b4c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x120b4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_120b50:
    // 0x120b50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x120b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_120b54:
    // 0x120b54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x120b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_120b58:
    // 0x120b58: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x120b58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120b5c:
    // 0x120b5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x120b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_120b60:
    // 0x120b60: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x120b60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_120b64:
    // 0x120b64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x120b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_120b68:
    // 0x120b68: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x120b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_120b6c:
    // 0x120b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x120b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_120b70:
    // 0x120b70: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x120b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
label_120b74:
    // 0x120b74: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x120b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_120b78:
    // 0x120b78: 0xdcc40030  ld          $a0, 0x30($a2)
    ctx->pc = 0x120b78u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 48)));
label_120b7c:
    // 0x120b7c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x120b7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_120b80:
    // 0x120b80: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_120b84:
    if (ctx->pc == 0x120B84u) {
        ctx->pc = 0x120B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B80u;
        // 0x120b84: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120B88u;
        goto label_120b88;
    }
    ctx->pc = 0x120B80u;
    {
        const bool branch_taken_0x120b80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B80u;
        // 0x120b84: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b80) {
            ctx->pc = 0x120B8Cu;
            goto label_120b8c;
        }
    }
    ctx->pc = 0x120B88u;
label_120b88:
    // 0x120b88: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x120b88u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_120b8c:
    // 0x120b8c: 0x97c40038  lhu         $a0, 0x38($fp)
    ctx->pc = 0x120b8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 56)));
label_120b90:
    // 0x120b90: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x120b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_120b94:
    // 0x120b94: 0x308400b0  andi        $a0, $a0, 0xB0
    ctx->pc = 0x120b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)176);
label_120b98:
    // 0x120b98: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x120b98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_120b9c:
    // 0x120b9c: 0x12030022  beq         $s0, $v1, . + 4 + (0x22 << 2)
label_120ba0:
    if (ctx->pc == 0x120BA0u) {
        ctx->pc = 0x120BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B9Cu;
        // 0x120ba0: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120BA4u;
        goto label_120ba4;
    }
    ctx->pc = 0x120B9Cu;
    {
        const bool branch_taken_0x120b9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x120BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B9Cu;
        // 0x120ba0: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b9c) {
            ctx->pc = 0x120C28u;
            goto label_120c28;
        }
    }
    ctx->pc = 0x120BA4u;
label_120ba4:
    // 0x120ba4: 0x12030020  beq         $s0, $v1, . + 4 + (0x20 << 2)
label_120ba8:
    if (ctx->pc == 0x120BA8u) {
        ctx->pc = 0x120BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BA4u;
        // 0x120ba8: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x120BACu;
        goto label_120bac;
    }
    ctx->pc = 0x120BA4u;
    {
        const bool branch_taken_0x120ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x120BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BA4u;
        // 0x120ba8: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ba4) {
            ctx->pc = 0x120C28u;
            goto label_120c28;
        }
    }
    ctx->pc = 0x120BACu;
label_120bac:
    // 0x120bac: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_120bb0:
    if (ctx->pc == 0x120BB0u) {
        ctx->pc = 0x120BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BACu;
        // 0x120bb0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120BB4u;
        goto label_120bb4;
    }
    ctx->pc = 0x120BACu;
    {
        const bool branch_taken_0x120bac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BACu;
        // 0x120bb0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bac) {
            ctx->pc = 0x120C28u;
            goto label_120c28;
        }
    }
    ctx->pc = 0x120BB4u;
label_120bb4:
    // 0x120bb4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x120bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_120bb8:
    // 0x120bb8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_120bbc:
    if (ctx->pc == 0x120BBCu) {
        ctx->pc = 0x120BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BB8u;
        // 0x120bbc: 0x27a300ac  addiu       $v1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120BC0u;
        goto label_120bc0;
    }
    ctx->pc = 0x120BB8u;
    {
        const bool branch_taken_0x120bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BB8u;
        // 0x120bbc: 0x27a300ac  addiu       $v1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bb8) {
            ctx->pc = 0x120C18u;
            goto label_120c18;
        }
    }
    ctx->pc = 0x120BC0u;
label_120bc0:
    // 0x120bc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x120bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_120bc4:
    // 0x120bc4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x120bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_120bc8:
    // 0x120bc8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x120bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_120bcc:
    // 0x120bcc: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x120bccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_120bd0:
    // 0x120bd0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_120bd4:
    if (ctx->pc == 0x120BD4u) {
        ctx->pc = 0x120BD8u;
        goto label_120bd8;
    }
    ctx->pc = 0x120BD0u;
    {
        const bool branch_taken_0x120bd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x120bd0) {
            ctx->pc = 0x120BECu;
            goto label_120bec;
        }
    }
    ctx->pc = 0x120BD8u;
label_120bd8:
    // 0x120bd8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x120bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_120bdc:
    // 0x120bdc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x120bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_120be0:
    // 0x120be0: 0xa0b30000  sb          $s3, 0x0($a1)
    ctx->pc = 0x120be0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 19));
label_120be4:
    // 0x120be4: 0x10000007  b           . + 4 + (0x7 << 2)
label_120be8:
    if (ctx->pc == 0x120BE8u) {
        ctx->pc = 0x120BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BE4u;
        // 0x120be8: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120BECu;
        goto label_120bec;
    }
    ctx->pc = 0x120BE4u;
    {
        const bool branch_taken_0x120be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BE4u;
        // 0x120be8: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120be4) {
            ctx->pc = 0x120C04u;
            goto label_120c04;
        }
    }
    ctx->pc = 0x120BECu;
label_120bec:
    // 0x120bec: 0x0  nop
    ctx->pc = 0x120becu;
    // NOP
label_120bf0:
    // 0x120bf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x120bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120bf4:
    // 0x120bf4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x120bf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_120bf8:
    // 0x120bf8: 0x320f809  jalr        $t9
label_120bfc:
    if (ctx->pc == 0x120BFCu) {
        ctx->pc = 0x120BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BF8u;
        // 0x120bfc: 0x326500ff  andi        $a1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C00u;
        goto label_120c00;
    }
    ctx->pc = 0x120BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x120C00u);
        ctx->pc = 0x120BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BF8u;
        // 0x120bfc: 0x326500ff  andi        $a1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120BF8u, 0x120C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120C00u;
label_120c00:
    // 0x120c00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120c04:
    // 0x120c04: 0x0  nop
    ctx->pc = 0x120c04u;
    // NOP
label_120c08:
    // 0x120c08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_120c0c:
    // 0x120c0c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_120c10:
    if (ctx->pc == 0x120C10u) {
        ctx->pc = 0x120C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C0Cu;
        // 0x120c10: 0x27a300ac  addiu       $v1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C14u;
        goto label_120c14;
    }
    ctx->pc = 0x120C0Cu;
    {
        const bool branch_taken_0x120c0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x120C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C0Cu;
        // 0x120c10: 0x27a300ac  addiu       $v1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c0c) {
            ctx->pc = 0x120C18u;
            goto label_120c18;
        }
    }
    ctx->pc = 0x120C14u;
label_120c14:
    // 0x120c14: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x120c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_120c18:
    // 0x120c18: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x120c18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_120c1c:
    // 0x120c1c: 0x2b4182a  slt         $v1, $s5, $s4
    ctx->pc = 0x120c1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_120c20:
    // 0x120c20: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_120c24:
    if (ctx->pc == 0x120C24u) {
        ctx->pc = 0x120C28u;
        goto label_120c28;
    }
    ctx->pc = 0x120C20u;
    {
        const bool branch_taken_0x120c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x120c20) {
            ctx->pc = 0x120BB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120bb4;
        }
    }
    ctx->pc = 0x120C28u;
label_120c28:
    // 0x120c28: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x120c28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_120c2c:
    // 0x120c2c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_120c30:
    if (ctx->pc == 0x120C30u) {
        ctx->pc = 0x120C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C2Cu;
        // 0x120c30: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C34u;
        goto label_120c34;
    }
    ctx->pc = 0x120C2Cu;
    {
        const bool branch_taken_0x120c2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C2Cu;
        // 0x120c30: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c2c) {
            ctx->pc = 0x120CA8u;
            goto label_120ca8;
        }
    }
    ctx->pc = 0x120C34u;
label_120c34:
    // 0x120c34: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x120c34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_120c38:
    // 0x120c38: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x120c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_120c3c:
    // 0x120c3c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_120c40:
    if (ctx->pc == 0x120C40u) {
        ctx->pc = 0x120C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C3Cu;
        // 0x120c40: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C44u;
        goto label_120c44;
    }
    ctx->pc = 0x120C3Cu;
    {
        const bool branch_taken_0x120c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C3Cu;
        // 0x120c40: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c3c) {
            ctx->pc = 0x120C98u;
            goto label_120c98;
        }
    }
    ctx->pc = 0x120C44u;
label_120c44:
    // 0x120c44: 0x27a300ac  addiu       $v1, $sp, 0xAC
    ctx->pc = 0x120c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_120c48:
    // 0x120c48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x120c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_120c4c:
    // 0x120c4c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x120c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_120c50:
    // 0x120c50: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x120c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_120c54:
    // 0x120c54: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x120c54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_120c58:
    // 0x120c58: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_120c5c:
    if (ctx->pc == 0x120C5Cu) {
        ctx->pc = 0x120C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C58u;
        // 0x120c5c: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C60u;
        goto label_120c60;
    }
    ctx->pc = 0x120C58u;
    {
        const bool branch_taken_0x120c58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C58u;
        // 0x120c5c: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c58) {
            ctx->pc = 0x120C70u;
            goto label_120c70;
        }
    }
    ctx->pc = 0x120C60u;
label_120c60:
    // 0x120c60: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x120c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_120c64:
    // 0x120c64: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x120c64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
label_120c68:
    // 0x120c68: 0x10000006  b           . + 4 + (0x6 << 2)
label_120c6c:
    if (ctx->pc == 0x120C6Cu) {
        ctx->pc = 0x120C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C68u;
        // 0x120c6c: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C70u;
        goto label_120c70;
    }
    ctx->pc = 0x120C68u;
    {
        const bool branch_taken_0x120c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C68u;
        // 0x120c6c: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c68) {
            ctx->pc = 0x120C84u;
            goto label_120c84;
        }
    }
    ctx->pc = 0x120C70u;
label_120c70:
    // 0x120c70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x120c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120c74:
    // 0x120c74: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x120c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_120c78:
    // 0x120c78: 0x320f809  jalr        $t9
label_120c7c:
    if (ctx->pc == 0x120C7Cu) {
        ctx->pc = 0x120C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C78u;
        // 0x120c7c: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C80u;
        goto label_120c80;
    }
    ctx->pc = 0x120C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x120C80u);
        ctx->pc = 0x120C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C78u;
        // 0x120c7c: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120C78u, 0x120C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120C80u;
label_120c80:
    // 0x120c80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120c84:
    // 0x120c84: 0x0  nop
    ctx->pc = 0x120c84u;
    // NOP
label_120c88:
    // 0x120c88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_120c8c:
    // 0x120c8c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_120c90:
    if (ctx->pc == 0x120C90u) {
        ctx->pc = 0x120C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C8Cu;
        // 0x120c90: 0x27a300ac  addiu       $v1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C94u;
        goto label_120c94;
    }
    ctx->pc = 0x120C8Cu;
    {
        const bool branch_taken_0x120c8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x120C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C8Cu;
        // 0x120c90: 0x27a300ac  addiu       $v1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c8c) {
            ctx->pc = 0x120C98u;
            goto label_120c98;
        }
    }
    ctx->pc = 0x120C94u;
label_120c94:
    // 0x120c94: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x120c94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_120c98:
    // 0x120c98: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x120c98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_120c9c:
    // 0x120c9c: 0x2b6182a  slt         $v1, $s5, $s6
    ctx->pc = 0x120c9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_120ca0:
    // 0x120ca0: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_120ca4:
    if (ctx->pc == 0x120CA4u) {
        ctx->pc = 0x120CA8u;
        goto label_120ca8;
    }
    ctx->pc = 0x120CA0u;
    {
        const bool branch_taken_0x120ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x120ca0) {
            ctx->pc = 0x120C34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120c34;
        }
    }
    ctx->pc = 0x120CA8u;
label_120ca8:
    // 0x120ca8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x120ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_120cac:
    // 0x120cac: 0x1603001e  bne         $s0, $v1, . + 4 + (0x1E << 2)
label_120cb0:
    if (ctx->pc == 0x120CB0u) {
        ctx->pc = 0x120CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CACu;
        // 0x120cb0: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x120CB4u;
        goto label_120cb4;
    }
    ctx->pc = 0x120CACu;
    {
        const bool branch_taken_0x120cac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x120CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CACu;
        // 0x120cb0: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120cac) {
            ctx->pc = 0x120D28u;
            goto label_120d28;
        }
    }
    ctx->pc = 0x120CB4u;
label_120cb4:
    // 0x120cb4: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_120cb8:
    if (ctx->pc == 0x120CB8u) {
        ctx->pc = 0x120CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CB4u;
        // 0x120cb8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120CBCu;
        goto label_120cbc;
    }
    ctx->pc = 0x120CB4u;
    {
        const bool branch_taken_0x120cb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CB4u;
        // 0x120cb8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120cb4) {
            ctx->pc = 0x120D28u;
            goto label_120d28;
        }
    }
    ctx->pc = 0x120CBCu;
label_120cbc:
    // 0x120cbc: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x120cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_120cc0:
    // 0x120cc0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_120cc4:
    if (ctx->pc == 0x120CC4u) {
        ctx->pc = 0x120CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CC0u;
        // 0x120cc4: 0x27b500ac  addiu       $s5, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120CC8u;
        goto label_120cc8;
    }
    ctx->pc = 0x120CC0u;
    {
        const bool branch_taken_0x120cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CC0u;
        // 0x120cc4: 0x27b500ac  addiu       $s5, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120cc0) {
            ctx->pc = 0x120D18u;
            goto label_120d18;
        }
    }
    ctx->pc = 0x120CC8u;
label_120cc8:
    // 0x120cc8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x120cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_120ccc:
    // 0x120ccc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x120cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_120cd0:
    // 0x120cd0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x120cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_120cd4:
    // 0x120cd4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x120cd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_120cd8:
    // 0x120cd8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_120cdc:
    if (ctx->pc == 0x120CDCu) {
        ctx->pc = 0x120CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CD8u;
        // 0x120cdc: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120CE0u;
        goto label_120ce0;
    }
    ctx->pc = 0x120CD8u;
    {
        const bool branch_taken_0x120cd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CD8u;
        // 0x120cdc: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120cd8) {
            ctx->pc = 0x120CF0u;
            goto label_120cf0;
        }
    }
    ctx->pc = 0x120CE0u;
label_120ce0:
    // 0x120ce0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x120ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_120ce4:
    // 0x120ce4: 0xa0b30000  sb          $s3, 0x0($a1)
    ctx->pc = 0x120ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 19));
label_120ce8:
    // 0x120ce8: 0x10000006  b           . + 4 + (0x6 << 2)
label_120cec:
    if (ctx->pc == 0x120CECu) {
        ctx->pc = 0x120CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CE8u;
        // 0x120cec: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120CF0u;
        goto label_120cf0;
    }
    ctx->pc = 0x120CE8u;
    {
        const bool branch_taken_0x120ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CE8u;
        // 0x120cec: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ce8) {
            ctx->pc = 0x120D04u;
            goto label_120d04;
        }
    }
    ctx->pc = 0x120CF0u;
label_120cf0:
    // 0x120cf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x120cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120cf4:
    // 0x120cf4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x120cf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_120cf8:
    // 0x120cf8: 0x320f809  jalr        $t9
label_120cfc:
    if (ctx->pc == 0x120CFCu) {
        ctx->pc = 0x120CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CF8u;
        // 0x120cfc: 0x326500ff  andi        $a1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x120D00u;
        goto label_120d00;
    }
    ctx->pc = 0x120CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x120D00u);
        ctx->pc = 0x120CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CF8u;
        // 0x120cfc: 0x326500ff  andi        $a1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120CF8u, 0x120D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120D00u;
label_120d00:
    // 0x120d00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120d04:
    // 0x120d04: 0x0  nop
    ctx->pc = 0x120d04u;
    // NOP
label_120d08:
    // 0x120d08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_120d0c:
    // 0x120d0c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_120d10:
    if (ctx->pc == 0x120D10u) {
        ctx->pc = 0x120D14u;
        goto label_120d14;
    }
    ctx->pc = 0x120D0Cu;
    {
        const bool branch_taken_0x120d0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x120d0c) {
            ctx->pc = 0x120D18u;
            goto label_120d18;
        }
    }
    ctx->pc = 0x120D14u;
label_120d14:
    // 0x120d14: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x120d14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_120d18:
    // 0x120d18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x120d18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_120d1c:
    // 0x120d1c: 0x254182a  slt         $v1, $s2, $s4
    ctx->pc = 0x120d1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_120d20:
    // 0x120d20: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_120d24:
    if (ctx->pc == 0x120D24u) {
        ctx->pc = 0x120D28u;
        goto label_120d28;
    }
    ctx->pc = 0x120D20u;
    {
        const bool branch_taken_0x120d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x120d20) {
            ctx->pc = 0x120CBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120cbc;
        }
    }
    ctx->pc = 0x120D28u;
label_120d28:
    // 0x120d28: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x120d28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_120d2c:
    // 0x120d2c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_120d30:
    if (ctx->pc == 0x120D30u) {
        ctx->pc = 0x120D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D2Cu;
        // 0x120d30: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120D34u;
        goto label_120d34;
    }
    ctx->pc = 0x120D2Cu;
    {
        const bool branch_taken_0x120d2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D2Cu;
        // 0x120d30: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d2c) {
            ctx->pc = 0x120DA8u;
            goto label_120da8;
        }
    }
    ctx->pc = 0x120D34u;
label_120d34:
    // 0x120d34: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x120d34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_120d38:
    // 0x120d38: 0x27b500ac  addiu       $s5, $sp, 0xAC
    ctx->pc = 0x120d38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_120d3c:
    // 0x120d3c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x120d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_120d40:
    // 0x120d40: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_120d44:
    if (ctx->pc == 0x120D44u) {
        ctx->pc = 0x120D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D40u;
        // 0x120d44: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120D48u;
        goto label_120d48;
    }
    ctx->pc = 0x120D40u;
    {
        const bool branch_taken_0x120d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D40u;
        // 0x120d44: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d40) {
            ctx->pc = 0x120D98u;
            goto label_120d98;
        }
    }
    ctx->pc = 0x120D48u;
label_120d48:
    // 0x120d48: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x120d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_120d4c:
    // 0x120d4c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x120d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_120d50:
    // 0x120d50: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x120d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_120d54:
    // 0x120d54: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x120d54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_120d58:
    // 0x120d58: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_120d5c:
    if (ctx->pc == 0x120D5Cu) {
        ctx->pc = 0x120D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D58u;
        // 0x120d5c: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120D60u;
        goto label_120d60;
    }
    ctx->pc = 0x120D58u;
    {
        const bool branch_taken_0x120d58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D58u;
        // 0x120d5c: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d58) {
            ctx->pc = 0x120D70u;
            goto label_120d70;
        }
    }
    ctx->pc = 0x120D60u;
label_120d60:
    // 0x120d60: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x120d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_120d64:
    // 0x120d64: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x120d64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
label_120d68:
    // 0x120d68: 0x10000006  b           . + 4 + (0x6 << 2)
label_120d6c:
    if (ctx->pc == 0x120D6Cu) {
        ctx->pc = 0x120D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D68u;
        // 0x120d6c: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120D70u;
        goto label_120d70;
    }
    ctx->pc = 0x120D68u;
    {
        const bool branch_taken_0x120d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D68u;
        // 0x120d6c: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d68) {
            ctx->pc = 0x120D84u;
            goto label_120d84;
        }
    }
    ctx->pc = 0x120D70u;
label_120d70:
    // 0x120d70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x120d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120d74:
    // 0x120d74: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x120d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_120d78:
    // 0x120d78: 0x320f809  jalr        $t9
label_120d7c:
    if (ctx->pc == 0x120D7Cu) {
        ctx->pc = 0x120D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D78u;
        // 0x120d7c: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x120D80u;
        goto label_120d80;
    }
    ctx->pc = 0x120D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x120D80u);
        ctx->pc = 0x120D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D78u;
        // 0x120d7c: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120D78u, 0x120D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120D80u;
label_120d80:
    // 0x120d80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120d84:
    // 0x120d84: 0x0  nop
    ctx->pc = 0x120d84u;
    // NOP
label_120d88:
    // 0x120d88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_120d8c:
    // 0x120d8c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_120d90:
    if (ctx->pc == 0x120D90u) {
        ctx->pc = 0x120D94u;
        goto label_120d94;
    }
    ctx->pc = 0x120D8Cu;
    {
        const bool branch_taken_0x120d8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x120d8c) {
            ctx->pc = 0x120D98u;
            goto label_120d98;
        }
    }
    ctx->pc = 0x120D94u;
label_120d94:
    // 0x120d94: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x120d94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_120d98:
    // 0x120d98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x120d98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_120d9c:
    // 0x120d9c: 0x257182a  slt         $v1, $s2, $s7
    ctx->pc = 0x120d9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_120da0:
    // 0x120da0: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_120da4:
    if (ctx->pc == 0x120DA4u) {
        ctx->pc = 0x120DA8u;
        goto label_120da8;
    }
    ctx->pc = 0x120DA0u;
    {
        const bool branch_taken_0x120da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x120da0) {
            ctx->pc = 0x120D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120d34;
        }
    }
    ctx->pc = 0x120DA8u;
label_120da8:
    // 0x120da8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x120da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_120dac:
    // 0x120dac: 0x1603001e  bne         $s0, $v1, . + 4 + (0x1E << 2)
label_120db0:
    if (ctx->pc == 0x120DB0u) {
        ctx->pc = 0x120DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DACu;
        // 0x120db0: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x120DB4u;
        goto label_120db4;
    }
    ctx->pc = 0x120DACu;
    {
        const bool branch_taken_0x120dac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x120DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DACu;
        // 0x120db0: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120dac) {
            ctx->pc = 0x120E28u;
            goto label_120e28;
        }
    }
    ctx->pc = 0x120DB4u;
label_120db4:
    // 0x120db4: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_120db8:
    if (ctx->pc == 0x120DB8u) {
        ctx->pc = 0x120DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DB4u;
        // 0x120db8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120DBCu;
        goto label_120dbc;
    }
    ctx->pc = 0x120DB4u;
    {
        const bool branch_taken_0x120db4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DB4u;
        // 0x120db8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120db4) {
            ctx->pc = 0x120E28u;
            goto label_120e28;
        }
    }
    ctx->pc = 0x120DBCu;
label_120dbc:
    // 0x120dbc: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x120dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_120dc0:
    // 0x120dc0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_120dc4:
    if (ctx->pc == 0x120DC4u) {
        ctx->pc = 0x120DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DC0u;
        // 0x120dc4: 0x27b100ac  addiu       $s1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120DC8u;
        goto label_120dc8;
    }
    ctx->pc = 0x120DC0u;
    {
        const bool branch_taken_0x120dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DC0u;
        // 0x120dc4: 0x27b100ac  addiu       $s1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120dc0) {
            ctx->pc = 0x120E18u;
            goto label_120e18;
        }
    }
    ctx->pc = 0x120DC8u;
label_120dc8:
    // 0x120dc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x120dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_120dcc:
    // 0x120dcc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x120dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_120dd0:
    // 0x120dd0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x120dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_120dd4:
    // 0x120dd4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x120dd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_120dd8:
    // 0x120dd8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_120ddc:
    if (ctx->pc == 0x120DDCu) {
        ctx->pc = 0x120DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DD8u;
        // 0x120ddc: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120DE0u;
        goto label_120de0;
    }
    ctx->pc = 0x120DD8u;
    {
        const bool branch_taken_0x120dd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DD8u;
        // 0x120ddc: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120dd8) {
            ctx->pc = 0x120DF0u;
            goto label_120df0;
        }
    }
    ctx->pc = 0x120DE0u;
label_120de0:
    // 0x120de0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x120de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_120de4:
    // 0x120de4: 0xa0b30000  sb          $s3, 0x0($a1)
    ctx->pc = 0x120de4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 19));
label_120de8:
    // 0x120de8: 0x10000006  b           . + 4 + (0x6 << 2)
label_120dec:
    if (ctx->pc == 0x120DECu) {
        ctx->pc = 0x120DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DE8u;
        // 0x120dec: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120DF0u;
        goto label_120df0;
    }
    ctx->pc = 0x120DE8u;
    {
        const bool branch_taken_0x120de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DE8u;
        // 0x120dec: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120de8) {
            ctx->pc = 0x120E04u;
            goto label_120e04;
        }
    }
    ctx->pc = 0x120DF0u;
label_120df0:
    // 0x120df0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x120df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120df4:
    // 0x120df4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x120df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_120df8:
    // 0x120df8: 0x320f809  jalr        $t9
label_120dfc:
    if (ctx->pc == 0x120DFCu) {
        ctx->pc = 0x120DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DF8u;
        // 0x120dfc: 0x326500ff  andi        $a1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x120E00u;
        goto label_120e00;
    }
    ctx->pc = 0x120DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x120E00u);
        ctx->pc = 0x120DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DF8u;
        // 0x120dfc: 0x326500ff  andi        $a1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120DF8u, 0x120E00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120E00u;
label_120e00:
    // 0x120e00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120e04:
    // 0x120e04: 0x0  nop
    ctx->pc = 0x120e04u;
    // NOP
label_120e08:
    // 0x120e08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_120e0c:
    // 0x120e0c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_120e10:
    if (ctx->pc == 0x120E10u) {
        ctx->pc = 0x120E14u;
        goto label_120e14;
    }
    ctx->pc = 0x120E0Cu;
    {
        const bool branch_taken_0x120e0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x120e0c) {
            ctx->pc = 0x120E18u;
            goto label_120e18;
        }
    }
    ctx->pc = 0x120E14u;
label_120e14:
    // 0x120e14: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x120e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_120e18:
    // 0x120e18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x120e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_120e1c:
    // 0x120e1c: 0x214182a  slt         $v1, $s0, $s4
    ctx->pc = 0x120e1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_120e20:
    // 0x120e20: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_120e24:
    if (ctx->pc == 0x120E24u) {
        ctx->pc = 0x120E28u;
        goto label_120e28;
    }
    ctx->pc = 0x120E20u;
    {
        const bool branch_taken_0x120e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x120e20) {
            ctx->pc = 0x120DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120dbc;
        }
    }
    ctx->pc = 0x120E28u;
label_120e28:
    // 0x120e28: 0xffc00030  sd          $zero, 0x30($fp)
    ctx->pc = 0x120e28u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 48), GPR_U64(ctx, 0));
label_120e2c:
    // 0x120e2c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x120e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_120e30:
    // 0x120e30: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x120e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_120e34:
    // 0x120e34: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x120e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_120e38:
    // 0x120e38: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x120e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_120e3c:
    // 0x120e3c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x120e3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_120e40:
    // 0x120e40: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x120e40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_120e44:
    // 0x120e44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x120e44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_120e48:
    // 0x120e48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x120e48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_120e4c:
    // 0x120e4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x120e4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_120e50:
    // 0x120e50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x120e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_120e54:
    // 0x120e54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x120e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_120e58:
    // 0x120e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x120e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_120e5c:
    // 0x120e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x120e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_120e60:
    // 0x120e60: 0x3e00008  jr          $ra
label_120e64:
    if (ctx->pc == 0x120E64u) {
        ctx->pc = 0x120E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E60u;
        // 0x120e64: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120E68u;
        goto label_fallthrough_0x120e60;
    }
    ctx->pc = 0x120E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E60u;
        // 0x120e64: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x120e60:
    ctx->pc = 0x120E68u;
}
