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

// Function: FUN_00146260
// Address: 0x146260 - 0x146460
void FUN_00146260_0x146260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00146260_0x146260");
#endif

    switch (ctx->pc) {
        case 0x146290u: goto label_146290;
        case 0x146324u: goto label_146324;
        default: break;
    }

    ctx->pc = 0x146260u;

label_146260:
    // 0x146260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x146260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x146264: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x146264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x146268: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x146268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14626c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14626cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146270: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x146274: 0x4a1003a  bgez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x146274u;
    {
        const bool branch_taken_0x146274 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x146278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146274u;
        // 0x146278: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146274) {
            ctx->pc = 0x146360u;
            goto label_146360;
        }
    }
    ctx->pc = 0x14627Cu;
    // 0x14627c: 0x58023  negu        $s0, $a1
    ctx->pc = 0x14627cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x146280: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x146280u;
    {
        const bool branch_taken_0x146280 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x146280) {
            ctx->pc = 0x146298u;
            goto label_146298;
        }
    }
    ctx->pc = 0x146288u;
    // 0x146288: 0xc051898  jal         func_146260
    ctx->pc = 0x146288u;
    SET_GPR_U32(ctx, 31, 0x146290u);
    ctx->pc = 0x14628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146288u;
    // 0x14628c: 0x102823  negu        $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    goto label_146260;
    ctx->pc = 0x146290u;
label_146290:
    // 0x146290: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x146290u;
    {
        const bool branch_taken_0x146290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146290) {
            ctx->pc = 0x146358u;
            goto label_146358;
        }
    }
    ctx->pc = 0x146298u;
label_146298:
    // 0x146298: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x146298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14629c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x14629cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1462a0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1462a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1462a4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1462a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1462a8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1462a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1462ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1462acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1462b0: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1462b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1462b4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1462B4u;
    {
        const bool branch_taken_0x1462b4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1462B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1462B4u;
        // 0x1462b8: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462b4) {
            ctx->pc = 0x1462C4u;
            goto label_1462c4;
        }
    }
    ctx->pc = 0x1462BCu;
    // 0x1462bc: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1462bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1462c0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1462c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1462c4:
    // 0x1462c4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1462c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1462c8: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x1462c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1462cc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1462CCu;
    {
        const bool branch_taken_0x1462cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1462cc) {
            ctx->pc = 0x1462E8u;
            goto label_1462e8;
        }
    }
    ctx->pc = 0x1462D4u;
    // 0x1462d4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1462d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1462d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1462d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1462dc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1462dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1462e0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1462E0u;
    {
        const bool branch_taken_0x1462e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1462E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1462E0u;
        // 0x1462e4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462e0) {
            ctx->pc = 0x146354u;
            goto label_146354;
        }
    }
    ctx->pc = 0x1462E8u;
label_1462e8:
    // 0x1462e8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1462e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1462ec: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1462ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1462f0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1462F0u;
    {
        const bool branch_taken_0x1462f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1462F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1462F0u;
        // 0x1462f4: 0x29083  sra         $s2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462f0) {
            ctx->pc = 0x146300u;
            goto label_146300;
        }
    }
    ctx->pc = 0x1462F8u;
    // 0x1462f8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1462f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1462fc: 0x29083  sra         $s2, $v0, 2
    ctx->pc = 0x1462fcu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 2));
label_146300:
    // 0x146300: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x146300u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x146304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146308: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x146308u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14630c: 0x0  nop
    ctx->pc = 0x14630cu;
    // NOP
    // 0x146310: 0x0  nop
    ctx->pc = 0x146310u;
    // NOP
    // 0x146314: 0x1012  mflo        $v0
    ctx->pc = 0x146314u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x146318: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x146318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14631c: 0xc050184  jal         func_140610
    ctx->pc = 0x14631Cu;
    SET_GPR_U32(ctx, 31, 0x146324u);
    ctx->pc = 0x146320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14631Cu;
    // 0x146320: 0x22823  negu        $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x14631Cu, 0x146324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146324u;
