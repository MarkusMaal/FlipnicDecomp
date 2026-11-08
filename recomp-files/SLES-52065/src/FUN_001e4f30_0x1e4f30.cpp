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

// Function: FUN_001e4f30
// Address: 0x1e4f30 - 0x1e50d8
void FUN_001e4f30_0x1e4f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e4f30_0x1e4f30");
#endif

    switch (ctx->pc) {
        case 0x1e4f30u: goto label_1e4f30;
        case 0x1e4f34u: goto label_1e4f34;
        case 0x1e4f38u: goto label_1e4f38;
        case 0x1e4f3cu: goto label_1e4f3c;
        case 0x1e4f40u: goto label_1e4f40;
        case 0x1e4f44u: goto label_1e4f44;
        case 0x1e4f48u: goto label_1e4f48;
        case 0x1e4f4cu: goto label_1e4f4c;
        case 0x1e4f50u: goto label_1e4f50;
        case 0x1e4f54u: goto label_1e4f54;
        case 0x1e4f58u: goto label_1e4f58;
        case 0x1e4f5cu: goto label_1e4f5c;
        case 0x1e4f60u: goto label_1e4f60;
        case 0x1e4f64u: goto label_1e4f64;
        case 0x1e4f68u: goto label_1e4f68;
        case 0x1e4f6cu: goto label_1e4f6c;
        case 0x1e4f70u: goto label_1e4f70;
        case 0x1e4f74u: goto label_1e4f74;
        case 0x1e4f78u: goto label_1e4f78;
        case 0x1e4f7cu: goto label_1e4f7c;
        case 0x1e4f80u: goto label_1e4f80;
        case 0x1e4f84u: goto label_1e4f84;
        case 0x1e4f88u: goto label_1e4f88;
        case 0x1e4f8cu: goto label_1e4f8c;
        case 0x1e4f90u: goto label_1e4f90;
        case 0x1e4f94u: goto label_1e4f94;
        case 0x1e4f98u: goto label_1e4f98;
        case 0x1e4f9cu: goto label_1e4f9c;
        case 0x1e4fa0u: goto label_1e4fa0;
        case 0x1e4fa4u: goto label_1e4fa4;
        case 0x1e4fa8u: goto label_1e4fa8;
        case 0x1e4facu: goto label_1e4fac;
        case 0x1e4fb0u: goto label_1e4fb0;
        case 0x1e4fb4u: goto label_1e4fb4;
        case 0x1e4fb8u: goto label_1e4fb8;
        case 0x1e4fbcu: goto label_1e4fbc;
        case 0x1e4fc0u: goto label_1e4fc0;
        case 0x1e4fc4u: goto label_1e4fc4;
        case 0x1e4fc8u: goto label_1e4fc8;
        case 0x1e4fccu: goto label_1e4fcc;
        case 0x1e4fd0u: goto label_1e4fd0;
        case 0x1e4fd4u: goto label_1e4fd4;
        case 0x1e4fd8u: goto label_1e4fd8;
        case 0x1e4fdcu: goto label_1e4fdc;
        case 0x1e4fe0u: goto label_1e4fe0;
        case 0x1e4fe4u: goto label_1e4fe4;
        case 0x1e4fe8u: goto label_1e4fe8;
        case 0x1e4fecu: goto label_1e4fec;
        case 0x1e4ff0u: goto label_1e4ff0;
        case 0x1e4ff4u: goto label_1e4ff4;
        case 0x1e4ff8u: goto label_1e4ff8;
        case 0x1e4ffcu: goto label_1e4ffc;
        case 0x1e5000u: goto label_1e5000;
        case 0x1e5004u: goto label_1e5004;
        case 0x1e5008u: goto label_1e5008;
        case 0x1e500cu: goto label_1e500c;
        case 0x1e5010u: goto label_1e5010;
        case 0x1e5014u: goto label_1e5014;
        case 0x1e5018u: goto label_1e5018;
        case 0x1e501cu: goto label_1e501c;
        case 0x1e5020u: goto label_1e5020;
        case 0x1e5024u: goto label_1e5024;
        case 0x1e5028u: goto label_1e5028;
        case 0x1e502cu: goto label_1e502c;
        case 0x1e5030u: goto label_1e5030;
        case 0x1e5034u: goto label_1e5034;
        case 0x1e5038u: goto label_1e5038;
        case 0x1e503cu: goto label_1e503c;
        case 0x1e5040u: goto label_1e5040;
        case 0x1e5044u: goto label_1e5044;
        case 0x1e5048u: goto label_1e5048;
        case 0x1e504cu: goto label_1e504c;
        case 0x1e5050u: goto label_1e5050;
        case 0x1e5054u: goto label_1e5054;
        case 0x1e5058u: goto label_1e5058;
        case 0x1e505cu: goto label_1e505c;
        case 0x1e5060u: goto label_1e5060;
        case 0x1e5064u: goto label_1e5064;
        case 0x1e5068u: goto label_1e5068;
        case 0x1e506cu: goto label_1e506c;
        case 0x1e5070u: goto label_1e5070;
        case 0x1e5074u: goto label_1e5074;
        case 0x1e5078u: goto label_1e5078;
        case 0x1e507cu: goto label_1e507c;
        case 0x1e5080u: goto label_1e5080;
        case 0x1e5084u: goto label_1e5084;
        case 0x1e5088u: goto label_1e5088;
        case 0x1e508cu: goto label_1e508c;
        case 0x1e5090u: goto label_1e5090;
        case 0x1e5094u: goto label_1e5094;
        case 0x1e5098u: goto label_1e5098;
        case 0x1e509cu: goto label_1e509c;
        case 0x1e50a0u: goto label_1e50a0;
        case 0x1e50a4u: goto label_1e50a4;
        case 0x1e50a8u: goto label_1e50a8;
        case 0x1e50acu: goto label_1e50ac;
        case 0x1e50b0u: goto label_1e50b0;
        case 0x1e50b4u: goto label_1e50b4;
        case 0x1e50b8u: goto label_1e50b8;
        case 0x1e50bcu: goto label_1e50bc;
        case 0x1e50c0u: goto label_1e50c0;
        case 0x1e50c4u: goto label_1e50c4;
        case 0x1e50c8u: goto label_1e50c8;
        case 0x1e50ccu: goto label_1e50cc;
        case 0x1e50d0u: goto label_1e50d0;
        case 0x1e50d4u: goto label_1e50d4;
        default: break;
    }

    ctx->pc = 0x1e4f30u;

