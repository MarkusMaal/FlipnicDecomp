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

// Function: FUN_00119250
// Address: 0x119250 - 0x1193e8
void FUN_00119250_0x119250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119250_0x119250");
#endif

    switch (ctx->pc) {
        case 0x11927cu: goto label_11927c;
        case 0x1192c8u: goto label_1192c8;
        case 0x1192e0u: goto label_1192e0;
        case 0x1192f4u: goto label_1192f4;
        case 0x119324u: goto label_119324;
        case 0x119348u: goto label_119348;
        case 0x119388u: goto label_119388;
        case 0x1193b4u: goto label_1193b4;
        default: break;
    }

    ctx->pc = 0x119250u;

    // 0x119250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x119250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x119254: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x119254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x119258: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x119258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11925c: 0x24a5e5f8  addiu       $a1, $a1, -0x1A08
    ctx->pc = 0x11925cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960632));
    // 0x119260: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x119260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x119264: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x119264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x119268: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x119268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11926c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x119270: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x119270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x119274: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x119274u;
    SET_GPR_U32(ctx, 31, 0x11927Cu);
    ctx->pc = 0x119278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119274u;
    // 0x119278: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x119274u, 0x11927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11927Cu;
label_11927c:
    // 0x11927c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11927cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119280: 0xaf8083a8  sw          $zero, -0x7C58($gp)
    ctx->pc = 0x119280u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935464), GPR_U32(ctx, 0));
    // 0x119284: 0x1a20002b  blez        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x119284u;
    {
        const bool branch_taken_0x119284 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x119288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119284u;
        // 0x119288: 0xa78083a4  sh          $zero, -0x7C5C($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294935460), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119284) {
            ctx->pc = 0x119334u;
            goto label_119334;
        }
    }
    ctx->pc = 0x11928Cu;
    // 0x11928c: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11928Cu;
    {
        const bool branch_taken_0x11928c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x119290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11928Cu;
        // 0x119290: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11928c) {
            ctx->pc = 0x11929Cu;
            goto label_11929c;
        }
    }
    ctx->pc = 0x119294u;
    // 0x119294: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x119294u;
    {
        const bool branch_taken_0x119294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x119294) {
            ctx->pc = 0x1192B4u;
            goto label_1192b4;
        }
    }
    ctx->pc = 0x11929Cu;
label_11929c:
    // 0x11929c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1192a0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1192a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1192a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1192a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1192a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1192a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1192ac: 0x84530008  lh          $s3, 0x8($v0)
    ctx->pc = 0x1192acu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1192b0: 0x0  nop
    ctx->pc = 0x1192b0u;
    // NOP
label_1192b4:
    // 0x1192b4: 0x1a60001f  blez        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x1192B4u;
    {
        const bool branch_taken_0x1192b4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1192B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192B4u;
        // 0x1192b8: 0x131100  sll         $v0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192b4) {
            ctx->pc = 0x119334u;
            goto label_119334;
        }
    }
    ctx->pc = 0x1192BCu;
    // 0x1192bc: 0xa79383a4  sh          $s3, -0x7C5C($gp)
    ctx->pc = 0x1192bcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935460), (uint16_t)GPR_U32(ctx, 19));
    // 0x1192c0: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1192C0u;
    SET_GPR_U32(ctx, 31, 0x1192C8u);
    ctx->pc = 0x1192C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1192C0u;
    // 0x1192c4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1192C0u, 0x1192C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1192C8u;
label_1192c8:
    // 0x1192c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1192c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1192ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1192d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192d4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1192d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1192d8: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x1192D8u;
    SET_GPR_U32(ctx, 31, 0x1192E0u);
    ctx->pc = 0x1192DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1192D8u;
    // 0x1192dc: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x1192D8u, 0x1192E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1192E0u;
