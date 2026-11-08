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

// Function: FUN_001e2eb0
// Address: 0x1e2eb0 - 0x1e2fe8
void FUN_001e2eb0_0x1e2eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e2eb0_0x1e2eb0");
#endif

    switch (ctx->pc) {
        case 0x1e2eb0u: goto label_1e2eb0;
        case 0x1e2eb4u: goto label_1e2eb4;
        case 0x1e2eb8u: goto label_1e2eb8;
        case 0x1e2ebcu: goto label_1e2ebc;
        case 0x1e2ec0u: goto label_1e2ec0;
        case 0x1e2ec4u: goto label_1e2ec4;
        case 0x1e2ec8u: goto label_1e2ec8;
        case 0x1e2eccu: goto label_1e2ecc;
        case 0x1e2ed0u: goto label_1e2ed0;
        case 0x1e2ed4u: goto label_1e2ed4;
        case 0x1e2ed8u: goto label_1e2ed8;
        case 0x1e2edcu: goto label_1e2edc;
        case 0x1e2ee0u: goto label_1e2ee0;
        case 0x1e2ee4u: goto label_1e2ee4;
        case 0x1e2ee8u: goto label_1e2ee8;
        case 0x1e2eecu: goto label_1e2eec;
        case 0x1e2ef0u: goto label_1e2ef0;
        case 0x1e2ef4u: goto label_1e2ef4;
        case 0x1e2ef8u: goto label_1e2ef8;
        case 0x1e2efcu: goto label_1e2efc;
        case 0x1e2f00u: goto label_1e2f00;
        case 0x1e2f04u: goto label_1e2f04;
        case 0x1e2f08u: goto label_1e2f08;
        case 0x1e2f0cu: goto label_1e2f0c;
        case 0x1e2f10u: goto label_1e2f10;
        case 0x1e2f14u: goto label_1e2f14;
        case 0x1e2f18u: goto label_1e2f18;
        case 0x1e2f1cu: goto label_1e2f1c;
        case 0x1e2f20u: goto label_1e2f20;
        case 0x1e2f24u: goto label_1e2f24;
        case 0x1e2f28u: goto label_1e2f28;
        case 0x1e2f2cu: goto label_1e2f2c;
        case 0x1e2f30u: goto label_1e2f30;
        case 0x1e2f34u: goto label_1e2f34;
        case 0x1e2f38u: goto label_1e2f38;
        case 0x1e2f3cu: goto label_1e2f3c;
        case 0x1e2f40u: goto label_1e2f40;
        case 0x1e2f44u: goto label_1e2f44;
        case 0x1e2f48u: goto label_1e2f48;
        case 0x1e2f4cu: goto label_1e2f4c;
        case 0x1e2f50u: goto label_1e2f50;
        case 0x1e2f54u: goto label_1e2f54;
        case 0x1e2f58u: goto label_1e2f58;
        case 0x1e2f5cu: goto label_1e2f5c;
        case 0x1e2f60u: goto label_1e2f60;
        case 0x1e2f64u: goto label_1e2f64;
        case 0x1e2f68u: goto label_1e2f68;
        case 0x1e2f6cu: goto label_1e2f6c;
        case 0x1e2f70u: goto label_1e2f70;
        case 0x1e2f74u: goto label_1e2f74;
        case 0x1e2f78u: goto label_1e2f78;
        case 0x1e2f7cu: goto label_1e2f7c;
        case 0x1e2f80u: goto label_1e2f80;
        case 0x1e2f84u: goto label_1e2f84;
        case 0x1e2f88u: goto label_1e2f88;
        case 0x1e2f8cu: goto label_1e2f8c;
        case 0x1e2f90u: goto label_1e2f90;
        case 0x1e2f94u: goto label_1e2f94;
        case 0x1e2f98u: goto label_1e2f98;
        case 0x1e2f9cu: goto label_1e2f9c;
        case 0x1e2fa0u: goto label_1e2fa0;
        case 0x1e2fa4u: goto label_1e2fa4;
        case 0x1e2fa8u: goto label_1e2fa8;
        case 0x1e2facu: goto label_1e2fac;
        case 0x1e2fb0u: goto label_1e2fb0;
        case 0x1e2fb4u: goto label_1e2fb4;
        case 0x1e2fb8u: goto label_1e2fb8;
        case 0x1e2fbcu: goto label_1e2fbc;
        case 0x1e2fc0u: goto label_1e2fc0;
        case 0x1e2fc4u: goto label_1e2fc4;
        case 0x1e2fc8u: goto label_1e2fc8;
        case 0x1e2fccu: goto label_1e2fcc;
        case 0x1e2fd0u: goto label_1e2fd0;
        case 0x1e2fd4u: goto label_1e2fd4;
        case 0x1e2fd8u: goto label_1e2fd8;
        case 0x1e2fdcu: goto label_1e2fdc;
        case 0x1e2fe0u: goto label_1e2fe0;
        case 0x1e2fe4u: goto label_1e2fe4;
        default: break;
    }

    ctx->pc = 0x1e2eb0u;