label_1e4f30:
    // 0x1e4f30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e4f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e4f34:
    // 0x1e4f34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e4f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e4f38:
    // 0x1e4f38: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1e4f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1e4f3c:
    // 0x1e4f3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4f40:
    // 0x1e4f40: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e4f40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e4f44:
    // 0x1e4f44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4f48:
    // 0x1e4f48: 0x90820052  lbu         $v0, 0x52($a0)
    ctx->pc = 0x1e4f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 82)));
label_1e4f4c:
    // 0x1e4f4c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1e4f50:
    if (ctx->pc == 0x1E4F50u) {
        ctx->pc = 0x1E4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F4Cu;
        // 0x1e4f50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F54u;
        goto label_1e4f54;
    }
    ctx->pc = 0x1E4F4Cu;
    {
        const bool branch_taken_0x1e4f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F4Cu;
        // 0x1e4f50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f4c) {
            ctx->pc = 0x1E4FC0u;
            goto label_1e4fc0;
        }
    }
    ctx->pc = 0x1E4F54u;
label_1e4f54:
    // 0x1e4f54: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e4f58:
    // 0x1e4f58: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1e4f5c:
    if (ctx->pc == 0x1E4F5Cu) {
        ctx->pc = 0x1E4F60u;
        goto label_1e4f60;
    }
    ctx->pc = 0x1E4F58u;
    {
        const bool branch_taken_0x1e4f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4f58) {
            ctx->pc = 0x1E4FC0u;
            goto label_1e4fc0;
        }
    }
    ctx->pc = 0x1E4F60u;
