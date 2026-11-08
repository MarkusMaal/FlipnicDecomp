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

// Function: FUN_00163240
// Address: 0x163240 - 0x16352c
void FUN_00163240_0x163240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00163240_0x163240");
#endif

    switch (ctx->pc) {
        case 0x1632ecu: goto label_1632ec;
        case 0x16330cu: goto label_16330c;
        case 0x163378u: goto label_163378;
        case 0x1633a0u: goto label_1633a0;
        case 0x1633f4u: goto label_1633f4;
        case 0x163400u: goto label_163400;
        case 0x163504u: goto label_163504;
        default: break;
    }

    ctx->pc = 0x163240u;

    // 0x163240: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x163240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x163244: 0x1040  sll         $v0, $zero, 1
    ctx->pc = 0x163244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
    // 0x163248: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x163248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x16324c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x163250: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x163250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x163254: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x163254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x163258: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x163258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16325c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x163260: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x163260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163264: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x163268: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x163268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16326c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163270: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x163270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163274: 0x84430218  lh          $v1, 0x218($v0)
    ctx->pc = 0x163274u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x163278: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x163278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16327c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16327Cu;
    {
        const bool branch_taken_0x16327c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16327Cu;
        // 0x163280: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16327c) {
            ctx->pc = 0x163290u;
            goto label_163290;
        }
    }
    ctx->pc = 0x163284u;
    // 0x163284: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x163284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x163288: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x163288u;
    {
        const bool branch_taken_0x163288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163288) {
            ctx->pc = 0x1632B0u;
            goto label_1632b0;
        }
    }
    ctx->pc = 0x163290u;
label_163290:
    // 0x163290: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x163290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x163294: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x163294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x163298: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x163298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16329c: 0x84630218  lh          $v1, 0x218($v1)
    ctx->pc = 0x16329cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
    // 0x1632a0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1632A0u;
    {
        const bool branch_taken_0x1632a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1632A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632A0u;
        // 0x1632a4: 0x131840  sll         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632a0) {
            ctx->pc = 0x1632B4u;
            goto label_1632b4;
        }
    }
    ctx->pc = 0x1632A8u;
    // 0x1632a8: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x1632A8u;
    {
        const bool branch_taken_0x1632a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1632ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632A8u;
        // 0x1632ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632a8) {
            ctx->pc = 0x163508u;
            goto label_163508;
        }
    }
    ctx->pc = 0x1632B0u;
label_1632b0:
    // 0x1632b0: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x1632b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_1632b4:
    // 0x1632b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1632b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1632b8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1632b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1632bc: 0x84630218  lh          $v1, 0x218($v1)
    ctx->pc = 0x1632bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
    // 0x1632c0: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1632C0u;
    {
        const bool branch_taken_0x1632c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1632c0) {
            ctx->pc = 0x163354u;
            goto label_163354;
        }
    }
    ctx->pc = 0x1632C8u;
    // 0x1632c8: 0x862301f4  lh          $v1, 0x1F4($s1)
    ctx->pc = 0x1632c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x1632cc: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1632ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1632d0: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1632d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1632d4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1632d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1632d8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1632D8u;
    {
        const bool branch_taken_0x1632d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1632DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632D8u;
        // 0x1632dc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632d8) {
            ctx->pc = 0x1632E4u;
            goto label_1632e4;
        }
    }
    ctx->pc = 0x1632E0u;
    // 0x1632e0: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x1632e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1632e4:
    // 0x1632e4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1632E4u;
    {
        const bool branch_taken_0x1632e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1632e4) {
            ctx->pc = 0x16333Cu;
            goto label_16333c;
        }
    }
    ctx->pc = 0x1632ECu;
label_1632ec:
    // 0x1632ec: 0x8e2301f0  lw          $v1, 0x1F0($s1)
    ctx->pc = 0x1632ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x1632f0: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1632f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1632f4: 0x152900  sll         $a1, $s5, 4
    ctx->pc = 0x1632f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1632f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1632f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1632fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1632fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163300: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x163300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x163304: 0xc054c44  jal         func_153110
    ctx->pc = 0x163304u;
    SET_GPR_U32(ctx, 31, 0x16330Cu);
    ctx->pc = 0x163308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163304u;
    // 0x163308: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153110u, 0x163304u, 0x16330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16330Cu;