label_146324:
    // 0x146324: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x146324u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x146328: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x146328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14632c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x14632cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x146330: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x146330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x146334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x146338: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x146338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x14633c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x14633cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x146340: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x146340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x146344: 0x1010  mfhi        $v0
    ctx->pc = 0x146344u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x146348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14634c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14634cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146350: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x146350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_146354:
    // 0x146354: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x146354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_146358:
    // 0x146358: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x146358u;
    {
        const bool branch_taken_0x146358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146358u;
        // 0x14635c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146358) {
            ctx->pc = 0x14644Cu;
            goto label_14644c;
        }
    }
    ctx->pc = 0x146360u;
label_146360:
    // 0x146360: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x146360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x146364: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x146364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x146368: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x146368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x14636c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x14636cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x146370: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x146370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x146374: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x146374u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x146378: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146378u;
    {
        const bool branch_taken_0x146378 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146378u;
        // 0x14637c: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146378) {
            ctx->pc = 0x146388u;
            goto label_146388;
        }
    }
    ctx->pc = 0x146380u;
    // 0x146380: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x146380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x146384: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x146384u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_146388:
    // 0x146388: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x146388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14638c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x14638Cu;
    {
        const bool branch_taken_0x14638c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14638c) {
            ctx->pc = 0x1463A8u;
            goto label_1463a8;
        }
    }
    ctx->pc = 0x146394u;
    // 0x146394: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x146394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x146398: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x146398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14639c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1463a0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1463A0u;
    {
        const bool branch_taken_0x1463a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1463A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1463A0u;
        // 0x1463a4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1463a0) {
            ctx->pc = 0x146444u;
            goto label_146444;
        }
    }
    ctx->pc = 0x1463A8u;
label_1463a8:
    // 0x1463a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1463a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1463ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1463acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1463b0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1463b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1463b4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1463B4u;
    {
        const bool branch_taken_0x1463b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1463B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1463B4u;
        // 0x1463b8: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1463b4) {
            ctx->pc = 0x1463C4u;
            goto label_1463c4;
        }
    }
    ctx->pc = 0x1463BCu;
    // 0x1463bc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1463bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1463c0: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1463c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1463c4:
    // 0x1463c4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1463c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1463c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1463c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1463cc: 0xa6001a  div         $zero, $a1, $a2
    ctx->pc = 0x1463ccu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1463d0: 0x0  nop
    ctx->pc = 0x1463d0u;
    // NOP
    // 0x1463d4: 0x0  nop
    ctx->pc = 0x1463d4u;
    // NOP
    // 0x1463d8: 0x1812  mflo        $v1
    ctx->pc = 0x1463d8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1463dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1463dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1463e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1463e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1463e4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1463e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1463e8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1463e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1463ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1463ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1463f0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1463f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1463f4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1463f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1463f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1463f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1463fc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1463fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x146400: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x146400u;
    {
        const bool branch_taken_0x146400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146400) {
            ctx->pc = 0x14640Cu;
            goto label_14640c;
        }
    }
    ctx->pc = 0x146408u;
    // 0x146408: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x146408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14640c:
    // 0x14640c: 0xa6001a  div         $zero, $a1, $a2
    ctx->pc = 0x14640cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x146410: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x146410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146414: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x146414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x146418: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x146418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14641c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14641cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x146420: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x146420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x146424: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x146424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x146428: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x146428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14642c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x14642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x146430: 0x1810  mfhi        $v1
    ctx->pc = 0x146430u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x146434: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x146434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146438: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x146438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14643c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x14643cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x146440: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x146440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_146444:
    // 0x146444: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x146444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146448: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x146448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_14644c:
    // 0x14644c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14644cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146458: 0x3e00008  jr          $ra
    ctx->pc = 0x146458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146458u;
        // 0x14645c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146460u;
}