label_1e4f60:
    // 0x1e4f60: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1e4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e4f64:
    // 0x1e4f64: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e4f68:
    // 0x1e4f68: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e4f68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e4f6c:
    // 0x1e4f6c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e4f70:
    if (ctx->pc == 0x1E4F70u) {
        ctx->pc = 0x1E4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F6Cu;
        // 0x1e4f70: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F74u;
        goto label_1e4f74;
    }
    ctx->pc = 0x1E4F6Cu;
    {
        const bool branch_taken_0x1e4f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F6Cu;
        // 0x1e4f70: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f6c) {
            ctx->pc = 0x1E4F94u;
            goto label_1e4f94;
        }
    }
    ctx->pc = 0x1E4F74u;
label_1e4f74:
    // 0x1e4f74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4f74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4f78:
    // 0x1e4f78: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e4f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e4f7c:
    // 0x1e4f7c: 0x320f809  jalr        $t9
label_1e4f80:
    if (ctx->pc == 0x1E4F80u) {
        ctx->pc = 0x1E4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F7Cu;
        // 0x1e4f80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F84u;
        goto label_1e4f84;
    }
    ctx->pc = 0x1E4F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4F84u);
        ctx->pc = 0x1E4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F7Cu;
        // 0x1e4f80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4F7Cu, 0x1E4F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4F84u;
label_1e4f84:
    // 0x1e4f84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4f88:
    // 0x1e4f88: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e4f8c:
    if (ctx->pc == 0x1E4F8Cu) {
        ctx->pc = 0x1E4F90u;
        goto label_1e4f90;
    }
    ctx->pc = 0x1E4F88u;
    {
        const bool branch_taken_0x1e4f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4f88) {
            ctx->pc = 0x1E4F94u;
            goto label_1e4f94;
        }
    }
    ctx->pc = 0x1E4F90u;
label_1e4f90:
    // 0x1e4f90: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1e4f90u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e4f94:
    // 0x1e4f94: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_1e4f98:
    if (ctx->pc == 0x1E4F98u) {
        ctx->pc = 0x1E4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F94u;
        // 0x1e4f98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F9Cu;
        goto label_1e4f9c;
    }
    ctx->pc = 0x1E4F94u;
    {
        const bool branch_taken_0x1e4f94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F94u;
        // 0x1e4f98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f94) {
            ctx->pc = 0x1E4FA4u;
            goto label_1e4fa4;
        }
    }
    ctx->pc = 0x1E4F9Cu;
label_1e4f9c:
    // 0x1e4f9c: 0x10000048  b           . + 4 + (0x48 << 2)
label_1e4fa0:
    if (ctx->pc == 0x1E4FA0u) {
        ctx->pc = 0x1E4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F9Cu;
        // 0x1e4fa0: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FA4u;
        goto label_1e4fa4;
    }
    ctx->pc = 0x1E4F9Cu;
    {
        const bool branch_taken_0x1e4f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F9Cu;
        // 0x1e4fa0: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f9c) {
            ctx->pc = 0x1E50C0u;
            goto label_1e50c0;
        }
    }
    ctx->pc = 0x1E4FA4u;
label_1e4fa4:
    // 0x1e4fa4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1e4fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1e4fa8:
    // 0x1e4fa8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1e4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1e4fac:
    // 0x1e4fac: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e4facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1e4fb0:
    // 0x1e4fb0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1e4fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_1e4fb4:
    // 0x1e4fb4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e4fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1e4fb8:
    // 0x1e4fb8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e4fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1e4fbc:
    // 0x1e4fbc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e4fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1e4fc0:
    // 0x1e4fc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e4fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e4fc4:
    // 0x1e4fc4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1e4fc8:
    if (ctx->pc == 0x1E4FC8u) {
        ctx->pc = 0x1E4FCCu;
        goto label_1e4fcc;
    }
    ctx->pc = 0x1E4FC4u;
    {
        const bool branch_taken_0x1e4fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4fc4) {
            ctx->pc = 0x1E5008u;
            goto label_1e5008;
        }
    }
    ctx->pc = 0x1E4FCCu;
