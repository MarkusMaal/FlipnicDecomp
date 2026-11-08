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

// Function: FUN_001181c0
// Address: 0x1181c0 - 0x118348
void FUN_001181c0_0x1181c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001181c0_0x1181c0");
#endif

    switch (ctx->pc) {
        case 0x1181f8u: goto label_1181f8;
        case 0x11823cu: goto label_11823c;
        case 0x118280u: goto label_118280;
        case 0x118298u: goto label_118298;
        case 0x1182a0u: goto label_1182a0;
        case 0x1182acu: goto label_1182ac;
        case 0x1182c0u: goto label_1182c0;
        case 0x1182ccu: goto label_1182cc;
        case 0x1182e0u: goto label_1182e0;
        case 0x1182f8u: goto label_1182f8;
        case 0x118300u: goto label_118300;
        case 0x11830cu: goto label_11830c;
        default: break;
    }

    ctx->pc = 0x1181c0u;

    // 0x1181c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1181c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1181c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1181c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1181c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1181c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1181cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1181ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1181d0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1181d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1181d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1181d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1181d8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1181d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1181dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1181dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1181e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1181e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1181e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1181e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1181e8: 0x24a5e5d8  addiu       $a1, $a1, -0x1A28
    ctx->pc = 0x1181e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960600));
    // 0x1181ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1181ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1181f0: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1181F0u;
    SET_GPR_U32(ctx, 31, 0x1181F8u);
    ctx->pc = 0x1181F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1181F0u;
    // 0x1181f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1181F0u, 0x1181F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1181F8u;
label_1181f8:
    // 0x1181f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1181f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1181fc: 0x12200048  beqz        $s1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1181FCu;
    {
        const bool branch_taken_0x1181fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1181fc) {
            ctx->pc = 0x118320u;
            goto label_118320;
        }
    }
    ctx->pc = 0x118204u;
    // 0x118204: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118204u;
    {
        const bool branch_taken_0x118204 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x118208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118204u;
        // 0x118208: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118204) {
            ctx->pc = 0x118214u;
            goto label_118214;
        }
    }
    ctx->pc = 0x11820Cu;
    // 0x11820c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11820Cu;
    {
        const bool branch_taken_0x11820c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11820Cu;
        // 0x118210: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11820c) {
            ctx->pc = 0x118230u;
            goto label_118230;
        }
    }
    ctx->pc = 0x118214u;
label_118214:
    // 0x118214: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x118214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x118218: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x118218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11821c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x11821cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x118220: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x118220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x118224: 0x84730008  lh          $s3, 0x8($v1)
    ctx->pc = 0x118224u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x118228: 0x0  nop
    ctx->pc = 0x118228u;
    // NOP
    // 0x11822c: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x11822cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_118230:
    // 0x118230: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x118230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118234: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x118234u;
    {
        const bool branch_taken_0x118234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x118238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118234u;
        // 0x118238: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118234) {
            ctx->pc = 0x118320u;
            goto label_118320;
        }
    }
    ctx->pc = 0x11823Cu;