label_1e2eb0:
    // 0x1e2eb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e2eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e2eb4:
    // 0x1e2eb4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e2eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e2eb8:
    // 0x1e2eb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e2eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e2ebc:
    // 0x1e2ebc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e2ebcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e2ec0:
    // 0x1e2ec0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e2ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e2ec4:
    // 0x1e2ec4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e2ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e2ec8:
    // 0x1e2ec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e2ecc:
    // 0x1e2ecc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e2eccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e2ed0:
    // 0x1e2ed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e2ed4:
    // 0x1e2ed4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e2ed8:
    if (ctx->pc == 0x1E2ED8u) {
        ctx->pc = 0x1E2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2ED4u;
        // 0x1e2ed8: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2EDCu;
        goto label_1e2edc;
    }
    ctx->pc = 0x1E2ED4u;
    {
        const bool branch_taken_0x1e2ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2ED4u;
        // 0x1e2ed8: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ed4) {
            ctx->pc = 0x1E2F04u;
            goto label_1e2f04;
        }
    }
    ctx->pc = 0x1E2EDCu;
label_1e2edc:
    // 0x1e2edc: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1e2edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2ee0:
    // 0x1e2ee0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e2ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_1e2ee4:
    // 0x1e2ee4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1e2ee8:
    // 0x1e2ee8: 0x2463c098  addiu       $v1, $v1, -0x3F68
    ctx->pc = 0x1e2ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951064));
label_1e2eec:
    // 0x1e2eec: 0x2442c1b8  addiu       $v0, $v0, -0x3E48
    ctx->pc = 0x1e2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951352));
label_1e2ef0:
    // 0x1e2ef0: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x1e2ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1e2ef4:
    // 0x1e2ef4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1e2ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1e2ef8:
    // 0x1e2ef8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e2ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2efc:
    // 0x1e2efc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1e2efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1e2f00:
    // 0x1e2f00: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1e2f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1e2f04:
    // 0x1e2f04: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2f08:
    // 0x1e2f08: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x1e2f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_1e2f0c:
    // 0x1e2f0c: 0x2484c1d0  addiu       $a0, $a0, -0x3E30
    ctx->pc = 0x1e2f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951376));
label_1e2f10:
    // 0x1e2f10: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e2f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_1e2f14:
    // 0x1e2f14: 0x2463c1dc  addiu       $v1, $v1, -0x3E24
    ctx->pc = 0x1e2f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951388));
label_1e2f18:
    // 0x1e2f18: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e2f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e2f1c:
    // 0x1e2f1c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1e2f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_1e2f20:
    // 0x1e2f20: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2f24:
    // 0x1e2f24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2f28:
    // 0x1e2f28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e2f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e2f2c:
    // 0x1e2f2c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2f30:
    // 0x1e2f30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e2f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2f34:
    // 0x1e2f34: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e2f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1e2f38:
    // 0x1e2f38: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e2f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e2f3c:
    // 0x1e2f3c: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x1e2f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_1e2f40:
    // 0x1e2f40: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2f44:
    // 0x1e2f44: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e2f44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2f48:
    // 0x1e2f48: 0xc078584  jal         func_1E1610
label_1e2f4c:
    if (ctx->pc == 0x1E2F4Cu) {
        ctx->pc = 0x1E2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F48u;
        // 0x1e2f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2F50u;
        goto label_1e2f50;
    }
    ctx->pc = 0x1E2F48u;
    SET_GPR_U32(ctx, 31, 0x1E2F50u);
    ctx->pc = 0x1E2F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F48u;
    // 0x1e2f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1610u, 0x1E2F48u, 0x1E2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F50u;
label_1e2f50:
    // 0x1e2f50: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e2f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e2f54:
    // 0x1e2f54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e2f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2f58:
    // 0x1e2f58: 0xc04805c  jal         func_120170
label_1e2f5c:
    if (ctx->pc == 0x1E2F5Cu) {
        ctx->pc = 0x1E2F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F58u;
        // 0x1e2f5c: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2F60u;
        goto label_1e2f60;
    }
    ctx->pc = 0x1E2F58u;
    SET_GPR_U32(ctx, 31, 0x1E2F60u);
    ctx->pc = 0x1E2F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F58u;
    // 0x1e2f5c: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120170u, 0x1E2F58u, 0x1E2F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F60u;
label_1e2f60:
    // 0x1e2f60: 0x93828744  lbu         $v0, -0x78BC($gp)
    ctx->pc = 0x1e2f60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936388)));
label_1e2f64:
    // 0x1e2f64: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x1e2f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1e2f68:
    // 0x1e2f68: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e2f68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e2f6c:
    // 0x1e2f6c: 0x83a5006c  lb          $a1, 0x6C($sp)
    ctx->pc = 0x1e2f6cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 108)));
label_1e2f70:
    // 0x1e2f70: 0xc04815c  jal         func_120570
