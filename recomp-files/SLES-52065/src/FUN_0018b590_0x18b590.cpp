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

// Function: FUN_0018b590
// Address: 0x18b590 - 0x18b898
void FUN_0018b590_0x18b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018b590_0x18b590");
#endif

    switch (ctx->pc) {
        case 0x18b5ccu: goto label_18b5cc;
        case 0x18b5e0u: goto label_18b5e0;
        case 0x18b64cu: goto label_18b64c;
        case 0x18b660u: goto label_18b660;
        case 0x18b674u: goto label_18b674;
        case 0x18b684u: goto label_18b684;
        case 0x18b6a4u: goto label_18b6a4;
        case 0x18b6b4u: goto label_18b6b4;
        case 0x18b708u: goto label_18b708;
        case 0x18b71cu: goto label_18b71c;
        case 0x18b75cu: goto label_18b75c;
        case 0x18b76cu: goto label_18b76c;
        case 0x18b790u: goto label_18b790;
        case 0x18b7fcu: goto label_18b7fc;
        case 0x18b80cu: goto label_18b80c;
        case 0x18b82cu: goto label_18b82c;
        case 0x18b844u: goto label_18b844;
        case 0x18b868u: goto label_18b868;
        default: break;
    }

    ctx->pc = 0x18b590u;

    // 0x18b590: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18b594: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18b594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18b598: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18b598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18b59c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18b59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18b5a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18b5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18b5a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18b5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18b5a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b5ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18b5acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18b5b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b5b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18b5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18b5bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b5c0: 0x24a5fce0  addiu       $a1, $a1, -0x320
    ctx->pc = 0x18b5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    // 0x18b5c4: 0xc05f878  jal         func_17E1E0
    ctx->pc = 0x18B5C4u;
    SET_GPR_U32(ctx, 31, 0x18B5CCu);
    ctx->pc = 0x18B5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B5C4u;
    // 0x18b5c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18B5C4u, 0x18B5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B5CCu;
label_18b5cc:
    // 0x18b5cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18b5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18b5d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18b5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18b5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5d8: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x18B5D8u;
    SET_GPR_U32(ctx, 31, 0x18B5E0u);
    ctx->pc = 0x18B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B5D8u;
    // 0x18b5dc: 0x24a5fcf0  addiu       $a1, $a1, -0x310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x18B5D8u, 0x18B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B5E0u;
label_18b5e0:
    // 0x18b5e0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B5E0u;
    {
        const bool branch_taken_0x18b5e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18b5e0) {
            ctx->pc = 0x18B5F0u;
            goto label_18b5f0;
        }
    }
    ctx->pc = 0x18B5E8u;
    // 0x18b5e8: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x18B5E8u;
    {
        const bool branch_taken_0x18b5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5E8u;
        // 0x18b5ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5e8) {
            ctx->pc = 0x18B870u;
            goto label_18b870;
        }
    }
    ctx->pc = 0x18B5F0u;
label_18b5f0:
    // 0x18b5f0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B5F0u;
    {
        const bool branch_taken_0x18b5f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5F0u;
        // 0x18b5f4: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5f0) {
            ctx->pc = 0x18B600u;
            goto label_18b600;
        }
    }
    ctx->pc = 0x18B5F8u;
    // 0x18b5f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18B5F8u;
    {
        const bool branch_taken_0x18b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b5f8) {
            ctx->pc = 0x18B618u;
            goto label_18b618;
        }
    }
    ctx->pc = 0x18B600u;
label_18b600:
    // 0x18b600: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18b600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b604: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x18b604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b608: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18b608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18b60c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b610: 0x84740008  lh          $s4, 0x8($v1)
    ctx->pc = 0x18b610u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18b614: 0x0  nop
    ctx->pc = 0x18b614u;
    // NOP
label_18b618:
    // 0x18b618: 0x1e800003  bgtz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B618u;
    {
        const bool branch_taken_0x18b618 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x18b618) {
            ctx->pc = 0x18B628u;
            goto label_18b628;
        }
    }
    ctx->pc = 0x18B620u;
    // 0x18b620: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x18B620u;
    {
        const bool branch_taken_0x18b620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B620u;
        // 0x18b624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b620) {
            ctx->pc = 0x18B870u;
            goto label_18b870;
        }
    }
    ctx->pc = 0x18B628u;
label_18b628:
    // 0x18b628: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18b628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b62c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b630: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18b630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18b634: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x18b634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x18b638: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b63c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b640: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x18b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18b644: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x18B644u;
    {
        const bool branch_taken_0x18b644 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B644u;
        // 0x18b648: 0x62a821  addu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b644) {
            ctx->pc = 0x18B694u;
            goto label_18b694;
        }
    }
    ctx->pc = 0x18B64Cu;