label_16330c:
    // 0x16330c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x16330cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x163310: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163314: 0x0  nop
    ctx->pc = 0x163314u;
    // NOP
    // 0x163318: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x163318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16331c: 0x0  nop
    ctx->pc = 0x16331cu;
    // NOP
    // 0x163320: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x163320u;
    {
        const bool branch_taken_0x163320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163320) {
            ctx->pc = 0x163338u;
            goto label_163338;
        }
    }
    ctx->pc = 0x163328u;
    // 0x163328: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x163328u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16332c: 0x7e060360  sq          $a2, 0x360($s0)
    ctx->pc = 0x16332cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 864), GPR_VEC(ctx, 6));
    // 0x163330: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x163330u;
    {
        const bool branch_taken_0x163330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163330u;
        // 0x163334: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163330) {
            ctx->pc = 0x1633BCu;
            goto label_1633bc;
        }
    }
    ctx->pc = 0x163338u;
label_163338:
    // 0x163338: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x163338u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_16333c:
    // 0x16333c: 0x0  nop
    ctx->pc = 0x16333cu;
    // NOP
    // 0x163340: 0x2b4102a  slt         $v0, $s5, $s4
    ctx->pc = 0x163340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x163344: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x163344u;
    {
        const bool branch_taken_0x163344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163344) {
            ctx->pc = 0x1632ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1632ec;
        }
    }
    ctx->pc = 0x16334Cu;
    // 0x16334c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16334Cu;
    {
        const bool branch_taken_0x16334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16334c) {
            ctx->pc = 0x1633BCu;
            goto label_1633bc;
        }
    }
    ctx->pc = 0x163354u;
label_163354:
    // 0x163354: 0x862301f4  lh          $v1, 0x1F4($s1)
    ctx->pc = 0x163354u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x163358: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x163358u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16335c: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x16335cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x163360: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x163360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x163364: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x163364u;
    {
        const bool branch_taken_0x163364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163364u;
        // 0x163368: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163364) {
            ctx->pc = 0x163370u;
            goto label_163370;
        }
    }
    ctx->pc = 0x16336Cu;
    // 0x16336c: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x16336cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_163370:
    // 0x163370: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x163370u;
    {
        const bool branch_taken_0x163370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163370) {
            ctx->pc = 0x1633B0u;
            goto label_1633b0;
        }
    }
    ctx->pc = 0x163378u;
label_163378:
    // 0x163378: 0x8e2301f0  lw          $v1, 0x1F0($s1)
    ctx->pc = 0x163378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x16337c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x16337cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x163380: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x163380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x163384: 0x153100  sll         $a2, $s5, 4
    ctx->pc = 0x163384u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x163388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16338c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16338cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163390: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x163390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x163394: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x163394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x163398: 0xc055a7c  jal         func_1569F0
    ctx->pc = 0x163398u;
    SET_GPR_U32(ctx, 31, 0x1633A0u);
    ctx->pc = 0x16339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163398u;
    // 0x16339c: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1569F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569F0u, 0x163398u, 0x1633A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1633A0u;
label_1633a0:
    // 0x1633a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1633a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1633a4: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1633A4u;
    {
        const bool branch_taken_0x1633a4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1633a4) {
            ctx->pc = 0x1633BCu;
            goto label_1633bc;
        }
    }
    ctx->pc = 0x1633ACu;
    // 0x1633ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1633acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1633b0:
    // 0x1633b0: 0x2b4102a  slt         $v0, $s5, $s4
    ctx->pc = 0x1633b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1633b4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1633B4u;
    {
        const bool branch_taken_0x1633b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1633b4) {
            ctx->pc = 0x163378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163378;
        }
    }
    ctx->pc = 0x1633BCu;
label_1633bc:
    // 0x1633bc: 0x0  nop
    ctx->pc = 0x1633bcu;
    // NOP
    // 0x1633c0: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1633C0u;
    {
        const bool branch_taken_0x1633c0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1633C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633C0u;
        // 0x1633c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633c0) {
            ctx->pc = 0x1633D0u;
            goto label_1633d0;
        }
    }
    ctx->pc = 0x1633C8u;
    // 0x1633c8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1633C8u;
    {
        const bool branch_taken_0x1633c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633C8u;
        // 0x1633cc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633c8) {
            ctx->pc = 0x16350Cu;
            goto label_16350c;
        }
    }
    ctx->pc = 0x1633D0u;
