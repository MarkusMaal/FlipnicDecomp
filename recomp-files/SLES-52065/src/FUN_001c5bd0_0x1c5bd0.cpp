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

// Function: FUN_001c5bd0
// Address: 0x1c5bd0 - 0x1c6384
void FUN_001c5bd0_0x1c5bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c5bd0_0x1c5bd0");
#endif

    switch (ctx->pc) {
        case 0x1c5c3cu: goto label_1c5c3c;
        case 0x1c5c44u: goto label_1c5c44;
        case 0x1c5c90u: goto label_1c5c90;
        case 0x1c5cf8u: goto label_1c5cf8;
        case 0x1c5d18u: goto label_1c5d18;
        case 0x1c5d60u: goto label_1c5d60;
        case 0x1c5d7cu: goto label_1c5d7c;
        case 0x1c5d98u: goto label_1c5d98;
        case 0x1c5da0u: goto label_1c5da0;
        case 0x1c5dacu: goto label_1c5dac;
        case 0x1c5ddcu: goto label_1c5ddc;
        case 0x1c5de8u: goto label_1c5de8;
        case 0x1c5e10u: goto label_1c5e10;
        case 0x1c5e1cu: goto label_1c5e1c;
        case 0x1c5e24u: goto label_1c5e24;
        case 0x1c5e30u: goto label_1c5e30;
        case 0x1c5e38u: goto label_1c5e38;
        case 0x1c5e40u: goto label_1c5e40;
        case 0x1c5e4cu: goto label_1c5e4c;
        case 0x1c5e54u: goto label_1c5e54;
        case 0x1c5e60u: goto label_1c5e60;
        case 0x1c5e7cu: goto label_1c5e7c;
        case 0x1c5e98u: goto label_1c5e98;
        case 0x1c5ea0u: goto label_1c5ea0;
        case 0x1c5eacu: goto label_1c5eac;
        case 0x1c5ef0u: goto label_1c5ef0;
        case 0x1c5f84u: goto label_1c5f84;
        case 0x1c5f98u: goto label_1c5f98;
        case 0x1c5facu: goto label_1c5fac;
        case 0x1c5fe4u: goto label_1c5fe4;
        case 0x1c6074u: goto label_1c6074;
        case 0x1c6084u: goto label_1c6084;
        case 0x1c6108u: goto label_1c6108;
        case 0x1c6118u: goto label_1c6118;
        case 0x1c61fcu: goto label_1c61fc;
        case 0x1c6208u: goto label_1c6208;
        case 0x1c6218u: goto label_1c6218;
        case 0x1c6224u: goto label_1c6224;
        case 0x1c622cu: goto label_1c622c;
        case 0x1c6238u: goto label_1c6238;
        case 0x1c6240u: goto label_1c6240;
        case 0x1c6254u: goto label_1c6254;
        case 0x1c6260u: goto label_1c6260;
        case 0x1c6270u: goto label_1c6270;
        case 0x1c6298u: goto label_1c6298;
        case 0x1c62a0u: goto label_1c62a0;
        case 0x1c62b4u: goto label_1c62b4;
        case 0x1c62e0u: goto label_1c62e0;
        case 0x1c633cu: goto label_1c633c;
        case 0x1c6344u: goto label_1c6344;
        case 0x1c6350u: goto label_1c6350;
        case 0x1c6358u: goto label_1c6358;
        default: break;
    }

    ctx->pc = 0x1c5bd0u;

    // 0x1c5bd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c5bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c5bd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5bd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c5bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c5bdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c5bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c5be0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c5be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5be4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5be8: 0x9082006d  lbu         $v0, 0x6D($a0)
    ctx->pc = 0x1c5be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 109)));
    // 0x1c5bec: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C5BECu;
    {
        const bool branch_taken_0x1c5bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BECu;
        // 0x1c5bf0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bec) {
            ctx->pc = 0x1C5C34u;
            goto label_1c5c34;
        }
    }
    ctx->pc = 0x1C5BF4u;
    // 0x1c5bf4: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x1c5bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1c5bf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c5bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c5bfc: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x1c5bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x1c5c00: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x1c5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1c5c04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5C04u;
    {
        const bool branch_taken_0x1c5c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C04u;
        // 0x1c5c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c04) {
            ctx->pc = 0x1C5C14u;
            goto label_1c5c14;
        }
    }
    ctx->pc = 0x1C5C0Cu;
    // 0x1c5c0c: 0x100001d8  b           . + 4 + (0x1D8 << 2)
    ctx->pc = 0x1C5C0Cu;
    {
        const bool branch_taken_0x1c5c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C0Cu;
        // 0x1c5c10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c0c) {
            ctx->pc = 0x1C6370u;
            goto label_1c6370;
        }
    }
    ctx->pc = 0x1C5C14u;
label_1c5c14:
    // 0x1c5c14: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x1c5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x1c5c18: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5C18u;
    {
        const bool branch_taken_0x1c5c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C18u;
        // 0x1c5c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c18) {
            ctx->pc = 0x1C5C2Cu;
            goto label_1c5c2c;
        }
    }
    ctx->pc = 0x1C5C20u;
    // 0x1c5c20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c5c24: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x1c5c24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5c2c:
    // 0x1c5c2c: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x1C5C2Cu;
    {
        const bool branch_taken_0x1c5c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c2c) {
            ctx->pc = 0x1C636Cu;
            goto label_1c636c;
        }
    }
    ctx->pc = 0x1C5C34u;
label_1c5c34:
    // 0x1c5c34: 0xc06d410  jal         func_1B5040
    ctx->pc = 0x1C5C34u;
    SET_GPR_U32(ctx, 31, 0x1C5C3Cu);
    ctx->pc = 0x1B5040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5040u, 0x1C5C34u, 0x1C5C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C3Cu;
label_1c5c3c:
    // 0x1c5c3c: 0xc0485a4  jal         func_121690
    ctx->pc = 0x1C5C3Cu;
    SET_GPR_U32(ctx, 31, 0x1C5C44u);
    ctx->pc = 0x1C5C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C3Cu;
    // 0x1c5c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121690u, 0x1C5C3Cu, 0x1C5C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C44u;