label_1e4fcc:
    // 0x1e4fcc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e4fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e4fd0:
    // 0x1e4fd0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1e4fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1e4fd4:
    // 0x1e4fd4: 0x320f809  jalr        $t9
label_1e4fd8:
    if (ctx->pc == 0x1E4FD8u) {
        ctx->pc = 0x1E4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FD4u;
        // 0x1e4fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FDCu;
        goto label_1e4fdc;
    }
    ctx->pc = 0x1E4FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4FDCu);
        ctx->pc = 0x1E4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FD4u;
        // 0x1e4fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4FD4u, 0x1E4FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4FDCu;
label_1e4fdc:
    // 0x1e4fdc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4fe0:
    // 0x1e4fe0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e4fe4:
    if (ctx->pc == 0x1E4FE4u) {
        ctx->pc = 0x1E4FE8u;
        goto label_1e4fe8;
    }
    ctx->pc = 0x1E4FE0u;
    {
        const bool branch_taken_0x1e4fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4fe0) {
            ctx->pc = 0x1E4FF0u;
            goto label_1e4ff0;
        }
    }
    ctx->pc = 0x1E4FE8u;
label_1e4fe8:
    // 0x1e4fe8: 0x10000034  b           . + 4 + (0x34 << 2)
label_1e4fec:
    if (ctx->pc == 0x1E4FECu) {
        ctx->pc = 0x1E4FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FE8u;
        // 0x1e4fec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FF0u;
        goto label_1e4ff0;
    }
    ctx->pc = 0x1E4FE8u;
    {
        const bool branch_taken_0x1e4fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FE8u;
        // 0x1e4fec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4fe8) {
            ctx->pc = 0x1E50BCu;
            goto label_1e50bc;
        }
    }
    ctx->pc = 0x1E4FF0u;
label_1e4ff0:
    // 0x1e4ff0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e4ff4:
    // 0x1e4ff4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e4ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e4ff8:
    // 0x1e4ff8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1e4ff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e4ffc:
    // 0x1e4ffc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1e4ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1e5000:
    // 0x1e5000: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1e5004:
    if (ctx->pc == 0x1E5004u) {
        ctx->pc = 0x1E5004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5000u;
        // 0x1e5004: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5008u;
        goto label_1e5008;
    }
    ctx->pc = 0x1E5000u;
    {
        const bool branch_taken_0x1e5000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5000u;
        // 0x1e5004: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5000) {
            ctx->pc = 0x1E50BCu;
            goto label_1e50bc;
        }
    }
    ctx->pc = 0x1E5008u;
label_1e5008:
    // 0x1e5008: 0xa2000050  sb          $zero, 0x50($s0)
    ctx->pc = 0x1e5008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 0));
label_1e500c:
    // 0x1e500c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e5010:
    // 0x1e5010: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e5014:
    if (ctx->pc == 0x1E5014u) {
        ctx->pc = 0x1E5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5010u;
        // 0x1e5014: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5018u;
        goto label_1e5018;
    }
    ctx->pc = 0x1E5010u;
    {
        const bool branch_taken_0x1e5010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5010u;
        // 0x1e5014: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5010) {
            ctx->pc = 0x1E5020u;
            goto label_1e5020;
        }
    }
    ctx->pc = 0x1E5018u;
label_1e5018:
    // 0x1e5018: 0x10000028  b           . + 4 + (0x28 << 2)
label_1e501c:
    if (ctx->pc == 0x1E501Cu) {
        ctx->pc = 0x1E5020u;
        goto label_1e5020;
    }
    ctx->pc = 0x1E5018u;
    {
        const bool branch_taken_0x1e5018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5018) {
            ctx->pc = 0x1E50BCu;
            goto label_1e50bc;
        }
    }
    ctx->pc = 0x1E5020u;
label_1e5020:
    // 0x1e5020: 0x92020051  lbu         $v0, 0x51($s0)
    ctx->pc = 0x1e5020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
