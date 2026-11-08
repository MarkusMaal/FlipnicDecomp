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

// Function: FUN_0013bb80
// Address: 0x13bb80 - 0x13bcb0
void FUN_0013bb80_0x13bb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013bb80_0x13bb80");
#endif

    switch (ctx->pc) {
        case 0x13bbf0u: goto label_13bbf0;
        case 0x13bbf8u: goto label_13bbf8;
        case 0x13bc00u: goto label_13bc00;
        case 0x13bc24u: goto label_13bc24;
        case 0x13bc2cu: goto label_13bc2c;
        case 0x13bc80u: goto label_13bc80;
        default: break;
    }

    ctx->pc = 0x13bb80u;

    // 0x13bb80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13bb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13bb84: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x13bb84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x13bb88: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13bb8c: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x13bb8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x13bb90: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13bb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13bb94: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x13bb94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x13bb98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13bb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13bb9c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x13bb9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x13bba0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13bba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13bba4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x13bba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x13bba8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13bba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13bbac: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x13bbacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x13bbb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13bbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13bbb4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13bbb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13bbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13bbbc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13bbbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13bbc4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x13bbc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbc8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x13bbc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbcc: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x13bbccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x13bbd0: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13BBD0u;
    {
        const bool branch_taken_0x13bbd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BBD0u;
        // 0x13bbd4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bbd0) {
            ctx->pc = 0x13BBF8u;
            goto label_13bbf8;
        }
    }
    ctx->pc = 0x13BBD8u;
    // 0x13bbd8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x13bbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x13bbdc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13bbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13bbe0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x13bbe4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13bbe8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13BBE8u;
    SET_GPR_U32(ctx, 31, 0x13BBF0u);
    ctx->pc = 0x13BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BBE8u;
    // 0x13bbec: 0x24a5efb0  addiu       $a1, $a1, -0x1050 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13BBE8u, 0x13BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BBF0u;
label_13bbf0:
    // 0x13bbf0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13BBF0u;
    SET_GPR_U32(ctx, 31, 0x13BBF8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13BBF0u, 0x13BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BBF8u;
label_13bbf8:
    // 0x13bbf8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13BBF8u;
    SET_GPR_U32(ctx, 31, 0x13BC00u);
    ctx->pc = 0x13BBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BBF8u;
    // 0x13bbfc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13BBF8u, 0x13BC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC00u;
label_13bc00:
    // 0x13bc00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13bc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc04: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x13BC04u;
    {
        const bool branch_taken_0x13bc04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC04u;
        // 0x13bc08: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc04) {
            ctx->pc = 0x13BC30u;
            goto label_13bc30;
        }
    }
    ctx->pc = 0x13BC0Cu;
    // 0x13bc0c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x13bc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x13bc10: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13bc14: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x13bc18: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13bc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13bc1c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13BC1Cu;
    SET_GPR_U32(ctx, 31, 0x13BC24u);
    ctx->pc = 0x13BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC1Cu;
    // 0x13bc20: 0x24a5ef90  addiu       $a1, $a1, -0x1070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13BC1Cu, 0x13BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC24u;
label_13bc24:
    // 0x13bc24: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13BC24u;
    SET_GPR_U32(ctx, 31, 0x13BC2Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13BC24u, 0x13BC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC2Cu;
label_13bc2c:
    // 0x13bc2c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x13bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_13bc30:
    // 0x13bc30: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BC30u;
    {
        const bool branch_taken_0x13bc30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc30) {
            ctx->pc = 0x13BC40u;
            goto label_13bc40;
        }
    }
    ctx->pc = 0x13BC38u;
    // 0x13bc38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13bc3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_13bc40:
    // 0x13bc40: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x13bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x13bc44: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x13bc48: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13bc4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13bc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13bc50: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x13bc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x13bc54: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BC54u;
    {
        const bool branch_taken_0x13bc54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC54u;
        // 0x13bc58: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc54) {
            ctx->pc = 0x13BC64u;
            goto label_13bc64;
        }
    }
    ctx->pc = 0x13BC5Cu;
    // 0x13bc5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13BC5Cu;
    {
        const bool branch_taken_0x13bc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC5Cu;
        // 0x13bc60: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc5c) {
            ctx->pc = 0x13BC68u;
            goto label_13bc68;
        }
    }
    ctx->pc = 0x13BC64u;
label_13bc64:
    // 0x13bc64: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x13bc64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_13bc68:
    // 0x13bc68: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13bc6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13bc70: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x13bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x13bc74: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x13bc74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13bc78: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x13BC78u;
    SET_GPR_U32(ctx, 31, 0x13BC80u);
    ctx->pc = 0x13BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC78u;
    // 0x13bc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x13BC78u, 0x13BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC80u;
label_13bc80:
    // 0x13bc80: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x13BC80u;
    {
        const bool branch_taken_0x13bc80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC80u;
        // 0x13bc84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc80) {
            ctx->pc = 0x13BC8Cu;
            goto label_13bc8c;
        }
    }
    ctx->pc = 0x13BC88u;
    // 0x13bc88: 0xaeb00008  sw          $s0, 0x8($s5)
    ctx->pc = 0x13bc88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 16));
label_13bc8c:
    // 0x13bc8c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13bc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13bc90: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13bc90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13bc94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13bc94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bc98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13bc98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bc9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13bc9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13bca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bca8: 0x3e00008  jr          $ra
    ctx->pc = 0x13BCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCA8u;
        // 0x13bcac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BCB0u;
}