label_1c5c44:
    // 0x1c5c44: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1c5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1c5c48: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x1c5c48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1c5c4c: 0x1020009c  beqz        $at, . + 4 + (0x9C << 2)
    ctx->pc = 0x1C5C4Cu;
    {
        const bool branch_taken_0x1c5c4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C4Cu;
        // 0x1c5c50: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c4c) {
            ctx->pc = 0x1C5EC0u;
            goto label_1c5ec0;
        }
    }
    ctx->pc = 0x1C5C54u;
    // 0x1c5c54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c5c58: 0x24631fa0  addiu       $v1, $v1, 0x1FA0
    ctx->pc = 0x1c5c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8096));
    // 0x1c5c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c5c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5c60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5c64: 0x400008  jr          $v0
    ctx->pc = 0x1C5C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C5C6Cu: goto label_1c5c6c;
            case 0x1C5CE0u: goto label_1c5ce0;
            case 0x1C5D30u: goto label_1c5d30;
            case 0x1C5D58u: goto label_1c5d58;
            case 0x1C5DC4u: goto label_1c5dc4;
            case 0x1C5E08u: goto label_1c5e08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5C64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C5C6Cu;
label_1c5c6c:
    // 0x1c5c6c: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5c70: 0x8c24c688  lw          $a0, -0x3978($at)
    ctx->pc = 0x1c5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C688u));
    // 0x1c5c74: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5c78: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1c5c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x22C7F8u));
    // 0x1c5c7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5C7Cu;
    {
        const bool branch_taken_0x1c5c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C7Cu;
        // 0x1c5c80: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c7c) {
            ctx->pc = 0x1C5C90u;
            goto label_1c5c90;
        }
    }
    ctx->pc = 0x1C5C84u;
    // 0x1c5c84: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1c5c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1c5c88: 0x90232ebb  lbu         $v1, 0x2EBB($at)
    ctx->pc = 0x1c5c88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EBBu));
    // 0x1c5c8c: 0x0  nop
    ctx->pc = 0x1c5c8cu;
    // NOP
label_1c5c90:
    // 0x1c5c90: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5C90u;
    {
        const bool branch_taken_0x1c5c90 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C90u;
        // 0x1c5c94: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c90) {
            ctx->pc = 0x1C5CA0u;
            goto label_1c5ca0;
        }
    }
    ctx->pc = 0x1C5C98u;
    // 0x1c5c98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5C98u;
    {
        const bool branch_taken_0x1c5c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C98u;
        // 0x1c5c9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c98) {
            ctx->pc = 0x1C5CC0u;
            goto label_1c5cc0;
        }
    }
    ctx->pc = 0x1C5CA0u;
label_1c5ca0:
    // 0x1c5ca0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c5ca4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5ca8: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1c5ca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c5cac: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5CACu;
    {
        const bool branch_taken_0x1c5cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c5cac) {
            ctx->pc = 0x1C5CBCu;
            goto label_1c5cbc;
        }
    }
    ctx->pc = 0x1C5CB4u;
    // 0x1c5cb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5CB4u;
    {
        const bool branch_taken_0x1c5cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5cb4) {
            ctx->pc = 0x1C5CC0u;
            goto label_1c5cc0;
        }
    }
    ctx->pc = 0x1C5CBCu;
label_1c5cbc:
    // 0x1c5cbc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c5cbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5cc0:
    // 0x1c5cc0: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x1C5CC0u;
    {
        const bool branch_taken_0x1c5cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5cc0) {
            ctx->pc = 0x1C5EC0u;
            goto label_1c5ec0;
        }
    }
    ctx->pc = 0x1C5CC8u;
    // 0x1c5cc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5ccc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c5cd0: 0xa243006d  sb          $v1, 0x6D($s2)
    ctx->pc = 0x1c5cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 109), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5cd4: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x1c5cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x1c5cd8: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x1C5CD8u;
    {
        const bool branch_taken_0x1c5cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CD8u;
        // 0x1c5cdc: 0xae400074  sw          $zero, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cd8) {
            ctx->pc = 0x1C5EC0u;
            goto label_1c5ec0;
        }
    }
    ctx->pc = 0x1C5CE0u;
label_1c5ce0:
    // 0x1c5ce0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5ce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5ce4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ce8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c5ce8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5cec: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1c5cecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5cf0: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1C5CF0u;
    SET_GPR_U32(ctx, 31, 0x1C5CF8u);
    ctx->pc = 0x1C5CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5CF0u;
    // 0x1c5cf4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1C5CF0u, 0x1C5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5CF8u;
label_1c5cf8:
    // 0x1c5cf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5cf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5cfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5d00: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1c5d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1c5d04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d08: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c5d08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5d0c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c5d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5d10: 0xc053c00  jal         func_14F000
    ctx->pc = 0x1C5D10u;
    SET_GPR_U32(ctx, 31, 0x1C5D18u);
    ctx->pc = 0x1C5D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D10u;
    // 0x1c5d14: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x1C5D10u, 0x1C5D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D18u;
label_1c5d18:
    // 0x1c5d18: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5d1c: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x1c5d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1c5d20: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1c5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1c5d24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5d28: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1C5D28u;
    {
        const bool branch_taken_0x1c5d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D28u;
        // 0x1c5d2c: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d28) {
            ctx->pc = 0x1C5EC0u;
            goto label_1c5ec0;
        }
    }
    ctx->pc = 0x1C5D30u;
label_1c5d30:
    // 0x1c5d30: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x1c5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1c5d34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c5d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c5d38: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x1c5d38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1c5d3c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x1c5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1c5d40: 0x1c40005f  bgtz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1C5D40u;
    {
        const bool branch_taken_0x1c5d40 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1c5d40) {
            ctx->pc = 0x1C5EC0u;
            goto label_1c5ec0;
        }
    }
    ctx->pc = 0x1C5D48u;
    // 0x1c5d48: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1c5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1c5d4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5d50: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1C5D50u;
    {
        const bool branch_taken_0x1c5d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D50u;
        // 0x1c5d54: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d50) {
            ctx->pc = 0x1C5EC0u;
            goto label_1c5ec0;
        }
    }
    ctx->pc = 0x1C5D58u;
label_1c5d58:
    // 0x1c5d58: 0xc06d354  jal         func_1B4D50
    ctx->pc = 0x1C5D58u;
    SET_GPR_U32(ctx, 31, 0x1C5D60u);
    ctx->pc = 0x1B4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D50u, 0x1C5D58u, 0x1C5D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D60u;
