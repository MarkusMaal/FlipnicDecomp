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

// Function: FUN_001e3e50
// Address: 0x1e3e50 - 0x1e3ff8
void FUN_001e3e50_0x1e3e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e3e50_0x1e3e50");
#endif

    switch (ctx->pc) {
        case 0x1e3e50u: goto label_1e3e50;
        case 0x1e3e54u: goto label_1e3e54;
        case 0x1e3e58u: goto label_1e3e58;
        case 0x1e3e5cu: goto label_1e3e5c;
        case 0x1e3e60u: goto label_1e3e60;
        case 0x1e3e64u: goto label_1e3e64;
        case 0x1e3e68u: goto label_1e3e68;
        case 0x1e3e6cu: goto label_1e3e6c;
        case 0x1e3e70u: goto label_1e3e70;
        case 0x1e3e74u: goto label_1e3e74;
        case 0x1e3e78u: goto label_1e3e78;
        case 0x1e3e7cu: goto label_1e3e7c;
        case 0x1e3e80u: goto label_1e3e80;
        case 0x1e3e84u: goto label_1e3e84;
        case 0x1e3e88u: goto label_1e3e88;
        case 0x1e3e8cu: goto label_1e3e8c;
        case 0x1e3e90u: goto label_1e3e90;
        case 0x1e3e94u: goto label_1e3e94;
        case 0x1e3e98u: goto label_1e3e98;
        case 0x1e3e9cu: goto label_1e3e9c;
        case 0x1e3ea0u: goto label_1e3ea0;
        case 0x1e3ea4u: goto label_1e3ea4;
        case 0x1e3ea8u: goto label_1e3ea8;
        case 0x1e3eacu: goto label_1e3eac;
        case 0x1e3eb0u: goto label_1e3eb0;
        case 0x1e3eb4u: goto label_1e3eb4;
        case 0x1e3eb8u: goto label_1e3eb8;
        case 0x1e3ebcu: goto label_1e3ebc;
        case 0x1e3ec0u: goto label_1e3ec0;
        case 0x1e3ec4u: goto label_1e3ec4;
        case 0x1e3ec8u: goto label_1e3ec8;
        case 0x1e3eccu: goto label_1e3ecc;
        case 0x1e3ed0u: goto label_1e3ed0;
        case 0x1e3ed4u: goto label_1e3ed4;
        case 0x1e3ed8u: goto label_1e3ed8;
        case 0x1e3edcu: goto label_1e3edc;
        case 0x1e3ee0u: goto label_1e3ee0;
        case 0x1e3ee4u: goto label_1e3ee4;
        case 0x1e3ee8u: goto label_1e3ee8;
        case 0x1e3eecu: goto label_1e3eec;
        case 0x1e3ef0u: goto label_1e3ef0;
        case 0x1e3ef4u: goto label_1e3ef4;
        case 0x1e3ef8u: goto label_1e3ef8;
        case 0x1e3efcu: goto label_1e3efc;
        case 0x1e3f00u: goto label_1e3f00;
        case 0x1e3f04u: goto label_1e3f04;
        case 0x1e3f08u: goto label_1e3f08;
        case 0x1e3f0cu: goto label_1e3f0c;
        case 0x1e3f10u: goto label_1e3f10;
        case 0x1e3f14u: goto label_1e3f14;
        case 0x1e3f18u: goto label_1e3f18;
        case 0x1e3f1cu: goto label_1e3f1c;
        case 0x1e3f20u: goto label_1e3f20;
        case 0x1e3f24u: goto label_1e3f24;
        case 0x1e3f28u: goto label_1e3f28;
        case 0x1e3f2cu: goto label_1e3f2c;
        case 0x1e3f30u: goto label_1e3f30;
        case 0x1e3f34u: goto label_1e3f34;
        case 0x1e3f38u: goto label_1e3f38;
        case 0x1e3f3cu: goto label_1e3f3c;
        case 0x1e3f40u: goto label_1e3f40;
        case 0x1e3f44u: goto label_1e3f44;
        case 0x1e3f48u: goto label_1e3f48;
        case 0x1e3f4cu: goto label_1e3f4c;
        case 0x1e3f50u: goto label_1e3f50;
        case 0x1e3f54u: goto label_1e3f54;
        case 0x1e3f58u: goto label_1e3f58;
        case 0x1e3f5cu: goto label_1e3f5c;
        case 0x1e3f60u: goto label_1e3f60;
        case 0x1e3f64u: goto label_1e3f64;
        case 0x1e3f68u: goto label_1e3f68;
        case 0x1e3f6cu: goto label_1e3f6c;
        case 0x1e3f70u: goto label_1e3f70;
        case 0x1e3f74u: goto label_1e3f74;
        case 0x1e3f78u: goto label_1e3f78;
        case 0x1e3f7cu: goto label_1e3f7c;
        case 0x1e3f80u: goto label_1e3f80;
        case 0x1e3f84u: goto label_1e3f84;
        case 0x1e3f88u: goto label_1e3f88;
        case 0x1e3f8cu: goto label_1e3f8c;
        case 0x1e3f90u: goto label_1e3f90;
        case 0x1e3f94u: goto label_1e3f94;
        case 0x1e3f98u: goto label_1e3f98;
        case 0x1e3f9cu: goto label_1e3f9c;
        case 0x1e3fa0u: goto label_1e3fa0;
        case 0x1e3fa4u: goto label_1e3fa4;
        case 0x1e3fa8u: goto label_1e3fa8;
        case 0x1e3facu: goto label_1e3fac;
        case 0x1e3fb0u: goto label_1e3fb0;
        case 0x1e3fb4u: goto label_1e3fb4;
        case 0x1e3fb8u: goto label_1e3fb8;
        case 0x1e3fbcu: goto label_1e3fbc;
        case 0x1e3fc0u: goto label_1e3fc0;
        case 0x1e3fc4u: goto label_1e3fc4;
        case 0x1e3fc8u: goto label_1e3fc8;
        case 0x1e3fccu: goto label_1e3fcc;
        case 0x1e3fd0u: goto label_1e3fd0;
        case 0x1e3fd4u: goto label_1e3fd4;
        case 0x1e3fd8u: goto label_1e3fd8;
        case 0x1e3fdcu: goto label_1e3fdc;
        case 0x1e3fe0u: goto label_1e3fe0;
        case 0x1e3fe4u: goto label_1e3fe4;
        case 0x1e3fe8u: goto label_1e3fe8;
        case 0x1e3fecu: goto label_1e3fec;
        case 0x1e3ff0u: goto label_1e3ff0;
        case 0x1e3ff4u: goto label_1e3ff4;
        default: break;
    }

    ctx->pc = 0x1e3e50u;