label_18b64c:
    // 0x18b64c: 0x8ea60024  lw          $a2, 0x24($s5)
    ctx->pc = 0x18b64cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x18b650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b654: 0x8ea70020  lw          $a3, 0x20($s5)
    ctx->pc = 0x18b654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18b658: 0xc0532f0  jal         func_14CBC0
    ctx->pc = 0x18B658u;
    SET_GPR_U32(ctx, 31, 0x18B660u);
    ctx->pc = 0x18B65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B658u;
    // 0x18b65c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC0u, 0x18B658u, 0x18B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B660u;
label_18b660:
    // 0x18b660: 0xc6ac0028  lwc1        $f12, 0x28($s5)
    ctx->pc = 0x18b660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b664: 0x8ea50024  lw          $a1, 0x24($s5)
    ctx->pc = 0x18b664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x18b668: 0x8ea60020  lw          $a2, 0x20($s5)
    ctx->pc = 0x18b668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18b66c: 0xc053444  jal         func_14D110
    ctx->pc = 0x18B66Cu;
    SET_GPR_U32(ctx, 31, 0x18B674u);
    ctx->pc = 0x18B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B66Cu;
    // 0x18b670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D110u, 0x18B66Cu, 0x18B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B674u;
label_18b674:
    // 0x18b674: 0xc6ac002c  lwc1        $f12, 0x2C($s5)
    ctx->pc = 0x18b674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b678: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x18b678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18b67c: 0xc053428  jal         func_14D0A0
    ctx->pc = 0x18B67Cu;
    SET_GPR_U32(ctx, 31, 0x18B684u);
    ctx->pc = 0x18B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B67Cu;
    // 0x18b680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D0A0u, 0x18B67Cu, 0x18B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B684u;
label_18b684:
    // 0x18b684: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18b684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18b688: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x18b688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x18b68c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x18B68Cu;
    {
        const bool branch_taken_0x18b68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B68Cu;
        // 0x18b690: 0x26b50030  addiu       $s5, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b68c) {
            ctx->pc = 0x18B64Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b64c;
        }
    }
    ctx->pc = 0x18B694u;
label_18b694:
    // 0x18b694: 0x0  nop
    ctx->pc = 0x18b694u;
    // NOP
    // 0x18b698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b69c: 0xc053408  jal         func_14D020
    ctx->pc = 0x18B69Cu;
    SET_GPR_U32(ctx, 31, 0x18B6A4u);
    ctx->pc = 0x18B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B69Cu;
    // 0x18b6a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D020u, 0x18B69Cu, 0x18B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B6A4u;
label_18b6a4:
    // 0x18b6a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18b6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18b6a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18b6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6ac: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x18B6ACu;
    SET_GPR_U32(ctx, 31, 0x18B6B4u);
    ctx->pc = 0x18B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B6ACu;
    // 0x18b6b0: 0x24a5fd00  addiu       $a1, $a1, -0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x18B6ACu, 0x18B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B6B4u;
label_18b6b4:
    // 0x18b6b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18b6b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6b8: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6B8u;
    {
        const bool branch_taken_0x18b6b8 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x18b6b8) {
            ctx->pc = 0x18B6C8u;
            goto label_18b6c8;
        }
    }
    ctx->pc = 0x18B6C0u;
    // 0x18b6c0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x18B6C0u;
    {
        const bool branch_taken_0x18b6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6C0u;
        // 0x18b6c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6c0) {
            ctx->pc = 0x18B870u;
            goto label_18b870;
        }
    }
    ctx->pc = 0x18B6C8u;
label_18b6c8:
    // 0x18b6c8: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6C8u;
    {
        const bool branch_taken_0x18b6c8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x18B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6C8u;
        // 0x18b6cc: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6c8) {
            ctx->pc = 0x18B6D8u;
            goto label_18b6d8;
        }
    }
    ctx->pc = 0x18B6D0u;
    // 0x18b6d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18B6D0u;
    {
        const bool branch_taken_0x18b6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b6d0) {
            ctx->pc = 0x18B6F0u;
            goto label_18b6f0;
        }
    }
    ctx->pc = 0x18B6D8u;
label_18b6d8:
    // 0x18b6d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b6dc: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x18b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x18b6e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18b6e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b6e8: 0x84550008  lh          $s5, 0x8($v0)
    ctx->pc = 0x18b6e8u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18b6ec: 0x0  nop
    ctx->pc = 0x18b6ecu;
    // NOP