label_1c5d60:
    // 0x1c5d60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5d64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c5d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5d68: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1c5d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1c5d6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d70: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c5d70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5d74: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1C5D74u;
    SET_GPR_U32(ctx, 31, 0x1C5D7Cu);
    ctx->pc = 0x1C5D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D74u;
    // 0x1c5d78: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1C5D74u, 0x1C5D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D7Cu;
label_1c5d7c:
    // 0x1c5d7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5d80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d84: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c5d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5d88: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c5d88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5d8c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1c5d8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5d90: 0xc053c00  jal         func_14F000
    ctx->pc = 0x1C5D90u;
    SET_GPR_U32(ctx, 31, 0x1C5D98u);
    ctx->pc = 0x1C5D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D90u;
    // 0x1c5d94: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x1C5D90u, 0x1C5D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D98u;
label_1c5d98:
    // 0x1c5d98: 0xc04d988  jal         func_136620
    ctx->pc = 0x1C5D98u;
    SET_GPR_U32(ctx, 31, 0x1C5DA0u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1C5D98u, 0x1C5DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DA0u;
label_1c5da0:
    // 0x1c5da0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5da4: 0xc04db48  jal         func_136D20
    ctx->pc = 0x1C5DA4u;
    SET_GPR_U32(ctx, 31, 0x1C5DACu);
    ctx->pc = 0x1C5DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DA4u;
    // 0x1c5da8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D20u, 0x1C5DA4u, 0x1C5DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DACu;
label_1c5dac:
    // 0x1c5dac: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x1c5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1c5db0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5db4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c5db8: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x1c5db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
    // 0x1c5dbc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1C5DBCu;
    {
        const bool branch_taken_0x1c5dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DBCu;
        // 0x1c5dc0: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5dbc) {
            ctx->pc = 0x1C5EC0u;
            goto label_1c5ec0;
        }
    }
    ctx->pc = 0x1C5DC4u;
label_1c5dc4:
    // 0x1c5dc4: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x1c5dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1c5dc8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c5dcc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5DCCu;
    {
        const bool branch_taken_0x1c5dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5dcc) {
            ctx->pc = 0x1C5DE8u;
            goto label_1c5de8;
        }
    }
    ctx->pc = 0x1C5DD4u;
    // 0x1c5dd4: 0xc04d988  jal         func_136620
    ctx->pc = 0x1C5DD4u;
    SET_GPR_U32(ctx, 31, 0x1C5DDCu);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1C5DD4u, 0x1C5DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DDCu;
label_1c5ddc:
    // 0x1c5ddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5de0: 0xc04db48  jal         func_136D20
    ctx->pc = 0x1C5DE0u;
    SET_GPR_U32(ctx, 31, 0x1C5DE8u);
    ctx->pc = 0x1C5DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DE0u;
    // 0x1c5de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D20u, 0x1C5DE0u, 0x1C5DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DE8u;
label_1c5de8:
    // 0x1c5de8: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x1c5de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1c5dec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c5decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c5df0: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x1c5df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1c5df4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x1c5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1c5df8: 0x1c400031  bgtz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C5DF8u;
    {
        const bool branch_taken_0x1c5df8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1c5df8) {
            ctx->pc = 0x1C5EC0u;
            goto label_1c5ec0;
        }
    }
    ctx->pc = 0x1C5E00u;
    // 0x1c5e00: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1C5E00u;
    {
        const bool branch_taken_0x1c5e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E00u;
        // 0x1c5e04: 0xae400050  sw          $zero, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e00) {
            ctx->pc = 0x1C5EC0u;
            goto label_1c5ec0;
        }
    }
    ctx->pc = 0x1C5E08u;
label_1c5e08:
    // 0x1c5e08: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1C5E08u;
    SET_GPR_U32(ctx, 31, 0x1C5E10u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1C5E08u, 0x1C5E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E10u;
label_1c5e10:
    // 0x1c5e10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e14: 0xc062948  jal         func_18A520
    ctx->pc = 0x1C5E14u;
    SET_GPR_U32(ctx, 31, 0x1C5E1Cu);
    ctx->pc = 0x1C5E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E14u;
    // 0x1c5e18: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x1C5E14u, 0x1C5E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E1Cu;
label_1c5e1c:
    // 0x1c5e1c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1C5E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C5E24u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1C5E1Cu, 0x1C5E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E24u;
label_1c5e24:
    // 0x1c5e24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e28: 0xc062994  jal         func_18A650
    ctx->pc = 0x1C5E28u;
    SET_GPR_U32(ctx, 31, 0x1C5E30u);
    ctx->pc = 0x1C5E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E28u;
    // 0x1c5e2c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A650u, 0x1C5E28u, 0x1C5E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E30u;
label_1c5e30:
    // 0x1c5e30: 0xc06d334  jal         func_1B4CD0
    ctx->pc = 0x1C5E30u;
    SET_GPR_U32(ctx, 31, 0x1C5E38u);
    ctx->pc = 0x1B4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4CD0u, 0x1C5E30u, 0x1C5E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E38u;
label_1c5e38:
    // 0x1c5e38: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1C5E38u;
    SET_GPR_U32(ctx, 31, 0x1C5E40u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1C5E38u, 0x1C5E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E40u;
label_1c5e40:
    // 0x1c5e40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e44: 0xc062948  jal         func_18A520
    ctx->pc = 0x1C5E44u;
    SET_GPR_U32(ctx, 31, 0x1C5E4Cu);
    ctx->pc = 0x1C5E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E44u;
    // 0x1c5e48: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x1C5E44u, 0x1C5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E4Cu;
label_1c5e4c:
    // 0x1c5e4c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1C5E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C5E54u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1C5E4Cu, 0x1C5E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E54u;
label_1c5e54:
    // 0x1c5e54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e58: 0xc062994  jal         func_18A650
    ctx->pc = 0x1C5E58u;
    SET_GPR_U32(ctx, 31, 0x1C5E60u);
    ctx->pc = 0x1C5E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E58u;
    // 0x1c5e5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A650u, 0x1C5E58u, 0x1C5E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E60u;
label_1c5e60:
    // 0x1c5e60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5e64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5e68: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1c5e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1c5e6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e70: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c5e70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5e74: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1C5E74u;
    SET_GPR_U32(ctx, 31, 0x1C5E7Cu);
    ctx->pc = 0x1C5E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E74u;
    // 0x1c5e78: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1C5E74u, 0x1C5E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E7Cu;
label_1c5e7c:
    // 0x1c5e7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5e80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e84: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c5e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5e88: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c5e88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5e8c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1c5e8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5e90: 0xc053c00  jal         func_14F000
    ctx->pc = 0x1C5E90u;
    SET_GPR_U32(ctx, 31, 0x1C5E98u);
    ctx->pc = 0x1C5E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E90u;
    // 0x1c5e94: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x1C5E90u, 0x1C5E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E98u;
label_1c5e98:
    // 0x1c5e98: 0xc04d988  jal         func_136620
    ctx->pc = 0x1C5E98u;
    SET_GPR_U32(ctx, 31, 0x1C5EA0u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1C5E98u, 0x1C5EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5EA0u;
label_1c5ea0:
    // 0x1c5ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ea4: 0xc04db48  jal         func_136D20
    ctx->pc = 0x1C5EA4u;
    SET_GPR_U32(ctx, 31, 0x1C5EACu);
    ctx->pc = 0x1C5EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5EA4u;
    // 0x1c5ea8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D20u, 0x1C5EA4u, 0x1C5EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5EACu;
label_1c5eac:
    // 0x1c5eac: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x1c5eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1c5eb0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c5eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5eb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c5eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c5eb8: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x1c5eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
    // 0x1c5ebc: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x1c5ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_1c5ec0:
    // 0x1c5ec0: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1c5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1c5ec4: 0x144000de  bnez        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x1C5EC4u;
    {
        const bool branch_taken_0x1c5ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5ec4) {
            ctx->pc = 0x1C6240u;
            goto label_1c6240;
        }
    }
    ctx->pc = 0x1C5ECCu;
    // 0x1c5ecc: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5ed0: 0x8c24c688  lw          $a0, -0x3978($at)
    ctx->pc = 0x1c5ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C688u));
    // 0x1c5ed4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5ed8: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1c5ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x22C7F8u));
    // 0x1c5edc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5EDCu;
    {
        const bool branch_taken_0x1c5edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EDCu;
        // 0x1c5ee0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5edc) {
            ctx->pc = 0x1C5EF0u;
            goto label_1c5ef0;
        }
    }
    ctx->pc = 0x1C5EE4u;
    // 0x1c5ee4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1c5ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1c5ee8: 0x90232eb6  lbu         $v1, 0x2EB6($at)
    ctx->pc = 0x1c5ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EB6u));
    // 0x1c5eec: 0x0  nop
    ctx->pc = 0x1c5eecu;
    // NOP