label_1e3e50:
    // 0x1e3e50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e3e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e3e54:
    // 0x1e3e54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e3e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e3e58:
    // 0x1e3e58: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1e3e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1e3e5c:
    // 0x1e3e5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e3e60:
    // 0x1e3e60: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e3e60u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e3e64:
    // 0x1e3e64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e3e68:
    // 0x1e3e68: 0x90820042  lbu         $v0, 0x42($a0)
    ctx->pc = 0x1e3e68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 66)));
label_1e3e6c:
    // 0x1e3e6c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1e3e70:
    if (ctx->pc == 0x1E3E70u) {
        ctx->pc = 0x1E3E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E6Cu;
        // 0x1e3e70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3E74u;
        goto label_1e3e74;
    }
    ctx->pc = 0x1E3E6Cu;
    {
        const bool branch_taken_0x1e3e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E6Cu;
        // 0x1e3e70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e6c) {
            ctx->pc = 0x1E3EE0u;
            goto label_1e3ee0;
        }
    }
    ctx->pc = 0x1E3E74u;
label_1e3e74:
    // 0x1e3e74: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e3e78:
    // 0x1e3e78: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1e3e7c:
    if (ctx->pc == 0x1E3E7Cu) {
        ctx->pc = 0x1E3E80u;
        goto label_1e3e80;
    }
    ctx->pc = 0x1E3E78u;
    {
        const bool branch_taken_0x1e3e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3e78) {
            ctx->pc = 0x1E3EE0u;
            goto label_1e3ee0;
        }
    }
    ctx->pc = 0x1E3E80u;