label_1e2f74:
    if (ctx->pc == 0x1E2F74u) {
        ctx->pc = 0x1E2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F70u;
        // 0x1e2f74: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2F78u;
        goto label_1e2f78;
    }
    ctx->pc = 0x1E2F70u;
    SET_GPR_U32(ctx, 31, 0x1E2F78u);
    ctx->pc = 0x1E2F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F70u;
    // 0x1e2f74: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120570u, 0x1E2F70u, 0x1E2F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F78u;
label_1e2f78:
    // 0x1e2f78: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1e2f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2f7c:
    // 0x1e2f7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e2f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e2f80:
    // 0x1e2f80: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e2f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e2f84:
    // 0x1e2f84: 0x320f809  jalr        $t9
label_1e2f88:
    if (ctx->pc == 0x1E2F88u) {
        ctx->pc = 0x1E2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F84u;
        // 0x1e2f88: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2F8Cu;
        goto label_1e2f8c;
    }
    ctx->pc = 0x1E2F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2F8Cu);
        ctx->pc = 0x1E2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F84u;
        // 0x1e2f88: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2F84u, 0x1E2F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2F8Cu;
label_1e2f8c:
    // 0x1e2f8c: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1e2f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1e2f90:
    // 0x1e2f90: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x1e2f90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
label_1e2f94:
    // 0x1e2f94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e2f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2f98:
    // 0x1e2f98: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1e2f9c:
    if (ctx->pc == 0x1E2F9Cu) {
        ctx->pc = 0x1E2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F98u;
        // 0x1e2f9c: 0x139e3f  dsra32      $s3, $s3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2FA0u;
        goto label_1e2fa0;
    }
    ctx->pc = 0x1E2F98u;
    {
        const bool branch_taken_0x1e2f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F98u;
        // 0x1e2f9c: 0x139e3f  dsra32      $s3, $s3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f98) {
            ctx->pc = 0x1E2FC4u;
            goto label_1e2fc4;
        }
    }
    ctx->pc = 0x1E2FA0u;
label_1e2fa0:
    // 0x1e2fa0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e2fa4:
    // 0x1e2fa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e2fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e2fa8:
    // 0x1e2fa8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e2fac:
    if (ctx->pc == 0x1E2FACu) {
        ctx->pc = 0x1E2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FA8u;
        // 0x1e2fac: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2FB0u;
        goto label_1e2fb0;
    }
    ctx->pc = 0x1E2FA8u;
    {
        const bool branch_taken_0x1e2fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FA8u;
        // 0x1e2fac: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fa8) {
            ctx->pc = 0x1E2FC4u;
            goto label_1e2fc4;
        }
    }
    ctx->pc = 0x1E2FB0u;
label_1e2fb0:
    // 0x1e2fb0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e2fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1e2fb4:
    // 0x1e2fb4: 0xc0483d8  jal         func_120F60
label_1e2fb8:
    if (ctx->pc == 0x1E2FB8u) {
        ctx->pc = 0x1E2FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FB4u;
        // 0x1e2fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2FBCu;
        goto label_1e2fbc;
    }
    ctx->pc = 0x1E2FB4u;
    SET_GPR_U32(ctx, 31, 0x1E2FBCu);
    ctx->pc = 0x1E2FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2FB4u;
    // 0x1e2fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F60u, 0x1E2FB4u, 0x1E2FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2FBCu;
label_1e2fbc:
    // 0x1e2fbc: 0xc0401a4  jal         func_100690
label_1e2fc0:
    if (ctx->pc == 0x1E2FC0u) {
        ctx->pc = 0x1E2FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FBCu;
        // 0x1e2fc0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2FC4u;
        goto label_1e2fc4;
    }
    ctx->pc = 0x1E2FBCu;
    SET_GPR_U32(ctx, 31, 0x1E2FC4u);
    ctx->pc = 0x1E2FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2FBCu;
    // 0x1e2fc0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E2FBCu, 0x1E2FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2FC4u;
label_1e2fc4:
    // 0x1e2fc4: 0xa2130044  sb          $s3, 0x44($s0)
    ctx->pc = 0x1e2fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 19));
label_1e2fc8:
    // 0x1e2fc8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2fcc:
    // 0x1e2fcc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e2fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2fd0:
    // 0x1e2fd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e2fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e2fd4:
    // 0x1e2fd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e2fd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e2fd8:
    // 0x1e2fd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2fdc:
    // 0x1e2fdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2fe0:
    // 0x1e2fe0: 0x3e00008  jr          $ra
label_1e2fe4:
    if (ctx->pc == 0x1E2FE4u) {
        ctx->pc = 0x1E2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FE0u;
        // 0x1e2fe4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2FE8u;
        goto label_fallthrough_0x1e2fe0;
    }
    ctx->pc = 0x1E2FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FE0u;
        // 0x1e2fe4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e2fe0:
    ctx->pc = 0x1E2FE8u;
}