label_11823c:
    // 0x11823c: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x11823cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x118240: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x118240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x118244: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x118244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x118248: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x118248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11824c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x11824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x118250: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x118250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x118254: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x118254u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x118258: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x118258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x11825c: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x11825cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x118260: 0x83a021  addu        $s4, $a0, $v1
    ctx->pc = 0x118260u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x118264: 0x8e950040  lw          $s5, 0x40($s4)
    ctx->pc = 0x118264u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x118268: 0x16a2001a  bne         $s5, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x118268u;
    {
        const bool branch_taken_0x118268 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x118268) {
            ctx->pc = 0x1182D4u;
            goto label_1182d4;
        }
    }
    ctx->pc = 0x118270u;
    // 0x118270: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x118270u;
    {
        const bool branch_taken_0x118270 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x118270) {
            ctx->pc = 0x1182B4u;
            goto label_1182b4;
        }
    }
    ctx->pc = 0x118278u;
    // 0x118278: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118278u;
    SET_GPR_U32(ctx, 31, 0x118280u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118278u, 0x118280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118280u;
label_118280:
    // 0x118280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118284: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x118284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118288: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x118288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11828c: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x11828cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x118290: 0xc062a44  jal         func_18A910
    ctx->pc = 0x118290u;
    SET_GPR_U32(ctx, 31, 0x118298u);
    ctx->pc = 0x118294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118290u;
    // 0x118294: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A910u, 0x118290u, 0x118298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118298u;
label_118298:
    // 0x118298: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118298u;
    SET_GPR_U32(ctx, 31, 0x1182A0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118298u, 0x1182A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182A0u;
label_1182a0:
    // 0x1182a0: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x1182a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1182a4: 0xc062b48  jal         func_18AD20
    ctx->pc = 0x1182A4u;
    SET_GPR_U32(ctx, 31, 0x1182ACu);
    ctx->pc = 0x1182A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1182A4u;
    // 0x1182a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD20u, 0x1182A4u, 0x1182ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182ACu;
label_1182ac:
    // 0x1182ac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1182ACu;
    {
        const bool branch_taken_0x1182ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1182B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182ACu;
        // 0x1182b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182ac) {
            ctx->pc = 0x11830Cu;
            goto label_11830c;
        }
    }
    ctx->pc = 0x1182B4u;
label_1182b4:
    // 0x1182b4: 0x0  nop
    ctx->pc = 0x1182b4u;
    // NOP
    // 0x1182b8: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1182B8u;
    SET_GPR_U32(ctx, 31, 0x1182C0u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1182B8u, 0x1182C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182C0u;
label_1182c0:
    // 0x1182c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1182c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182c4: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1182C4u;
    SET_GPR_U32(ctx, 31, 0x1182CCu);
    ctx->pc = 0x1182C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1182C4u;
    // 0x1182c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1182C4u, 0x1182CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182CCu;
label_1182cc:
    // 0x1182cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1182CCu;
    {
        const bool branch_taken_0x1182cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1182cc) {
            ctx->pc = 0x11830Cu;
            goto label_11830c;
        }
    }
    ctx->pc = 0x1182D4u;
label_1182d4:
    // 0x1182d4: 0x0  nop
    ctx->pc = 0x1182d4u;
    // NOP
    // 0x1182d8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1182D8u;
    SET_GPR_U32(ctx, 31, 0x1182E0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1182D8u, 0x1182E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182E0u;
label_1182e0:
    // 0x1182e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1182e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1182e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1182e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182ec: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x1182ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1182f0: 0xc062a44  jal         func_18A910
    ctx->pc = 0x1182F0u;
    SET_GPR_U32(ctx, 31, 0x1182F8u);
    ctx->pc = 0x1182F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1182F0u;
    // 0x1182f4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A910u, 0x1182F0u, 0x1182F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182F8u;
label_1182f8:
    // 0x1182f8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1182F8u;
    SET_GPR_U32(ctx, 31, 0x118300u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1182F8u, 0x118300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118300u;
label_118300:
    // 0x118300: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x118300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x118304: 0xc062b48  jal         func_18AD20
    ctx->pc = 0x118304u;
    SET_GPR_U32(ctx, 31, 0x11830Cu);
    ctx->pc = 0x118308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118304u;
    // 0x118308: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD20u, 0x118304u, 0x11830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11830Cu;
label_11830c:
    // 0x11830c: 0x0  nop
    ctx->pc = 0x11830cu;
    // NOP
    // 0x118310: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x118310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x118314: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x118314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x118318: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x118318u;
    {
        const bool branch_taken_0x118318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x118318) {
            ctx->pc = 0x11823Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11823c;
        }
    }
    ctx->pc = 0x118320u;
label_118320:
    // 0x118320: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x118320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118324: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x118324u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x118328: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x118328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11832c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11832cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118330: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x118330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118334: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x118334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11833c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11833cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118340: 0x3e00008  jr          $ra
    ctx->pc = 0x118340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118340u;
        // 0x118344: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118348u;
}