label_18b6f0:
    // 0x18b6f0: 0x1ea00003  bgtz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6F0u;
    {
        const bool branch_taken_0x18b6f0 = (GPR_S32(ctx, 21) > 0);
        ctx->pc = 0x18B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6F0u;
        // 0x18b6f4: 0x24042730  addiu       $a0, $zero, 0x2730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6f0) {
            ctx->pc = 0x18B700u;
            goto label_18b700;
        }
    }
    ctx->pc = 0x18B6F8u;
    // 0x18b6f8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x18B6F8u;
    {
        const bool branch_taken_0x18b6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6F8u;
        // 0x18b6fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6f8) {
            ctx->pc = 0x18B870u;
            goto label_18b870;
        }
    }
    ctx->pc = 0x18B700u;
label_18b700:
    // 0x18b700: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x18B700u;
    SET_GPR_U32(ctx, 31, 0x18B708u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x18B700u, 0x18B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B708u;
label_18b708:
    // 0x18b708: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18b708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b70c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B70Cu;
    {
        const bool branch_taken_0x18b70c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B70Cu;
        // 0x18b710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b70c) {
            ctx->pc = 0x18B720u;
            goto label_18b720;
        }
    }
    ctx->pc = 0x18B714u;
    // 0x18b714: 0xc062e28  jal         func_18B8A0
    ctx->pc = 0x18B714u;
    SET_GPR_U32(ctx, 31, 0x18B71Cu);
    ctx->pc = 0x18B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B8A0u, 0x18B714u, 0x18B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B71Cu;
label_18b71c:
    // 0x18b71c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18b71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b720:
    // 0x18b720: 0xae352718  sw          $s5, 0x2718($s1)
    ctx->pc = 0x18b720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10008), GPR_U32(ctx, 21));
    // 0x18b724: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x18b724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x18b728: 0xae23271c  sw          $v1, 0x271C($s1)
    ctx->pc = 0x18b728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10012), GPR_U32(ctx, 3));
    // 0x18b72c: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x18b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x18b730: 0xae202720  sw          $zero, 0x2720($s1)
    ctx->pc = 0x18b730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 0));
    // 0x18b734: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18b734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18b738: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18b738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b73c: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x18b73cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x18b740: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18b740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b744: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b748: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x18b748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18b74c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b750: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x18B750u;
    {
        const bool branch_taken_0x18b750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B750u;
        // 0x18b754: 0xae222724  sw          $v0, 0x2724($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10020), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b750) {
            ctx->pc = 0x18B77Cu;
            goto label_18b77c;
        }
    }
    ctx->pc = 0x18B758u;
    // 0x18b758: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x18b758u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b75c:
    // 0x18b75c: 0x8e222724  lw          $v0, 0x2724($s1)
    ctx->pc = 0x18b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18b760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b764: 0xc0531f4  jal         func_14C7D0
    ctx->pc = 0x18B764u;
    SET_GPR_U32(ctx, 31, 0x18B76Cu);
    ctx->pc = 0x18B768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B764u;
    // 0x18b768: 0x562821  addu        $a1, $v0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C7D0u, 0x18B764u, 0x18B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B76Cu;
label_18b76c:
    // 0x18b76c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x18b76cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x18b770: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x18b770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x18b774: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18B774u;
    {
        const bool branch_taken_0x18b774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B774u;
        // 0x18b778: 0x26d600a8  addiu       $s6, $s6, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b774) {
            ctx->pc = 0x18B75Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b75c;
        }
    }
    ctx->pc = 0x18B77Cu;
label_18b77c:
    // 0x18b77c: 0x0  nop
    ctx->pc = 0x18b77cu;
    // NOP
    // 0x18b780: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18b780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18b784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18b784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b788: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x18B788u;
    SET_GPR_U32(ctx, 31, 0x18B790u);
    ctx->pc = 0x18B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B788u;
    // 0x18b78c: 0x24a5fd10  addiu       $a1, $a1, -0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x18B788u, 0x18B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B790u;
label_18b790:
    // 0x18b790: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B790u;
    {
        const bool branch_taken_0x18b790 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18b790) {
            ctx->pc = 0x18B7A0u;
            goto label_18b7a0;
        }
    }
    ctx->pc = 0x18B798u;
    // 0x18b798: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x18B798u;
    {
        const bool branch_taken_0x18b798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B798u;
        // 0x18b79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b798) {
            ctx->pc = 0x18B870u;
            goto label_18b870;
        }
    }
    ctx->pc = 0x18B7A0u;
label_18b7a0:
    // 0x18b7a0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B7A0u;
    {
        const bool branch_taken_0x18b7a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7A0u;
        // 0x18b7a4: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7a0) {
            ctx->pc = 0x18B7B0u;
            goto label_18b7b0;
        }
    }
    ctx->pc = 0x18B7A8u;
    // 0x18b7a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18B7A8u;
    {
        const bool branch_taken_0x18b7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b7a8) {
            ctx->pc = 0x18B7C8u;
            goto label_18b7c8;
        }
    }
    ctx->pc = 0x18B7B0u;