label_1e3e80:
    // 0x1e3e80: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1e3e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e3e84:
    // 0x1e3e84: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e3e88:
    // 0x1e3e88: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e3e88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e3e8c:
    // 0x1e3e8c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e3e90:
    if (ctx->pc == 0x1E3E90u) {
        ctx->pc = 0x1E3E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E8Cu;
        // 0x1e3e90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3E94u;
        goto label_1e3e94;
    }
    ctx->pc = 0x1E3E8Cu;
    {
        const bool branch_taken_0x1e3e8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E8Cu;
        // 0x1e3e90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e8c) {
            ctx->pc = 0x1E3EB4u;
            goto label_1e3eb4;
        }
    }
    ctx->pc = 0x1E3E94u;
label_1e3e94:
    // 0x1e3e94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3e94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3e98:
    // 0x1e3e98: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e3e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e3e9c:
    // 0x1e3e9c: 0x320f809  jalr        $t9
label_1e3ea0:
    if (ctx->pc == 0x1E3EA0u) {
        ctx->pc = 0x1E3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E9Cu;
        // 0x1e3ea0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3EA4u;
        goto label_1e3ea4;
    }
    ctx->pc = 0x1E3E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3EA4u);
        ctx->pc = 0x1E3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E9Cu;
        // 0x1e3ea0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3E9Cu, 0x1E3EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3EA4u;
label_1e3ea4:
    // 0x1e3ea4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3ea8:
    // 0x1e3ea8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e3eac:
    if (ctx->pc == 0x1E3EACu) {
        ctx->pc = 0x1E3EB0u;
        goto label_1e3eb0;
    }
    ctx->pc = 0x1E3EA8u;
    {
        const bool branch_taken_0x1e3ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3ea8) {
            ctx->pc = 0x1E3EB4u;
            goto label_1e3eb4;
        }
    }
    ctx->pc = 0x1E3EB0u;
label_1e3eb0:
    // 0x1e3eb0: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1e3eb0u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e3eb4:
    // 0x1e3eb4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_1e3eb8:
    if (ctx->pc == 0x1E3EB8u) {
        ctx->pc = 0x1E3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EB4u;
        // 0x1e3eb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3EBCu;
        goto label_1e3ebc;
    }
    ctx->pc = 0x1E3EB4u;
    {
        const bool branch_taken_0x1e3eb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EB4u;
        // 0x1e3eb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3eb4) {
            ctx->pc = 0x1E3EC4u;
            goto label_1e3ec4;
        }
    }
    ctx->pc = 0x1E3EBCu;
label_1e3ebc:
    // 0x1e3ebc: 0x10000048  b           . + 4 + (0x48 << 2)
label_1e3ec0:
    if (ctx->pc == 0x1E3EC0u) {
        ctx->pc = 0x1E3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EBCu;
        // 0x1e3ec0: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3EC4u;
        goto label_1e3ec4;
    }
    ctx->pc = 0x1E3EBCu;
    {
        const bool branch_taken_0x1e3ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EBCu;
        // 0x1e3ec0: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ebc) {
            ctx->pc = 0x1E3FE0u;
            goto label_1e3fe0;
        }
    }
    ctx->pc = 0x1E3EC4u;
label_1e3ec4:
    // 0x1e3ec4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1e3ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1e3ec8:
    // 0x1e3ec8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1e3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1e3ecc:
    // 0x1e3ecc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e3eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1e3ed0:
    // 0x1e3ed0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1e3ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_1e3ed4:
    // 0x1e3ed4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e3ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1e3ed8:
    // 0x1e3ed8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e3ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1e3edc:
    // 0x1e3edc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e3edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1e3ee0:
    // 0x1e3ee0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e3ee4:
    // 0x1e3ee4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1e3ee8:
    if (ctx->pc == 0x1E3EE8u) {
        ctx->pc = 0x1E3EECu;
        goto label_1e3eec;
    }
    ctx->pc = 0x1E3EE4u;
    {
        const bool branch_taken_0x1e3ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3ee4) {
            ctx->pc = 0x1E3F28u;
            goto label_1e3f28;
        }
    }
    ctx->pc = 0x1E3EECu;