label_1c5ef0:
    // 0x1c5ef0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5EF0u;
    {
        const bool branch_taken_0x1c5ef0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EF0u;
        // 0x1c5ef4: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ef0) {
            ctx->pc = 0x1C5F00u;
            goto label_1c5f00;
        }
    }
    ctx->pc = 0x1C5EF8u;
    // 0x1c5ef8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5EF8u;
    {
        const bool branch_taken_0x1c5ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EF8u;
        // 0x1c5efc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ef8) {
            ctx->pc = 0x1C5F20u;
            goto label_1c5f20;
        }
    }
    ctx->pc = 0x1C5F00u;
label_1c5f00:
    // 0x1c5f00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c5f04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5f08: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1c5f08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c5f0c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5F0Cu;
    {
        const bool branch_taken_0x1c5f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c5f0c) {
            ctx->pc = 0x1C5F1Cu;
            goto label_1c5f1c;
        }
    }
    ctx->pc = 0x1C5F14u;
    // 0x1c5f14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5F14u;
    {
        const bool branch_taken_0x1c5f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f14) {
            ctx->pc = 0x1C5F20u;
            goto label_1c5f20;
        }
    }
    ctx->pc = 0x1C5F1Cu;
label_1c5f1c:
    // 0x1c5f1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c5f1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5f20:
    // 0x1c5f20: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C5F20u;
    {
        const bool branch_taken_0x1c5f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f20) {
            ctx->pc = 0x1C5FE8u;
            goto label_1c5fe8;
        }
    }
    ctx->pc = 0x1C5F28u;
    // 0x1c5f28: 0x9242006c  lbu         $v0, 0x6C($s2)
    ctx->pc = 0x1c5f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x1c5f2c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C5F2Cu;
    {
        const bool branch_taken_0x1c5f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f2c) {
            ctx->pc = 0x1C5FB8u;
            goto label_1c5fb8;
        }
    }
    ctx->pc = 0x1C5F34u;
    // 0x1c5f34: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x1c5f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c5f38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5f3c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C5F3Cu;
    {
        const bool branch_taken_0x1c5f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F3Cu;
        // 0x1c5f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f3c) {
            ctx->pc = 0x1C5FA4u;
            goto label_1c5fa4;
        }
    }
    ctx->pc = 0x1C5F44u;
    // 0x1c5f44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5f48: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C5F48u;
    {
        const bool branch_taken_0x1c5f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F48u;
        // 0x1c5f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f48) {
            ctx->pc = 0x1C5F90u;
            goto label_1c5f90;
        }
    }
    ctx->pc = 0x1C5F50u;
    // 0x1c5f50: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C5F50u;
    {
        const bool branch_taken_0x1c5f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5f50) {
            ctx->pc = 0x1C5F7Cu;
            goto label_1c5f7c;
        }
    }
    ctx->pc = 0x1C5F58u;
    // 0x1c5f58: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5F58u;
    {
        const bool branch_taken_0x1c5f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f58) {
            ctx->pc = 0x1C5F68u;
            goto label_1c5f68;
        }
    }
    ctx->pc = 0x1C5F60u;
    // 0x1c5f60: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1C5F60u;
    {
        const bool branch_taken_0x1c5f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F60u;
        // 0x1c5f64: 0x9242006c  lbu         $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f60) {
            ctx->pc = 0x1C5FECu;
            goto label_1c5fec;
        }
    }
    ctx->pc = 0x1C5F68u;
label_1c5f68:
    // 0x1c5f68: 0xa242006d  sb          $v0, 0x6D($s2)
    ctx->pc = 0x1c5f68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 109), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c5f6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c5f70: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x1c5f70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x1c5f74: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C5F74u;
    {
        const bool branch_taken_0x1c5f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F74u;
        // 0x1c5f78: 0xae400074  sw          $zero, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f74) {
            ctx->pc = 0x1C5FE8u;
            goto label_1c5fe8;
        }
    }
    ctx->pc = 0x1C5F7Cu;