label_1633d0:
    // 0x1633d0: 0x920201f4  lbu         $v0, 0x1F4($s0)
    ctx->pc = 0x1633d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1633d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1633D4u;
    {
        const bool branch_taken_0x1633d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633D4u;
        // 0x1633d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633d4) {
            ctx->pc = 0x1633ECu;
            goto label_1633ec;
        }
    }
    ctx->pc = 0x1633DCu;
    // 0x1633dc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1633dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1633e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1633e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1633e4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1633E4u;
    {
        const bool branch_taken_0x1633e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633E4u;
        // 0x1633e8: 0xa60301ea  sh          $v1, 0x1EA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 490), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633e4) {
            ctx->pc = 0x163508u;
            goto label_163508;
        }
    }
    ctx->pc = 0x1633ECu;
label_1633ec:
    // 0x1633ec: 0xc042118  jal         func_108460
    ctx->pc = 0x1633ECu;
    SET_GPR_U32(ctx, 31, 0x1633F4u);
    ctx->pc = 0x1633F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1633ECu;
    // 0x1633f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1633ECu, 0x1633F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1633F4u;
label_1633f4:
    // 0x1633f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1633f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1633f8: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1633F8u;
    SET_GPR_U32(ctx, 31, 0x163400u);
    ctx->pc = 0x1633FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1633F8u;
    // 0x1633fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1633F8u, 0x163400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163400u;
label_163400:
    // 0x163400: 0x8e2401f0  lw          $a0, 0x1F0($s1)
    ctx->pc = 0x163400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x163404: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x163404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x163408: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x163408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16340c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x163410: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x163410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163414: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x163414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x163418: 0x8e2401f0  lw          $a0, 0x1F0($s1)
    ctx->pc = 0x163418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x16341c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x16341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163420: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x163420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x163424: 0x8e2401f0  lw          $a0, 0x1F0($s1)
    ctx->pc = 0x163424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x163428: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x163428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16342c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x16342cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x163430: 0x84630218  lh          $v1, 0x218($v1)
    ctx->pc = 0x163430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
    // 0x163434: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x163434u;
    {
        const bool branch_taken_0x163434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163434u;
        // 0x163438: 0x3c0242a0  lui         $v0, 0x42A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163434) {
            ctx->pc = 0x163440u;
            goto label_163440;
        }
    }
    ctx->pc = 0x16343Cu;
    // 0x16343c: 0xae0202a0  sw          $v0, 0x2A0($s0)
    ctx->pc = 0x16343cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 2));
label_163440:
    // 0x163440: 0x8e2401f0  lw          $a0, 0x1F0($s1)
    ctx->pc = 0x163440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x163444: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x163444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x163448: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x163448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x16344c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16344cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163450: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x163450u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163454: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x163454u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163458: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x163458u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16345c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16345cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163460: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x163460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163464: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163468: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x163468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16346c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16346cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x163470: 0x4a0003bf  vwaitq
    ctx->pc = 0x163470u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163474: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x163474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163478: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x163478u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16347c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16347cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163480: 0x4a0003bf  vwaitq
    ctx->pc = 0x163480u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163484: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x163484u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163488: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x163488u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16348c: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x16348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x163490: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x163490u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163494: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x163494u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163498: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x163498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16349c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16349cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1634a0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1634a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1634a4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1634a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1634a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1634a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1634ac: 0x8e2201f0  lw          $v0, 0x1F0($s1)
    ctx->pc = 0x1634acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x1634b0: 0xc60002f0  lwc1        $f0, 0x2F0($s0)
    ctx->pc = 0x1634b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1634b4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1634b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1634b8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1634b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1634bc: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1634bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1634c0: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x1634c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1634c4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1634c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1634c8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1634c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1634cc: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1634ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1634d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1634d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1634d4: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1634d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1634d8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1634d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1634dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1634dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1634e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1634e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1634e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1634e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1634e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1634ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1634f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1634f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1634f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1634f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1634f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1634fc: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x1634FCu;
    SET_GPR_U32(ctx, 31, 0x163504u);
    ctx->pc = 0x163500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1634FCu;
    // 0x163500: 0xe60002e8  swc1        $f0, 0x2E8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x1634FCu, 0x163504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163504u;
label_163504:
    // 0x163504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163508:
    // 0x163508: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x163508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16350c:
    // 0x16350c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16350cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x163510: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x163510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x163514: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x163514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16351c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16351cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163524: 0x3e00008  jr          $ra
    ctx->pc = 0x163524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163524u;
        // 0x163528: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16352Cu;
}