label_1e3eec:
    // 0x1e3eec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e3eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3ef0:
    // 0x1e3ef0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1e3ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1e3ef4:
    // 0x1e3ef4: 0x320f809  jalr        $t9
label_1e3ef8:
    if (ctx->pc == 0x1E3EF8u) {
        ctx->pc = 0x1E3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EF4u;
        // 0x1e3ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3EFCu;
        goto label_1e3efc;
    }
    ctx->pc = 0x1E3EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3EFCu);
        ctx->pc = 0x1E3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EF4u;
        // 0x1e3ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3EF4u, 0x1E3EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3EFCu;
label_1e3efc:
    // 0x1e3efc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3f00:
    // 0x1e3f00: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e3f04:
    if (ctx->pc == 0x1E3F04u) {
        ctx->pc = 0x1E3F08u;
        goto label_1e3f08;
    }
    ctx->pc = 0x1E3F00u;
    {
        const bool branch_taken_0x1e3f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3f00) {
            ctx->pc = 0x1E3F10u;
            goto label_1e3f10;
        }
    }
    ctx->pc = 0x1E3F08u;
label_1e3f08:
    // 0x1e3f08: 0x10000034  b           . + 4 + (0x34 << 2)
label_1e3f0c:
    if (ctx->pc == 0x1E3F0Cu) {
        ctx->pc = 0x1E3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F08u;
        // 0x1e3f0c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F10u;
        goto label_1e3f10;
    }
    ctx->pc = 0x1E3F08u;
    {
        const bool branch_taken_0x1e3f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F08u;
        // 0x1e3f0c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f08) {
            ctx->pc = 0x1E3FDCu;
            goto label_1e3fdc;
        }
    }
    ctx->pc = 0x1E3F10u;
label_1e3f10:
    // 0x1e3f10: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e3f14:
    // 0x1e3f14: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e3f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e3f18:
    // 0x1e3f18: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e3f18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3f1c:
    // 0x1e3f1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e3f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e3f20:
    // 0x1e3f20: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1e3f24:
    if (ctx->pc == 0x1E3F24u) {
        ctx->pc = 0x1E3F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F20u;
        // 0x1e3f24: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F28u;
        goto label_1e3f28;
    }
    ctx->pc = 0x1E3F20u;
    {
        const bool branch_taken_0x1e3f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F20u;
        // 0x1e3f24: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f20) {
            ctx->pc = 0x1E3FDCu;
            goto label_1e3fdc;
        }
    }
    ctx->pc = 0x1E3F28u;
label_1e3f28:
    // 0x1e3f28: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x1e3f28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
label_1e3f2c:
    // 0x1e3f2c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e3f30:
    // 0x1e3f30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e3f34:
    if (ctx->pc == 0x1E3F34u) {
        ctx->pc = 0x1E3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F30u;
        // 0x1e3f34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F38u;
        goto label_1e3f38;
    }
    ctx->pc = 0x1E3F30u;
    {
        const bool branch_taken_0x1e3f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F30u;
        // 0x1e3f34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f30) {
            ctx->pc = 0x1E3F40u;
            goto label_1e3f40;
        }
    }
    ctx->pc = 0x1E3F38u;
label_1e3f38:
    // 0x1e3f38: 0x10000028  b           . + 4 + (0x28 << 2)
label_1e3f3c:
    if (ctx->pc == 0x1E3F3Cu) {
        ctx->pc = 0x1E3F40u;
        goto label_1e3f40;
    }
    ctx->pc = 0x1E3F38u;
    {
        const bool branch_taken_0x1e3f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f38) {
            ctx->pc = 0x1E3FDCu;
            goto label_1e3fdc;
        }
    }
    ctx->pc = 0x1E3F40u;
label_1e3f40:
    // 0x1e3f40: 0x92020041  lbu         $v0, 0x41($s0)
    ctx->pc = 0x1e3f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
label_1e3f44:
    // 0x1e3f44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e3f48:
    if (ctx->pc == 0x1E3F48u) {
        ctx->pc = 0x1E3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F44u;
        // 0x1e3f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F4Cu;
        goto label_1e3f4c;
    }
    ctx->pc = 0x1E3F44u;
    {
        const bool branch_taken_0x1e3f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F44u;
        // 0x1e3f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f44) {
            ctx->pc = 0x1E3F5Cu;
            goto label_1e3f5c;
        }
    }
    ctx->pc = 0x1E3F4Cu;