label_1c5f7c:
    // 0x1c5f7c: 0xc06d328  jal         func_1B4CA0
    ctx->pc = 0x1C5F7Cu;
    SET_GPR_U32(ctx, 31, 0x1C5F84u);
    ctx->pc = 0x1B4CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4CA0u, 0x1C5F7Cu, 0x1C5F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F84u;
label_1c5f84:
    // 0x1c5f84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5f88: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1C5F88u;
    {
        const bool branch_taken_0x1c5f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F88u;
        // 0x1c5f8c: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f88) {
            ctx->pc = 0x1C5FE8u;
            goto label_1c5fe8;
        }
    }
    ctx->pc = 0x1C5F90u;
label_1c5f90:
    // 0x1c5f90: 0xc06d31c  jal         func_1B4C70
    ctx->pc = 0x1C5F90u;
    SET_GPR_U32(ctx, 31, 0x1C5F98u);
    ctx->pc = 0x1B4C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C70u, 0x1C5F90u, 0x1C5F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F98u;
label_1c5f98:
    // 0x1c5f98: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c5f9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C5F9Cu;
    {
        const bool branch_taken_0x1c5f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F9Cu;
        // 0x1c5fa0: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f9c) {
            ctx->pc = 0x1C5FE8u;
            goto label_1c5fe8;
        }
    }
    ctx->pc = 0x1C5FA4u;
label_1c5fa4:
    // 0x1c5fa4: 0xc0718e4  jal         func_1C6390
    ctx->pc = 0x1C5FA4u;
    SET_GPR_U32(ctx, 31, 0x1C5FACu);
    ctx->pc = 0x1C5FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5FA4u;
    // 0x1c5fa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6390u, 0x1C5FA4u, 0x1C5FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FACu;
label_1c5fac:
    // 0x1c5fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5fb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C5FB0u;
    {
        const bool branch_taken_0x1c5fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FB0u;
        // 0x1c5fb4: 0xa242006c  sb          $v0, 0x6C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 108), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fb0) {
            ctx->pc = 0x1C5FE8u;
            goto label_1c5fe8;
        }
    }
    ctx->pc = 0x1C5FB8u;
label_1c5fb8:
    // 0x1c5fb8: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x1c5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1c5fbc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5FBCu;
    {
        const bool branch_taken_0x1c5fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FBCu;
        // 0x1c5fc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fbc) {
            ctx->pc = 0x1C5FDCu;
            goto label_1c5fdc;
        }
    }
    ctx->pc = 0x1C5FC4u;
    // 0x1c5fc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5fc8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c5fcc: 0xa243006d  sb          $v1, 0x6D($s2)
    ctx->pc = 0x1c5fccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 109), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5fd0: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x1c5fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x1c5fd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5FD4u;
    {
        const bool branch_taken_0x1c5fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FD4u;
        // 0x1c5fd8: 0xae430074  sw          $v1, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fd4) {
            ctx->pc = 0x1C5FE8u;
            goto label_1c5fe8;
        }
    }
    ctx->pc = 0x1C5FDCu;
label_1c5fdc:
    // 0x1c5fdc: 0xc0718e4  jal         func_1C6390
    ctx->pc = 0x1C5FDCu;
    SET_GPR_U32(ctx, 31, 0x1C5FE4u);
    ctx->pc = 0x1C5FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5FDCu;
    // 0x1c5fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6390u, 0x1C5FDCu, 0x1C5FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FE4u;
label_1c5fe4:
    // 0x1c5fe4: 0xa240006c  sb          $zero, 0x6C($s2)
    ctx->pc = 0x1c5fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 108), (uint8_t)GPR_U32(ctx, 0));
label_1c5fe8:
    // 0x1c5fe8: 0x9242006c  lbu         $v0, 0x6C($s2)
    ctx->pc = 0x1c5fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 108)));
label_1c5fec:
    // 0x1c5fec: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1C5FECu;
    {
        const bool branch_taken_0x1c5fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FECu;
        // 0x1c5ff0: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fec) {
            ctx->pc = 0x1C6120u;
            goto label_1c6120;
        }
    }
    ctx->pc = 0x1C5FF4u;
    // 0x1c5ff4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5ff8: 0x8c24c688  lw          $a0, -0x3978($at)
    ctx->pc = 0x1c5ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C688u));
    // 0x1c5ffc: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c6000: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1c6000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x22C7F8u));
    // 0x1c6004: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6004u;
    {
        const bool branch_taken_0x1c6004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6004u;
        // 0x1c6008: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6004) {
            ctx->pc = 0x1C6018u;
            goto label_1c6018;
        }
    }
    ctx->pc = 0x1C600Cu;
    // 0x1c600c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1c600cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1c6010: 0x90232ebc  lbu         $v1, 0x2EBC($at)
    ctx->pc = 0x1c6010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EBCu));
    // 0x1c6014: 0x0  nop
    ctx->pc = 0x1c6014u;
    // NOP
label_1c6018:
    // 0x1c6018: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6018u;
    {
        const bool branch_taken_0x1c6018 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6018u;
        // 0x1c601c: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6018) {
            ctx->pc = 0x1C6028u;
            goto label_1c6028;
        }
    }
    ctx->pc = 0x1C6020u;
    // 0x1c6020: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6020u;
    {
        const bool branch_taken_0x1c6020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6020u;
        // 0x1c6024: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6020) {
            ctx->pc = 0x1C6048u;
            goto label_1c6048;
        }
    }
    ctx->pc = 0x1C6028u;
label_1c6028:
    // 0x1c6028: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c6028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c602c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c602cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6030: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1c6030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c6034: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6034u;
    {
        const bool branch_taken_0x1c6034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c6034) {
            ctx->pc = 0x1C6044u;
            goto label_1c6044;
        }
    }
    ctx->pc = 0x1C603Cu;
    // 0x1c603c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C603Cu;
    {
        const bool branch_taken_0x1c603c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c603c) {
            ctx->pc = 0x1C6048u;
            goto label_1c6048;
        }
    }
    ctx->pc = 0x1C6044u;