label_1e5024:
    // 0x1e5024: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e5028:
    if (ctx->pc == 0x1E5028u) {
        ctx->pc = 0x1E5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5024u;
        // 0x1e5028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E502Cu;
        goto label_1e502c;
    }
    ctx->pc = 0x1E5024u;
    {
        const bool branch_taken_0x1e5024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5024u;
        // 0x1e5028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5024) {
            ctx->pc = 0x1E503Cu;
            goto label_1e503c;
        }
    }
    ctx->pc = 0x1E502Cu;
label_1e502c:
    // 0x1e502c: 0xc079544  jal         func_1E5510
label_1e5030:
    if (ctx->pc == 0x1E5030u) {
        ctx->pc = 0x1E5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E502Cu;
        // 0x1e5030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5034u;
        goto label_1e5034;
    }
    ctx->pc = 0x1E502Cu;
    SET_GPR_U32(ctx, 31, 0x1E5034u);
    ctx->pc = 0x1E5030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E502Cu;
    // 0x1e5030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5510u, 0x1E502Cu, 0x1E5034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5034u;
label_1e5034:
    // 0x1e5034: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1e5038:
    if (ctx->pc == 0x1E5038u) {
        ctx->pc = 0x1E5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5034u;
        // 0x1e5038: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E503Cu;
        goto label_1e503c;
    }
    ctx->pc = 0x1E5034u;
    {
        const bool branch_taken_0x1e5034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5034u;
        // 0x1e5038: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5034) {
            ctx->pc = 0x1E50ACu;
            goto label_1e50ac;
        }
    }
    ctx->pc = 0x1E503Cu;
label_1e503c:
    // 0x1e503c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1e503cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1e5040:
    // 0x1e5040: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5044:
    // 0x1e5044: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e5044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e5048:
    // 0x1e5048: 0x320f809  jalr        $t9
label_1e504c:
    if (ctx->pc == 0x1E504Cu) {
        ctx->pc = 0x1E5050u;
        goto label_1e5050;
    }
    ctx->pc = 0x1E5048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5050u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5048u, 0x1E5050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5050u;
label_1e5050:
    // 0x1e5050: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e5054:
    if (ctx->pc == 0x1E5054u) {
        ctx->pc = 0x1E5058u;
        goto label_1e5058;
    }
    ctx->pc = 0x1E5050u;
    {
        const bool branch_taken_0x1e5050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5050) {
            ctx->pc = 0x1E5080u;
            goto label_1e5080;
        }
    }
    ctx->pc = 0x1E5058u;
label_1e5058:
    // 0x1e5058: 0xc07a704  jal         func_1E9C10
label_1e505c:
    if (ctx->pc == 0x1E505Cu) {
        ctx->pc = 0x1E505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5058u;
        // 0x1e505c: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5060u;
        goto label_1e5060;
    }
    ctx->pc = 0x1E5058u;
    SET_GPR_U32(ctx, 31, 0x1E5060u);
    ctx->pc = 0x1E505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5058u;
    // 0x1e505c: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E5058u, 0x1E5060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5060u;
label_1e5060:
    // 0x1e5060: 0x0  nop
    ctx->pc = 0x1e5060u;
    // NOP
label_1e5064:
    // 0x1e5064: 0x0  nop
    ctx->pc = 0x1e5064u;
    // NOP
label_1e5068:
    // 0x1e5068: 0x0  nop
    ctx->pc = 0x1e5068u;
    // NOP
label_1e506c:
    // 0x1e506c: 0x0  nop
    ctx->pc = 0x1e506cu;
    // NOP
label_1e5070:
    // 0x1e5070: 0x0  nop
    ctx->pc = 0x1e5070u;
    // NOP
label_1e5074:
    // 0x1e5074: 0x0  nop
    ctx->pc = 0x1e5074u;
    // NOP
label_1e5078:
    // 0x1e5078: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e507c:
    if (ctx->pc == 0x1E507Cu) {
        ctx->pc = 0x1E5080u;
        goto label_1e5080;
    }
    ctx->pc = 0x1E5078u;
    {
        const bool branch_taken_0x1e5078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5078) {
            ctx->pc = 0x1E5060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5060;
        }
    }
    ctx->pc = 0x1E5080u;