label_1e3f4c:
    // 0x1e3f4c: 0xc0795dc  jal         func_1E5770
label_1e3f50:
    if (ctx->pc == 0x1E3F50u) {
        ctx->pc = 0x1E3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F4Cu;
        // 0x1e3f50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F54u;
        goto label_1e3f54;
    }
    ctx->pc = 0x1E3F4Cu;
    SET_GPR_U32(ctx, 31, 0x1E3F54u);
    ctx->pc = 0x1E3F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3F4Cu;
    // 0x1e3f50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5770u, 0x1E3F4Cu, 0x1E3F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3F54u;
label_1e3f54:
    // 0x1e3f54: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1e3f58:
    if (ctx->pc == 0x1E3F58u) {
        ctx->pc = 0x1E3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F54u;
        // 0x1e3f58: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F5Cu;
        goto label_1e3f5c;
    }
    ctx->pc = 0x1E3F54u;
    {
        const bool branch_taken_0x1e3f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F54u;
        // 0x1e3f58: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f54) {
            ctx->pc = 0x1E3FCCu;
            goto label_1e3fcc;
        }
    }
    ctx->pc = 0x1E3F5Cu;
label_1e3f5c:
    // 0x1e3f5c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1e3f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1e3f60:
    // 0x1e3f60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3f64:
    // 0x1e3f64: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e3f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e3f68:
    // 0x1e3f68: 0x320f809  jalr        $t9
label_1e3f6c:
    if (ctx->pc == 0x1E3F6Cu) {
        ctx->pc = 0x1E3F70u;
        goto label_1e3f70;
    }
    ctx->pc = 0x1E3F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3F70u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3F68u, 0x1E3F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3F70u;
label_1e3f70:
    // 0x1e3f70: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e3f74:
    if (ctx->pc == 0x1E3F74u) {
        ctx->pc = 0x1E3F78u;
        goto label_1e3f78;
    }
    ctx->pc = 0x1E3F70u;
    {
        const bool branch_taken_0x1e3f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f70) {
            ctx->pc = 0x1E3FA0u;
            goto label_1e3fa0;
        }
    }
    ctx->pc = 0x1E3F78u;
label_1e3f78:
    // 0x1e3f78: 0xc07a704  jal         func_1E9C10
label_1e3f7c:
    if (ctx->pc == 0x1E3F7Cu) {
        ctx->pc = 0x1E3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F78u;
        // 0x1e3f7c: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F80u;
        goto label_1e3f80;
    }
    ctx->pc = 0x1E3F78u;
    SET_GPR_U32(ctx, 31, 0x1E3F80u);
    ctx->pc = 0x1E3F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3F78u;
    // 0x1e3f7c: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E3F78u, 0x1E3F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3F80u;
label_1e3f80:
    // 0x1e3f80: 0x0  nop
    ctx->pc = 0x1e3f80u;
    // NOP
label_1e3f84:
    // 0x1e3f84: 0x0  nop
    ctx->pc = 0x1e3f84u;
    // NOP
label_1e3f88:
    // 0x1e3f88: 0x0  nop
    ctx->pc = 0x1e3f88u;
    // NOP
label_1e3f8c:
    // 0x1e3f8c: 0x0  nop
    ctx->pc = 0x1e3f8cu;
    // NOP
label_1e3f90:
    // 0x1e3f90: 0x0  nop
    ctx->pc = 0x1e3f90u;
    // NOP
label_1e3f94:
    // 0x1e3f94: 0x0  nop
    ctx->pc = 0x1e3f94u;
    // NOP
label_1e3f98:
    // 0x1e3f98: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e3f9c:
    if (ctx->pc == 0x1E3F9Cu) {
        ctx->pc = 0x1E3FA0u;
        goto label_1e3fa0;
    }
    ctx->pc = 0x1E3F98u;
    {
        const bool branch_taken_0x1e3f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f98) {
            ctx->pc = 0x1E3F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3f80;
        }
    }
    ctx->pc = 0x1E3FA0u;