label_1c6044:
    // 0x1c6044: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c6044u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6048:
    // 0x1c6048: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C6048u;
    {
        const bool branch_taken_0x1c6048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6048) {
            ctx->pc = 0x1C6084u;
            goto label_1c6084;
        }
    }
    ctx->pc = 0x1C6050u;
    // 0x1c6050: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x1c6050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c6054: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c6054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c6058: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1c6058u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1c605c: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x1c605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c6060: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6060u;
    {
        const bool branch_taken_0x1c6060 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6060u;
        // 0x1c6064: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6060) {
            ctx->pc = 0x1C606Cu;
            goto label_1c606c;
        }
    }
    ctx->pc = 0x1C6068u;
    // 0x1c6068: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1c6068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
label_1c606c:
    // 0x1c606c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1C606Cu;
    SET_GPR_U32(ctx, 31, 0x1C6074u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1C606Cu, 0x1C6074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6074u;
label_1c6074:
    // 0x1c6074: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6078: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c6078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c607c: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1C607Cu;
    SET_GPR_U32(ctx, 31, 0x1C6084u);
    ctx->pc = 0x1C6080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C607Cu;
    // 0x1c6080: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1C607Cu, 0x1C6084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6084u;
label_1c6084:
    // 0x1c6084: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c6084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c6088: 0x8c24c688  lw          $a0, -0x3978($at)
    ctx->pc = 0x1c6088u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C688u));
    // 0x1c608c: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c608cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c6090: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1c6090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x22C7F8u));
    // 0x1c6094: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6094u;
    {
        const bool branch_taken_0x1c6094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6094u;
        // 0x1c6098: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6094) {
            ctx->pc = 0x1C60A8u;
            goto label_1c60a8;
        }
    }
    ctx->pc = 0x1C609Cu;
    // 0x1c609c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1c609cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1c60a0: 0x90232ebe  lbu         $v1, 0x2EBE($at)
    ctx->pc = 0x1c60a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EBEu));
    // 0x1c60a4: 0x0  nop
    ctx->pc = 0x1c60a4u;
    // NOP
label_1c60a8:
    // 0x1c60a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C60A8u;
    {
        const bool branch_taken_0x1c60a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60A8u;
        // 0x1c60ac: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60a8) {
            ctx->pc = 0x1C60B8u;
            goto label_1c60b8;
        }
    }
    ctx->pc = 0x1C60B0u;
    // 0x1c60b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C60B0u;
    {
        const bool branch_taken_0x1c60b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60B0u;
        // 0x1c60b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60b0) {
            ctx->pc = 0x1C60D8u;
            goto label_1c60d8;
        }
    }
    ctx->pc = 0x1C60B8u;
label_1c60b8:
    // 0x1c60b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c60b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c60bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c60bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c60c0: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1c60c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c60c4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C60C4u;
    {
        const bool branch_taken_0x1c60c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c60c4) {
            ctx->pc = 0x1C60D4u;
            goto label_1c60d4;
        }
    }
    ctx->pc = 0x1C60CCu;
    // 0x1c60cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C60CCu;
    {
        const bool branch_taken_0x1c60cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c60cc) {
            ctx->pc = 0x1C60D8u;
            goto label_1c60d8;
        }
    }
    ctx->pc = 0x1C60D4u;
label_1c60d4:
    // 0x1c60d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c60d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c60d8:
    // 0x1c60d8: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x1C60D8u;
    {
        const bool branch_taken_0x1c60d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c60d8) {
            ctx->pc = 0x1C6240u;
            goto label_1c6240;
        }
    }
    ctx->pc = 0x1C60E0u;
    // 0x1c60e0: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x1c60e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c60e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c60e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c60e8: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1c60e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1c60ec: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x1c60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c60f0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1c60f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c60f4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C60F4u;
    {
        const bool branch_taken_0x1c60f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c60f4) {
            ctx->pc = 0x1C6100u;
            goto label_1c6100;
        }
    }
    ctx->pc = 0x1C60FCu;
    // 0x1c60fc: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x1c60fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_1c6100:
    // 0x1c6100: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1C6100u;
    SET_GPR_U32(ctx, 31, 0x1C6108u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1C6100u, 0x1C6108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6108u;
label_1c6108:
    // 0x1c6108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c610c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c610cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c6110: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1C6110u;
    SET_GPR_U32(ctx, 31, 0x1C6118u);
    ctx->pc = 0x1C6114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6110u;
    // 0x1c6114: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1C6110u, 0x1C6118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6118u;
label_1c6118:
    // 0x1c6118: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1C6118u;
    {
        const bool branch_taken_0x1c6118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6118) {
            ctx->pc = 0x1C6240u;
            goto label_1c6240;
        }
    }
    ctx->pc = 0x1C6120u;
label_1c6120:
    // 0x1c6120: 0x8c24c688  lw          $a0, -0x3978($at)
    ctx->pc = 0x1c6120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952584)));
    // 0x1c6124: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c6124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c6128: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1c6128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x22C7F8u));
    // 0x1c612c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C612Cu;
    {
        const bool branch_taken_0x1c612c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C612Cu;
        // 0x1c6130: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c612c) {
            ctx->pc = 0x1C6140u;
            goto label_1c6140;
        }
    }
    ctx->pc = 0x1C6134u;
    // 0x1c6134: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1c6134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1c6138: 0x90232ebf  lbu         $v1, 0x2EBF($at)
    ctx->pc = 0x1c6138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EBFu));
    // 0x1c613c: 0x0  nop
    ctx->pc = 0x1c613cu;
    // NOP
label_1c6140:
    // 0x1c6140: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6140u;
    {
        const bool branch_taken_0x1c6140 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6140u;
        // 0x1c6144: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6140) {
            ctx->pc = 0x1C6150u;
            goto label_1c6150;
        }
    }
    ctx->pc = 0x1C6148u;
    // 0x1c6148: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6148u;
    {
        const bool branch_taken_0x1c6148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6148u;
        // 0x1c614c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6148) {
            ctx->pc = 0x1C6170u;
            goto label_1c6170;
        }
    }
    ctx->pc = 0x1C6150u;
label_1c6150:
    // 0x1c6150: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c6150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c6154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c6154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6158: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1c6158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c615c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C615Cu;
    {
        const bool branch_taken_0x1c615c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c615c) {
            ctx->pc = 0x1C616Cu;
            goto label_1c616c;
        }
    }
    ctx->pc = 0x1C6164u;
    // 0x1c6164: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6164u;
    {
        const bool branch_taken_0x1c6164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6164) {
            ctx->pc = 0x1C6170u;
            goto label_1c6170;
        }
    }
    ctx->pc = 0x1C616Cu;