label_1e5080:
    // 0x1e5080: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1e5084:
    if (ctx->pc == 0x1E5084u) {
        ctx->pc = 0x1E5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5080u;
        // 0x1e5084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5088u;
        goto label_1e5088;
    }
    ctx->pc = 0x1E5080u;
    {
        const bool branch_taken_0x1e5080 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5080u;
        // 0x1e5084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5080) {
            ctx->pc = 0x1E50A0u;
            goto label_1e50a0;
        }
    }
    ctx->pc = 0x1E5088u;
label_1e5088:
    // 0x1e5088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e508c:
    // 0x1e508c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e508cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e5090:
    // 0x1e5090: 0xc0798e4  jal         func_1E6390
label_1e5094:
    if (ctx->pc == 0x1E5094u) {
        ctx->pc = 0x1E5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5090u;
        // 0x1e5094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5098u;
        goto label_1e5098;
    }
    ctx->pc = 0x1E5090u;
    SET_GPR_U32(ctx, 31, 0x1E5098u);
    ctx->pc = 0x1E5094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5090u;
    // 0x1e5094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6390u, 0x1E5090u, 0x1E5098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5098u;
label_1e5098:
    // 0x1e5098: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e509c:
    if (ctx->pc == 0x1E509Cu) {
        ctx->pc = 0x1E50A0u;
        goto label_1e50a0;
    }
    ctx->pc = 0x1E5098u;
    {
        const bool branch_taken_0x1e5098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5098) {
            ctx->pc = 0x1E50A8u;
            goto label_1e50a8;
        }
    }
    ctx->pc = 0x1E50A0u;
label_1e50a0:
    // 0x1e50a0: 0xc079878  jal         func_1E61E0
label_1e50a4:
    if (ctx->pc == 0x1E50A4u) {
        ctx->pc = 0x1E50A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50A0u;
        // 0x1e50a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50A8u;
        goto label_1e50a8;
    }
    ctx->pc = 0x1E50A0u;
    SET_GPR_U32(ctx, 31, 0x1E50A8u);
    ctx->pc = 0x1E50A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50A0u;
    // 0x1e50a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E61E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E61E0u, 0x1E50A0u, 0x1E50A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E50A8u;
label_1e50a8:
    // 0x1e50a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e50a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e50ac:
    // 0x1e50ac: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e50b0:
    if (ctx->pc == 0x1E50B0u) {
        ctx->pc = 0x1E50B4u;
        goto label_1e50b4;
    }
    ctx->pc = 0x1E50ACu;
    {
        const bool branch_taken_0x1e50ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e50ac) {
            ctx->pc = 0x1E50BCu;
            goto label_1e50bc;
        }
    }
    ctx->pc = 0x1E50B4u;
label_1e50b4:
    // 0x1e50b4: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e50b8:
    if (ctx->pc == 0x1E50B8u) {
        ctx->pc = 0x1E50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50B4u;
        // 0x1e50b8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50BCu;
        goto label_1e50bc;
    }
    ctx->pc = 0x1E50B4u;
    {
        const bool branch_taken_0x1e50b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50B4u;
        // 0x1e50b8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50b4) {
            ctx->pc = 0x1E50BCu;
            goto label_1e50bc;
        }
    }
    ctx->pc = 0x1E50BCu;
label_1e50bc:
    // 0x1e50bc: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e50bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e50c0:
    // 0x1e50c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e50c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e50c4:
    // 0x1e50c4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e50c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e50c8:
    // 0x1e50c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e50c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e50cc:
    // 0x1e50cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e50ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e50d0:
    // 0x1e50d0: 0x3e00008  jr          $ra
label_1e50d4:
    if (ctx->pc == 0x1E50D4u) {
        ctx->pc = 0x1E50D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50D0u;
        // 0x1e50d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50D8u;
        goto label_fallthrough_0x1e50d0;
    }
    ctx->pc = 0x1E50D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E50D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50D0u;
        // 0x1e50d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E50D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e50d0:
    ctx->pc = 0x1E50D8u;
}