label_18b7b0:
    // 0x18b7b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b7b4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x18b7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b7b8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18b7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18b7bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b7c0: 0x84740008  lh          $s4, 0x8($v1)
    ctx->pc = 0x18b7c0u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18b7c4: 0x0  nop
    ctx->pc = 0x18b7c4u;
    // NOP
label_18b7c8:
    // 0x18b7c8: 0x1e800003  bgtz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B7C8u;
    {
        const bool branch_taken_0x18b7c8 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x18b7c8) {
            ctx->pc = 0x18B7D8u;
            goto label_18b7d8;
        }
    }
    ctx->pc = 0x18B7D0u;
    // 0x18b7d0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x18B7D0u;
    {
        const bool branch_taken_0x18b7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7D0u;
        // 0x18b7d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7d0) {
            ctx->pc = 0x18B870u;
            goto label_18b870;
        }
    }
    ctx->pc = 0x18B7D8u;
label_18b7d8:
    // 0x18b7d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b7dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b7e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18b7e4: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x18b7e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x18b7e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b7ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18b7ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b7f0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x18b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18b7f4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x18B7F4u;
    {
        const bool branch_taken_0x18b7f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7F4u;
        // 0x18b7f8: 0x62a821  addu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7f4) {
            ctx->pc = 0x18B81Cu;
            goto label_18b81c;
        }
    }
    ctx->pc = 0x18B7FCu;
label_18b7fc:
    // 0x18b7fc: 0x8ea60020  lw          $a2, 0x20($s5)
    ctx->pc = 0x18b7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18b800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b804: 0xc053224  jal         func_14C890
    ctx->pc = 0x18B804u;
    SET_GPR_U32(ctx, 31, 0x18B80Cu);
    ctx->pc = 0x18B808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B804u;
    // 0x18b808: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C890u, 0x18B804u, 0x18B80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B80Cu;
label_18b80c:
    // 0x18b80c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18b80cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18b810: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x18b810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x18b814: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18B814u;
    {
        const bool branch_taken_0x18b814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B814u;
        // 0x18b818: 0x26b50024  addiu       $s5, $s5, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b814) {
            ctx->pc = 0x18B7FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b7fc;
        }
    }
    ctx->pc = 0x18B81Cu;
label_18b81c:
    // 0x18b81c: 0x0  nop
    ctx->pc = 0x18b81cu;
    // NOP
    // 0x18b820: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18b820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b824: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18B824u;
    {
        const bool branch_taken_0x18b824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B824u;
        // 0x18b828: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b824) {
            ctx->pc = 0x18B84Cu;
            goto label_18b84c;
        }
    }
    ctx->pc = 0x18B82Cu;
label_18b82c:
    // 0x18b82c: 0x8e222724  lw          $v0, 0x2724($s1)
    ctx->pc = 0x18b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18b830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b834: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x18b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x18b838: 0xc44c00a4  lwc1        $f12, 0xA4($v0)
    ctx->pc = 0x18b838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b83c: 0xc0533c8  jal         func_14CF20
    ctx->pc = 0x18B83Cu;
    SET_GPR_U32(ctx, 31, 0x18B844u);
    ctx->pc = 0x18B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B83Cu;
    // 0x18b840: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF20u, 0x18B83Cu, 0x18B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B844u;
label_18b844:
    // 0x18b844: 0x269400a8  addiu       $s4, $s4, 0xA8
    ctx->pc = 0x18b844u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 168));
    // 0x18b848: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18b848u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_18b84c:
    // 0x18b84c: 0x0  nop
    ctx->pc = 0x18b84cu;
    // NOP
    // 0x18b850: 0x8e222718  lw          $v0, 0x2718($s1)
    ctx->pc = 0x18b850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10008)));
    // 0x18b854: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18b854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18b858: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18B858u;
    {
        const bool branch_taken_0x18b858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B858u;
        // 0x18b85c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b858) {
            ctx->pc = 0x18B82Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b82c;
        }
    }
    ctx->pc = 0x18B860u;
    // 0x18b860: 0xc057424  jal         func_15D090
    ctx->pc = 0x18B860u;
    SET_GPR_U32(ctx, 31, 0x18B868u);
    ctx->pc = 0x18B864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B860u;
    // 0x18b864: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D090u, 0x18B860u, 0x18B868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B868u;
label_18b868:
    // 0x18b868: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x18b868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x18b86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b870:
    // 0x18b870: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18b870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18b874: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18b874u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b878: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18b878u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b87c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b87cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b880: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b884: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b88c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b88cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b890: 0x3e00008  jr          $ra
    ctx->pc = 0x18B890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B890u;
        // 0x18b894: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B898u;
}