label_1c616c:
    // 0x1c616c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c616cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6170:
    // 0x1c6170: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6170u;
    {
        const bool branch_taken_0x1c6170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6170u;
        // 0x1c6174: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6170) {
            ctx->pc = 0x1C617Cu;
            goto label_1c617c;
        }
    }
    ctx->pc = 0x1C6178u;
    // 0x1c6178: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x1c6178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
label_1c617c:
    // 0x1c617c: 0x8c24c688  lw          $a0, -0x3978($at)
    ctx->pc = 0x1c617cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952584)));
    // 0x1c6180: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c6180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c6184: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1c6184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x22C7F8u));
    // 0x1c6188: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6188u;
    {
        const bool branch_taken_0x1c6188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6188u;
        // 0x1c618c: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6188) {
            ctx->pc = 0x1C619Cu;
            goto label_1c619c;
        }
    }
    ctx->pc = 0x1C6190u;
    // 0x1c6190: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1c6190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1c6194: 0x90232ebd  lbu         $v1, 0x2EBD($at)
    ctx->pc = 0x1c6194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EBDu));
    // 0x1c6198: 0x0  nop
    ctx->pc = 0x1c6198u;
    // NOP
label_1c619c:
    // 0x1c619c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C619Cu;
    {
        const bool branch_taken_0x1c619c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C619Cu;
        // 0x1c61a0: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c619c) {
            ctx->pc = 0x1C61ACu;
            goto label_1c61ac;
        }
    }
    ctx->pc = 0x1C61A4u;
    // 0x1c61a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C61A4u;
    {
        const bool branch_taken_0x1c61a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61A4u;
        // 0x1c61a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61a4) {
            ctx->pc = 0x1C61CCu;
            goto label_1c61cc;
        }
    }
    ctx->pc = 0x1C61ACu;
label_1c61ac:
    // 0x1c61ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c61acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c61b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61b4: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1c61b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c61b8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C61B8u;
    {
        const bool branch_taken_0x1c61b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c61b8) {
            ctx->pc = 0x1C61C8u;
            goto label_1c61c8;
        }
    }
    ctx->pc = 0x1C61C0u;
    // 0x1c61c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C61C0u;
    {
        const bool branch_taken_0x1c61c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c61c0) {
            ctx->pc = 0x1C61CCu;
            goto label_1c61cc;
        }
    }
    ctx->pc = 0x1C61C8u;
label_1c61c8:
    // 0x1c61c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c61c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c61cc:
    // 0x1c61cc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C61CCu;
    {
        const bool branch_taken_0x1c61cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61CCu;
        // 0x1c61d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61cc) {
            ctx->pc = 0x1C61D8u;
            goto label_1c61d8;
        }
    }
    ctx->pc = 0x1C61D4u;
    // 0x1c61d4: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x1c61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_1c61d8:
    // 0x1c61d8: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x1c61d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1c61dc: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x1c61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1c61e0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C61E0u;
    {
        const bool branch_taken_0x1c61e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c61e0) {
            ctx->pc = 0x1C6240u;
            goto label_1c6240;
        }
    }
    ctx->pc = 0x1C61E8u;
    // 0x1c61e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c61e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c61ec: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c61ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c61f0: 0x24a51f80  addiu       $a1, $a1, 0x1F80
    ctx->pc = 0x1c61f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8064));
    // 0x1c61f4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C61F4u;
    SET_GPR_U32(ctx, 31, 0x1C61FCu);
    ctx->pc = 0x1C61F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61F4u;
    // 0x1c61f8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C61F4u, 0x1C61FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61FCu;
label_1c61fc:
    // 0x1c61fc: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x1c61fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1c6200: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C6200u;
    SET_GPR_U32(ctx, 31, 0x1C6208u);
    ctx->pc = 0x1C6204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6200u;
    // 0x1c6204: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C6200u, 0x1C6208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6208u;
label_1c6208:
    // 0x1c6208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c620c: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c620cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c6210: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C6210u;
    SET_GPR_U32(ctx, 31, 0x1C6218u);
    ctx->pc = 0x1C6214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6210u;
    // 0x1c6214: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C6210u, 0x1C6218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6218u;
label_1c6218:
    // 0x1c6218: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x1c6218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1c621c: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C621Cu;
    SET_GPR_U32(ctx, 31, 0x1C6224u);
    ctx->pc = 0x1C6220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C621Cu;
    // 0x1c6220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C621Cu, 0x1C6224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6224u;
label_1c6224:
    // 0x1c6224: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C6224u;
    SET_GPR_U32(ctx, 31, 0x1C622Cu);
    ctx->pc = 0x1C6228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6224u;
    // 0x1c6228: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C6224u, 0x1C622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C622Cu;
label_1c622c:
    // 0x1c622c: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x1c622cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1c6230: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C6230u;
    SET_GPR_U32(ctx, 31, 0x1C6238u);
    ctx->pc = 0x1C6234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6230u;
    // 0x1c6234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C6230u, 0x1C6238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6238u;
label_1c6238:
    // 0x1c6238: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C6238u;
    SET_GPR_U32(ctx, 31, 0x1C6240u);
    ctx->pc = 0x1C623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6238u;
    // 0x1c623c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C6238u, 0x1C6240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6240u;
label_1c6240:
    // 0x1c6240: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c6240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c6244: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c6244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c6248: 0x24a51f20  addiu       $a1, $a1, 0x1F20
    ctx->pc = 0x1c6248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7968));
    // 0x1c624c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C624Cu;
    SET_GPR_U32(ctx, 31, 0x1C6254u);
    ctx->pc = 0x1C6250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C624Cu;
    // 0x1c6250: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C624Cu, 0x1C6254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6254u;
label_1c6254:
    // 0x1c6254: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x1c6254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1c6258: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C6258u;
    SET_GPR_U32(ctx, 31, 0x1C6260u);
    ctx->pc = 0x1C625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6258u;
    // 0x1c625c: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C6258u, 0x1C6260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6260u;
label_1c6260:
    // 0x1c6260: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6264: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c6264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c6268: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C6268u;
    SET_GPR_U32(ctx, 31, 0x1C6270u);
    ctx->pc = 0x1C626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6268u;
    // 0x1c626c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C6268u, 0x1C6270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6270u;