label_1e3fa0:
    // 0x1e3fa0: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1e3fa4:
    if (ctx->pc == 0x1E3FA4u) {
        ctx->pc = 0x1E3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FA0u;
        // 0x1e3fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3FA8u;
        goto label_1e3fa8;
    }
    ctx->pc = 0x1E3FA0u;
    {
        const bool branch_taken_0x1e3fa0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FA0u;
        // 0x1e3fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3fa0) {
            ctx->pc = 0x1E3FC0u;
            goto label_1e3fc0;
        }
    }
    ctx->pc = 0x1E3FA8u;
label_1e3fa8:
    // 0x1e3fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3fac:
    // 0x1e3fac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e3facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3fb0:
    // 0x1e3fb0: 0xc07960c  jal         func_1E5830
label_1e3fb4:
    if (ctx->pc == 0x1E3FB4u) {
        ctx->pc = 0x1E3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FB0u;
        // 0x1e3fb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3FB8u;
        goto label_1e3fb8;
    }
    ctx->pc = 0x1E3FB0u;
    SET_GPR_U32(ctx, 31, 0x1E3FB8u);
    ctx->pc = 0x1E3FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3FB0u;
    // 0x1e3fb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5830u, 0x1E3FB0u, 0x1E3FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3FB8u;
label_1e3fb8:
    // 0x1e3fb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e3fbc:
    if (ctx->pc == 0x1E3FBCu) {
        ctx->pc = 0x1E3FC0u;
        goto label_1e3fc0;
    }
    ctx->pc = 0x1E3FB8u;
    {
        const bool branch_taken_0x1e3fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3fb8) {
            ctx->pc = 0x1E3FC8u;
            goto label_1e3fc8;
        }
    }
    ctx->pc = 0x1E3FC0u;
label_1e3fc0:
    // 0x1e3fc0: 0xc079670  jal         func_1E59C0
label_1e3fc4:
    if (ctx->pc == 0x1E3FC4u) {
        ctx->pc = 0x1E3FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FC0u;
        // 0x1e3fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3FC8u;
        goto label_1e3fc8;
    }
    ctx->pc = 0x1E3FC0u;
    SET_GPR_U32(ctx, 31, 0x1E3FC8u);
    ctx->pc = 0x1E3FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3FC0u;
    // 0x1e3fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E59C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E59C0u, 0x1E3FC0u, 0x1E3FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3FC8u;
label_1e3fc8:
    // 0x1e3fc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3fcc:
    // 0x1e3fcc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e3fd0:
    if (ctx->pc == 0x1E3FD0u) {
        ctx->pc = 0x1E3FD4u;
        goto label_1e3fd4;
    }
    ctx->pc = 0x1E3FCCu;
    {
        const bool branch_taken_0x1e3fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3fcc) {
            ctx->pc = 0x1E3FDCu;
            goto label_1e3fdc;
        }
    }
    ctx->pc = 0x1E3FD4u;
label_1e3fd4:
    // 0x1e3fd4: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e3fd8:
    if (ctx->pc == 0x1E3FD8u) {
        ctx->pc = 0x1E3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FD4u;
        // 0x1e3fd8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3FDCu;
        goto label_1e3fdc;
    }
    ctx->pc = 0x1E3FD4u;
    {
        const bool branch_taken_0x1e3fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FD4u;
        // 0x1e3fd8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3fd4) {
            ctx->pc = 0x1E3FDCu;
            goto label_1e3fdc;
        }
    }
    ctx->pc = 0x1E3FDCu;
label_1e3fdc:
    // 0x1e3fdc: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e3fdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e3fe0:
    // 0x1e3fe0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e3fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3fe4:
    // 0x1e3fe4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e3fe4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3fe8:
    // 0x1e3fe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3fec:
    // 0x1e3fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3ff0:
    // 0x1e3ff0: 0x3e00008  jr          $ra
label_1e3ff4:
    if (ctx->pc == 0x1E3FF4u) {
        ctx->pc = 0x1E3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FF0u;
        // 0x1e3ff4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3FF8u;
        goto label_fallthrough_0x1e3ff0;
    }
    ctx->pc = 0x1E3FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FF0u;
        // 0x1e3ff4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e3ff0:
    ctx->pc = 0x1E3FF8u;
}