label_1192e0:
    // 0x1192e0: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x1192e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1192e4: 0xaf8283a8  sw          $v0, -0x7C58($gp)
    ctx->pc = 0x1192e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935464), GPR_U32(ctx, 2));
    // 0x1192e8: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1192E8u;
    {
        const bool branch_taken_0x1192e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1192ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192E8u;
        // 0x1192ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192e8) {
            ctx->pc = 0x119334u;
            goto label_119334;
        }
    }
    ctx->pc = 0x1192F0u;
    // 0x1192f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1192f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1192f4:
    // 0x1192f4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1192f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1192f8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1192f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1192fc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1192fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x119300: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x119300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x119304: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x119304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x119308: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x119308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x11930c: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x11930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x119310: 0x84a2000a  lh          $v0, 0xA($a1)
    ctx->pc = 0x119310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x119314: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x119314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x119318: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x119318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11931c: 0xc046518  jal         func_119460
    ctx->pc = 0x11931Cu;
    SET_GPR_U32(ctx, 31, 0x119324u);
    ctx->pc = 0x119320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11931Cu;
    // 0x119320: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119460u, 0x11931Cu, 0x119324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119324u;
label_119324:
    // 0x119324: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x119324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x119328: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x119328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x11932c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x11932Cu;
    {
        const bool branch_taken_0x11932c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11932Cu;
        // 0x119330: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11932c) {
            ctx->pc = 0x1192F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1192f4;
        }
    }
    ctx->pc = 0x119334u;
label_119334:
    // 0x119334: 0x0  nop
    ctx->pc = 0x119334u;
    // NOP
    // 0x119338: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x119338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11933c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11933cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119340: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x119340u;
    SET_GPR_U32(ctx, 31, 0x119348u);
    ctx->pc = 0x119344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119340u;
    // 0x119344: 0x24a5e600  addiu       $a1, $a1, -0x1A00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x119340u, 0x119348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119348u;
label_119348:
    // 0x119348: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11934c: 0x1a20001d  blez        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x11934Cu;
    {
        const bool branch_taken_0x11934c = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x11934c) {
            ctx->pc = 0x1193C4u;
            goto label_1193c4;
        }
    }
    ctx->pc = 0x119354u;
    // 0x119354: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x119354u;
    {
        const bool branch_taken_0x119354 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x119358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119354u;
        // 0x119358: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119354) {
            ctx->pc = 0x119364u;
            goto label_119364;
        }
    }
    ctx->pc = 0x11935Cu;
    // 0x11935c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11935Cu;
    {
        const bool branch_taken_0x11935c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11935Cu;
        // 0x119360: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11935c) {
            ctx->pc = 0x119380u;
            goto label_119380;
        }
    }
    ctx->pc = 0x119364u;
label_119364:
    // 0x119364: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x119364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x119368: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x119368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11936c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x11936cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x119370: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x119370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x119374: 0x84730008  lh          $s3, 0x8($v1)
    ctx->pc = 0x119374u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x119378: 0x0  nop
    ctx->pc = 0x119378u;
    // NOP
    // 0x11937c: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x11937cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_119380:
    // 0x119380: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x119380u;
    {
        const bool branch_taken_0x119380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x119384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119380u;
        // 0x119384: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119380) {
            ctx->pc = 0x1193C4u;
            goto label_1193c4;
        }
    }
    ctx->pc = 0x119388u;
label_119388:
    // 0x119388: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x119388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11938c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x11938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x119390: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x119390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x119394: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x119394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x119398: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x119398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11939c: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x11939cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1193a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1193a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1193a4: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x1193a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1193a8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1193a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1193ac: 0xc04be24  jal         func_12F890
    ctx->pc = 0x1193ACu;
    SET_GPR_U32(ctx, 31, 0x1193B4u);
    ctx->pc = 0x1193B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1193ACu;
    // 0x1193b0: 0x90850020  lbu         $a1, 0x20($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F890u, 0x1193ACu, 0x1193B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193B4u;
label_1193b4:
    // 0x1193b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1193b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1193b8: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x1193b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1193bc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1193BCu;
    {
        const bool branch_taken_0x1193bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1193bc) {
            ctx->pc = 0x119388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119388;
        }
    }
    ctx->pc = 0x1193C4u;
label_1193c4:
    // 0x1193c4: 0x0  nop
    ctx->pc = 0x1193c4u;
    // NOP
    // 0x1193c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1193c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1193cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1193ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1193d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1193d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1193d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1193d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1193d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1193d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1193dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1193dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1193e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1193E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1193E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193E0u;
        // 0x1193e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1193E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1193E8u;
}