label_1c6270:
    // 0x1c6270: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x1c6270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c6274: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1c6274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1c6278: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C6278u;
    {
        const bool branch_taken_0x1c6278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6278u;
        // 0x1c627c: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6278) {
            ctx->pc = 0x1C6358u;
            goto label_1c6358;
        }
    }
    ctx->pc = 0x1C6280u;
    // 0x1c6280: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c6280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1c6284: 0x9042282b  lbu         $v0, 0x282B($v0)
    ctx->pc = 0x1c6284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10283)));
    // 0x1c6288: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C6288u;
    {
        const bool branch_taken_0x1c6288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6288u;
        // 0x1c628c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6288) {
            ctx->pc = 0x1C62D8u;
            goto label_1c62d8;
        }
    }
    ctx->pc = 0x1C6290u;
    // 0x1c6290: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1C6290u;
    SET_GPR_U32(ctx, 31, 0x1C6298u);
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1C6290u, 0x1C6298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6298u;
label_1c6298:
    // 0x1c6298: 0xc072e84  jal         func_1CBA10
    ctx->pc = 0x1C6298u;
    SET_GPR_U32(ctx, 31, 0x1C62A0u);
    ctx->pc = 0x1C629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6298u;
    // 0x1c629c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBA10u, 0x1C6298u, 0x1C62A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62A0u;
label_1c62a0:
    // 0x1c62a0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1c62a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c62a4: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C62A4u;
    {
        const bool branch_taken_0x1c62a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c62a4) {
            ctx->pc = 0x1C62D4u;
            goto label_1c62d4;
        }
    }
    ctx->pc = 0x1C62ACu;
    // 0x1c62ac: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1C62ACu;
    SET_GPR_U32(ctx, 31, 0x1C62B4u);
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1C62ACu, 0x1C62B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62B4u;
label_1c62b4:
    // 0x1c62b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c62b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c62b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c62b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c62bc: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1c62bcu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c62c0: 0x0  nop
    ctx->pc = 0x1c62c0u;
    // NOP
    // 0x1c62c4: 0x0  nop
    ctx->pc = 0x1c62c4u;
    // NOP
    // 0x1c62c8: 0x1010  mfhi        $v0
    ctx->pc = 0x1c62c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c62cc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C62CCu;
    {
        const bool branch_taken_0x1c62cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c62cc) {
            ctx->pc = 0x1C62D8u;
            goto label_1c62d8;
        }
    }
    ctx->pc = 0x1C62D4u;
label_1c62d4:
    // 0x1c62d4: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1c62d4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1c62d8:
    // 0x1c62d8: 0xc07308c  jal         func_1CC230
    ctx->pc = 0x1C62D8u;
    SET_GPR_U32(ctx, 31, 0x1C62E0u);
    ctx->pc = 0x1CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC230u, 0x1C62D8u, 0x1C62E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62E0u;
label_1c62e0:
    // 0x1c62e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c62e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c62e4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C62E4u;
    {
        const bool branch_taken_0x1c62e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c62e4) {
            ctx->pc = 0x1C62F4u;
            goto label_1c62f4;
        }
    }
    ctx->pc = 0x1C62ECu;
    // 0x1c62ec: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C62ECu;
    {
        const bool branch_taken_0x1c62ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c62ec) {
            ctx->pc = 0x1C6330u;
            goto label_1c6330;
        }
    }
    ctx->pc = 0x1C62F4u;
label_1c62f4:
    // 0x1c62f4: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x1c62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c62f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c62fc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C62FCu;
    {
        const bool branch_taken_0x1c62fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c62fc) {
            ctx->pc = 0x1C6330u;
            goto label_1c6330;
        }
    }
    ctx->pc = 0x1C6304u;
    // 0x1c6304: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x1c6304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1c6308: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c6308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c630c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C630Cu;
    {
        const bool branch_taken_0x1c630c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c630c) {
            ctx->pc = 0x1C632Cu;
            goto label_1c632c;
        }
    }
    ctx->pc = 0x1C6314u;
    // 0x1c6314: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6314u;
    {
        const bool branch_taken_0x1c6314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6314) {
            ctx->pc = 0x1C6324u;
            goto label_1c6324;
        }
    }
    ctx->pc = 0x1C631Cu;
    // 0x1c631c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C631Cu;
    {
        const bool branch_taken_0x1c631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C631Cu;
        // 0x1c6320: 0x8e45005c  lw          $a1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c631c) {
            ctx->pc = 0x1C6334u;
            goto label_1c6334;
        }
    }
    ctx->pc = 0x1C6324u;
label_1c6324:
    // 0x1c6324: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6324u;
    {
        const bool branch_taken_0x1c6324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6324u;
        // 0x1c6328: 0xae42005c  sw          $v0, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6324) {
            ctx->pc = 0x1C6330u;
            goto label_1c6330;
        }
    }
    ctx->pc = 0x1C632Cu;
label_1c632c:
    // 0x1c632c: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x1c632cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_1c6330:
    // 0x1c6330: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x1c6330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_1c6334:
    // 0x1c6334: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C6334u;
    SET_GPR_U32(ctx, 31, 0x1C633Cu);
    ctx->pc = 0x1C6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6334u;
    // 0x1c6338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C6334u, 0x1C633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C633Cu;
label_1c633c:
    // 0x1c633c: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C633Cu;
    SET_GPR_U32(ctx, 31, 0x1C6344u);
    ctx->pc = 0x1C6340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C633Cu;
    // 0x1c6340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C633Cu, 0x1C6344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6344u;
label_1c6344:
    // 0x1c6344: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x1c6344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1c6348: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C6348u;
    SET_GPR_U32(ctx, 31, 0x1C6350u);
    ctx->pc = 0x1C634Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6348u;
    // 0x1c634c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C6348u, 0x1C6350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6350u;
label_1c6350:
    // 0x1c6350: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C6350u;
    SET_GPR_U32(ctx, 31, 0x1C6358u);
    ctx->pc = 0x1C6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6350u;
    // 0x1c6354: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C6350u, 0x1C6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6358u;
label_1c6358:
    // 0x1c6358: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x1c6358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c635c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c635cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6360: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x1c6360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x1c6364: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x1c6364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1c6368: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x1c6368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
label_1c636c:
    // 0x1c636c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c636cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c6370:
    // 0x1c6370: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c6370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c6374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c6378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c637c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C637Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C637Cu;
        // 0x1c6380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C637Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6384u;
}
